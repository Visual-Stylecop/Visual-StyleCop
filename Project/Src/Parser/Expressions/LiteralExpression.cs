// --------------------------------------------------------------------------------------------------------------------
// <copyright file="LiteralExpression.cs" company="http://stylecop.codeplex.com">
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
//   An expression representing a literal.
// </summary>
// --------------------------------------------------------------------------------------------------------------------
namespace StyleCop.CSharp
{
    /// <summary>
    /// An expression representing a literal.
    /// </summary>
    /// <subcategory>expression</subcategory>
    public sealed class LiteralExpression : Expression
    {
        /// <summary>
        /// The literal token node.
        /// </summary>
        private readonly Node<CsToken> tokenNode;

        /// <summary>
        /// Initializes a new instance of the <see cref="LiteralExpression"/> class.
        /// </summary>
        /// <param name="tokens">
        /// The list of tokens that form the expression.
        /// </param>
        /// <param name="tokenNode">
        /// The literal token node.
        /// </param>
        internal LiteralExpression(CsTokenList tokens, Node<CsToken> tokenNode)
            : base(ExpressionType.Literal, tokens)
        {
            Param.AssertNotNull(tokens, "tokens");
            Param.AssertNotNull(tokenNode, "token");

            this.tokenNode = tokenNode;
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="LiteralExpression"/> class.
        /// </summary>
        /// <param name="masterList">
        /// The master token list for the document containing the expression.
        /// </param>
        /// <param name="tokenNode">
        /// The literal token represented by the expression.
        /// </param>
        internal LiteralExpression(MasterList<CsToken> masterList, Node<CsToken> tokenNode)
            : this(new CsTokenList(masterList, tokenNode, tokenNode), tokenNode)
        {
            Param.AssertNotNull(masterList, "masterList");
            Param.AssertNotNull(tokenNode, "tokenNode");
        }

        /// <summary>
        /// Gets the literal token.
        /// </summary>
        public CsToken Token
        {
            get
            {
                return this.tokenNode.Value;
            }
        }

        /// <summary>
        /// Gets the literal token node.
        /// </summary>
        public Node<CsToken> TokenNode
        {
            get
            {
                return this.tokenNode;
            }
        }

        /// <summary>
        /// Gets the contents of the expression as a string.
        /// </summary>
        /// <returns>Returns the string.</returns>
        public override string ToString()
        {
            return CodeLexer.DecodeEscapedText(this.tokenNode.Value.Text, false);
        }
    }
}