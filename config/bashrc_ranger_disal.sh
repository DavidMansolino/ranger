export OPENNI2_PATH=/home/navarro/repos/OpenNI2
export OPENNI2_LIB_PATH=/home/navarro/repos/OpenNI2/Bin/x64-Release
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$OPENNI2_LIB_PATH
alias sudo='sudo env LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$OPENNI2_LIB_PATH'

