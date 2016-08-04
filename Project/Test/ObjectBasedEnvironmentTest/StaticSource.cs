﻿// --------------------------------------------------------------------------------------------------------------------
// <copyright file="StaticSource.cs" company="http://stylecop.codeplex.com">
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
//   The static source.
// </summary>
// --------------------------------------------------------------------------------------------------------------------

namespace ObjectBasedEnvironmentTest
{
    /// <summary>
    /// The static source.
    /// </summary>
    public static class StaticSource
    {
        private const string Source1 = @"using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ObjectBasedEnvironmentTest
{
    class Class1
    {
    }
}";

        private const string Source2 = @"using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ObjectBasedEnvironmentTest
{
    class Class2
    {
    }
}";

        private const string Source3 = @"using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ObjectBasedEnvironmentTest
{
    class Class3
    {
    }
}";

        private static string[] sources = new[] { Source1, Source2, Source3 };

        /// <summary>
        /// Gets or sets the sources for the test.
        /// </summary>
        public static string[] Sources
        {
            get
            {
                return sources;
            }

            set
            {
                sources = value;
            }
        }
    }
}