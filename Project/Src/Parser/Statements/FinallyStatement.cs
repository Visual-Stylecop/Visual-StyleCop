// --------------------------------------------------------------------------------------------------------------------
// <copyright file="FinallyStatement.cs" company="http://stylecop.codeplex.com">
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
//   A finally-statement.
// </summary>
// --------------------------------------------------------------------------------------------------------------------
namespace StyleCop.CSharp
{
    /// <summary>
    /// A finally-statement.
    /// </summary>
    /// <subcategory>statement</subcategory>
    public sealed class FinallyStatement : Statement
    {
        /// <summary>
        /// The statement embedded within the catch-statement.
        /// </summary>
        private readonly BlockStatement embeddedStatement;

        /// <summary>
        /// The try-statement that this finally-statement is attached to.
        /// </summary>
        private readonly TryStatement tryStatement;

        /// <summary>
        /// Initializes a new instance of the <see cref="FinallyStatement"/> class.
        /// </summary>
        /// <param name="tokens">
        /// The list of tokens that form the statement.
        /// </param>
        /// <param name="tryStatement">
        /// The try-statement that this finally-statement is embedded to.
        /// </param>
        /// <param name="embeddedStatement">
        /// The statement embedded within the finally-statement.
        /// </param>
        internal FinallyStatement(CsTokenList tokens, TryStatement tryStatement, BlockStatement embeddedStatement)
            : base(StatementType.Finally, tokens)
        {
            Param.AssertNotNull(tokens, "tokens");
            Param.AssertNotNull(tryStatement, "tryStatement");
            Param.AssertNotNull(embeddedStatement, "embeddedStatement");

            this.tryStatement = tryStatement;
            this.embeddedStatement = embeddedStatement;

            this.AddStatement(embeddedStatement);
        }

        /// <summary>
        /// Gets the statement embedded within the finally-statement.
        /// </summary>
        public BlockStatement EmbeddedStatement
        {
            get
            {
                return this.embeddedStatement;
            }
        }

        /// <summary>
        /// Gets the try-statement that this finally-statement is attached to.
        /// </summary>
        public TryStatement TryStatement
        {
            get
            {
                return this.tryStatement;
            }
        }
    }
}