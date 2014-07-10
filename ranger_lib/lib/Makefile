###############################################################
#
# Purpose: Makefile for building a wrapper between the Webots
#          API and the Ranger real robot framework
# Author : david.mansolino@epfl.ch
# Date   : December 2013
#
###############################################################

# -------------------------------------------------------------

# pathes
DASHEL_INCLUDE = /home/david/aseba/dashel
ASEBA_INCLUDE = /home/david/aseba/aseba

# -------------------------------------------------------------

TARGET = rangerWrapper.a

CXX_SOURCES = \
  ../src/dashelinterface.cpp \
  ../src/Accelerometer.cpp \
  ../src/DifferentialWheels.cpp \
  ../src/DistanceSensor.cpp \
  ../src/LED.cpp \
  ../src/Packet.cpp \
  ../src/Receiver.cpp \
  ../src/Emitter.cpp \
  ../src/Motor.cpp \
  ../src/TouchSensor.cpp

OBJECTS = $(CXX_SOURCES:.cpp=.o)
INCLUDE_DIRS = -I$(ASEBA_INCLUDE) -I$(DASHEL_INCLUDE) -I../include

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
