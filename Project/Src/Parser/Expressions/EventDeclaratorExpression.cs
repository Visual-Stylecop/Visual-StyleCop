﻿// --------------------------------------------------------------------------------------------------------------------
// <copyright file="EventDeclaratorExpression.cs" company="http://stylecop.codeplex.com">
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
//   A single event declarator within an event.
// </summary>
// --------------------------------------------------------------------------------------------------------------------
namespace StyleCop.CSharp
{
    /// <summary>
    /// A single event declarator within an event.
    /// </summary>
    /// <subcategory>expression</subcategory>
    public sealed class EventDeclaratorExpression : Expression
    {
        /// <summary>
        /// The identifier of the event.
        /// </summary>
        private readonly LiteralExpression identifier;

        /// <summary>
        /// The initialization expression for the event.
        /// </summary>
        private readonly Expression initializer;

        /// <summary>
        /// Initializes a new instance of the <see cref="EventDeclaratorExpression"/> class.
        /// </summary>
        /// <param name="tokens">
        /// The list of tokens that form the statement.
        /// </param>
        /// <param name="identifier">
        /// The identifier name of the event.
        /// </param>
        /// <param name="initializer">
        /// The initialization expression for the event.
        /// </param>
        internal EventDeclaratorExpression(CsTokenList tokens, LiteralExpression identifier, Expression initializer)
            : base(ExpressionType.EventDeclarator, tokens)
        {
            Param.AssertNotNull(tokens, "tokens");
            Param.AssertNotNull(identifier, "identifier");
            Param.Ignore(initializer);

            this.identifier = identifier;
            this.initializer = initializer;

            this.AddExpression(identifier);

            if (initializer != null)
            {
                this.AddExpression(initializer);
            }
        }

        /// <summary>
        /// Gets the identifier name of the event.
        /// </summary>
        public LiteralExpression Identifier
        {
            get
            {
                return this.identifier;
            }
        }

        /// <summary>
        /// Gets the initialization statement for the event.
        /// </summary>
        public Expression Initializer
        {
            get
            {
                return this.initializer;
            }
        }

        /// <summary>
        /// Gets the parent event.
        /// </summary>
        public Event ParentEvent { get; internal set; }
    }
}