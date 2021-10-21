:: Clear previous build/run
del tests/test.exe
del KAPI.dll

:: Clear console
cls

:: Start new run
build.bat|more
compile.bat|more
powershell start tests/test.exe