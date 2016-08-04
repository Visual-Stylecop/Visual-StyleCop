// --------------------------------------------------------------------------------------------------------------------
// <copyright file="Constants.cs" company="http://stylecop.codeplex.com">
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
//   Defines the core constants.
// </summary>
// --------------------------------------------------------------------------------------------------------------------
namespace StyleCop
{
    /// <summary>
    /// Defines the core constants.
    /// </summary>
    public static class Constants
    {
        /// <summary>
        /// Name of the Product i.e. StyleCop.
        /// </summary>
        public const string ProductName = "StyleCop";

        /// <summary>
        /// Name of the Product with the version i.e. StyleCop (4.7.x.y).
        /// </summary>
        public const string ProductNameWithVersion = ProductName + " (" + ProductVersionFull + ")";

        /// <summary>
        /// The full version number of the product a.b.c.d.
        /// </summary>
        public const string ProductVersionFull = "4.7.59.0";

        /// <summary>
        /// The Major.Minor version number of the product a.b.
        /// </summary>
        public const string ProductVersionMajorMinor = "4.7";

        /// <summary>
        /// The name of the StyleCop assembly.
        /// </summary>
        public const string StyleCopAssemblyName = ProductName + ".dll";

        /// <summary>
        /// Name of the Vendor i.e. https://github.com/Visual-Stylecop/Visual-StyleCop.
        /// </summary>
        public const string Vendor = "https://github.com/Visual-Stylecop/Visual-StyleCop";

        /// <summary>
        /// The Plugin description.
        /// </summary>
        public const string Description = "R# plugin for StyleCop. This plugin allows StyleCop to be run as you type, generating real-time syntax highlighting of violations. It also provides a series of Quick-Fixes and Code Clean Up Modules to help automatically fix violations. See https://github.com/Visual-Stylecop/Visual-StyleCop for more info.";
    }
}