// --------------------------------------------------------------------------------------------------------------------
// <copyright file="BodiedExpression.cs" company="http://stylecop.codeplex.com">
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
//   A bodied expression introduced by C# 6.
// </summary>
// --------------------------------------------------------------------------------------------------------------------
namespace StyleCop.CSharp
{
    /// <summary>
    /// A bodied expression.
    /// </summary>
    public sealed class BodiedExpression : ExpressionWithParameters
    {
        /// <summary>
        /// The body of the bodied expression.
        /// </summary>
        private CodeUnit anonymousFunctionBody;

        /// <summary>
        /// Initializes a new instance of the <see cref="BodiedExpression"/> class.
        /// </summary>
        internal BodiedExpression()
            : base(ExpressionType.Bodied)
        {
        }

        /// <summary>
        /// Gets the body of the bodied expression, either an expression or a statement.
        /// </summary>
        public CodeUnit AnonymousFunctionBody
        {
            get
            {
                return this.anonymousFunctionBody;
            }

            internal set
            {
                Param.AssertNotNull(value, "AnonymousFunctionBody");
                this.anonymousFunctionBody = value;

                Statement bodyStatement = this.anonymousFunctionBody as Statement;
                if (bodyStatement != null)
                {
                    this.AddStatement(bodyStatement);
                }
                else
                {
                    Expression bodyExpression = (Expression)this.anonymousFunctionBody;

                    this.AddExpression(bodyExpression);
                }
            }
        }
    }
}