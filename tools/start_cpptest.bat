cd /d "%~dp0"
set BUILD_TOOL_CHAIN_DIR=C:\cygwin64
set CPPTEST_DIR=C:\Parasoft\20252\cpptest
set PATH=%BUILD_TOOL_CHAIN_DIR%\bin;%CPPTEST_DIR%;%PATH%
cpptest -clean -data %~dp0..\ -J-Xms512m -J-Xmx4096m