:: Clear previous build/run
del tests/test.exe
del KWARD_API.dll

:: Clear console
cls

:: Start new run
build.bat|more
compile.bat|more
cmd /k start tests/test.exe