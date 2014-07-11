###############################################################
#
# Purpose: Makefile for building a wrapper between the Webots
#          API and the primesense sensor
# Author : inaki.navarro@epfl.ch
# Date   : July 2014
#
###############################################################

# -------------------------------------------------------------

# pathes
#OPENNI2=/

# -------------------------------------------------------------

TARGET = kinect.a

CXX_SOURCES = \
  ../src/kinect.c \

OBJECTS = $(CXX_SOURCES:.cpp=.o)
INCLUDE_DIRS =-I../include

AR = ar
ARFLAGS = rv
CXX = g++
CXXFLAGS += -c -O2 -DLINUX -Wall $(INCLUDE_DIRS)

all: $(TARGET)

clean:
	rm -f $(TARGET) $(OBJECTS)

$(TARGET): $(OBJECTS)
	$(AR) $(ARFLAGS) $(TARGET) $(OBJECTS) $(LIBS) $(LINK_DEPENDENCIES)
	chmod 755 $(TARGET)
