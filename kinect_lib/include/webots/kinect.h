#ifndef KINECT_HPP
#define KINECT_HPP

typedef unsigned short WbDeviceTag; /* identifier of a device */
#include <stdbool.h>

WbDeviceTag          wb_kinect_get(const char *name);
void                 wb_kinect_enable(WbDeviceTag tag, int colorMS, int rangeMS, bool advancedModel);
void                 wb_kinect_disable(WbDeviceTag);
int                  wb_kinect_get_color_sampling_period(WbDeviceTag tag);
int                  wb_kinect_get_range_sampling_period(WbDeviceTag tag);

const unsigned char *wb_kinect_get_image(WbDeviceTag tag);
const float         *wb_kinect_get_range_image(WbDeviceTag tag);
const int           *wb_kinect_get_range_image_mm(WbDeviceTag tag) {

int                  wb_kinect_get_color_width(WbDeviceTag tag);
int                  wb_kinect_get_range_width(WbDeviceTag tag);
int                  wb_kinect_get_color_height(WbDeviceTag tag);
int                  wb_kinect_get_range_height(WbDeviceTag tag);
double               wb_kinect_get_color_fov(WbDeviceTag tag);
double               wb_kinect_get_range_fov(WbDeviceTag tag);

double               wb_kinect_get_min_range(WbDeviceTag tag);
double               wb_kinect_get_max_range(WbDeviceTag tag);

#endif
