# The version number for this build
$versionNumber = $Env:APPVEYOR_BUILD_VERSION

# Increment vsix version only if release else this is a pull request or develop branch
if ($versionNumber -notmatch "-")
{
    # Increment vsix version
    Vsix-IncrementVsixVersion -versionType "revision" | Vsix-UpdateBuildVersion
}

# Restore nuget dependency for codecov
nuget restore Project/StyleCop.sln