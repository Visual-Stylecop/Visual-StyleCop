// --------------------------------------------------------------------------------------------------------------------
// <copyright file="CheckedStatement.cs" company="http://stylecop.codeplex.com">
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
//   A checked-statement.
// </summary>
// --------------------------------------------------------------------------------------------------------------------
namespace StyleCop.CSharp
{
    /// <summary>
    /// A checked-statement.
    /// </summary>
    /// <subcategory>statement</subcategory>
    public sealed class CheckedStatement : Statement
    {
        /// <summary>
        /// The statement embedded within this checked statement, if any.
        /// </summary>
        private readonly BlockStatement embeddedStatement;

        /// <summary>
        /// Initializes a new instance of the <see cref="CheckedStatement"/> class.
        /// </summary>
        /// <param name="tokens">
        /// The list of tokens that form the statement.
        /// </param>
        /// <param name="embeddedStatement">
        /// The block statement embedded within this checked statement, if any.
        /// </param>
        internal CheckedStatement(CsTokenList tokens, BlockStatement embeddedStatement)
            : base(StatementType.Checked, tokens)
        {
            Param.AssertNotNull(tokens, "tokens");
            Param.AssertNotNull(embeddedStatement, "embeddedStatement");

            this.embeddedStatement = embeddedStatement;
            this.AddStatement(embeddedStatement);
        }

        /// <summary>
        /// Gets the block statement embedded within this checked statement, if any.
        /// </summary>
        public BlockStatement EmbeddedStatement
        {
            get
            {
                return this.embeddedStatement;
            }
        }
    }
}