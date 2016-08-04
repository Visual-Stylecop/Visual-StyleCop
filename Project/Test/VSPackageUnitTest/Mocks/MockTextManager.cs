// --------------------------------------------------------------------------------------------------------------------
// <copyright file="MockTextManager.cs" company="http://stylecop.codeplex.com">
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
// <summary>
//   The mock text manager.
// </summary>
// --------------------------------------------------------------------------------------------------------------------

namespace VSPackageUnitTest.Mocks
{
    using System;
    using System.Collections.Generic;

    using Microsoft.VisualStudio;
    using Microsoft.VisualStudio.TextManager.Interop;

    /// <summary>
    /// The mock text manager.
    /// </summary>
    internal class MockTextManager : IVsTextManager
    {
        private readonly Dictionary<string, MockTextView> views = new Dictionary<string, MockTextView>();

        /// <summary>
        /// The add view.
        /// </summary>
        /// <param name="fileName">
        /// The file name.
        /// </param>
        /// <returns>
        /// The mock text view.
        /// </returns>
        public MockTextView AddView(string fileName)
        {
            MockTextView view = new MockTextView();
            this.views.Add(fileName, view);
            return view;
        }

        /// <summary>
        /// Gets the adjust file change ignore count.
        /// </summary>
        /// <param name="pBuffer">
        /// The p buffer.
        /// </param>
        /// <param name="fIgnore">
        /// The f ignore.
        /// </param>
        /// <returns>
        /// The adjust file change ignore count.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public int AdjustFileChangeIgnoreCount(IVsTextBuffer pBuffer, int fIgnore)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets the attempt to check out buffer from scc.
        /// </summary>
        /// <param name="pBufData">
        /// The p buf data.
        /// </param>
        /// <param name="pfCheckoutSucceeded">
        /// The pf checkout succeeded.
        /// </param>
        /// <returns>
        /// The attempt to check out buffer from scc.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public int AttemptToCheckOutBufferFromScc(IVsUserData pBufData, out int pfCheckoutSucceeded)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets the attempt to check out buffer from scc 2.
        /// </summary>
        /// <param name="pszFileName">
        /// The psz file name.
        /// </param>
        /// <param name="pfCheckoutSucceeded">
        /// The pf checkout succeeded.
        /// </param>
        /// <param name="piStatusFlags">
        /// The pi status flags.
        /// </param>
        /// <returns>
        /// The attempt to check out buffer from scc 2.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public int AttemptToCheckOutBufferFromScc2(string pszFileName, out int pfCheckoutSucceeded, out int piStatusFlags)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets the create selection action.
        /// </summary>
        /// <param name="pBuffer">
        /// The p buffer.
        /// </param>
        /// <param name="ppAction">
        /// The pp action.
        /// </param>
        /// <returns>
        /// The create selection action.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public int CreateSelectionAction(IVsTextBuffer pBuffer, out IVsTextSelectionAction ppAction)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets the enum buffers.
        /// </summary>
        /// <param name="ppEnum">
        /// The pp enum.
        /// </param>
        /// <returns>
        /// The enum buffers.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public int EnumBuffers(out IVsEnumTextBuffers ppEnum)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets the enum independent views.
        /// </summary>
        /// <param name="pBuffer">
        /// The p buffer.
        /// </param>
        /// <param name="ppEnum">
        /// The pp enum.
        /// </param>
        /// <returns>
        /// The enum independent views.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public int EnumIndependentViews(IVsTextBuffer pBuffer, out IVsEnumIndependentViews ppEnum)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets the enum language services.
        /// </summary>
        /// <param name="ppEnum">
        /// The pp enum.
        /// </param>
        /// <returns>
        /// The enum language services.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public int EnumLanguageServices(out IVsEnumGUID ppEnum)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets the enum views.
        /// </summary>
        /// <param name="pBuffer">
        /// The p buffer.
        /// </param>
        /// <param name="ppEnum">
        /// The pp enum.
        /// </param>
        /// <returns>
        /// The enum views.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public int EnumViews(IVsTextBuffer pBuffer, out IVsEnumTextViews ppEnum)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets the get active view.
        /// </summary>
        /// <param name="fMustHaveFocus">
        /// The f must have focus.
        /// </param>
        /// <param name="pBuffer">
        /// The p buffer.
        /// </param>
        /// <param name="ppView">
        /// The pp view.
        /// </param>
        /// <returns>
        /// The get active view.
        /// </returns>
        public int GetActiveView(int fMustHaveFocus, IVsTextBuffer pBuffer, out IVsTextView ppView)
        {
            string fileName = ((MockTextLines)pBuffer).FileName;

            if (this.views.ContainsKey(fileName))
            {
                ppView = this.views[fileName];
                return VSConstants.S_OK;
            }
            else
            {
                ppView = null;
                return VSConstants.E_INVALIDARG;
            }
        }

        /// <summary>
        /// Gets the get buffer scc status.
        /// </summary>
        /// <param name="pBufData">
        /// The p buf data.
        /// </param>
        /// <param name="pbNonEditable">
        /// The pb non editable.
        /// </param>
        /// <returns>
        /// The get buffer scc status.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public int GetBufferSccStatus(IVsUserData pBufData, out int pbNonEditable)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets the get buffer scc status 2.
        /// </summary>
        /// <param name="pszFileName">
        /// The psz file name.
        /// </param>
        /// <param name="pbNonEditable">
        /// The pb non editable.
        /// </param>
        /// <param name="piStatusFlags">
        /// The pi status flags.
        /// </param>
        /// <returns>
        /// The get buffer scc status 2.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public int GetBufferSccStatus2(string pszFileName, out int pbNonEditable, out int piStatusFlags)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets the get marker type count.
        /// </summary>
        /// <param name="piMarkerTypeCount">
        /// The pi marker type count.
        /// </param>
        /// <returns>
        /// The get marker type count.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public int GetMarkerTypeCount(out int piMarkerTypeCount)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets the get marker type interface.
        /// </summary>
        /// <param name="iMarkerTypeID">
        /// The i marker type id.
        /// </param>
        /// <param name="ppMarkerType">
        /// The pp marker type.
        /// </param>
        /// <returns>
        /// The get marker type interface.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public int GetMarkerTypeInterface(int iMarkerTypeID, out IVsTextMarkerType ppMarkerType)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets the get per language preferences.
        /// </summary>
        /// <param name="pLangPrefs">
        /// The p lang prefs.
        /// </param>
        /// <returns>
        /// The get per language preferences.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public int GetPerLanguagePreferences(LANGPREFERENCES[] pLangPrefs)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets the get registered marker type id.
        /// </summary>
        /// <param name="pguidMarker">
        /// The pguid marker.
        /// </param>
        /// <param name="piMarkerTypeID">
        /// The pi marker type id.
        /// </param>
        /// <returns>
        /// The get registered marker type id.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public int GetRegisteredMarkerTypeID(ref Guid pguidMarker, out int piMarkerTypeID)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets the get shortcut manager.
        /// </summary>
        /// <param name="ppShortcutMgr">
        /// The pp shortcut mgr.
        /// </param>
        /// <returns>
        /// The get shortcut manager.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public int GetShortcutManager(out IVsShortcutManager ppShortcutMgr)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets the get user preferences.
        /// </summary>
        /// <param name="pViewPrefs">
        /// The p view prefs.
        /// </param>
        /// <param name="pFramePrefs">
        /// The p frame prefs.
        /// </param>
        /// <param name="pLangPrefs">
        /// The p lang prefs.
        /// </param>
        /// <param name="pColorPrefs">
        /// The p color prefs.
        /// </param>
        /// <returns>
        /// The get user preferences.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public int GetUserPreferences(VIEWPREFERENCES[] pViewPrefs, FRAMEPREFERENCES[] pFramePrefs, LANGPREFERENCES[] pLangPrefs, FONTCOLORPREFERENCES[] pColorPrefs)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets the ignore next file change.
        /// </summary>
        /// <param name="pBuffer">
        /// The p buffer.
        /// </param>
        /// <returns>
        /// The ignore next file change.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public int IgnoreNextFileChange(IVsTextBuffer pBuffer)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets the map filename to language sid.
        /// </summary>
        /// <param name="pszFileName">
        /// The psz file name.
        /// </param>
        /// <param name="pguidLangSID">
        /// The pguid lang sid.
        /// </param>
        /// <returns>
        /// The map filename to language sid.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public int MapFilenameToLanguageSID(string pszFileName, out Guid pguidLangSID)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets the navigate to line and column.
        /// </summary>
        /// <param name="pBuffer">
        /// The p buffer.
        /// </param>
        /// <param name="guidDocViewType">
        /// The guid doc view type.
        /// </param>
        /// <param name="iStartRow">
        /// The i start row.
        /// </param>
        /// <param name="iStartIndex">
        /// The i start index.
        /// </param>
        /// <param name="iEndRow">
        /// The i end row.
        /// </param>
        /// <param name="iEndIndex">
        /// The i end index.
        /// </param>
        /// <returns>
        /// The navigate to line and column.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public int NavigateToLineAndColumn(IVsTextBuffer pBuffer, ref Guid guidDocViewType, int iStartRow, int iStartIndex, int iEndRow, int iEndIndex)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets the navigate to position.
        /// </summary>
        /// <param name="pBuffer">
        /// The p buffer.
        /// </param>
        /// <param name="guidDocViewType">
        /// The guid doc view type.
        /// </param>
        /// <param name="iPos">
        /// The i pos.
        /// </param>
        /// <param name="iLen">
        /// The i len.
        /// </param>
        /// <returns>
        /// The navigate to position.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public int NavigateToPosition(IVsTextBuffer pBuffer, ref Guid guidDocViewType, int iPos, int iLen)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets the register buffer.
        /// </summary>
        /// <param name="pBuffer">
        /// The p buffer.
        /// </param>
        /// <returns>
        /// The register buffer.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public int RegisterBuffer(IVsTextBuffer pBuffer)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets the register independent view.
        /// </summary>
        /// <param name="pUnk">
        /// The p unk.
        /// </param>
        /// <param name="pBuffer">
        /// The p buffer.
        /// </param>
        /// <returns>
        /// The register independent view.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public int RegisterIndependentView(object pUnk, IVsTextBuffer pBuffer)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets the register view.
        /// </summary>
        /// <param name="pView">
        /// The p view.
        /// </param>
        /// <param name="pBuffer">
        /// The p buffer.
        /// </param>
        /// <returns>
        /// The register view.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public int RegisterView(IVsTextView pView, IVsTextBuffer pBuffer)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets the set file change advise.
        /// </summary>
        /// <param name="pszFileName">
        /// The psz file name.
        /// </param>
        /// <param name="fStart">
        /// The f start.
        /// </param>
        /// <returns>
        /// The set file change advise.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public int SetFileChangeAdvise(string pszFileName, int fStart)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets the set per language preferences.
        /// </summary>
        /// <param name="pLangPrefs">
        /// The p lang prefs.
        /// </param>
        /// <returns>
        /// The set per language preferences.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public int SetPerLanguagePreferences(LANGPREFERENCES[] pLangPrefs)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets the set user preferences.
        /// </summary>
        /// <param name="pViewPrefs">
        /// The p view prefs.
        /// </param>
        /// <param name="pFramePrefs">
        /// The p frame prefs.
        /// </param>
        /// <param name="pLangPrefs">
        /// The p lang prefs.
        /// </param>
        /// <param name="pColorPrefs">
        /// The p color prefs.
        /// </param>
        /// <returns>
        /// The set user preferences.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public int SetUserPreferences(VIEWPREFERENCES[] pViewPrefs, FRAMEPREFERENCES[] pFramePrefs, LANGPREFERENCES[] pLangPrefs, FONTCOLORPREFERENCES[] pColorPrefs)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets the suspend file change advise.
        /// </summary>
        /// <param name="pszFileName">
        /// The psz file name.
        /// </param>
        /// <param name="fSuspend">
        /// The f suspend.
        /// </param>
        /// <returns>
        /// The suspend file change advise.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public int SuspendFileChangeAdvise(string pszFileName, int fSuspend)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets the unregister buffer.
        /// </summary>
        /// <param name="pBuffer">
        /// The p buffer.
        /// </param>
        /// <returns>
        /// The unregister buffer.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public int UnregisterBuffer(IVsTextBuffer pBuffer)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets the unregister independent view.
        /// </summary>
        /// <param name="pUnk">
        /// The p unk.
        /// </param>
        /// <param name="pBuffer">
        /// The p buffer.
        /// </param>
        /// <returns>
        /// The unregister independent view.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public int UnregisterIndependentView(object pUnk, IVsTextBuffer pBuffer)
        {
            throw new NotImplementedException();
        }

        /// <summary>
        /// Gets the unregister view.
        /// </summary>
        /// <param name="pView">
        /// The p view.
        /// </param>
        /// <returns>
        /// The unregister view.
        /// </returns>
        /// <exception cref="NotImplementedException">
        /// This method is not implemented.
        /// </exception>
        public int UnregisterView(IVsTextView pView)
        {
            throw new NotImplementedException();
        }
    }
}