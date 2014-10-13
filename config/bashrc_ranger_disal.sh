#!/bin/bash

#OPENNI2 - Disal Makefiles
export OPENNI2_PATH=/root/disal/utils/OpenNI2
export OPENNI2_LIB_PATH=/root/disal/utils/OpenNI2/Bin/Arm-Release
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$OPENNI2_LIB_PATH
export DASHEL_LIB_PATH=/root/disal/utils/aseba/build-dashel/
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$DASHEL_LIB_PATH
alias sudo='sudo env LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$OPENNI2_LIB_PATH'

#ASEBA
export ASEBA_BASE=/root/disal/utils/aseba
export RANGER_BASICS_BASE=/root/disal/ranger-basics

#Update robot time
ntpdate ntp.ubuntu.com

