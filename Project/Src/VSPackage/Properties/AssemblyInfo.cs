﻿//-----------------------------------------------------------------------
// <copyright file="AssemblyInfo.cs" company="http://stylecop.codeplex.com">
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
//-----------------------------------------------------------------------
using System;
using System.Diagnostics.CodeAnalysis;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// General Information about an assembly is controlled through the following
// set of attributes. Change these attribute values to modify the information
// associated with an assembly.
[assembly: AssemblyTitle("StyleCop for Visual Studio")]
[assembly: AssemblyDescription("StyleCop package for Visual Studio")]
[assembly: AssemblyConfiguration("")]
[assembly: AssemblyCompany("")]
[assembly: AssemblyProduct("StyleCop for Visual Studio")]
[assembly: AssemblyCopyright("MS-PL")]
[assembly: AssemblyTrademark("")]
[assembly: AssemblyCulture("")]
[assembly: CLSCompliant(false)]
[assembly: ComVisible(false)]
[assembly: NeutralResourcesLanguageAttribute("en-US")]

// Suppress message about assembly not having a strong name. This is known since assemblies are delay-signed.
[assembly: SuppressMessage("Microsoft.Design", "CA2210:AssembliesShouldHaveValidStrongNames", Justification = "This assembly is delay signed.")]

// Suppress the spelling check of StyleCop
[assembly: SuppressMessage("Microsoft.Naming", "CA1703:ResourceStringsShouldBeSpelledCorrectly", MessageId = "stylecop", Scope = "resource", Target = "StyleCop.VisualStudio.VSPackage.resources", Justification = "StyleCop is spelled correctly.")]

// Suppress the spelling check of CodePlex
[assembly: SuppressMessage("Microsoft.Naming", "CA1703:ResourceStringsShouldBeSpelledCorrectly", MessageId = "codeplex", Scope = "resource", Target = "StyleCop.VisualStudio.VSPackage.resources", Justification = "Codeplex is spelled correctly.")]

[assembly: InternalsVisibleTo("VSPackageUnitTest,PublicKey=0024000004800000940000000602000000240000525341310004000001000100b5824b3bbdbf76d14939a57e0c9cc6b5715b892c6dcdcdb3d3490b07531e6ea4f65b50d87fe55d72831e03841cc1c086b7c49d6ceaf59f923d6bdfb6e8382adfc9b99c627c7e55dc2463c40cf1f162bc71b9930f110e3f59d93e6c6946c7cf7c9947b86974f11187534b8057683012f59cde50b6b4752eb247ecf4b4c8de23ce")]