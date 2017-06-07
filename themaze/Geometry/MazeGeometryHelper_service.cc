#include "themaze/Geometry/MazeGeometryHelper.hh"
#include "larcore/Geometry/ChannelMapAlg.h"
#include "larcore/Geometry/GeometryCore.h"
#include "themaze/Geometry/MazeChannelMapAlg.hh"

namespace maze
{

  MazeGeometryHelper::MazeGeometryHelper( fhicl::ParameterSet const & pset, art::ActivityRegistry & reg )
  :  fPset( pset )
     //fReg( reg )
  {}

  MazeGeometryHelper::~MazeGeometryHelper() throw()
  {}  
  
  void MazeGeometryHelper::doConfigureChannelMapAlg( fhicl::ParameterSet const & sortingParameters, geo::GeometryCore* geom ) 
  {
    fChannelMap.reset();
    std::string const detectorName = geom->DetectorName();
    fChannelMap = std::make_shared<MazeChannelMapAlg>( fPset, sortingParameters );
    if ( fChannelMap )
      {
        geom->ApplyChannelMap(fChannelMap);
      }
  }
  
  std::shared_ptr<const geo::ChannelMapAlg> MazeGeometryHelper::doGetChannelMapAlg() const
  {
    return fChannelMap;
  }

}

DEFINE_ART_SERVICE_INTERFACE_IMPL(maze::MazeGeometryHelper, geo::ExptGeoHelperInterface)
