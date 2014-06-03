#include "Ranger.hpp"
#include "webots/DifferentialWheels.hpp"
#include "webots/DistanceSensor.hpp"
#include "webots/Accelerometer.hpp"
#include "webots/TouchSensor.hpp"
#include "webots/Receiver.hpp"
#include "webots/Emitter.hpp"
#include "webots/Motor.hpp"
#include "webots/LED.hpp"

#include <stdio.h>
#include <cstdlib>

using namespace webots;

static const char *motorNames[NMOTORS] = {
  "RightPupilVert",   "RightPupilHori",  // Right pupil
  "LeftPupilVert",    "LeftPupilHori",   // Left  pupil
  "LeftUpperEyelid",  "LeftLowerEyelid", // Left  eyelid
  "RightUpperEyelid", "RightLowerEyelid" // Right eyelid
};

static const char *DSNames[NDISTANCESENSORS] = {
  "dsBottomRight", "dsBottomLeft",                // Ground DistanceSensors
  "dsFrontRight",  "dsFrontCenter", "dsFrontLeft" // Front DistanceSensors
};

//Constructor
Ranger::Ranger():
    DifferentialWheels()
{
  // Get all the Motors
  for(int i=0; i<NMOTORS; i++) {
    mMotors[i] = getMotor(motorNames[i]);
    mMotors[i]->enablePosition(TIME_STEP); // this is present only for compatibility with simulation
  }
  
  // Get all the distance sensors
  for(int i=0; i<NDISTANCESENSORS; i++) {
    mDistanceSensors[i] = getDistanceSensor(DSNames[i]);
    mDistanceSensors[i]->enable(TIME_STEP);
  }
  
  mReceiver = getReceiver("infraredReceiver");
  mReceiver->enable(TIME_STEP);
  
  // Get the bumper and the balance
  mBumper = getTouchSensor("bumper");
  mBalance = getTouchSensor("balance");
  
  mBumper->enable(TIME_STEP);
  mBalance->enable(TIME_STEP);
  
  for(int i = 0; i<20; ++i)
    myStep();
  setSpeed(0,0);
}

//Destructor
Ranger::~Ranger() {
}

//Step function
void Ranger::myStep() {
  int ret = step(TIME_STEP);
  if (ret == -1)
    exit(EXIT_SUCCESS);
}

void Ranger::run() {
  while(1) {
	double DSValue = mDistanceSensors[3]->getValue();
    printf("DS value: %lf\n", DSValue);
    if(DSValue > 1500)
      setSpeed(0, 0);
    else
      setSpeed(30, 30);
    myStep();
  }
}
