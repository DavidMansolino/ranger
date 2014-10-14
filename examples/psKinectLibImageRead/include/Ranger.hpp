// File:          ranger.cpp
// Date:          03.06.2014
// Description:   Ranger C++ simple controller
// Author:        david.mansolino@epfl.ch

#ifndef RANGERCPP_HPP
#define RANGERCPP_HPP


#define TIME_STEP          25
#define NMOTORS             8
#define NDISTANCESENSORS    5

namespace ranger {
 
  
  class Ranger {
    public:
                                       Ranger();
      virtual                         ~Ranger();

      void                             run();


  };
};

#endif
