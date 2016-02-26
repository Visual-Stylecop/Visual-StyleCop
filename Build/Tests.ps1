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
$testDLL = "C:\VisualStyleCop\Visual-Stylecop\project\Test\VSPackageUnitTest\bin\$configuration\VSPackageUnitTest.dll"
$arguments = " /testcontainer:" + $testDLL
Invoke-Expression "$mstestPath $arguments"

# Run tests for ObjectBasedEnvironment
$testDLL = "C:\VisualStyleCop\Visual-Stylecop\project\Test\ObjectBasedEnvironmentTest\bin\$configuration\ObjectBasedEnvironmentTest.dll"
$arguments = " /testcontainer:" + $testDLL
Invoke-Expression "$mstestPath $arguments"

# Run tests for CSharpAnalyzers
$testDLL = "C:\VisualStyleCop\Visual-Stylecop\project\Test\CSharpAnalyzersTest\bin\$configuration\CSharpAnalyzersTest.dll"
$arguments = " /testcontainer:" + $testDLL
Invoke-Expression "$mstestPath $arguments"

# Run test for CSharpParserTest
$testDLL = "C:\VisualStyleCop\Visual-Stylecop\project\Test\CSharpParserTest\bin\$configuration\CSharpParserTest.dll"
$arguments = " /testcontainer:" + $testDLL
Invoke-Expression "$mstestPath $arguments"

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
$CSharpParserTest = @" 
$codeCovPath -register:visual-stylecop "-target:$mstestPath" -targetargs:"/testcontainer:.\Project\Test\CSharpAnalyzersTest\bin\$configuration\CSharpAnalyzersTest.dll" "-filter:+[StyleCop.CSharp.Rules*]*" -excludebyattribute:*.ExcludeFromCodeCoverage* -hideskipped:All -output:.\StyleCop.CSharp.Rules_coverage.xml -log:Off
"@

Invoke-Expression $CSharpParserTest

# Run CodeCov for VSPackage
$CSharpParserTest = @" 
$codeCovPath -register:visual-stylecop "-target:$mstestPath" -targetargs:"/testcontainer:.\Project\Test\VSPackageUnitTest\bin\$configuration\VSPackageUnitTest.dll" "-filter:+[StyleCop.VSPackage*]*" -excludebyattribute:*.ExcludeFromCodeCoverage* -hideskipped:All -output:.\StyleCop.VSPackage_coverage.xml -log:Off
"@

Invoke-Expression $CSharpParserTest

# =========================================================================================================================
# CodeCov Upload
# =========================================================================================================================

# Install missing package
Invoke-Expression "pip -q install codecov"

# Upload CodeCov results for CSharpParser
Invoke-Expression @"
codecov -f ".\StyleCop.CSharp_coverage.xml" --no-fail
"@

# Upload CodeCov results for CSharpAnalyzers
Invoke-Expression @"
codecov -f ".\StyleCop.CSharp.Rules_coverage.xml" --no-fail
"@

# Upload CodeCov results for VSPackage
Invoke-Expression @"
codecov -f ".\StyleCop.VSPackage_coverage.xml" --no-fail
"@