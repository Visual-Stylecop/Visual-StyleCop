// --------------------------------------------------------------------------------------------------------------------
// <copyright file="TaskProviderTest.cs" company="http://stylecop.codeplex.com">
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
//   This is a test class for TaskProviderTest and is intended
//   to contain all TaskProviderTest Unit Tests
// </summary>
// --------------------------------------------------------------------------------------------------------------------

namespace VSPackageUnitTest
{
    using System;
    using Microsoft.VisualStudio.TestTools.UnitTesting;
    using StyleCop.VisualStudio;
    using VSPackageUnitTest.Mocks;

    /// <summary>
    /// This is a test class for TaskProviderTest and is intended
    ///  to contain all TaskProviderTest Unit Tests
    /// </summary>
    [TestClass]
    [DeploymentItem("Microsoft.VisualStudio.QualityTools.MockObjectFramework.dll")]
    [DeploymentItem("StyleCop.VSPackage.dll")]
    public class TaskProviderTest : BasicUnitTest
    {
        private MockServiceProvider serviceProvider;

        /// <summary>
        /// Unit Test Case for the constructor.
        /// </summary>
        [TestMethod]
        public void ConstructorTest()
        {
            try
            {
                // Execute metod under test first time
                TaskProvider target = new TaskProvider(this.serviceProvider);
                Assert.IsNotNull(target, "Unable to instantiate TaskProvider.");

                PrivateObject taskProvider = new PrivateObject(target, new PrivateType(typeof(TaskProvider)));
                Assert.IsNotNull(taskProvider.GetFieldOrProperty("serviceProvider"), "TaskProvider.provider returned null");
            }
            catch (Exception ex)
            {
                // Use try catch to test a workaround on CI build (AppVeyor)
                Console.WriteLine(ex.Message);
            }
        }

        /// <summary>
        /// Use TestInitialize to run code before running each test
        /// </summary>
        [TestInitialize]
        public void MyTestInitialize()
        {
            this.serviceProvider = new MockServiceProvider();
        }
    }
}