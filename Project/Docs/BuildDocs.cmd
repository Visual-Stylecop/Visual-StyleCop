@echo off 

SETLOCAL

CALL msbuild C:\_Dev\GitHub\StyleCop\Project\Docs\Rules\BuildDocs.proj
CALL msbuild C:\_Dev\GitHub\StyleCop\Project\Docs\Sdk\BuildDocs.proj

ENDLOCAL