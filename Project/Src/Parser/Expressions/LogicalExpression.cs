// --------------------------------------------------------------------------------------------------------------------
// <copyright file="LogicalExpression.cs" company="http://stylecop.codeplex.com">
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
//   An expression representing a logical operation.
// </summary>
// --------------------------------------------------------------------------------------------------------------------
namespace StyleCop.CSharp
{
    using System.Diagnostics.CodeAnalysis;

    /// <summary>
    /// An expression representing a logical operation.
    /// </summary>
    /// <subcategory>expression</subcategory>
    public sealed class LogicalExpression : Expression
    {
        /// <summary>
        /// The left hand size of the expression.
        /// </summary>
        private readonly Expression leftHandSide;

        /// <summary>
        /// The type of operation being performed.
        /// </summary>
        private readonly Operator operatorType;

        /// <summary>
        /// The right hand size of the expression.
        /// </summary>
        private readonly Expression rightHandSide;

        /// <summary>
        /// Initializes a new instance of the <see cref="LogicalExpression"/> class.
        /// </summary>
        /// <param name="tokens">
        /// The list of tokens that form the expression.
        /// </param>
        /// <param name="operatorType">
        /// The type of operation being performed.
        /// </param>
        /// <param name="leftHandSide">
        /// The left hand side of the expression.
        /// </param>
        /// <param name="rightHandSide">
        /// The right hand side of the expression.
        /// </param>
        internal LogicalExpression(CsTokenList tokens, Operator operatorType, Expression leftHandSide, Expression rightHandSide)
            : base(ExpressionType.Logical, tokens)
        {
            Param.AssertNotNull(tokens, "tokens");
            Param.Ignore(operatorType);
            Param.AssertNotNull(leftHandSide, "leftHandSide");
            Param.AssertNotNull(rightHandSide, "rightHandSide");

            this.operatorType = operatorType;
            this.leftHandSide = leftHandSide;
            this.rightHandSide = rightHandSide;

            this.AddExpression(leftHandSide);
            this.AddExpression(rightHandSide);
        }

        /// <summary>
        /// The various logical operator types.
        /// </summary>
        /// <subcategory>expression</subcategory>
        [SuppressMessage("Microsoft.Design", "CA1034:NestedTypesShouldNotBeVisible", Justification = "Leave nested to avoid changing external interface.")]
        [SuppressMessage("Microsoft.Naming", "CA1716:IdentifiersShouldNotMatchKeywords", Justification = "Describes a C# operator type")]
        public enum Operator
        {
            /// <summary>
            /// The % operator.
            /// </summary>
            And,

            /// <summary>
            /// The | operator.
            /// </summary>
            Or,

            /// <summary>
            /// The ^ operator.
            /// </summary>
            Xor
        }

        /// <summary>
        /// Gets the left hand side of the expression.
        /// </summary>
        public Expression LeftHandSide
        {
            get
            {
                return this.leftHandSide;
            }
        }

        /// <summary>
        /// Gets the type of operation being performed.
        /// </summary>
        public Operator OperatorType
        {
            get
            {
                return this.operatorType;
            }
        }

        /// <summary>
        /// Gets the right hand side of the expression.
        /// </summary>
        public Expression RightHandSide
        {
            get
            {
                return this.rightHandSide;
            }
        }
    }
}