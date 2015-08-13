// --------------------------------------------------------------------------------------------------------------------
// <copyright file="ViolationTaskTest.cs" company="http://stylecop.codeplex.com">
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
//   This is a test class for ViolationTaskTest and is intended
//   to contain all ViolationTaskTest Unit Tests
// </summary>
// --------------------------------------------------------------------------------------------------------------------

namespace VSPackageUnitTest
{
    using System;
    using System.Collections;

    using EnvDTE;

    using Microsoft.VisualStudio.Shell;
    using Microsoft.VisualStudio.Shell.Interop;
    using Microsoft.VisualStudio.TestTools.MockObjects;
    using Microsoft.VisualStudio.TestTools.UnitTesting;

    using StyleCop.VisualStudio;

    using VSPackageUnitTest.Mocks;
    using StyleCop;

    /// <summary>
    /// This is a test class for ViolationTaskTest and is intended
    ///  to contain all ViolationTaskTest Unit Tests
    /// </summary>
    [TestClass]
    [DeploymentItem("StyleCop.VSPackage.dll")]
    public class ViolationTaskTest
    {
        #region Constants and Fields

        private Mock<IServiceProvider> mockServiceProvider;

        private StyleCopVSPackage package;

        private ViolationTask taskUnderTest;

        private ErrorTask taskUnderTestShell;

        private ViolationInfo violation;

        #endregion

        #region Properties

        ///<summary>
        ///  Gets or sets the test context which provides
        ///  information about and functionality for the current test run.
        ///</summary>
        public TestContext TestContext { get; set; }

        #endregion

        // You can use the following additional attributes as you write your tests:
        // Use ClassInitialize to run code before running the first test in the class
        // [ClassInitialize()]
        // public static void MyClassInitialize(TestContext testContext)
        // {
        // }
        // Use ClassCleanup to run code after all tests in a class have run
        // [ClassCleanup()]
        // public static void MyClassCleanup()
        // {
        // }
        #region Public Methods

        /// <summary>
        /// Use TestCleanup to run code after each test has run
        /// </summary>
        [TestCleanup]
        public void MyTestCleanup()
        {
            this.taskUnderTest = null;
            this.taskUnderTestShell = null;
            this.taskUnderTest = null;
        }

        /// <summary>
        /// Use TestInitialize to run code before running each test
        /// </summary>
        [TestInitialize]
        public void MyTestInitialize()
        {
            // Creating a package will set the factory service provider.
            this.package = new StyleCopVSPackage();

            this.mockServiceProvider = new Mock<IServiceProvider>();

            // Creates a dummy violation (In visual studio the violation is displayed in Error List panel)
            this.violation = CreateDummyViolationInfo();

            Assert.IsNotNull(this.package, "this.package is null");

            PrivateObject actual = new PrivateObject(this.package, new PrivateType(typeof(StyleCopVSPackage)));
            StyleCopCore core = (StyleCopCore)actual.GetFieldOrProperty("Core");

            Assert.IsNotNull(core, "core is null");

            core.DisplayUI = false;
            this.taskUnderTest = new ViolationTask(this.package, this.violation, null);
            this.taskUnderTestShell = this.taskUnderTest;
        }

        /// <summary>
        /// A test for OnNavigate
        /// </summary>
        [TestMethod]
        [DeploymentItem("Microsoft.VisualStudio.QualityTools.MockObjectFramework.dll")]
        public void OnNavigateEmptyDocumentTest()
        {
            bool eventFired = false;
            Mock<DTE> mockDte = new Mock<DTE>();

            // No UI for test
            AnalysisHelper analysisHelper = this.SetCoreNoUI();

            PrivateObject actual = new PrivateObject(this.package, new PrivateType(typeof(StyleCopVSPackage)));
            actual.SetFieldOrProperty("core", this.package.Core);

            // Register output generated event to test event fired
            this.package.Core.OutputGenerated += (sender, args) => { eventFired = true; };

            // Does nothing - included for code coverage and to catch it if it starts doing something unexpectedly
            Assert.IsNotNull(this.taskUnderTestShell, "this.taskUnderTestShell is null.");
            this.taskUnderTestShell.Document = string.Empty;

            PrivateType privateProjectUtilities = new PrivateType(typeof(ProjectUtilities));
            privateProjectUtilities.SetStaticFieldOrProperty("serviceProvider", this.mockServiceProvider.Instance);
 
            PrivateObject taskUnderTestPrivateObject = new PrivateObject(this.taskUnderTest, new PrivateType(typeof(ViolationTask)));
            taskUnderTestPrivateObject.Invoke("OnNavigate", EventArgs.Empty);

            Assert.IsTrue(eventFired, "Core did not fire output event");
        }

        /// <summary>
        /// A test for OnNavigate
        /// </summary>
        [TestMethod]
        [DeploymentItem("Microsoft.VisualStudio.QualityTools.MockObjectFramework.dll")]
        public void OnNavigateNoDocumentTest()
        {
            bool eventFired = false;
            Mock<DTE> mockDte = new Mock<DTE>();

            // No UI for test
            AnalysisHelper analysisHelper = this.SetCoreNoUI();

            PrivateObject actual = new PrivateObject(this.package, new PrivateType(typeof(StyleCopVSPackage)));
            actual.SetFieldOrProperty("core", this.package.Core);

            // Register output generated event to test event fired
            this.package.Core.OutputGenerated += (sender, args) => { eventFired = true; };

            // Does nothing - included for code coverage and to catch it if it starts doing something unexpectedly
            Assert.IsNotNull(this.taskUnderTestShell, "this.taskUnderTestShell is null.");
            this.taskUnderTestShell.Document = null;

            // Use private type to set static private field
            PrivateType privateProjectUtilities = new PrivateType(typeof(ProjectUtilities));           
            privateProjectUtilities.SetStaticFieldOrProperty("serviceProvider", this.mockServiceProvider.Instance);

            PrivateObject taskUnderTestPrivateObject = new PrivateObject(this.taskUnderTest, new PrivateType(typeof(ViolationTask)));
            taskUnderTestPrivateObject.Invoke("OnNavigate", EventArgs.Empty);

            Assert.IsTrue(eventFired, "Core did not fire output event");
        }

        /// <summary>
        /// A test for OnNavigate
        /// </summary>
        [TestMethod]
        [DeploymentItem("Microsoft.VisualStudio.QualityTools.MockObjectFramework.dll")]
        public void OnNavigateToDocInProjectTest()
        {
            var mockDocumentEnumerator = new SequenceMock<IEnumerator>();
            var mockDte = new Mock<DTE>();
            var mockDocuments = new Mock<Documents>();
            var mockDocument = new SequenceMock<Document>();
            var mockActiveDocument = new Mock<Document>();
            var mockTextSelection = new SequenceMock<TextSelection>();
            var mockVirtualPoint = new SequenceMock<VirtualPoint>();

            this.SetupProjectUtilities(mockDocumentEnumerator, mockDte, mockDocuments, mockDocument, mockActiveDocument, this.violation.File);

            mockDocument.AddExpectationExpr(doc => doc.Activate());
            mockDocument.AddExpectationExpr(doc => doc.DTE, (Func<DTE>)delegate { return (EnvDTE.DTE)mockDte.Instance; });

            mockActiveDocument.ImplementExpr(doc => doc.Selection, mockTextSelection.Instance);

            mockTextSelection.ImplementExpr(sel => sel.GotoLine(this.violation.LineNumber, true));
            mockTextSelection.ImplementExpr(sel => sel.ActivePoint, mockVirtualPoint.Instance);

            mockVirtualPoint.ImplementExpr(vp => vp.TryToShow(EnvDTE.vsPaneShowHow.vsPaneShowCentered, 0));

            this.mockServiceProvider.ImplementExpr(sp => sp.GetService(typeof(EnvDTE.DTE)), mockDte.Instance);

            this.mockServiceProvider.ImplementExpr(sp => sp.GetService(typeof(EnvDTE.DTE)), mockDte.Instance);
            this.mockServiceProvider.ImplementExpr(sp => sp.GetService(typeof(SVsSolutionBuildManager)), new MockSolutionBuildManager());

            // Use private type to set static private field
            PrivateType privateProjectUtilities = new PrivateType(typeof(ProjectUtilities));
            privateProjectUtilities.SetStaticFieldOrProperty("serviceProvider", this.mockServiceProvider.Instance);

            // Execute
            PrivateObject taskUnderTestPrivateObject = new PrivateObject(this.taskUnderTest, new PrivateType(typeof(ViolationTask)));
            taskUnderTestPrivateObject.Invoke("OnNavigate", EventArgs.Empty);

            // Verify the required methods are called to show the violation
            mockTextSelection.Verify();
            mockVirtualPoint.Verify();
            mockDocument.Verify();
        }

        /// <summary>
        /// A test for OnNavigate
        /// </summary>
        [TestMethod]
        [DeploymentItem("Microsoft.VisualStudio.QualityTools.MockObjectFramework.dll")]
        public void OnNavigateToDocNotInProjectTest()
        {
            var mockDocumentEnumerator = new SequenceMock<IEnumerator>();
            var mockDte = new Mock<DTE>();
            var mockDocuments = new Mock<Documents>();
            var mockDocument = new SequenceMock<Document>();
            var mockActiveDocument = new Mock<Document>();
            var mockTextSelection = new SequenceMock<TextSelection>();
            var mockVirtualPoint = new SequenceMock<VirtualPoint>();

            this.SetupProjectUtilities(mockDocumentEnumerator, mockDte, mockDocuments, mockDocument, mockActiveDocument, "DummyFile.txt");
            var mockSecondDocument = new SequenceMock<Document>();
            mockDocumentEnumerator.AddExpectationExpr(docs => docs.MoveNext(), true);
            mockDocumentEnumerator.AddExpectationExpr(docs => docs.Current, mockSecondDocument.Instance);
            mockDocumentEnumerator.AddExpectationExpr(docs => docs.MoveNext(), false);

            mockSecondDocument.AddExpectationExpr(doc => doc.FullName, "DummyFile.txt");

            AnalysisHelper analysisHelper = this.SetCoreNoUI();
            bool eventFired = false;

            PrivateObject actual = new PrivateObject(this.package, new PrivateType(typeof(StyleCopVSPackage)));
            actual.SetFieldOrProperty("core", this.package.Core);

            // Register output generated event to test event fired
            this.package.Core.OutputGenerated += (sender, args) => { eventFired = true; };

            mockActiveDocument.ImplementExpr(doc => doc.Selection, mockTextSelection.Instance);

            mockTextSelection.ImplementExpr(sel => sel.GotoLine(this.violation.LineNumber, true));
            mockTextSelection.ImplementExpr(sel => sel.ActivePoint, mockVirtualPoint.Instance);

            mockVirtualPoint.ImplementExpr(vp => vp.TryToShow(EnvDTE.vsPaneShowHow.vsPaneShowCentered, 0));

            this.mockServiceProvider.ImplementExpr(sp => sp.GetService(typeof(EnvDTE.DTE)), mockDte.Instance);

            // Use private type to set static private field
            PrivateType privateProjectUtilities = new PrivateType(typeof(ProjectUtilities));
            privateProjectUtilities.SetStaticFieldOrProperty("serviceProvider", this.mockServiceProvider.Instance);

            // Execute
            PrivateObject taskUnderTestPrivateObject = new PrivateObject(this.taskUnderTest, new PrivateType(typeof(ViolationTask)));
            taskUnderTestPrivateObject.Invoke("OnNavigate", EventArgs.Empty);

            // Verify the required methods are called to show the violation
            mockTextSelection.Verify();
            mockVirtualPoint.Verify();
            mockDocument.Verify();

            Assert.IsTrue(eventFired, "Core did not fire output event");
        }

        /// <summary>
        /// A test for ViolationTask Constructor
        /// </summary>
        [TestMethod]
        public void ViolationTaskConstructorTest()
        {
            PrivateObject actual = new PrivateObject(this.taskUnderTest, new PrivateType(typeof(ViolationTask)));
            ViolationInfo violationInfo = (ViolationInfo)actual.GetFieldOrProperty("violation");

            Assert.IsNotNull(violationInfo, "Constructor didn't set internal field 'violation'");
            Assert.AreEqual(
                this.violation.File,
                this.taskUnderTestShell.Document,
                "Constructor failed to set up property Document");
            Assert.AreEqual(
                this.violation.LineNumber,
                this.taskUnderTestShell.Line + 1,
                "Constructor failed to set up property Line");
            Assert.AreEqual(
                this.violation.Description,
                this.taskUnderTestShell.Text,
                "Constructor failed to set up property Text");
            Assert.AreEqual(0, this.taskUnderTestShell.Column + 1, "Constructor failed to set up property Column");
        }

        #endregion

        #region Methods

        private static ViolationInfo CreateDummyViolationInfo()
        {
            ViolationInfo violation = new ViolationInfo() { File = @"c:\MyFile.cs", LineNumber = 666, Description = "My Description" };

            return violation;
        }

        private AnalysisHelper SetCoreNoUI()
        {
            StyleCopVSPackage packageAccessor = new StyleCopVSPackage();
            packageAccessor.Core.DisplayUI = false;
            return packageAccessor.Helper;
        }

        private void SetupProjectUtilities(
            SequenceMock<IEnumerator> mockDocumentEnumerator, 
            Mock<DTE> mockDte, 
            Mock<Documents> mockDocuments, 
            SequenceMock<Document> mockDocument, 
            Mock<Document> mockActiveDocument, 
            string fileName)
        {
            var mockSolution = new Mock<Solution>();
            var mockProjects = new Mock<Projects>();
            var mockProject = new Mock<Project>();
            var mockProjectEnumerator = new SequenceMock<IEnumerator>();

            // var mockEvents = new Mock<EnvDTE.Events>();
            mockDte.ImplementExpr(dte => dte.Solution, mockSolution.Instance);
            mockDte.ImplementExpr(dte => dte.Documents, mockDocuments.Instance);
            mockDte.ImplementExpr(dte => dte.ActiveDocument, mockActiveDocument.Instance);

            // mockDte.ImplementExpr(dte => dte.Events, mockEvents.Instance);
            mockSolution.ImplementExpr(sol => sol.Projects, mockProjects.Instance);
            mockProjects.ImplementExpr(e => e.GetEnumerator(), mockProjectEnumerator.Instance);

            mockProjectEnumerator.AddExpectationExpr(en => en.MoveNext(), true);
            mockProjectEnumerator.AddExpectationExpr(en => en.Current, mockProject.Instance);
            mockProjectEnumerator.AddExpectationExpr(en => en.MoveNext(), false);

            mockProject.ImplementExpr(p => p.Kind, EnvDTE.Constants.vsProjectKindMisc);
            mockProject.ImplementExpr(p => p.ProjectItems, (Func<ProjectItems>)delegate { return null; });

            mockDocuments.ImplementExpr(docs => docs.GetEnumerator(), mockDocumentEnumerator.Instance);

            mockDocumentEnumerator.AddExpectationExpr(docs => docs.MoveNext(), true);
            mockDocumentEnumerator.AddExpectationExpr(docs => docs.Current, mockDocument.Instance);
            mockDocumentEnumerator.AddExpectationExpr(docs => docs.MoveNext(), false);

            mockDocument.AddExpectationExpr(doc => doc.FullName, fileName);
        }

        #endregion
    }
}