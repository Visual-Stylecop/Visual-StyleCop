// --------------------------------------------------------------------------------------------------------------------
// <copyright file="Struct.cs" company="http://stylecop.codeplex.com">
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
//   Describes a struct element.
// </summary>
// --------------------------------------------------------------------------------------------------------------------
namespace StyleCop.CSharp
{
    using System.Collections.Generic;

    /// <summary>
    /// Describes a struct element.
    /// </summary>
    /// <subcategory>element</subcategory>
    public sealed class Struct : ClassBase
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="Struct"/> class.
        /// </summary>
        /// <param name="document">
        /// The document that contains the element.
        /// </param>
        /// <param name="parent">
        /// The parent of the element.
        /// </param>
        /// <param name="header">
        /// The Xml header for this element.
        /// </param>
        /// <param name="attributes">
        /// The list of attributes attached to this element.
        /// </param>
        /// <param name="declaration">
        /// The declaration code for this element.
        /// </param>
        /// <param name="typeConstraints">
        /// The list of type constraints on the class, if any.
        /// </param>
        /// <param name="unsafeCode">
        /// Indicates whether the element resides within a block of unsafe code.
        /// </param>
        /// <param name="generated">
        /// Indicates whether the code element was generated or written by hand.
        /// </param>
        internal Struct(
            CsDocument document,
            CsElement parent,
            XmlHeader header,
            ICollection<Attribute> attributes,
            Declaration declaration,
            ICollection<TypeParameterConstraintClause> typeConstraints,
            bool unsafeCode,
            bool generated)
            : base(document, parent, ElementType.Struct, "struct " + declaration.Name, header, attributes, declaration, typeConstraints, unsafeCode, generated)
        {
            Param.Ignore(document, parent, header, attributes, declaration, typeConstraints, unsafeCode, generated);
        }

        /// <summary>
        /// Initializes the struct object.
        /// </summary>
        internal override void Initialize()
        {
            // Gather the inheritance from the declaration.
            this.SetInheritedItems(this.Declaration);
        }
    }
}