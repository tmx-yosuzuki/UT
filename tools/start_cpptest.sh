#Linuxはディストリビューションに含まれるGCCを用いるため
#BUILD_TOOL_CHAINは不要

export CPPTEST_DIR=/opt/app/cpptest
export PATH=${PATH}:${CPPTEST_DIR}
cpptest -clean -data /home/cpptest/cpptest_workspace
