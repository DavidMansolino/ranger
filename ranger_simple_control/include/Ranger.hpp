// File:          ranger.cpp
// Date:          03.06.2014
// Description:   Ranger C++ simple controller
// Author:        david.mansolino@epfl.ch

#ifndef RANGERCPP_HPP
#define RANGERCPP_HPP

#include "webots/DifferentialWheels.hpp"

#define TIME_STEP          25
#define NMOTORS             8
#define NDISTANCESENSORS    5

namespace webots {
  class Motor;
  class TouchSensor;
  class DistanceSensor;
  class Receiver;
  
  
  class Ranger : public DifferentialWheels {
    public:
                                       Ranger();
      virtual                         ~Ranger();

      void                             run();
      
    private:
      void                             myStep();
      
      Motor                           *mMotors[NMOTORS];
      DistanceSensor                  *mDistanceSensors[NDISTANCESENSORS];
      TouchSensor                     *mBumper;
      TouchSensor                     *mBalance;
      Receiver                        *mReceiver;
  };
};

#endif
