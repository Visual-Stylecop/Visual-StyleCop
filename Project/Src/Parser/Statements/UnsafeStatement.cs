// --------------------------------------------------------------------------------------------------------------------
// <copyright file="UnsafeStatement.cs" company="http://stylecop.codeplex.com">
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
//   An unsafe-statement.
// </summary>
// --------------------------------------------------------------------------------------------------------------------
namespace StyleCop.CSharp
{
    /// <summary>
    /// An unsafe-statement.
    /// </summary>
    /// <subcategory>statement</subcategory>
    public sealed class UnsafeStatement : Statement
    {
        /// <summary>
        /// The block embedded to the unsafe-statement.
        /// </summary>
        private readonly BlockStatement embeddedStatement;

        /// <summary>
        /// Initializes a new instance of the <see cref="UnsafeStatement"/> class.
        /// </summary>
        /// <param name="tokens">
        /// The list of tokens that form the statement.
        /// </param>
        /// <param name="embeddedStatement">
        /// The statement embedded within this try-statement.
        /// </param>
        internal UnsafeStatement(CsTokenList tokens, BlockStatement embeddedStatement)
            : base(StatementType.Unsafe, tokens)
        {
            Param.AssertNotNull(tokens, "tokens");
            Param.AssertNotNull(embeddedStatement, "embeddedStatement");

            this.embeddedStatement = embeddedStatement;
            this.AddStatement(embeddedStatement);
        }

        /// <summary>
        /// Gets the statement embedded within this unsafe-statement.
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