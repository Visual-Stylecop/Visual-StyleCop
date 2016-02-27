git config --global core.autocrlf true

# Remote Desktop information
iex ((new-object net.webclient).DownloadString('https://raw.githubusercontent.com/appveyor/ci/master/scripts/enable-rdp.ps1'))

# Import extension to update Vsix version
Import-Module ./Build/Extensions/vsix.ps1 | iex
