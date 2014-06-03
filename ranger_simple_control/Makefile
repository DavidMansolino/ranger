###############################################################
#
# Purpose: Makefile for compiling a controller using the Webots
#          API on the ranger real robot
# Author : david.mansolino@epfl.ch
# Date   : December 2014
#
###############################################################

# -------------------------------------------------------------
# TO MODIFY:

# name of the binary to generate
TARGET = controller

# Depedency libraries
DASHEL_LIB = /home/david/aseba/build-dashel/libdashel.a
ASEBA_LIB = /home/david/aseba/build-aseba/common/libasebacommon.a
ASEBA_COMPILER_LIB = /home/david/aseba/build-aseba/compiler/libasebacompiler.a
ASEBA_DASHEL_PLUGIN_LIB = /home/david/aseba/build-aseba/transport/dashel_plugins/libasebadashelplugins.a

# pathes
WEBOTS_RANGER_LIB = /home/david/ranger/ranger/lib/rangerWrapper.a
WEBOTS_RANGER_INCLUDE = /home/david/ranger/ranger/include

# source filenames
CXX_SOURCES = \
  src/main.cpp \
  src/Ranger.cpp

# -------------------------------------------------------------



INCLUDE_DIRS = -I$(WEBOTS_RANGER_INCLUDE) -I./include
CXX = g++
CXXFLAGS += -O2 -DLINUX -DCROSSCOMPILATION -Wall $(INCLUDE_DIRS) 
LFLAGS += 
LIBS = $(WEBOTS_RANGER_LIB) $(DASHEL_LIB) $(ASEBA_COMPILER_LIB) $(ASEBA_DASHEL_PLUGIN_LIB) $(ASEBA_LIB) -ludev -lpthread
OBJECTS = $(CXX_SOURCES:.cpp=.o)

all: $(TARGET)

clean:
	rm -f $(OBJECTS) $(TARGET)

$(TARGET):$(OBJECTS)
	$(CXX) $(CFLAGS) $(LFLAGS) $(OBJECTS) $(LIBS) -o $(TARGET) $(CXXFLAGS)
	chmod 755 $(TARGET)

