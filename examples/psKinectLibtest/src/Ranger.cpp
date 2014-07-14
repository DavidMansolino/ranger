#include "Ranger.hpp"

// #ifdef REALROBOT
#include "webots/kinect.h" 
// #elif
// extern "C"
// { 
// #include "webots/kinect.h" 
// }
// #endif

#include <stdio.h>
#include <cstdlib>

using namespace ranger;


static WbDeviceTag kinect;

//Constructor
Ranger::Ranger()
{

  kinect = wb_kinect_get("kinect");
  wb_kinect_enable(kinect, TIME_STEP, 2*TIME_STEP, false);


}

//Destructor
Ranger::~Ranger() {
}


void Ranger::run() {
  while(1) {

  const short unsigned int *rangeImage_mm = wb_kinect_get_range_image_mm(kinect);
  int centerpix = (wb_kinect_get_range_height(kinect)+1)*wb_kinect_get_range_width(kinect)/2;
  int distance = rangeImage_mm[centerpix];
  printf("Distance: %d\n", distance);

  }
}
