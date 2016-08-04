//-----------------------------------------------------------------------
// <copyright file="Utilities.cs" company="http://stylecop.codeplex.com">
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
//-----------------------------------------------------------------------
namespace VSPackageUnitTest
{
    using System;
    using System.Collections.Generic;
    using System.IO;
    using System.Reflection;
    using System.Text;
    using Microsoft.Build.BuildEngine;
    using Microsoft.VisualStudio;
    using Microsoft.VisualStudio.Shell.Interop;

    internal static class Utilities
    {
        private static List<string> tempFiles = new List<string>();

        public delegate void ThrowingFunction();

        public static bool OrderedCollectionsAreEqual<T>(IList<T> first, IList<T> second)
        {
            if (first == null)
            {
                throw new ArgumentNullException("first");
            }

            if (second == null)
            {
                throw new ArgumentNullException("second");
            }

            if (first.Count != second.Count)
            {
                return false;
            }

            for (int i = 0; i < first.Count; ++i)
            {
                if (second.IndexOf(first[i]) != i)
                {
                    return false;
                }
            }

            return true;
        }

        public static bool HasFunctionThrown<ExceptionType>(ThrowingFunction func)
            where ExceptionType : Exception
        {
            bool hasThrown = false;
            try
            {
                func();
            }
            catch (ExceptionType)
            {
                hasThrown = true;
            }
            catch (TargetInvocationException e)
            {
                hasThrown = e.InnerException is ExceptionType;
            }

            return hasThrown;
        }

        public static void CleanUpTempFiles()
        {
            foreach (string file in tempFiles)
            {
                try
                {
                    File.Delete(file);
                }
                catch
                {
                }
            }

            tempFiles.Clear();
        }

        public static string CreateTempFile(string content, Encoding encoding, string extension)
        {
            string path = Path.GetTempFileName();
            if (extension != null)
            {
                path = Path.ChangeExtension(path, ".txt");
            }

            File.WriteAllText(path, content, encoding);
            tempFiles.Add(path);
            return path;
        }

        public static string CreateTempTxtFile(string content, Encoding encoding)
        {
            return CreateTempFile(content, encoding, ".txt");
        }

        public static string CreateTempTxtFile(string content)
        {
            return CreateTempTxtFile(content, Encoding.Unicode);
        }

        public static string CreateTempFile(string content)
        {
            return CreateTempFile(content, Encoding.Unicode, null);
        }

        public static string CreateBigFile()
        {
            StringBuilder content = new StringBuilder();

            for (int i = 0; i < 1000000; ++i)
            {
                content.Append("abcd ");
            }

            return CreateTempFile(content.ToString());
        }

        public static List<T> ListFromEnum<T>(IEnumerable<T> enumerator)
        {
            List<T> result = new List<T>();

            foreach (T t in enumerator)
            {
                result.Add(t);
            }

            return result;
        }

        public static List<IVsTaskItem> TasksFromEnumerator(IVsEnumTaskItems enumerator)
        {
            List<IVsTaskItem> result = new List<IVsTaskItem>();

            IVsTaskItem[] items = new IVsTaskItem[] { null };
            uint[] fetched = new uint[] { 0 };

            // TODO: must be refactored.
            for (enumerator.Reset(); enumerator.Next(1, items, fetched) == VSConstants.S_OK && fetched[0] == 1; /*nothing*/)
            {
                result.Add(items[0]);
            }

            return result;
        }

        public static string CreateTermTable(IEnumerable<string> terms)
        {
            StringBuilder fileContent = new StringBuilder();

            fileContent.Append("<?xml version=\"1.0\"?>\n");
            fileContent.Append("<xmldata>\n");
            fileContent.Append("  <PLCKTT>\n");
            fileContent.Append("    <Lang>\n");

            foreach (string term in terms)
            {
                fileContent.Append("      <Term Term=\"" + term + "\" Severity=\"2\" TermClass=\"Geopolitical\">\n");
                fileContent.Append("        <Comment>For detailed info see - http://relevant-url-here.com</Comment>\n");
                fileContent.Append("      </Term>\n");
            }

            fileContent.Append("    </Lang>\n");
            fileContent.Append("  </PLCKTT>\n");
            fileContent.Append("</xmldata>\n");

            return CreateTempTxtFile(fileContent.ToString());
        }

#pragma warning disable 618
        public static Project SetupMSBuildProject()
        {
            // If you run these tests on a different machine, you may need to modify this path.
            Engine.GlobalEngine.BinPath = System.Runtime.InteropServices.RuntimeEnvironment.GetRuntimeDirectory();
            Project project = Engine.GlobalEngine.CreateNewProject();
            project.FullFileName = Path.GetTempFileName();
            return project;
        }
#pragma warning restore 618
    }
}