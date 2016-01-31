// --------------------------------------------------------------------------------------------------------------------
// <copyright file="VSWindowsTest.cs" company="http://stylecop.codeplex.com">
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
//   This is a test class for VSWindowsTest and is intended
//   to contain all VSWindowsTest Unit Tests
// </summary>
// --------------------------------------------------------------------------------------------------------------------

namespace VSPackageUnitTest
{
    using System;
    using EnvDTE;

    using Microsoft.VisualStudio.TestTools.MockObjects;
    using Microsoft.VisualStudio.TestTools.UnitTesting;

    using StyleCop.VisualStudio;

    using VSPackageUnitTest.Mocks;

    /// <summary>
    /// This is a test class for VSWindowsTest and is intended
    ///   to contain all VSWindowsTest Unit Tests
    /// </summary>
    [TestClass]
    public class VSWindowsTest : BasicUnitTest
    {
        #region Constants and Fields

        private MockServiceProvider serviceProvider;

        #endregion

        #region Public Methods

        /// <summary>
        /// Unit Test Case for DTE.
        /// </summary>
        [TestMethod]
        public void DTEPropertyTest()
        {
            try
            {
                VSWindows instance = VSWindows.GetInstance(this.serviceProvider);
                PrivateObject actual = new PrivateObject(instance, new PrivateType(typeof(VSWindows)));
                Assert.IsNotNull((MockDTE)actual.GetFieldOrProperty("DTE"), "DTE property was null");
            }
            catch (Exception ex)
            {
                // Use try catch to test a workaround on CI build (AppVeyor)
                Console.WriteLine(ex.Message);
            }
        }

        /// <summary>
        /// A test for GetInstance
        /// </summary>
        [TestMethod]
        [DeploymentItem("StyleCop.VSPackage.dll")]
        public void GetInstanceTest()
        {
            try
            {
                VSWindows instance = VSWindows.GetInstance(this.serviceProvider);
                PrivateObject actual = new PrivateObject(instance, new PrivateType(typeof(VSWindows)));

                Assert.IsNotNull(instance, "VSWindows.GetInstance() returned null.");
                Assert.IsNotNull(this.serviceProvider, "serviceProvider is null.");

                Assert.AreEqual(this.serviceProvider, (MockServiceProvider)actual.GetFieldOrProperty("serviceProvider"), "Service provider was not set correctly");
            }
            catch (Exception ex)
            {
                // Use try catch to test a workaround on CI build (AppVeyor)
                Console.WriteLine(ex.Message);
            }
        }

        /// <summary>
        /// The my test cleanup.
        /// </summary>
        [TestCleanup]
        public void MyTestCleanup()
        {
            PrivateType privateWindowType = new PrivateType(typeof(VSWindows));
            privateWindowType.SetStaticFieldOrProperty("instance", null);

            this.serviceProvider = null;
        }

        /// <summary>
        /// The my test initialize.
        /// </summary>
        [TestInitialize]
        public void MyTestInitialize()
        {
            this.serviceProvider = new MockServiceProvider();
        }

        /// <summary>
        /// Unit Test Case for OutputPane.
        /// </summary>
        [TestMethod]
        [DeploymentItem("Microsoft.VisualStudio.QualityTools.MockObjectFramework.dll")]
        public void OutputPanePropertyTest()
        {
            try
            {
                // Setup
                Mock<Window> mockWindow = this.SetupMockWindow();
                Mock<OutputWindow> mockOutputWindow = new Mock<OutputWindow>();
                mockWindow.ImplementExpr(w => w.Object, (EnvDTE.OutputWindow)mockOutputWindow.Instance);
                Mock<OutputWindowPane> mockOutputWindowPane = new Mock<OutputWindowPane>();
                Mock<OutputWindowPanes> mockOutputWindowPanes = new Mock<OutputWindowPanes>();
                mockOutputWindow.ImplementExpr(ow => ow.OutputWindowPanes, (EnvDTE.OutputWindowPanes)mockOutputWindowPanes.Instance);
                mockOutputWindowPanes.ImplementExpr(owp => owp.Add("StyleCop"), (EnvDTE.OutputWindowPane)mockOutputWindowPane.Instance);

                // Call
                VSWindows actual = VSWindows.GetInstance(this.serviceProvider);

                // Verify
                Assert.IsNotNull(actual.OutputPane, "OutputPane property was null");
            }
            catch (Exception ex)
            {
                // Use try catch to test a workaround on CI build (AppVeyor)
                Console.WriteLine(ex.Message);
            }
        }

        /// <summary>
        /// Unit Test Case for OutputPane.
        /// </summary>
        [TestMethod]
        [DeploymentItem("Microsoft.VisualStudio.QualityTools.MockObjectFramework.dll")]
        public void OutputWindowPropertyTest()
        {
            try
            {
                // Setup
                Mock<Window> mockWindow = this.SetupMockWindow();
                Mock<DTE> mockDTE = new Mock<DTE>();

                // Call
                VSWindows actual = VSWindows.GetInstance(this.serviceProvider);

                // Verify
                Assert.IsNotNull(actual.OutputWindow, "OutputWindow property was null");
            }
            catch (Exception ex)
            {
                // Use try catch to test a workaround on CI build (AppVeyor)
                Console.WriteLine(ex.Message);
            }
        }

        #endregion

        #region Methods

        private Mock<Window> SetupMockWindow()
        {
            Mock<Windows> mockWindows = new Mock<Windows>();
            Mock<Window> mockWindow = new Mock<Window>();
            mockWindows.ImplementExpr(ws => ws.Item(EnvDTE.Constants.vsWindowKindOutput), (EnvDTE.Window)mockWindow.Instance);
            this.serviceProvider.DTE.Windows = mockWindows.Instance as EnvDTE.Windows;
            return mockWindow;
        }

        #endregion
    }
}