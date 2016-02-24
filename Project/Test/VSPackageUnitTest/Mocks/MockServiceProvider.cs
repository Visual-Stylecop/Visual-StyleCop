// --------------------------------------------------------------------------------------------------------------------
// <copyright file="MockServiceProvider.cs" company="http://stylecop.codeplex.com">
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
//   The mock service provider.
// </summary>
// --------------------------------------------------------------------------------------------------------------------

namespace VSPackageUnitTest.Mocks
{
    using System;
    using System.ComponentModel.Design;
    using System.Diagnostics;

    using EnvDTE;

    using Microsoft.VisualStudio.Shell;
    using Microsoft.VisualStudio.Shell.Interop;
    using Microsoft.VisualStudio.TextManager.Interop;

    /// <summary>
    /// The mock service provider.
    /// </summary>
    internal class MockServiceProvider : IServiceProvider
    {
        private readonly MockSolutionBuildManager buildManager = new MockSolutionBuildManager();

        private readonly OleMenuCommandService menuService;

        private readonly MockRDT rdt = new MockRDT();

        private readonly MockSolution solution = new MockSolution();

        private readonly MockStatusBar statusBar = new MockStatusBar();

        private readonly MockTaskList taskList = new MockTaskList();

        private readonly MockTextManager textMgr = new MockTextManager();

        private readonly MockShell uiShell = new MockShell();

        private readonly MockUIShellOpenDocument uiShellOpenDoc = new MockUIShellOpenDocument();

        private readonly MockWebBrowsingService webBrowser = new MockWebBrowsingService();

        /// <summary>
        /// Initializes a new instance of the <see cref="MockServiceProvider"/> class.
        /// </summary>
        public MockServiceProvider()
        {
            this.menuService = new OleMenuCommandService(this);
            this.DTE = new MockDTE(this);
        }

        /// <summary>
        /// Gets or sets DTE.
        /// </summary>
        public MockDTE DTE { get; set; }

        /// <summary>
        /// Gets MockBuildManager.
        /// </summary>
        public MockSolutionBuildManager MockBuildManager
        {
            get
            {
                return this.buildManager;
            }
        }

        /// <summary>
        /// Gets TaskList.
        /// </summary>
        public MockTaskList TaskList
        {
            get
            {
                return this.taskList;
            }
        }

        /// <summary>
        /// The get service.
        /// </summary>
        /// <param name="serviceType">
        /// The service type.
        /// </param>
        /// <returns>
        /// The get service.
        /// </returns>
        public object GetService(Type serviceType)
        {
            if (serviceType == typeof(SVsTaskList))
            {
                return this.taskList;
            }
            else if (serviceType == typeof(SVsUIShell))
            {
                return this.uiShell;
            }
            else if (serviceType == typeof(SVsStatusbar))
            {
                return this.statusBar;
            }
            else if (serviceType == typeof(DTE))
            {
                return this.DTE;
            }
            else if (serviceType == typeof(SVsSolution))
            {
                return this.solution;
            }
            else if (serviceType == typeof(SVsRunningDocumentTable))
            {
                return this.rdt;
            }
            else if (serviceType == typeof(SVsUIShellOpenDocument))
            {
                return this.uiShellOpenDoc;
            }
            else if (serviceType == typeof(SVsTextManager))
            {
                return this.textMgr;
            }
            else if (serviceType == typeof(SVsWebBrowsingService))
            {
                return this.webBrowser;
            }
            else if (serviceType == typeof(IMenuCommandService))
            {
                return this.menuService;
            }
            else if (serviceType == typeof(ISelectionService))
            {
                return null;
            }
            else if (serviceType == typeof(IDesignerHost))
            {
                return null;
            }
            else if (serviceType == typeof(SVsSolutionBuildManager))
            {
                return this.buildManager;
            }
            else
            {
                Debug.Fail("Service " + serviceType + " not found.");
                return null;
            }
        }
    }
}