// --------------------------------------------------------------------------------------------------------------------
// <copyright file="QueryFromClause.cs" company="http://stylecop.codeplex.com">
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
//   Describes a from clause in a query expression.
// </summary>
// --------------------------------------------------------------------------------------------------------------------
namespace StyleCop.CSharp
{
    /// <summary>
    /// Describes a from clause in a query expression.
    /// </summary>
    public sealed class QueryFromClause : QueryClauseWithExpression
    {
        /// <summary>
        /// The variable that ranges over the values in the query result.
        /// </summary>
        private readonly Variable rangeVariable;

        /// <summary>
        /// Initializes a new instance of the <see cref="QueryFromClause"/> class.
        /// </summary>
        /// <param name="tokens">
        /// The list of tokens that form the clause.
        /// </param>
        /// <param name="rangeVariable">
        /// The variable that ranges over the values in the query result.
        /// </param>
        /// <param name="expression">
        /// The range expression.
        /// </param>
        internal QueryFromClause(CsTokenList tokens, Variable rangeVariable, Expression expression)
            : base(QueryClauseType.From, tokens, expression)
        {
            Param.AssertNotNull(tokens, "tokens");
            Param.AssertNotNull(rangeVariable, "rangeVariable");
            Param.AssertNotNull(expression, "expression");

            this.rangeVariable = rangeVariable;
        }

        /// <summary>
        /// Gets the variable that ranges over the values in the query result.
        /// </summary>
        public Variable RangeVariable
        {
            get
            {
                return this.rangeVariable;
            }
        }
    }
}