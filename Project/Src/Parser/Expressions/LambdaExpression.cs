// --------------------------------------------------------------------------------------------------------------------
// <copyright file="LambdaExpression.cs" company="http://stylecop.codeplex.com">
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
//   A lambda expression.
// </summary>
// --------------------------------------------------------------------------------------------------------------------
namespace StyleCop.CSharp
{
    /// <summary>
    /// A lambda expression.
    /// </summary>
    public sealed class LambdaExpression : ExpressionWithParameters
    {
        /// <summary>
        /// The body of the lambda expression.
        /// </summary>
        private CodeUnit anonymousFunctionBody;

        /// <summary>
        /// Is this lambda expression sync or async.
        /// </summary>
        private bool asyncExpression;

        /// <summary>
        /// Initializes a new instance of the <see cref="LambdaExpression"/> class.
        /// </summary>
        internal LambdaExpression()
            : base(ExpressionType.Lambda)
        {
        }

        /// <summary>
        /// Gets the body of the lambda expression, either an expression or a statement.
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

        /// <summary>
        /// Gets a value indicating whether this Lambda expression is async or sync.
        /// </summary>
        public bool Async
        {
            get
            {
                return this.asyncExpression;
            }

            internal set
            {
                Param.AssertNotNull(value, "Async");
                this.asyncExpression = value;
            }
        }
    }
}