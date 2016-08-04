// --------------------------------------------------------------------------------------------------------------------
// <copyright file="MockDocuments.cs" company="http://stylecop.codeplex.com">
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
namespace VSPackageUnitTest.Mocks
{
    using System;
    using System.Collections;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;
    using EnvDTE;

    internal class MockDocuments : EnvDTE.Documents
    {
        private readonly MockDTE dte;

        public MockDocuments(MockDTE dte)
        {
            this.dte = dte;
        }

        public MockDocuments()
        {
        }

        public int Count
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        public DTE DTE
        {
            get
            {
                return this.dte;
            }
        }

        public DTE Parent
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        public Document Add(string Kind)
        {
            throw new NotImplementedException();
        }

        public void CloseAll(vsSaveChanges Save = vsSaveChanges.vsSaveChangesPrompt)
        {
            throw new NotImplementedException();
        }

        public IEnumerator GetEnumerator()
        {
            yield return new MockDocument(this.dte);
        }

        public Document Item(object index)
        {
            throw new NotImplementedException();
        }

        public Document Open(string PathName, string Kind = "Auto", bool ReadOnly = false)
        {
            throw new NotImplementedException();
        }

        public void SaveAll()
        {
            throw new NotImplementedException();
        }
    }
}
