set BUILD_TOOL_CHAIN_DIR=C:\cygwin64
set CPPTEST_DIR=C:\Parasoft\20252\cpptest
set PATH=%BUILD_TOOL_CHAIN_DIR%\bin;%CPPTEST_DIR%;%PATH%

set WORKSPACE_DIR=%~dp0
set PROJECT_NAME=Sensor
set PROJECT_DIR=%WORKSPACE_DIR%\%PROJECT_NAME%

cpptestcli ^
-data %WORKSPACE_DIR% ^
-bdf %WORKSPACE_DIR%\%PROJECT_NAME%\cpptestscan.bdf ^
-resource %PROJECT_NAME% ^
-config "builtin://Run Unit Tests (File Scope)" ^
-settings %WORKSPACE_DIR%\settings.properties ^
-report %PROJECT_DIR%\report_ut ^
-showdetails ^
-appconsole stdout
