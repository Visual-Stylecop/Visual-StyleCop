// --------------------------------------------------------------------------------------------------------------------
// <copyright file="ITokenContainer.cs" company="http://stylecop.codeplex.com">
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
//   Interface implemented by objects containing a list of child tokens.
// </summary>
// --------------------------------------------------------------------------------------------------------------------
namespace StyleCop.CSharp
{
    using System.Collections.Generic;

    /// <summary>
    /// Interface implemented by objects containing a list of child tokens.
    /// </summary>
    /// <subcategory>interface</subcategory>
    public interface ITokenContainer
    {
        /// <summary>
        /// Gets the list of tokens in the container.
        /// </summary>
        ICollection<CsToken> Tokens { get; }
    }
}