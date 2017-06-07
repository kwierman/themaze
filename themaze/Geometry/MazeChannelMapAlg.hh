#ifndef MazeChannelMapAlg_hh
#define MazeChannelMapAlg_hh

#include "larcore/Geometry/ChannelMapStandardAlg.h" 
#include "fhiclcpp/ParameterSet.h"
#include <iostream>
#include <vector>
#include <set>




namespace maze {

  class MazeChannelMapAlg : public geo::ChannelMapStandardAlg {

  public:

    MazeChannelMapAlg(fhicl::ParameterSet const& pset, fhicl::ParameterSet const& sortingParameters );
    ~MazeChannelMapAlg();
    
  };


}
#endif

