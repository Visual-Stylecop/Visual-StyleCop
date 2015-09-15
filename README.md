# Visual StyleCop

[![Join the chat at https://gitter.im/Visual-Stylecop/Visual-StyleCop](https://badges.gitter.im/Join%20Chat.svg)](https://gitter.im/Visual-Stylecop/Visual-StyleCop?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge)

Copy of StyleCop (Jason Allor, Andy Reeves and [Team](https://stylecop.codeplex.com/team/view)) from stylecop.codeplex.com for visual studio 2015/C#6 without ReSharper.

The purpose of this repository is to provide a solution for anyone that want to update to Visual Studio 2015 without change anything in previous solution. I think this should help you for the migration.

The wiki is in progress and sometimes you can browse to a broken link, please be patient.

<H3>Builds</H3>

|develop|master|
|:--:|:--:|
|[![Build status](https://ci.appveyor.com/api/projects/status/xgnf7ae4clny9f1j?svg=true)](https://ci.appveyor.com/project/ptittof57/visual-stylecop-6ywln)|[![Build status](https://ci.appveyor.com/api/projects/status/n09yi3f5vl0a7bfy/branch/master?svg=true)](https://ci.appveyor.com/project/ptittof57/visual-stylecop/branch/master)|

<H3>Code Coverage</H3>

|develop|master|
|:--:|:--:|
|[![codecov.io](http://codecov.io/github/Visual-Stylecop/Visual-StyleCop/coverage.svg?branch=develop)](http://codecov.io/github/Visual-Stylecop/Visual-StyleCop?branch=develop)|[![codecov.io](http://codecov.io/github/Visual-Stylecop/Visual-StyleCop/coverage.svg?branch=master)](http://codecov.io/github/Visual-Stylecop/Visual-StyleCop?branch=master)|

<H2>Publish from this repository</H2>

- <H4>Visual Studio Extension</H4>

    - Versions of Visual Studio supported : 2013, 2015
    - Current published version : 4.7.54 on [Visual Studio Extension](https://visualstudiogallery.msdn.microsoft.com/cac2a05b-6eb6-4fa2-95b9-1f8d011e6cae)
    - Direct VSIX Download : [Visual StyleCop VSIX](https://visualstudiogallery.msdn.microsoft.com/cac2a05b-6eb6-4fa2-95b9-1f8d011e6cae/file/173746/9/VSIXProject.vsix)

- <H4>MSBuild integration</H4>

    This package is based on [Nuget - StyleCop.MSBuild](https://www.nuget.org/packages/StyleCop.MSBuild/) with StyleCop libraries for C#6.
    - Current version: 4.7.54 [Nuget - Visual-StyleCop.MSBuild](https://www.nuget.org/packages/Visual-StyleCop.MSBuild)

<H2>Roadmap / Futur of StyleCop</H2>

I think the futur of StyleCop for Roslyn should be [SyleCopAnalyzers](https://github.com/DotNetAnalyzers/StyleCopAnalyzers) I encourage you to use it for new projects based on VS2015/Roslyn.

<H2>Resharper</H2>

StyleCop for ReSharper is not supported in this repository. For more information please check [StyleCop - Resharper](https://github.com/StyleCop/StyleCop)

<H2>Contribution</H2>

I will accept only pull request for bugfix and update for VS2015/C#6 that are not implemented yet, the purpose of this repository.
Please don't add rules or new features.

<H2>GitHub Pages</H2>

- [GitHub Pages](http://Visual-StyleCop.github.io/Visual-StyleCop/)

<H2>StyleCop Rules</H2>

- You can find help on rules in [wiki](https://github.com/Visual-Stylecop/Visual-StyleCop/wiki)
