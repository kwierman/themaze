#include "themaze/Geometry/MazeChannelMapAlg.hh"

namespace maze {

  MazeChannelMapAlg::MazeChannelMapAlg( fhicl::ParameterSet const& pvals, fhicl::ParameterSet const& sortingParameters )
    : geo::ChannelMapStandardAlg( sortingParameters )
  {
  }

  MazeChannelMapAlg::~MazeChannelMapAlg()
  {
  }
  
}
