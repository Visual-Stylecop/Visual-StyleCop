# =========================================================================================================================
# Initialize tests
# =========================================================================================================================

# Build configuration
$configuration= $Env:CONFIGURATION

# Gets MSTest path (VS2015)
$fs = New-Object -ComObject Scripting.FileSystemObject
$f = $fs.GetFile("C:\Program Files (x86)\Microsoft Visual Studio 14.0\Common7\IDE\mstest.exe")
$mstestPath = $f.shortpath

$env:Path = "C:\Python34;C:\Python34\Scripts;" + $env:Path
$codeCovPath = "Project\packages\OpenCover.4.6.519\tools\OpenCover.Console.exe"

# =========================================================================================================================
# CodeCov Process
# =========================================================================================================================

# Run CodeCov for VSPackageTest
$targetArgs = "/testcontainer:.\Project\Test\VSPackageUnitTest\bin\$configuration\VSPackageUnitTest.dll /resultsfile:.\VSPackageUnitTest.trx"
$VSPackageTest = @" 
$codeCovPath -register:visual-stylecop "-target:$mstestPath" "-targetargs:$targetArgs" "-filter:+[StyleCop.VSPackage*]*" -excludebyattribute:*.ExcludeFromCodeCoverage*  -output:.\StyleCop.VSPackage_coverage.xml -log:Off
"@
Invoke-Expression $VSPackageTest

# Run CodeCov For CSharpParser
$targetArgs = "/testcontainer:.\Project\Test\CSharpParserTest\bin\$configuration\CSharpParserTest.dll /resultsfile:.\CSharpParserTest.trx"
$CSharpParserTest = @" 
$codeCovPath -register:visual-stylecop "-target:$mstestPath" "-targetargs:$targetArgs" "-filter:+[StyleCop.CSharp*]*" -excludebyattribute:*.ExcludeFromCodeCoverage* -hideskipped:All -output:.\StyleCop.CSharp_coverage.xml -log:Off
"@
Invoke-Expression $CSharpParserTest

# Run CodeCov for CSharpAnalyzers
$targetArgs = "/testcontainer:.\Project\Test\CSharpAnalyzersTest\bin\$configuration\CSharpAnalyzersTest.dll /resultsfile:.\CSharpAnalyzersTest.trx"
$CSharpAnalyzers = @" 
$codeCovPath -register:visual-stylecop "-target:$mstestPath" "-targetargs:$targetArgs" "-filter:+[StyleCop.CSharp.Rules*]*" -excludebyattribute:*.ExcludeFromCodeCoverage* -hideskipped:All -output:.\StyleCop.CSharp.Rules_coverage.xml -log:Off
"@
Invoke-Expression $CSharpAnalyzers

# =========================================================================================================================
# Upload test results to AppVeyor
# =========================================================================================================================

$wc = New-Object 'System.Net.WebClient'
$wc.UploadFile("https://ci.appveyor.com/api/testresults/mstest/$($env:APPVEYOR_JOB_ID)", (Resolve-Path ".\VSPackageUnitTest.trx"))
$wc.UploadFile("https://ci.appveyor.com/api/testresults/mstest/$($env:APPVEYOR_JOB_ID)", (Resolve-Path ".\CSharpAnalyzersTest.trx"))
$wc.UploadFile("https://ci.appveyor.com/api/testresults/mstest/$($env:APPVEYOR_JOB_ID)", (Resolve-Path ".\CSharpParserTest.trx"))
# $wc.UploadFile("https://ci.appveyor.com/api/testresults/mstest/$($env:APPVEYOR_JOB_ID)", (Resolve-Path ".\ObjectBasedEnvironmentTest.trx"))

# =========================================================================================================================
# CodeCov Upload, disable gcov to avoid file not found exception and build fail
# =========================================================================================================================

# Install missing package
Invoke-Expression "pip -q install codecov"

# Upload CodeCov results
Invoke-Expression @"
codecov -f ".\StyleCop.CSharp_coverage.xml",".\StyleCop.CSharp.Rules_coverage.xml",".\StyleCop.VSPackage_coverage.xml" -X gcov
"@

# =========================================================================================================================
# Check MsTest result by script
# =========================================================================================================================

# VSPackageUnitTest
$results = [xml](GC .\VSPackageUnitTest.trx)
$outcome = $results.TestRun.ResultSummary.outcome
if($outcome -eq "Failed")
{
    Write-Host "VSPackageUnitTest Failed" -ForegroundColor "Red" -BackgroundColor "Black"
  $LastExitCode = 1
  $host.SetShouldExit($LastExitCode)
} 

# ObjectBasedEnvironmentTest
# $results = [xml](GC .\ObjectBasedEnvironmentTest.trx)
# $outcome = $results.TestRun.ResultSummary.outcome
# if($outcome -eq "Failed")
# {
#  Write-Host "ObjectBasedEnvironmentTest Failed" -ForegroundColor "Red" -BackgroundColor "Black"
#  $LastExitCode = 1
#  $host.SetShouldExit($LastExitCode)
# } 

# CSharpAnalyzersTest
$results = [xml](GC .\CSharpAnalyzersTest.trx)
$outcome = $results.TestRun.ResultSummary.outcome
if($outcome -eq "Failed")
{
  Write-Host "CSharpAnalyzersTest Failed" -ForegroundColor "Red" -BackgroundColor "Black"
  $LastExitCode = 1
  $host.SetShouldExit($LastExitCode)
} 

# CSharpParserTest
$results = [xml](GC .\CSharpParserTest.trx)
$outcome = $results.TestRun.ResultSummary.outcome
if($outcome -eq "Failed")
{
  Write-Host "CSharpParserTest Failed" -ForegroundColor "Red" -BackgroundColor "Black"
  $LastExitCode = 1
  $host.SetShouldExit($LastExitCode)
} 
