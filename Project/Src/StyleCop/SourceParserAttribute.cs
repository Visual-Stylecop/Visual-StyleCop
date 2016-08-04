// --------------------------------------------------------------------------------------------------------------------
// <copyright file="SourceParserAttribute.cs" company="http://stylecop.codeplex.com">
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
//   Attribute class for marking StyleCop parser classes.
// </summary>
// --------------------------------------------------------------------------------------------------------------------
namespace StyleCop
{
    using System;
    using System.Diagnostics.CodeAnalysis;

    /// <summary>
    /// Attribute class for marking StyleCop parser classes.
    /// </summary>
    [SuppressMessage("Microsoft.Design", "CA1019:DefineAccessorsForAttributeArguments", Justification = "The attribute has no arguments.")]
    [AttributeUsage(AttributeTargets.Class, AllowMultiple = false, Inherited = true)]
    public sealed class SourceParserAttribute : StyleCopAddInAttribute
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="SourceParserAttribute"/> class.
        /// </summary>
        public SourceParserAttribute()
        {
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="SourceParserAttribute"/> class.
        /// </summary>
        /// <param name="parserXmlId">
        /// The ID of the parser xml file within the parser resource.
        /// </param>
        public SourceParserAttribute(string parserXmlId)
            : base(parserXmlId)
        {
            Param.Ignore(parserXmlId);
        }
    }
}