# The version number for this build
$versionNumber = $Env:APPVEYOR_BUILD_VERSION

# Build configuration
$configuration= $Env:CONFIGURATION

# Build nuget package only if release else this is a pull request or develop branch
if ($versionNumber -notmatch "-")
{
    New-Item Build/Nuget/VisualStyleCop -type directory
    New-Item Build/Nuget/VisualStyleCop/de-DE -type directory
    New-Item Build/Nuget/VisualStyleCop/en-GB -type directory
    New-Item Build/Nuget/VisualStyleCop/fr-FR -type directory
    New-Item Build/Nuget/VisualStyleCop/pl-PL -type directory
    New-Item Build/Nuget/VisualStyleCop/pt-BR -type directory
    New-Item Build/Nuget/VisualStyleCop/ru-RU -type directory

    Copy item to build package
    Copy-Item Project/Src/StyleCop/bin/$configuration/StyleCop.Targets -Destination Build/Nuget/VisualStyleCop/StyleCop.Targets
    Copy-Item Project/Src/StyleCop/bin/$configuration/StyleCop.dll -Destination Build/Nuget/VisualStyleCop/StyleCop.dll 
    Copy-Item Project/Src/Analyzers/bin/$configuration/StyleCop.CSharp.dll -Destination Build/Nuget/VisualStyleCop/StyleCop.CSharp.dll
    Copy-Item Project/Src/Analyzers/bin/$configuration/StyleCop.CSharp.Rules.dll -Destination Build/Nuget/VisualStyleCop/StyleCop.CSharp.Rules.dll
    Copy-Item Project/Src/StyleCop/bin/$configuration/CustomDictionary.en-GB.xml -Destination Build/Nuget/VisualStyleCop/CustomDictionary.en-GB.xml
    Copy-Item Project/Src/StyleCop/bin/$configuration/CustomDictionary.en-US.xml -Destination Build/Nuget/VisualStyleCop/CustomDictionary.en-US.xml
    Copy-Item Project/Src/StyleCop/bin/$configuration/CustomDictionary.xml -Destination Build/Nuget/VisualStyleCop/CustomDictionary.xml
    Copy-Item Project/Src/StyleCop/bin/$configuration/mssp7en.dll -Destination Build/Nuget/VisualStyleCop/mssp7en.dll
    Copy-Item Project/Src/StyleCop/bin/$configuration/mssp7en.lex -Destination Build/Nuget/VisualStyleCop/mssp7en.lex
    Copy-Item Project/Src/VSIXProject/bin/$configuration/Settings.StyleCop -Destination Build/Nuget/VisualStyleCop/Settings.StyleCop
    Copy-Item Project/Src/SettingsEditor/bin/$configuration/StyleCopSettingsEditor.exe -Destination Build/Nuget/VisualStyleCop/StyleCopSettingsEditor.exe

    Copy-Item Project/Src/Analyzers/bin/$configuration/de-DE/StyleCop.CSharp.Rules.resources.dll -Destination Build/Nuget/VisualStyleCop/de-DE/StyleCop.CSharp.Rules.resources.dll
    Copy-Item Project/Src/Analyzers/bin/$configuration/en-GB/StyleCop.CSharp.Rules.resources.dll -Destination Build/Nuget/VisualStyleCop/en-GB/StyleCop.CSharp.Rules.resources.dll
    Copy-Item Project/Src/Analyzers/bin/$configuration/fr-FR/StyleCop.CSharp.Rules.resources.dll -Destination Build/Nuget/VisualStyleCop/fr-FR/StyleCop.CSharp.Rules.resources.dll
    Copy-Item Project/Src/Analyzers/bin/$configuration/pl-PL/StyleCop.CSharp.Rules.resources.dll -Destination Build/Nuget/VisualStyleCop/pl-PL/StyleCop.CSharp.Rules.resources.dll
    Copy-Item Project/Src/Analyzers/bin/$configuration/pt-BR/StyleCop.CSharp.Rules.resources.dll -Destination Build/Nuget/VisualStyleCop/pt-BR/StyleCop.CSharp.Rules.resources.dll
    Copy-Item Project/Src/Analyzers/bin/$configuration/ru-RU/StyleCop.CSharp.Rules.resources.dll -Destination Build/Nuget/VisualStyleCop/ru-RU/StyleCop.CSharp.Rules.resources.dll

    Tools/NuGet/NuGet.exe pack Build/StyleCop.nuspec -Version $env:appveyor_build_version -NoDefaultExcludes
}