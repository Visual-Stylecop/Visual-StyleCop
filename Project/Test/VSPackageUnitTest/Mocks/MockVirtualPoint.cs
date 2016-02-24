//-----------------------------------------------------------------------
// <copyright file="MockVirtualPoint.cs" company="http://stylecop.codeplex.com">
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

namespace VSPackageUnitTest.Mocks
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;
    using EnvDTE;

    internal class MockVirtualPoint : VirtualPoint
    {
        public int AbsoluteCharOffset
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        public bool AtEndOfDocument
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        public bool AtEndOfLine
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        public bool AtStartOfDocument
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        public bool AtStartOfLine
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        public int DisplayColumn
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
                throw new NotImplementedException();
            }
        }

        public int Line
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        public int LineCharOffset
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        public int LineLength
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        public TextDocument Parent
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        public int VirtualCharOffset
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        public int VirtualDisplayColumn
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        public EditPoint CreateEditPoint()
        {
            throw new NotImplementedException();
        }

        public bool EqualTo(TextPoint Point)
        {
            throw new NotImplementedException();
        }

        public CodeElement get_CodeElement(vsCMElement Scope)
        {
            throw new NotImplementedException();
        }

        public bool GreaterThan(TextPoint Point)
        {
            throw new NotImplementedException();
        }

        public bool LessThan(TextPoint Point)
        {
            throw new NotImplementedException();
        }

        public bool TryToShow(vsPaneShowHow How = vsPaneShowHow.vsPaneShowCentered, object PointOrCount = null)
        {
            return true;
        }
    }
}
