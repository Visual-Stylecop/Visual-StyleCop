# =========================================================================================================================
# Run MSTest Process
# =========================================================================================================================

# Build configuration
$configuration= $Env:CONFIGURATION

# Gets MSTest path (VS2015)
$fs = New-Object -ComObject Scripting.FileSystemObject
$f = $fs.GetFile("C:\Program Files (x86)\Microsoft Visual Studio 14.0\Common7\IDE\mstest.exe")
$mstestPath = $f.shortpath   

# Run tests for VSPackage
$testDLL = ".\project\Test\VSPackageUnitTest\bin\$configuration\VSPackageUnitTest.dll"
$arguments = " /resultsfile:VSPackageUnitTest.trx  /testcontainer:" + $testDLL
Invoke-Expression "$mstestPath $arguments"

# Run tests for ObjectBasedEnvironment
$testDLL = ".\project\Test\ObjectBasedEnvironmentTest\bin\$configuration\ObjectBasedEnvironmentTest.dll"
$arguments = " /resultsfile:ObjectBasedEnvironmentTest.trx /testcontainer:" + $testDLL
Invoke-Expression "$mstestPath $arguments"

# Run tests for CSharpAnalyzers
$testDLL = ".\project\Test\CSharpAnalyzersTest\bin\$configuration\CSharpAnalyzersTest.dll"
$arguments = " /resultsfile:CSharpAnalyzersTest.trx /testcontainer:" + $testDLL
Invoke-Expression "$mstestPath $arguments"

# Run test for CSharpParserTest
$testDLL = ".\project\Test\CSharpParserTest\bin\$configuration\CSharpParserTest.dll"
$arguments = " /resultsfile:CSharpParserTest.trx /testcontainer:" + $testDLL
Invoke-Expression "$mstestPath $arguments"

# upload test results to AppVeyor
$wc = New-Object 'System.Net.WebClient'
$wc.UploadFile("https://ci.appveyor.com/api/testresults/mstest/$($env:APPVEYOR_JOB_ID)", (Resolve-Path ".\VSPackageUnitTest.trx"))
$wc.UploadFile("https://ci.appveyor.com/api/testresults/mstest/$($env:APPVEYOR_JOB_ID)", (Resolve-Path ".\ObjectBasedEnvironmentTest.trx"))
$wc.UploadFile("https://ci.appveyor.com/api/testresults/mstest/$($env:APPVEYOR_JOB_ID)", (Resolve-Path ".\CSharpAnalyzersTest.trx"))
$wc.UploadFile("https://ci.appveyor.com/api/testresults/mstest/$($env:APPVEYOR_JOB_ID)", (Resolve-Path ".\CSharpParserTest.trx"))

# =========================================================================================================================
# CodeCov Process
# =========================================================================================================================
$env:Path = "C:\Python34;C:\Python34\Scripts;" + $env:Path
$codeCovPath = "Project\packages\OpenCover.4.6.166\tools\OpenCover.Console.exe"

# Run CodeCov For CSharpParser
$CSharpParserTest = @" 
$codeCovPath -register:visual-stylecop "-target:$mstestPath" -targetargs:"/testcontainer:.\Project\Test\CSharpParserTest\bin\$configuration\CSharpParserTest.dll" "-filter:+[StyleCop.CSharp*]* -[StyleCop.CSharp*]*CodeParser" -excludebyattribute:*.ExcludeFromCodeCoverage* -hideskipped:All -output:.\StyleCop.CSharp_coverage.xml -log:Off
"@
Invoke-Expression $CSharpParserTest

# Run CodeCov for CSharpAnalyzers
$CSharpAnalyzers = @" 
$codeCovPath -register:visual-stylecop "-target:$mstestPath" -targetargs:"/testcontainer:.\Project\Test\CSharpAnalyzersTest\bin\$configuration\CSharpAnalyzersTest.dll" "-filter:+[StyleCop.CSharp.Rules*]*" -excludebyattribute:*.ExcludeFromCodeCoverage* -hideskipped:All -output:.\StyleCop.CSharp.Rules_coverage.xml -log:Off
"@
Invoke-Expression $CSharpAnalyzers

# Run CodeCov for VSPackageTest
$VSPackageTest = @" 
$codeCovPath -register:visual-stylecop "-target:$mstestPath" -targetargs:"/testcontainer:.\Project\Test\VSPackageUnitTest\bin\$configuration\VSPackageUnitTest.dll" "-filter:+[StyleCop.VSPackage*]*" -excludebyattribute:*.ExcludeFromCodeCoverage* -hideskipped:All -output:.\StyleCop.VSPackage_coverage.xml -log:Off
"@
Invoke-Expression $VSPackageTest

# =========================================================================================================================
# CodeCov Upload, disable gcov to avoid file not found exception and build fail
# =========================================================================================================================

# Install missing package
Invoke-Expression "pip -q install codecov"

# Upload CodeCov results for CSharpParser
Invoke-Expression @"
codecov -f ".\StyleCop.CSharp_coverage.xml" -X gcov
"@

# Upload CodeCov results for CSharpAnalyzers
Invoke-Expression @"
codecov -f ".\StyleCop.CSharp.Rules_coverage.xml" -X gcov
"@

# Upload CodeCov results for VSPackage
Invoke-Expression @"
codecov -f ".\StyleCop.VSPackage_coverage.xml" -X gcov
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
$results = [xml](GC .\ObjectBasedEnvironmentTest.trx)
$outcome = $results.TestRun.ResultSummary.outcome
if($outcome -eq "Failed")
{
  Write-Host "ObjectBasedEnvironmentTest Failed" -ForegroundColor "Red" -BackgroundColor "Black"
  $LastExitCode = 1
  $host.SetShouldExit($LastExitCode)
} 

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
