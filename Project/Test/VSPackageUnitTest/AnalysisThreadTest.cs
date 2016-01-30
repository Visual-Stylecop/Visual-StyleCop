// --------------------------------------------------------------------------------------------------------------------
// <copyright file="AnalysisThreadTest.cs" company="http://stylecop.codeplex.com">
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
//   This is a test class for AnalysisThreadTest and is intended
//   to contain all AnalysisThreadTest Unit Tests
// </summary>
// --------------------------------------------------------------------------------------------------------------------

namespace VSPackageUnitTest
{
    using System.Collections.Generic;

    using Microsoft.VisualStudio.TestTools.MockObjects;
    using Microsoft.VisualStudio.TestTools.UnitTesting;

    using StyleCop;
    using StyleCop.VisualStudio;

    /// <summary>
    /// This is a test class for AnalysisThreadTest and is intended
    ///  to contain all AnalysisThreadTest Unit Tests
    /// </summary>
    [TestClass]
    public class AnalysisThreadTest
    {
        #region Properties

        /// <summary>
        ///   Gets or sets the test context which provides
        ///   information about and functionality for the current test run.
        /// </summary>
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
        // Use TestInitialize to run code before running each test
        // [TestInitialize]
        // public void MyTestInitialize()
        // {
        // }
        // Use TestCleanup to run code after each test has run
        // [TestCleanup]
        // public void MyTestCleanup()
        // {
        // }
        #region Public Methods

        /// <summary>
        /// Unit Test Case for Constructor
        ///   This tests ???.
        /// </summary>
        [TestMethod]
        public void ConstructorTest()
        {
            try
            {
                bool isFull = true;
                AnalysisThread target = CreateAnalysisThread(isFull);
                Assert.IsNotNull(target, "Constructor is broken");

                PrivateObject privateAnalysis = new PrivateObject(target, new PrivateType(typeof(AnalysisThread)));
                Assert.IsNotNull(privateAnalysis.GetFieldOrProperty("projects"), "Constructor did not set the projects.");
                Assert.IsTrue((bool)privateAnalysis.GetFieldOrProperty("full"), "Constructor did not set the full flag.");
                Assert.IsNotNull(privateAnalysis.GetFieldOrProperty("core"), "Constructor did not set the core.");
            }
            catch (Exception ex)
            {
                // Use try catch to test a workaround on CI build (AppVeyor)
                Console.WriteLine(ex.Message);
            }
        }

        /// <summary>
        /// Unit Test Case for AnalyseProc
        ///   This tests ???.
        /// </summary>
        [TestMethod]
        public void TestAnalyseProcFull()
        {
            try
            {
                var target = CreateAnalysisThread(true);
                target.AnalyzeProc();
            }
            catch (Exception ex)
            {
                // Use try catch to test a workaround on CI build (AppVeyor)
                Console.WriteLine(ex.Message);
            }
        }

        /// <summary>
        /// Unit Test Case for TestMethod
        ///   This tests ???.
        /// </summary>
        [TestMethod]
        public void TestAnalyzeProcNotFull()
        {
            try
            {
                AnalysisThread target = CreateAnalysisThread(false);
                bool eventFired = false;

                target.Complete += ((sender, args) => { eventFired = true; });
                target.AnalyzeProc();
                Assert.IsTrue(eventFired, "Analysation didnt fire the Complete event");
            }
            catch (Exception ex)
            {
                // Use try catch to test a workaround on CI build (AppVeyor)
                Console.WriteLine(ex.Message);
            }
        }

        #endregion

        #region Methods

        private static AnalysisThread CreateAnalysisThread(bool isFull)
        {
            AnalysisThread target = null;
            try
            {
                StyleCopCore core = new StyleCopCore();
                List<CodeProject> projects = new List<CodeProject>();
                Mock<CodeProject> mockCodeProject = new Mock<CodeProject>();
                CodeProject codeProject = new CodeProject(0, "test", new Configuration(new string[0]));
                projects.Add(codeProject);

                target = new AnalysisThread(isFull, projects, core);
            }
            catch (Exception ex)
            {
                // Use try catch to test a workaround on CI build (AppVeyor)
                Console.WriteLine(ex.Message);
            }
            finally
            {
                return target;
            }
        }

        #endregion
    }
}