###############################################################
#
# Purpose: Makefile for compiling a controller using the Webots
#          API on the ranger real robot
# Author : david.mansolino@epfl.ch
# Date   : December 2014
#
###############################################################

# -------------------------------------------------------------


# name of the binary to generate
TARGET = kinect


WEBOTS_KINECT_LIB = $(RANGER_BASICS_BASE)/kinect_lib/lib/kinect.a
WEBOTS_KINECT_INCLUDE = $(RANGER_BASICS_BASE)/kinect_lib/include

# source filenames
CXX_SOURCES = \
  src/main.cpp \
  src/Ranger.cpp

# -------------------------------------------------------------



INCLUDE_DIRS = -I$(WEBOTS_KINECT_INCLUDE) -I./include
CXX = g++
CXXFLAGS += -O2 -DLINUX -DCROSSCOMPILATION -Wall $(INCLUDE_DIRS) -fPIC -fvisibility=hidden
LFLAGS += -L$(OPENNI2_LIB_PATH)
LIBS = -ludev -lpthread $(WEBOTS_KINECT_LIB) -lOpenNI2 -Wl,-rpath ./
OBJECTS = $(CXX_SOURCES:.cpp=.o)

all: $(TARGET)

clean:
	rm -f $(OBJECTS) $(TARGET)

$(TARGET):$(OBJECTS)
	$(CXX) $(CFLAGS) $(LFLAGS) $(OBJECTS) $(LIBS) -o $(TARGET) $(CXXFLAGS)
	chmod 755 $(TARGET)

