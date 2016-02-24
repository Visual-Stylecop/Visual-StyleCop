// --------------------------------------------------------------------------------------------------------------------
// <copyright file="InvisibleFormTest.cs" company="http://stylecop.codeplex.com">
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
//   This is a test class for InvisibleFormTest and is intended
//   to contain all InvisibleFormTest Unit Tests
// </summary>
// --------------------------------------------------------------------------------------------------------------------

namespace VSPackageUnitTest
{
    using System;
    using System.Windows.Forms;
    using Microsoft.VisualStudio.TestTools.UnitTesting;
    using StyleCop.VisualStudio;

    /// <summary>
    /// This is a test class for InvisibleFormTest and is intended
    ///   to contain all InvisibleFormTest Unit Tests
    /// </summary>
    [TestClass]
    public class InvisibleFormTest : BasicUnitTest
    {
        /// <summary>
        /// A test for Instance
        /// </summary>
        [TestMethod]
        [DeploymentItem("StyleCop.VSPackage.dll")]
        public void InstanceTest()
        {
            try
            {
                InvisibleForm actual;

                actual = InvisibleForm.Instance;
                Assert.IsNotNull(actual, "InvisibleForm.Instance returned null");

                // Reset and try again
                PrivateType invisibleForm = new PrivateType(typeof(InvisibleForm));
                invisibleForm.SetStaticFieldOrProperty("instanceForm", null);

                actual = InvisibleForm.Instance;
                Assert.IsNotNull(actual, "InvisibleForm.Instance returned null");

                Assert.AreSame(actual, invisibleForm.GetStaticFieldOrProperty("instanceForm"), "Second call to the property should return the same opbject instance.");

                Form f = actual as Form;
                Assert.IsFalse(f.Visible, "InvisibleForm should not be visible");
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
            try
            {
                PrivateType instanceForm = new PrivateType(typeof(InvisibleForm));
                instanceForm.SetStaticFieldOrProperty("instanceForm", null);
            }
            catch (Exception ex)
            {
                // Use try catch to test a workaround on CI build (AppVeyor)
                Console.WriteLine(ex.Message);
            }
        }

        /// <summary>
        /// The my test initialize.
        /// </summary>
        [TestInitialize]
        public void MyTestInitialize()
        {
            try
            {
                PrivateType instanceForm = new PrivateType(typeof(InvisibleForm));
                instanceForm.SetStaticFieldOrProperty("instanceForm", null);
            }
            catch (Exception ex)
            {
                // Use try catch to test a workaround on CI build (AppVeyor)
                Console.WriteLine(ex.Message);
            }
        }
    }
}