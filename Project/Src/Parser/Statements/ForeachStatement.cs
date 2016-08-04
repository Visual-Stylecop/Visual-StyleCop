// --------------------------------------------------------------------------------------------------------------------
// <copyright file="ForeachStatement.cs" company="http://stylecop.codeplex.com">
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
//   A foreach statement.
// </summary>
// --------------------------------------------------------------------------------------------------------------------
namespace StyleCop.CSharp
{
    /// <summary>
    /// A foreach statement.
    /// </summary>
    /// <subcategory>statement</subcategory>
    public sealed class ForeachStatement : Statement
    {
        /// <summary>
        /// The item being iterated over.
        /// </summary>
        private readonly Expression item;

        /// <summary>
        /// The variable declared in the foreach statement declaration.
        /// </summary>
        private readonly VariableDeclarationExpression variable;

        /// <summary>
        /// The statement that is embedded within this foreach statement.
        /// </summary>
        private Statement embeddedStatement;

        /// <summary>
        /// Initializes a new instance of the <see cref="ForeachStatement"/> class.
        /// </summary>
        /// <param name="tokens">
        /// The list of tokens that form the statement.
        /// </param>
        /// <param name="variable">
        /// The variable declared in for each statement declaration.
        /// </param>
        /// <param name="item">
        /// The item being iterated over.
        /// </param>
        internal ForeachStatement(CsTokenList tokens, VariableDeclarationExpression variable, Expression item)
            : base(StatementType.Foreach, tokens)
        {
            Param.AssertNotNull(tokens, "tokens");
            Param.AssertNotNull(variable, "variable");
            Param.AssertNotNull(item, "item");

            this.variable = variable;
            this.item = item;

            this.AddExpression(variable);
            this.AddExpression(item);
        }

        /// <summary>
        /// Gets the statement that is embedded within this foreach statement.
        /// </summary>
        public Statement EmbeddedStatement
        {
            get
            {
                return this.embeddedStatement;
            }

            internal set
            {
                Param.AssertNotNull(value, "EmbeddedStatement");
                this.embeddedStatement = value;
                this.AddStatement(this.embeddedStatement);
            }
        }

        /// <summary>
        /// Gets the item being iterated over.
        /// </summary>
        public Expression Item
        {
            get
            {
                return this.item;
            }
        }

        /// <summary>
        /// Gets the variable declared in the foreach statement declaration.
        /// </summary>
        public VariableDeclarationExpression Variable
        {
            get
            {
                return this.variable;
            }
        }
    }
}