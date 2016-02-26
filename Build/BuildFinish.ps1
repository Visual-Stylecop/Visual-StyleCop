# The version number for this build
$versionNumber = $Env:APPVEYOR_BUILD_VERSION

# Build configuration
$configuration= $Env:CONFIGURATION

# Push artifact only if release else this is a pull request or develop branch
if ($versionNumber -notmatch "-")
{
	Push-AppveyorArtifact Project/Src/VSIXProject/bin/$configuration/VSIXProject.vsix -FileName VSIXPackage.vsix -   DeploymentName Visual-StyleCop.vsix
	Push-AppveyorArtifact Visual-StyleCop.MSBuild.$versionNumber.nupkg -FileName Visual-StyleCop.MSBuild.$versionNumber.nupkg -DeploymentName Visual-StyleCop.MSBuild.$versionNumber.nupkg
}

# RDP Debug
$blockRdp = $true; iex ((new-object net.webclient).DownloadString('https://raw.githubusercontent.com/appveyor/ci/master/scripts/enable-rdp.ps1'))