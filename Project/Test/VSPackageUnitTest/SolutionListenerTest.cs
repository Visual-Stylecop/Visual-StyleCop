﻿// --------------------------------------------------------------------------------------------------------------------
// <copyright file="SolutionListenerTest.cs" company="http://stylecop.codeplex.com">
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
//   This is a test class for SolutionListenerTest and is intended
//   to contain all SolutionListenerTest Unit Tests
// </summary>
// --------------------------------------------------------------------------------------------------------------------

namespace VSPackageUnitTest
{
    using System;
    using System.Diagnostics;

    using Microsoft.VisualStudio;
    using Microsoft.VisualStudio.Shell.Interop;
    using Microsoft.VisualStudio.TestTools.MockObjects;
    using Microsoft.VisualStudio.TestTools.UnitTesting;

    using StyleCop.VisualStudio;

    using VSPackageUnitTest.Mocks;

    /// <summary>
    /// This is a test class for SolutionListenerTest and is intended
    ///   to contain all SolutionListenerTest Unit Tests
    /// </summary>
    [TestClass]
    public class SolutionListenerTest
    {
        /// <summary>
        ///   Gets or sets the test context which provides
        ///   information about and functionality for the current test run.
        /// </summary>
        public TestContext TestContext { get; set; }

        /// <summary>
        /// A test for Dispose
        /// </summary>
        [TestMethod]
        [DeploymentItem("StyleCop.VSPackage.dll")]
        public void DisposeTest()
        {
            var serviceProvider = new MockServiceProvider();
            var mockSolutionEvents = new Mock<IVsSolutionEvents>();

            uint cookie = 0;
            ((IVsSolution)serviceProvider.GetService(typeof(SVsSolution))).AdviseSolutionEvents(mockSolutionEvents.Instance as IVsSolutionEvents, out cookie);
            Debug.Assert(cookie == 1, "cookie is different of 1.");

            SolutionListener target = new SolutionListener(serviceProvider);

            PrivateObject solutionListner = new PrivateObject(target, new PrivateType(typeof(SolutionListener)));
            solutionListner.SetFieldOrProperty("eventsCookie", cookie);
            target.Dispose();

            uint expected = 0;
            Assert.AreEqual(expected, solutionListner.GetFieldOrProperty("eventsCookie"), "Dispose does not remove the event sink");
        }

        /// <summary>
        /// A test for EventsCookie
        /// </summary>
        [TestMethod]
        [DeploymentItem("StyleCop.VSPackage.dll")]
        public void EventsCookieTest()
        {
            var serviceProvider = new MockServiceProvider();
            SolutionListener target = new SolutionListener(serviceProvider);
            uint expected = 0;

            PrivateObject solutionListner = new PrivateObject(target, new PrivateType(typeof(SolutionListener)));

            uint actual = (uint)solutionListner.GetFieldOrProperty("eventsCookie");
            Assert.AreEqual(expected, actual, "initial value should be zero");

            target.Initialize();

            actual = (uint)solutionListner.GetFieldOrProperty("eventsCookie");
            Assert.IsTrue(expected < actual, "Value after initialize should not be zero.");
        }

        /// <summary>
        /// A test for Initialize
        /// </summary>
        [TestMethod]
        [DeploymentItem("StyleCop.VSPackage.dll")]
        public void InitializeTest()
        {
            var serviceProvider = new MockServiceProvider();
            SolutionListener target = new SolutionListener(serviceProvider);
            uint expected = 0;

            PrivateObject solutionListner = new PrivateObject(target, new PrivateType(typeof(SolutionListener)));

            Assert.AreEqual(expected, solutionListner.GetFieldOrProperty("eventsCookie"));

            expected = 1;
            solutionListner.SetFieldOrProperty("eventsCookie", expected);
            target.Initialize();
            Assert.AreEqual(expected, solutionListner.GetFieldOrProperty("eventsCookie"));
        }

        /// <summary>
        /// A test for OnAfterAsynchOpenProject
        /// </summary>
        [TestMethod]
        [DeploymentItem("StyleCop.VSPackage.dll")]
        public void OnAfterAsynchOpenProjectTest()
        {
            IServiceProvider serviceProvider = this.PrepareServiceProvider();
            SolutionListener target = new SolutionListener(serviceProvider);
            IVsHierarchy hierarchy = null; // TODO: Initialize to an appropriate value
            int fAdded = 0; // TODO: Initialize to an appropriate value
            int expected = VSConstants.E_NOTIMPL;
            int actual;
            actual = target.OnAfterAsynchOpenProject(hierarchy, fAdded);
            Assert.AreEqual(expected, actual);
        }

        /// <summary>
        /// A test for OnAfterChangeProjectParent
        /// </summary>
        [TestMethod]
        [DeploymentItem("StyleCop.VSPackage.dll")]
        public void OnAfterChangeProjectParentTest()
        {
            IServiceProvider serviceProvider = this.PrepareServiceProvider();
            SolutionListener target = new SolutionListener(serviceProvider);
            IVsHierarchy hierarchy = null; // TODO: Initialize to an appropriate value
            int expected = VSConstants.E_NOTIMPL;
            int actual;
            actual = target.OnAfterChangeProjectParent(hierarchy);
            Assert.AreEqual(expected, actual);
        }

        /// <summary>
        /// A test for OnAfterCloseSolution
        /// </summary>
        [TestMethod]
        [DeploymentItem("StyleCop.VSPackage.dll")]
        public void OnAfterCloseSolutionTest()
        {
            IServiceProvider serviceProvider = this.PrepareServiceProvider();
            SolutionListener target = new SolutionListener(serviceProvider);
            object pUnkReserved = null; // TODO: Initialize to an appropriate value
            int expected = VSConstants.E_NOTIMPL;
            int actual;
            actual = target.OnAfterCloseSolution(pUnkReserved);
            Assert.AreEqual(expected, actual);
        }

        /// <summary>
        /// A test for OnAfterClosingChildren
        /// </summary>
        [TestMethod]
        [DeploymentItem("StyleCop.VSPackage.dll")]
        public void OnAfterClosingChildrenTest()
        {
            IServiceProvider serviceProvider = this.PrepareServiceProvider();
            SolutionListener target = new SolutionListener(serviceProvider);
            IVsHierarchy hierarchy = null; // TODO: Initialize to an appropriate value
            int expected = VSConstants.E_NOTIMPL;
            int actual;
            actual = target.OnAfterClosingChildren(hierarchy);
            Assert.AreEqual(expected, actual);
        }

        /// <summary>
        /// A test for OnAfterLoadProject
        /// </summary>
        [TestMethod]
        [DeploymentItem("StyleCop.VSPackage.dll")]
        public void OnAfterLoadProjectTest()
        {
            IServiceProvider serviceProvider = this.PrepareServiceProvider();
            SolutionListener target = new SolutionListener(serviceProvider);
            IVsHierarchy pStubHierarchy = null; // TODO: Initialize to an appropriate value
            IVsHierarchy pRealHierarchy = null; // TODO: Initialize to an appropriate value
            int expected = VSConstants.E_NOTIMPL;
            int actual;
            actual = target.OnAfterLoadProject(pStubHierarchy, pRealHierarchy);
            Assert.AreEqual(expected, actual);
        }

        /// <summary>
        /// A test for OnAfterMergeSolution
        /// </summary>
        [TestMethod]
        [DeploymentItem("StyleCop.VSPackage.dll")]
        public void OnAfterMergeSolutionTest()
        {
            IServiceProvider serviceProvider = this.PrepareServiceProvider();
            SolutionListener target = new SolutionListener(serviceProvider);
            object pUnkReserved = null; // TODO: Initialize to an appropriate value
            int expected = VSConstants.E_NOTIMPL;
            int actual;
            actual = target.OnAfterMergeSolution(pUnkReserved);
            Assert.AreEqual(expected, actual);
        }

        /// <summary>
        /// A test for OnAfterOpenProject
        /// </summary>
        [TestMethod]
        [DeploymentItem("StyleCop.VSPackage.dll")]
        public void OnAfterOpenProjectTest()
        {
            IServiceProvider serviceProvider = this.PrepareServiceProvider();
            SolutionListener target = new SolutionListener(serviceProvider);
            IVsHierarchy hierarchy = null; // TODO: Initialize to an appropriate value
            int fAdded = 0; // TODO: Initialize to an appropriate value
            int expected = VSConstants.E_NOTIMPL;
            int actual;
            actual = target.OnAfterOpenProject(hierarchy, fAdded);
            Assert.AreEqual(expected, actual);
        }

        /// <summary>
        /// A test for OnAfterOpenSolution
        /// </summary>
        [TestMethod]
        [DeploymentItem("StyleCop.VSPackage.dll")]
        public void OnAfterOpenSolutionTest()
        {
            IServiceProvider serviceProvider = this.PrepareServiceProvider();
            SolutionListener target = new SolutionListener(serviceProvider);

            bool eventFired = false;
            target.AfterSolutionOpened += (sender, args) => { eventFired = true; };
            int expected = VSConstants.S_OK;
            int actual = target.OnAfterOpenSolution(null, 0);
            Assert.AreEqual(expected, actual);
            Assert.IsTrue(eventFired, "Event was not fired");
        }

        /// <summary>
        /// A test for OnAfterOpeningChildren
        /// </summary>
        [TestMethod]
        [DeploymentItem("StyleCop.VSPackage.dll")]
        public void OnAfterOpeningChildrenTest()
        {
            IServiceProvider serviceProvider = this.PrepareServiceProvider();
            SolutionListener target = new SolutionListener(serviceProvider);
            IVsHierarchy hierarchy = null; // TODO: Initialize to an appropriate value
            int expected = VSConstants.E_NOTIMPL;
            int actual;
            actual = target.OnAfterOpeningChildren(hierarchy);
            Assert.AreEqual(expected, actual);
        }

        /// <summary>
        /// A test for OnAfterRenameProject
        /// </summary>
        [TestMethod]
        [DeploymentItem("StyleCop.VSPackage.dll")]
        public void OnAfterRenameProjectTest()
        {
            IServiceProvider serviceProvider = this.PrepareServiceProvider();
            SolutionListener target = new SolutionListener(serviceProvider);
            IVsHierarchy hierarchy = null; // TODO: Initialize to an appropriate value
            int expected = VSConstants.E_NOTIMPL;
            int actual;
            actual = target.OnAfterRenameProject(hierarchy);
            Assert.AreEqual(expected, actual);
        }

        /// <summary>
        /// A test for OnBeforeCloseProject
        /// </summary>
        [TestMethod]
        [DeploymentItem("StyleCop.VSPackage.dll")]
        public void OnBeforeCloseProjectTest()
        {
            IServiceProvider serviceProvider = this.PrepareServiceProvider();
            SolutionListener target = new SolutionListener(serviceProvider);
            IVsHierarchy hierarchy = null; // TODO: Initialize to an appropriate value
            int fRemoved = 0; // TODO: Initialize to an appropriate value
            int expected = VSConstants.E_NOTIMPL;
            int actual;
            actual = target.OnBeforeCloseProject(hierarchy, fRemoved);
            Assert.AreEqual(expected, actual);
        }

        /// <summary>
        /// A test for OnBeforeCloseSolution
        /// </summary>
        [TestMethod]
        [DeploymentItem("StyleCop.VSPackage.dll")]
        public void OnBeforeCloseSolutionTest()
        {
            var serviceProvider = new MockServiceProvider();

            SolutionListener target = new SolutionListener(serviceProvider);

            bool eventFired = false;
            target.BeforeClosingSolution += (sender, args) => { eventFired = true; };
            int expected = VSConstants.S_OK;
            int actual = target.OnBeforeCloseSolution(null);
            Assert.AreEqual(expected, actual);
            Assert.IsTrue(eventFired, "Event was not fired");
        }

        /// <summary>
        /// A test for OnBeforeClosingChildren
        /// </summary>
        [TestMethod]
        [DeploymentItem("StyleCop.VSPackage.dll")]
        public void OnBeforeClosingChildrenTest()
        {
            IServiceProvider serviceProvider = this.PrepareServiceProvider();
            SolutionListener target = new SolutionListener(serviceProvider);
            IVsHierarchy hierarchy = null; // TODO: Initialize to an appropriate value
            int expected = VSConstants.E_NOTIMPL;
            int actual;
            actual = target.OnBeforeClosingChildren(hierarchy);
            Assert.AreEqual(expected, actual);
        }

        /// <summary>
        /// A test for OnBeforeOpeningChildren
        /// </summary>
        [TestMethod]
        [DeploymentItem("StyleCop.VSPackage.dll")]
        public void OnBeforeOpeningChildrenTest()
        {
            IServiceProvider serviceProvider = this.PrepareServiceProvider();
            SolutionListener target = new SolutionListener(serviceProvider);
            IVsHierarchy hierarchy = null; // TODO: Initialize to an appropriate value
            int expected = VSConstants.E_NOTIMPL;
            int actual;
            actual = target.OnBeforeOpeningChildren(hierarchy);
            Assert.AreEqual(expected, actual);
        }

        /// <summary>
        /// A test for OnBeforeUnloadProject
        /// </summary>
        [TestMethod]
        [DeploymentItem("StyleCop.VSPackage.dll")]
        public void OnBeforeUnloadProjectTest()
        {
            IServiceProvider serviceProvider = this.PrepareServiceProvider();
            SolutionListener target = new SolutionListener(serviceProvider);
            IVsHierarchy pRealHierarchy = null; // TODO: Initialize to an appropriate value
            IVsHierarchy pStubHierarchy = null; // TODO: Initialize to an appropriate value
            int expected = VSConstants.E_NOTIMPL;
            int actual;
            actual = target.OnBeforeUnloadProject(pRealHierarchy, pStubHierarchy);
            Assert.AreEqual(expected, actual);
        }

        /// <summary>
        /// A test for OnQueryChangeProjectParent
        /// </summary>
        [TestMethod]
        [DeploymentItem("StyleCop.VSPackage.dll")]
        public void OnQueryChangeProjectParentTest()
        {
            IServiceProvider serviceProvider = this.PrepareServiceProvider();
            SolutionListener target = new SolutionListener(serviceProvider);
            IVsHierarchy hierarchy = null; // TODO: Initialize to an appropriate value
            IVsHierarchy pNewParentHier = null; // TODO: Initialize to an appropriate value
            int pfCancel = 0; // TODO: Initialize to an appropriate value
            int pfCancelExpected = 0; // TODO: Initialize to an appropriate value
            int expected = VSConstants.E_NOTIMPL;
            int actual;
            actual = target.OnQueryChangeProjectParent(hierarchy, pNewParentHier, ref pfCancel);
            Assert.AreEqual(pfCancelExpected, pfCancel);
            Assert.AreEqual(expected, actual);
        }

        /// <summary>
        /// A test for OnQueryCloseProject
        /// </summary>
        [TestMethod]
        [DeploymentItem("StyleCop.VSPackage.dll")]
        public void OnQueryCloseProjectTest()
        {
            IServiceProvider serviceProvider = this.PrepareServiceProvider();
            SolutionListener target = new SolutionListener(serviceProvider);
            IVsHierarchy hierarchy = null; // TODO: Initialize to an appropriate value
            int fRemoving = 0; // TODO: Initialize to an appropriate value
            int pfCancel = 0; // TODO: Initialize to an appropriate value
            int pfCancelExpected = 0; // TODO: Initialize to an appropriate value
            int expected = VSConstants.E_NOTIMPL;
            int actual;
            actual = target.OnQueryCloseProject(hierarchy, fRemoving, ref pfCancel);
            Assert.AreEqual(pfCancelExpected, pfCancel);
            Assert.AreEqual(expected, actual);
        }

        /// <summary>
        /// A test for OnQueryCloseSolution
        /// </summary>
        [TestMethod]
        [DeploymentItem("StyleCop.VSPackage.dll")]
        public void OnQueryCloseSolutionTest()
        {
            IServiceProvider serviceProvider = this.PrepareServiceProvider();
            SolutionListener target = new SolutionListener(serviceProvider);
            object pUnkReserved = null; // TODO: Initialize to an appropriate value
            int pfCancel = 0; // TODO: Initialize to an appropriate value
            int pfCancelExpected = 0; // TODO: Initialize to an appropriate value
            int expected = VSConstants.E_NOTIMPL;
            int actual;
            actual = target.OnQueryCloseSolution(pUnkReserved, ref pfCancel);
            Assert.AreEqual(pfCancelExpected, pfCancel);
            Assert.AreEqual(expected, actual);
        }

        /// <summary>
        /// A test for OnQueryUnloadProject
        /// </summary>
        [TestMethod]
        [DeploymentItem("StyleCop.VSPackage.dll")]
        public void OnQueryUnloadProjectTest()
        {
            IServiceProvider serviceProvider = this.PrepareServiceProvider();
            SolutionListener target = new SolutionListener(serviceProvider);
            IVsHierarchy pRealHierarchy = null; // TODO: Initialize to an appropriate value
            int pfCancel = 0; // TODO: Initialize to an appropriate value
            int pfCancelExpected = 0; // TODO: Initialize to an appropriate value
            int expected = VSConstants.E_NOTIMPL;
            int actual;
            actual = target.OnQueryUnloadProject(pRealHierarchy, ref pfCancel);
            Assert.AreEqual(pfCancelExpected, pfCancel);
            Assert.AreEqual(expected, actual);
        }

        /// <summary>
        /// A test for SolutionListener Constructor
        /// </summary>
        [TestMethod]
        [DeploymentItem("StyleCop.VSPackage.dll")]
        public void SolutionListenerConstructorTest()
        {
            IServiceProvider serviceProvider = this.PrepareServiceProvider();
            SolutionListener target = new SolutionListener(serviceProvider);
            Assert.IsNotNull(target);
        }

        /// <summary>
        /// A test for Solution
        /// </summary>
        [TestMethod]
        [DeploymentItem("StyleCop.VSPackage.dll")]
        public void SolutionTest()
        {
            IServiceProvider serviceProvider = this.PrepareServiceProvider();
            SolutionListener target = new SolutionListener(serviceProvider);

            PrivateObject solutionListner = new PrivateObject(target, new PrivateType(typeof(SolutionListener)));

            IVsSolution actual = (IVsSolution)solutionListner.GetFieldOrProperty("solution");
            Assert.IsNotNull(actual, "Cnstructor did not get the solution class.");
        }

        private IServiceProvider PrepareServiceProvider()
        {
            var mock = new Mock<IServiceProvider>();
            var mockSolution = new Mock<IVsSolution>();
            mock.ImplementExpr(m => m.GetService(typeof(SVsSolution)), mockSolution.Instance as IVsSolution);
            return mock.Instance as IServiceProvider;
        }
    }
}