@echo OFF

:: Clear previous build/run
if exist "tests\test.exe" (
    del "tests\test.exe"
)
if exist KAPI.dll (
    del KAPI.dll
)

:: Build DLL
g++ -D BUILD_DLL -shared src/KAPI.cpp src/kUtils.cpp -o KAPI.dll

:: Check if DLL was created
if exist KAPI.dll (
    echo.
    echo DLL BUILD SUCCESSFUL
    echo.

    :: Compile program
    g++ tests/test.cpp -o tests/test.exe -L. -lKAPI

    :: Check if exe was created
    if exist "tests\test.exe" (
        echo.
        echo COMPILATION SUCCESSFUL
        echo.

        :: Run program 
        start /w /b tests/test.exe

    ) else (
        echo.
        echo COMPILATION FAILED
        echo.
        exit
    )
) else (
    echo.
    echo DLL BUILD FAILED
    echo.
    exit
)