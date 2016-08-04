// --------------------------------------------------------------------------------------------------------------------
// <copyright file="IsExpression.cs" company="http://stylecop.codeplex.com">
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
//   An expression representing an is-operation.
// </summary>
// --------------------------------------------------------------------------------------------------------------------
namespace StyleCop.CSharp
{
    using System.Diagnostics.CodeAnalysis;

    /// <summary>
    /// An expression representing an is-operation.
    /// </summary>
    /// <subcategory>expression</subcategory>
    public sealed class IsExpression : Expression
    {
        /// <summary>
        /// The type to check.
        /// </summary>
        private readonly TypeToken type;

        /// <summary>
        /// The value to check.
        /// </summary>
        private readonly Expression value;

        /// <summary>
        /// Initializes a new instance of the <see cref="IsExpression"/> class.
        /// </summary>
        /// <param name="tokens">
        /// The list of tokens that form the expression.
        /// </param>
        /// <param name="value">
        /// The value to check.
        /// </param>
        /// <param name="type">
        /// The type to check.
        /// </param>
        internal IsExpression(CsTokenList tokens, Expression value, LiteralExpression type)
            : base(ExpressionType.Is, tokens)
        {
            Param.AssertNotNull(tokens, "tokens");
            Param.AssertNotNull(value, "value");
            Param.AssertNotNull(type, "type");

            this.value = value;
            this.type = CodeParser.ExtractTypeTokenFromLiteralExpression(type);

            this.AddExpression(value);
            this.AddExpression(type);
        }

        /// <summary>
        /// Gets the type to check.
        /// </summary>
        [SuppressMessage("Microsoft.Naming", "CA1721:PropertyNamesShouldNotMatchGetMethods", Justification = "API has already been published and should not be changed.")]
        public TypeToken Type
        {
            get
            {
                return this.type;
            }
        }

        /// <summary>
        /// Gets the value to check.
        /// </summary>
        public Expression Value
        {
            get
            {
                return this.value;
            }
        }
    }
}