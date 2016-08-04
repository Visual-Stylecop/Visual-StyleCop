﻿// --------------------------------------------------------------------------------------------------------------------
// <copyright file="SpellChecker.cs" company="http://stylecop.codeplex.com">
//   MS-PL
// </copyright>
// <license>
//   This source code is subject to terms and conditions of the Microsoft
//   Public License. A copy of the license can be found in the License.html
//   file at the root of this distribution. If you cannot locate the
//   Microsoft Public License, please send an email to dlr@microsoft.com.
//   By using this source code in any fashion, you are agreeing to be bound
//   by the terms of the Microsoft Public License. You must not remove this
//   notice, or any other, from this software.
// </license>
// --------------------------------------------------------------------------------------------------------------------

namespace StyleCop.Spelling
{
    using System;
    using System.Collections.Generic;
    using System.ComponentModel;
    using System.Globalization;
    using System.IO;
    using System.Reflection;
    using System.Runtime.InteropServices;

    using Microsoft.Win32;

    internal sealed class SpellChecker : IDisposable
    {
        internal const int MaximumTextLength = 0x40;
        private static readonly Language[] Languages = new[]
            {
                new Language("ar", "mssp7ar.dll", "mssp7ar.lex", 0xc01), new Language("cs", "mssp7cz.dll", "mssp7cz.lex", 0x405),
                new Language("da", "mssp7da.dll", "mssp7da.lex", 0x406), new Language("de", "mssp7ge.dll", "mssp7geP.lex", 0x407),
                new Language("en", "mssp7en.dll", "mssp7en.lex", 0x409), new Language("en-us", "mssp7en.dll", "mssp7en.lex", 0x409),
                new Language("en-gb", "mssp7en.dll", "mssp7en.lex", 0x809), new Language("en-au", "mssp7en.dll", "mssp7en.lex", 0xc09),
                new Language("en-ca", "mssp7en.dll", "mssp7en.lex", 0x1009), new Language("en-nz", "mssp7en.dll", "mssp7en.lex", 0x809),
                new Language("es", "mssp7es.dll", "mssp7es.lex", 0xc0a), new Language("fi", "mssp7fi.dll", "mssp7fi.lex", 0x40b),
                new Language("fr", "mssp7fr.dll", "mssp7fr.lex", 0x40c), new Language("gl", "mssp7gl.dll", "mssp7gl.lex", 0x456),
                new Language("he", "mssp7hb.dll", "mssp7hb.lex", 0x40d), new Language("id", "mssp7in.dll", "mssp7in.lex", 0x421),
                new Language("it", "mssp7it.dll", "mssp7it.lex", 0x410), new Language("ko", "mssp7ko.dll", "mssp7ko.lex", 0x412),
                new Language("lt", "mssp7lt.dll", "mssp7lt.lex", 0), new Language("nl", "mssp7nl.dll", "mssp7nl.lex", 0x413),
                new Language("nb", "mssp7nb.dll", "mssp7nb.lex", 0x414), new Language("nn", "mssp7no.dll", "mssp7no.lex", 0x814),
                new Language("pl", "mssp7pl.dll", "mssp7pl.lex", 0x415), new Language("pt", "mssp7pt.dll", "mssp7pt.lex", 0x816),
                new Language("pt-br", "mssp7pb.dll", "mssp7pb.lex", 0x416), new Language("ro", "mssp7ro.dll", "mssp7ro.lex", 0),
                new Language("ru", "mssp7ru.dll", "mssp7ru.lex", 0x419), new Language("sv", "mssp7sw.dll", "mssp7sw.lex", 0x41d),
                new Language("tr", "mssp7tr.dll", "mssp7tr.lex", 0x41f), new Language("uk", "mssp7ua.dll", "mssp7ua.lex", 0x422)
            };

        private static readonly TextInfo UsaTextInfo = new CultureInfo("en-US", false).TextInfo;

        // The Languages array above needs to be initialized before this static executes.
        private static Dictionary<string, Language> languageTable = BuildLanguageTable();
        private readonly CultureInfo culture;

        private readonly int dependantFilesHashCode;

        private WordCollection alwaysMisspelledWords;

        private WordCollection ignoredWords;

        private NativeMethods.Speller speller;

        private Dictionary<string, WordSpelling> wordSpellingCache = new Dictionary<string, WordSpelling>();

        private SpellChecker(CultureInfo culture, Language language)
        {
            this.culture = culture;
            this.speller = new NativeMethods.Speller(language.LibraryFullPath);
            this.speller.AddLexicon(language.Lcid, language.LexiconFullPath);

            var libraryTimestamp = File.GetLastWriteTime(language.LibraryFullPath);
            var lexiconTimestamp = File.GetLastWriteTime(language.LexiconFullPath);

            this.dependantFilesHashCode =
                string.Concat(libraryTimestamp.ToString(CultureInfo.InvariantCulture), lexiconTimestamp.ToString(CultureInfo.InvariantCulture)).GetHashCode();
        }

        private delegate NativeMethods.Ptec ProofCloseLex(IntPtr id, IntPtr lex, bool force);

        private delegate NativeMethods.Ptec ProofInit(out IntPtr pid, ref NativeMethods.ProofParams pxpar);

        private delegate NativeMethods.Ptec ProofOpenLex(IntPtr id, ref NativeMethods.ProofLexIn plxin, ref NativeMethods.ProofLexOut plxout);

        private delegate NativeMethods.Ptec ProofSetOptions(IntPtr id, uint iOptionSelect, uint iOptVal);

        private delegate NativeMethods.Ptec ProofTerminate(IntPtr id, bool fForce);

        private delegate NativeMethods.Ptec SpellerAddUdr(IntPtr sid, IntPtr lex, [MarshalAs(UnmanagedType.LPTStr)] string add);

        private delegate IntPtr SpellerBuiltInUdr(IntPtr sid, ProofLexType lxt);

        private delegate NativeMethods.Ptec SpellerCheck(IntPtr sid, SpellerCommand scmd, ref NativeMethods.Wsib psib, ref NativeMethods.Wsrb psrb);

        private delegate NativeMethods.Ptec SpellerClearUdr(IntPtr sid, IntPtr lex);

        private delegate NativeMethods.Ptec SpellerDelUdr(IntPtr sid, IntPtr lex, [MarshalAs(UnmanagedType.LPTStr)] string delete);

        internal enum ProofLexType : uint
        {
            /// <summary>
            /// The change always.
            /// </summary>
            ChangeAlways = 1,

            /// <summary>
            /// The change once.
            /// </summary>
            ChangeOnce = 0,

            /// <summary>
            /// The exclude.
            /// </summary>
            Exclude = 3,

            /// <summary>
            /// The ignore always.
            /// </summary>
            IgnoreAlways = 2,

            /// <summary>
            /// The main.
            /// </summary>
            Main = 4,

            /// <summary>
            /// The maximum.
            /// </summary>
            Max = 6,

            /// <summary>
            /// The system udr.
            /// </summary>
            SysUdr = 5,

            /// <summary>
            /// The user.
            /// </summary>
            User = 2
        }

        internal enum PtecMajor : uint
        {
            /// <summary>
            /// The buffer too small.
            /// </summary>
            BufferTooSmall = 6,

            /// <summary>
            /// The io error main lex.
            /// </summary>
            IoErrorMainLex = 3,

            /// <summary>
            /// The io error user lex.
            /// </summary>
            IoErrorUserLex = 4,

            /// <summary>
            /// The module error.
            /// </summary>
            ModuleError = 2,

            /// <summary>
            /// The module not loaded.
            /// </summary>
            ModuleNotLoaded = 8,

            /// <summary>
            /// The no errors.
            /// </summary>
            NoErrors = 0,

            /// <summary>
            /// The not found.
            /// </summary>
            NotFound = 7,

            /// <summary>
            /// The not supported.
            /// </summary>
            NotSupported = 5,

            /// <summary>
            /// The out of memory.
            /// </summary>
            OutOfMemory = 1
        }

        internal enum PtecMinor : uint
        {
            /// <summary>
            /// The entry too long.
            /// </summary>
            EntryTooLong = 0x8f,

            /// <summary>
            /// The file create.
            /// </summary>
            FileCreate = 0x8a,

            /// <summary>
            /// The file open error.
            /// </summary>
            FileOpenError = 0x92,

            /// <summary>
            /// The file read.
            /// </summary>
            FileRead = 0x88,

            /// <summary>
            /// The file share.
            /// </summary>
            FileShare = 0x8b,

            /// <summary>
            /// The file too large error.
            /// </summary>
            FileTooLargeError = 0x93,

            /// <summary>
            /// The file write.
            /// </summary>
            FileWrite = 0x89,

            /// <summary>
            /// The invalid command.
            /// </summary>
            InvalidCmd = 0x85,

            /// <summary>
            /// The invalid entry.
            /// </summary>
            InvalidEntry = 0x8e,

            /// <summary>
            /// The invalid format.
            /// </summary>
            InvalidFormat = 0x86,

            /// <summary>
            /// The invalid identifier.
            /// </summary>
            InvalidId = 0x81,

            /// <summary>
            /// The invalid language.
            /// </summary>
            InvalidLanguage = 150,

            /// <summary>
            /// The invalid main lex.
            /// </summary>
            InvalidMainLex = 0x83,

            /// <summary>
            /// The invalid user lex.
            /// </summary>
            InvalidUserLex = 0x84,

            /// <summary>
            /// The invalid WSC.
            /// </summary>
            InvalidWsc = 130,

            /// <summary>
            /// The main lex count exceeded.
            /// </summary>
            MainLexCountExceeded = 0x90,

            /// <summary>
            /// The module already busy.
            /// </summary>
            ModuleAlreadyBusy = 0x80,

            /// <summary>
            /// The module not terminated.
            /// </summary>
            ModuleNotTerminated = 140,

            /// <summary>
            /// The oper not matched user lex.
            /// </summary>
            OperNotMatchedUserLex = 0x87,

            /// <summary>
            /// The protect mode only.
            /// </summary>
            ProtectModeOnly = 0x95,

            /// <summary>
            /// The user lex count exceeded.
            /// </summary>
            UserLexCountExceeded = 0x91,

            /// <summary>
            /// The user lex full.
            /// </summary>
            UserLexFull = 0x8d,

            /// <summary>
            /// The user lex read only.
            /// </summary>
            UserLexReadOnly = 0x94
        }

        [Flags]
        internal enum SpellerState : uint
        {
            /// <summary>
            /// The is continued.
            /// </summary>
            IsContinued = 1,

            /// <summary>
            /// The is edited change.
            /// </summary>
            IsEditedChange = 4,

            /// <summary>
            /// The no state information.
            /// </summary>
            NoStateInfo = 0,

            /// <summary>
            /// The starts sentence.
            /// </summary>
            StartsSentence = 2
        }

        internal enum SpellerStatus
        {
            /// <summary>
            /// The no errors.
            /// </summary>
            NoErrors,

            /// <summary>
            /// The unknown input word.
            /// </summary>
            UnknownInputWord,

            /// <summary>
            /// The returning change always.
            /// </summary>
            ReturningChangeAlways,

            /// <summary>
            /// The returning change once.
            /// </summary>
            ReturningChangeOnce,

            /// <summary>
            /// The invalid hyphenation.
            /// </summary>
            InvalidHyphenation,

            /// <summary>
            /// The error capitalization.
            /// </summary>
            ErrorCapitalization,

            /// <summary>
            /// The word considered abbreviation.
            /// </summary>
            WordConsideredAbbreviation,

            /// <summary>
            /// The hyphen changes spelling.
            /// </summary>
            HyphenChangesSpelling,

            /// <summary>
            /// The no more suggestions.
            /// </summary>
            NoMoreSuggestions,

            /// <summary>
            /// The more information than buffer could hold.
            /// </summary>
            MoreInfoThanBufferCouldHold,

            /// <summary>
            /// The no sentence start cap.
            /// </summary>
            NoSentenceStartCap,

            /// <summary>
            /// The repeat word.
            /// </summary>
            RepeatWord,

            /// <summary>
            /// The extra spaces.
            /// </summary>
            ExtraSpaces,

            /// <summary>
            /// The missing space.
            /// </summary>
            MissingSpace,

            /// <summary>
            /// The initial numeral.
            /// </summary>
            InitialNumeral,

            /// <summary>
            /// The no errors ud hit.
            /// </summary>
            NoErrorsUdHit,

            /// <summary>
            /// The returning automatic replace.
            /// </summary>
            ReturningAutoReplace,

            /// <summary>
            /// The error accent.
            /// </summary>
            ErrorAccent
        }

        private enum SpellerCommand : uint
        {
            Anagram = 7,

            Suggest = 3,

            SuggestMore = 4,

            VerifyBuffer = 2,

            VerifyBufferAutoReplace = 10,

            Wildcard = 6
        }

        public WordCollection AlwaysMisspelledWords
        {
            get
            {
                if (this.alwaysMisspelledWords == null)
                {
                    this.alwaysMisspelledWords = new WordCollection(StringComparer.Create(this.culture, false));
                }

                return this.alwaysMisspelledWords;
            }
        }

        public WordCollection IgnoredWords
        {
            get
            {
                if (this.ignoredWords == null)
                {
                    this.ignoredWords = new WordCollection(StringComparer.Create(this.culture, false));
                    this.ignoredWords.CollectionChanged += new CollectionChangeEventHandler(this.OnIgnoredWordsChanged);
                }

                return this.ignoredWords;
            }
        }

        private bool IsDisposed
        {
            get
            {
                return this.speller == null;
            }
        }

        public static SpellChecker FromCulture(CultureInfo culture)
        {
            Language language;
            if (culture == null)
            {
                throw new ArgumentNullException("culture");
            }

            if (culture.Equals(CultureInfo.InvariantCulture))
            {
                return null;
            }

            if (languageTable.TryGetValue(culture.Name, out language) && language.IsAvailable)
            {
                return new SpellChecker(culture, language);
            }

            return FromCulture(culture.Parent);
        }

        public WordSpelling Check(string text)
        {
            WordSpelling spelledCorrectly;
            if (text == null)
            {
                throw new ArgumentNullException("text");
            }

            if (this.IsDisposed)
            {
                throw new ObjectDisposedException("SpellChecker");
            }

            if (text.Length == 0)
            {
                return WordSpelling.SpelledCorrectly;
            }

            if ((this.alwaysMisspelledWords != null) && this.alwaysMisspelledWords.Contains(text))
            {
                return WordSpelling.Unrecognized;
            }

            lock (this.wordSpellingCache)
            {
                if (this.wordSpellingCache.TryGetValue(text, out spelledCorrectly))
                {
                    return spelledCorrectly;
                }

                SpellerStatus status = this.speller.Check(text);
                if (status != SpellerStatus.NoErrors)
                {
                    status = this.speller.Check(UsaTextInfo.ToTitleCase(text));
                }

                if (status == SpellerStatus.NoErrors)
                {
                    spelledCorrectly = WordSpelling.SpelledCorrectly;
                }
                else
                {
                    spelledCorrectly = WordSpelling.Unrecognized;
                }

                this.wordSpellingCache[text] = spelledCorrectly;
            }

            return spelledCorrectly;
        }

        public void Dispose()
        {
            try
            {
                if (this.speller != null)
                {
                    this.speller.Dispose();
                }
            }
            finally
            {
                this.speller = null;
                this.wordSpellingCache = null;
            }
        }

        public int GetDependantFilesHashCode()
        {
            return this.dependantFilesHashCode;
        }

        private static Dictionary<string, Language> BuildLanguageTable()
        {
            Dictionary<string, Language> dictionary = new Dictionary<string, Language>(Languages.Length, StringComparer.OrdinalIgnoreCase);
            foreach (Language language in Languages)
            {
                dictionary.Add(language.Name, language);
            }

            return dictionary;
        }

        private void OnIgnoredWordsChanged(object sender, CollectionChangeEventArgs e)
        {
            if (!this.IsDisposed)
            {
                switch (e.Action)
                {
                    case CollectionChangeAction.Add:
                        this.speller.AddIgnoredWord((string)e.Element);
                        return;

                    case CollectionChangeAction.Remove:
                        this.speller.RemoveIgnoredWord((string)e.Element);
                        return;

                    case CollectionChangeAction.Refresh:
                        this.speller.ClearIgnoredWords();
                        return;
                }
            }
        }

        internal static class KernalNativeMethods
        {
            [return: MarshalAs(UnmanagedType.Bool)]
            [DllImport("kernel32.dll", SetLastError = true)]
            internal static extern bool FreeLibrary(IntPtr hModule);

            [DllImport("kernel32.dll", CharSet = CharSet.Ansi, SetLastError = true, ExactSpelling = true)]
            internal static extern IntPtr GetProcAddress(IntPtr hModule, string procName);

            [DllImport("kernel32.dll", CharSet = CharSet.Auto, SetLastError = true)]
            internal static extern IntPtr LoadLibrary(string lpFileName);
        }

        internal class Language
        {
            private static string pathToOfficeProofingTools;

            private readonly bool isAvailable;

            private readonly ushort lcid;

            private readonly string lexiconFullPath;

            private readonly string libraryFullPath;

            private readonly string name;

            internal Language(string name, string library, string lexicon, ushort lcid)
            {
                this.name = name;
                this.lcid = lcid;
                this.libraryFullPath = Probe(library);
                this.lexiconFullPath = Probe(lexicon);

                if (this.libraryFullPath != null && this.lexiconFullPath != null)
                {
                    IntPtr handle = KernalNativeMethods.LoadLibrary(this.libraryFullPath);

                    if (handle == IntPtr.Zero)
                    {
                        this.isAvailable = false;
                    }
                    else
                    {
                        this.isAvailable = true;
                        if (!KernalNativeMethods.FreeLibrary(handle))
                        {
                            throw new Win32Exception();
                        }
                    }
                }
            }

            internal string LexiconFullPath
            {
                get
                {
                    return this.lexiconFullPath;
                }
            }

            internal bool IsAvailable
            {
                get
                {
                    return this.isAvailable;
                }
            }

            internal string LibraryFullPath
            {
                get
                {
                    return this.libraryFullPath;
                }
            }

            internal string Name
            {
                get
                {
                    return this.name;
                }
            }

            internal ushort Lcid
            {
                get
                {
                    return this.lcid;
                }
            }

            /// <summary>
            /// Gets a path to the Office 2010 proof directory. Returns string.Empty if the path could not be found.
            /// </summary>
            private static string PathToOfficeProofingTools
            {
                get
                {
                    if (pathToOfficeProofingTools == null)
                    {
                        string registryValue = RegistryUtils.LocalMachineGetValue(@"SOFTWARE\Microsoft\Office\14.0\Common\InstallRoot", "Path");
                        pathToOfficeProofingTools = registryValue == null ? string.Empty : Path.Combine(registryValue, @"Proof\");
                    }

                    return pathToOfficeProofingTools;
                }
            }

            private static string Probe(string library)
            {
                if (!string.IsNullOrEmpty(PathToOfficeProofingTools))
                {
                    string path = Path.Combine(PathToOfficeProofingTools, library);
                    if (File.Exists(path))
                    {
                        return path;
                    }
                }

                string baseDirectory = AppDomain.CurrentDomain.BaseDirectory;
                string libraryPath = Path.Combine(baseDirectory, library);
                if (File.Exists(libraryPath))
                {
                    return libraryPath;
                }

                baseDirectory = Path.GetDirectoryName(Assembly.GetExecutingAssembly().Location);
                if (baseDirectory == null)
                {
                    return null;
                }

                libraryPath = Path.Combine(baseDirectory, library);
                if (File.Exists(libraryPath))
                {
                    return libraryPath;
                }

                return null;
            }
        }

        internal class NativeMethods
        {
            [StructLayout(LayoutKind.Sequential, CharSet = CharSet.Unicode)]
            internal struct ProofLexIn
            {
                internal string pwszLex;

                internal bool create;

                internal ProofLexType lxt;

                internal ushort lidExpected;
            }

            [StructLayout(LayoutKind.Sequential, CharSet = CharSet.Unicode)]
            internal struct ProofLexOut
            {
                internal string pwszCopyright;

                internal IntPtr lex;

                internal uint CchCopyright;

                internal uint version;

                internal bool readOnly;

                internal ushort lid;
            }

            [StructLayout(LayoutKind.Sequential)]
            internal struct ProofParams
            {
                internal uint VersionApi;
            }

            [StructLayout(LayoutKind.Sequential)]
            internal struct Ptec
            {
                internal uint Code;

                internal PtecMajor Major
                {
                    get
                    {
                        return ((PtecMajor)this.Code) & ((PtecMajor)0xff);
                    }
                }

                internal PtecMinor Minor
                {
                    get
                    {
                        return (PtecMinor)(this.Code >> 0x10);
                    }
                }

                internal bool Succeeded
                {
                    get
                    {
                        return this.Code == 0;
                    }
                }

                public override string ToString()
                {
                    string str = ("0x" + this.Code.ToString("X", CultureInfo.InvariantCulture)) + " -- " + this.Major.ToString();
                    if (this.Minor != 0)
                    {
                        str = str + ":" + this.Minor.ToString();
                    }

                    return str;
                }
            }

            [StructLayout(LayoutKind.Sequential)]
            internal struct SpellerSuggestion
            {
                internal unsafe char* pwsz;

                internal uint ichSugg;

                internal uint CchSugg;

                internal uint rating;
            }

            [StructLayout(LayoutKind.Sequential, CharSet = CharSet.Unicode)]
            internal struct Wsib
            {
                internal string pwsz;

                internal unsafe IntPtr* prglex;

                internal UIntPtr Cch;

                internal UIntPtr Clex;

                internal SpellerState sstate;

                internal uint ichStart;

                internal UIntPtr CchUse;
            }

            [StructLayout(LayoutKind.Sequential)]
            internal struct Wsrb
            {
                internal unsafe char* pwsz;

                internal unsafe SpellerSuggestion* prgsugg;

                internal uint ichError;

                internal uint CchError;

                internal uint ichProcess;

                internal uint CchProcess;

                internal SpellerStatus sstat;

                internal uint csz;

                internal uint cszAlloc;

                internal uint CchMac;

                internal uint CchAlloc;
            }

            internal sealed class Speller : IDisposable
            {
                private SpellerAddUdr addUdr;

                private SpellerCheck check;

                private SpellerClearUdr clearUdr;

                private ProofCloseLex closeLex;

                private SpellerDelUdr deleteUdr;

                private IntPtr id;

                private IntPtr ignoredDictionary;

                private IntPtr[] lexicons;

                private IntPtr libraryHandle;

                private ProofOpenLex openLex;

                private ProofTerminate terminate;

                internal Speller(string path)
                {
                    IntPtr ptr;
                    this.libraryHandle = KernalNativeMethods.LoadLibrary(path);
                    if (this.libraryHandle == IntPtr.Zero)
                    {
                        throw new Win32Exception();
                    }

                    ProofInit proc = GetProc<ProofInit>(this.libraryHandle, "SpellerInit");
                    ProofSetOptions proofSetOptions = GetProc<ProofSetOptions>(this.libraryHandle, "SpellerSetOptions");
                    this.terminate = GetProc<ProofTerminate>(this.libraryHandle, "SpellerTerminate");
                    this.openLex = GetProc<ProofOpenLex>(this.libraryHandle, "SpellerOpenLex");
                    this.closeLex = GetProc<ProofCloseLex>(this.libraryHandle, "SpellerCloseLex");
                    this.check = GetProc<SpellerCheck>(this.libraryHandle, "SpellerCheck");
                    this.addUdr = GetProc<SpellerAddUdr>(this.libraryHandle, "SpellerAddUdr");
                    this.deleteUdr = GetProc<SpellerDelUdr>(this.libraryHandle, "SpellerDelUdr");
                    this.clearUdr = GetProc<SpellerClearUdr>(this.libraryHandle, "SpellerClearUdr");
                    ProofParams pxpar = new ProofParams { VersionApi = 0x3000000 };
                    CheckErrorCode(proc(out ptr, ref pxpar));
                    this.id = ptr;
                    CheckErrorCode(proofSetOptions(ptr, 0, 0x20006));
                    this.InitIgnoreDictionary();
                }

                ~Speller()
                {
                    this.Dispose(false);
                }

                public void Dispose()
                {
                    this.Dispose(true);
                    GC.SuppressFinalize(this);
                }

                internal void AddIgnoredWord(string word)
                {
                    CheckErrorCode(this.addUdr(this.id, this.ignoredDictionary, word));
                }

                internal void AddLexicon(ushort lcid, string path)
                {
                    ProofLexIn plxin = new ProofLexIn { pwszLex = path, lxt = ProofLexType.Main, lidExpected = lcid };
                    ProofLexOut plxout = new ProofLexOut { CchCopyright = 0, readOnly = true };
                    CheckErrorCode(this.openLex(this.id, ref plxin, ref plxout));
                    this.AddLexicon(plxout.lex);
                }

                internal unsafe SpellerStatus Check(string word)
                {
                    char* pwsz = stackalloc char[65];
                    SpellerSuggestion* prgsugg = stackalloc SpellerSuggestion[checked(1 * sizeof(SpellerSuggestion) / sizeof(SpellerSuggestion))];

                    fixed (IntPtr* lexicons2 = this.lexicons)
                    {
                        Wsib wsib = default(Wsib);
                        wsib.pwsz = word;
                        wsib.ichStart = 0u;
                        wsib.Cch = (UIntPtr)((ulong)word.Length);
                        wsib.CchUse = wsib.Cch;
                        wsib.prglex = lexicons2;
                        wsib.Clex = (UIntPtr)((ulong)this.lexicons.Length);
                        wsib.sstate = SpellerState.StartsSentence;

                        Wsrb wsrb = default(Wsrb);
                        wsrb.pwsz = pwsz;
                        wsrb.CchAlloc = 65u;
                        wsrb.cszAlloc = 1u;
                        wsrb.prgsugg = prgsugg;

                        Ptec error;
                        lock (this)
                        {
                            error = this.check(this.id, SpellerCommand.VerifyBuffer, ref wsib, ref wsrb);
                        }

                        CheckErrorCode(error);
                        return wsrb.sstat;
                    }
                }

                internal void ClearIgnoredWords()
                {
                    CheckErrorCode(this.clearUdr(this.id, this.ignoredDictionary));
                }

                internal void RemoveIgnoredWord(string word)
                {
                    CheckErrorCode(this.deleteUdr(this.id, this.ignoredDictionary, word));
                }

                private static void CheckErrorCode(Ptec error)
                {
                    if (!error.Succeeded)
                    {
                        throw new InvalidOperationException(
                            string.Format(CultureInfo.CurrentCulture, "Unexpected proofing tool error code: {0}.", new object[] { error }));
                    }
                }

                private static T GetProc<T>(IntPtr library, string procName)
                    where T : class
                {
                    IntPtr procAddress = KernalNativeMethods.GetProcAddress(library, procName);
                    if (procAddress == IntPtr.Zero)
                    {
                        throw new Win32Exception();
                    }

                    return (T)((object)Marshal.GetDelegateForFunctionPointer(procAddress, typeof(T)));
                }

                private void AddLexicon(IntPtr lex)
                {
                    IntPtr[] ptrArray;
                    int length;
                    if (this.lexicons == null)
                    {
                        ptrArray = new IntPtr[1];
                        length = 0;
                    }
                    else
                    {
                        ptrArray = new IntPtr[this.lexicons.Length + 1];
                        this.lexicons.CopyTo(ptrArray, 0);
                        length = this.lexicons.Length;
                    }

                    ptrArray[length] = lex;
                    this.lexicons = ptrArray;
                }

                private void Dispose(bool disposing)
                {
                    try
                    {
                        if (this.lexicons != null)
                        {
                            foreach (IntPtr ptr in this.lexicons)
                            {
                                CheckErrorCode(this.closeLex(this.id, ptr, true));
                            }

                            this.lexicons = null;
                        }

                        if (this.id != IntPtr.Zero)
                        {
                            CheckErrorCode(this.terminate(this.id, true));
                            this.id = IntPtr.Zero;
                        }

                        if (this.libraryHandle != IntPtr.Zero)
                        {
                            if (!KernalNativeMethods.FreeLibrary(this.libraryHandle))
                            {
                                throw new Win32Exception();
                            }

                            this.libraryHandle = IntPtr.Zero;
                        }
                    }
                    finally
                    {
                        if (disposing)
                        {
                            this.terminate = null;
                            this.closeLex = null;
                            this.openLex = null;
                            this.check = null;
                            this.addUdr = null;
                            this.clearUdr = null;
                            this.deleteUdr = null;
                        }
                    }
                }

                private void InitIgnoreDictionary()
                {
                    SpellerBuiltInUdr proc = GetProc<SpellerBuiltInUdr>(this.libraryHandle, "SpellerBuiltinUdr");
                    this.ignoredDictionary = proc(this.id, ProofLexType.User);
                    if (this.ignoredDictionary == IntPtr.Zero)
                    {
                        throw new InvalidOperationException("Failed to get the ignored dictionary handle.");
                    }
                }
            }
        }
    }
}