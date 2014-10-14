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
	int j,i;
	int shift;
	const short unsigned int *rangeImage_mm = wb_kinect_get_range_image_mm(kinect);
	for (j=0;j<wb_kinect_get_range_height(kinect);j++){
		printf("[%3d]", j);
  		shift = wb_kinect_get_range_width(kinect)*j; //frame.getWidth()/2;
		for(i=0;i<7;i++){//wb_kinect_get_range_width(kinect);i+=1){
			// if (filter_value){
			// 	if (rangeImage_mm[shift+i] > 0){
			// 		printf("1");
			// 	} else {
			// 		printf("0");
			// 	}
			// } else {
				printf(" %5d", rangeImage_mm[shift+i]);
			// }
		}
		printf("\n");
	}

 

  return;
}
