// --------------------------------------------------------------------------------------------------------------------
// <copyright file="GenericTypeParameter.cs" company="http://stylecop.codeplex.com">
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
//   Describes parameter within a generic type token.
// </summary>
// --------------------------------------------------------------------------------------------------------------------
namespace StyleCop.CSharp
{
    /// <summary>
    /// Describes parameter within a generic type token.
    /// </summary>
    public sealed class GenericTypeParameter
    {
        /// <summary>
        /// Optional modifiers on the parameter;
        /// </summary>
        private readonly ParameterModifiers modifiers = ParameterModifiers.None;

        /// <summary>
        /// The generic type parameter.
        /// </summary>
        private readonly TypeToken type;

        /// <summary>
        /// Initializes a new instance of the <see cref="GenericTypeParameter"/> class.
        /// </summary>
        /// <param name="type">
        /// The generic type parameter.
        /// </param>
        /// <param name="modifiers">
        /// Optional modifiers.
        /// </param>
        internal GenericTypeParameter(TypeToken type, ParameterModifiers modifiers)
        {
            Param.AssertNotNull(type, "type");
            Param.Ignore(modifiers);

            this.type = type;
            this.modifiers = modifiers;
        }

        /// <summary>
        /// Gets the optional modifiers on the parameter;
        /// </summary>
        public ParameterModifiers Modifiers
        {
            get
            {
                return this.modifiers;
            }
        }

        /// <summary>
        /// Gets the generic type parameter.
        /// </summary>
        public TypeToken Type
        {
            get
            {
                return this.type;
            }
        }
    }
}