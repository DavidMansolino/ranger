#include "webots/kinect.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>


// #include <OpenNI.h>
// #include "OniSampleUtilities.h"
#define SAMPLE_READ_WAIT_TIMEOUT 2000 //2000ms
// using namespace openni;



typedef struct {
  bool enable;
  bool advancedModel;
  WbDeviceTag colorCamera;
  WbDeviceTag rangeCamera;
  WbDeviceTag kinectLed;
} Kinect;

static Kinect kinect;
static bool isInit = false;


/*************       initialization      *************/

void kinect_init() {
  kinect.enable        = false;
  kinect.advancedModel = false;
  kinect.colorCamera   = 0;
  kinect.rangeCamera   = 0;
  kinect.kinectLed     = 0;
  isInit = true;
}




/*************      public API     *************/

WbDeviceTag wb_kinect_get(const char *name) {
  // if(isInit == false) {
  //   kinect_init();
  // }
  WbDeviceTag tag = "fffff";
  // WbDeviceTag tag = wb_robot_get_device(colorName);
  // kinect.colorCamera = tag;
  // kinect.rangeCamera = wb_robot_get_device(rangeName);
  // kinectArray[tag].kinectLed = wb_robot_get_device(ledName);

  // if((kinectArray[tag].colorCamera == 0) || (kinectArray[tag].rangeCamera == 0)) {
  //   fprintf(stderr,"Warning: \"%s\" kinect not found.\n",name);
  //   return 0;
  // }
  // return kinect.colorCamera;
}

void wb_kinect_enable(WbDeviceTag tag, int colorMS, int rangeMS, bool advancedModel) {

  // if((tag > ArraySize) || (kinectArray[tag].colorCamera == 0) || (kinectArray[tag].rangeCamera == 0)) {
  //   fprintf(stderr, "This device is not a kinect\n");
  //   return;
  // }

  // kinectArray[tag].advancedModel = advancedModel;
  // wb_camera_enable(kinectArray[tag].colorCamera, colorMS);
  // wb_camera_enable(kinectArray[tag].rangeCamera, rangeMS);
  // wb_led_set(kinectArray[tag].kinectLed, 1);
  // kinectArray[tag].enable = true;
}

void wb_kinect_disable(WbDeviceTag tag) {
  // if(kinectArray[tag].enable == false)
  //   return;

  // wb_camera_disable(kinectArray[tag].colorCamera);
  // wb_camera_disable(kinectArray[tag].rangeCamera);
  // wb_led_set(kinectArray[tag].kinectLed, 0);
  // kinectArray[tag].enable = false;
}

const float *wb_kinect_get_range_image(WbDeviceTag tag) {
  // if(kinectArray[tag].enable) {
  //   const float * rangeImage = wb_camera_get_range_image(kinectArray[tag].rangeCamera);
  //   if(kinectArray[tag].advancedModel) {
  //     int pixelNumber = wb_kinect_get_range_width(tag)*wb_kinect_get_range_height(tag);
  //     float buffer[pixelNumber];
  //     memcpy(buffer, rangeImage, pixelNumber*sizeof(float));
  //     add_range_noise(tag, buffer);
  //     apply_range_resolution(tag, buffer);
  //     memcpy((float *)rangeImage, buffer, pixelNumber*sizeof(float));
  //   }
  //   return rangeImage;
  // }

  // // kinect not enable
  // fprintf(stderr, "Please enable the kinect before to use wb_kinect_get_range_image()\n");
  // return NULL;
}

int wb_kinect_get_range_width(WbDeviceTag tag) {
  if(kinect.enable)
  //   return wb_camera_get_width(kinectArray[tag].rangeCamera);

  // kinect not enable
  fprintf(stderr, "Please enable the kinect before to use wb_kinect_get_range_width()\n");
  return 0;
}

int wb_kinect_get_range_height(WbDeviceTag tag) {
  if(kinect.enable)
  //   return wb_camera_get_height(kinectArray[tag].rangeCamera);

  // // kinect not enable
  fprintf(stderr, "Please enable the kinect before to use wb_kinect_get_range_height()\n");
  return 0;
}



/**********************************************************************************************/
/**********************************************************************************************/

//FUNCTIONS TO BE DONE (depending on the hardware)
double wb_kinect_get_range_fov(WbDeviceTag tag) {
  return 0.0;
}

double wb_kinect_get_min_range(WbDeviceTag tag) {
  return 0.0;
}

double wb_kinect_get_max_range(WbDeviceTag tag) {
  return 0.0;
}

int wb_kinect_get_range_sampling_period(WbDeviceTag tag) {
    return 0;
}

//FUNCTIONS to be done for the camera part - Not priority now

int wb_kinect_get_color_width(WbDeviceTag tag) {
  return 0;
}

int wb_kinect_get_color_height(WbDeviceTag tag) {
  fprintf(stderr, "Not implemented yet\n");
  return 0;
}

double wb_kinect_get_color_fov(WbDeviceTag tag) {
  return 0.0;
}

const unsigned char *wb_kinect_get_image(WbDeviceTag tag) {
  fprintf(stderr, "Not implemented yet\n");
  return NULL;
}

int wb_kinect_get_color_sampling_period(WbDeviceTag tag) {
    return 0;
}


