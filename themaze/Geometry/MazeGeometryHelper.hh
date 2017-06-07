#ifndef MazeGeometryHelper_hh
#define MazeGeometryHelper_hh

#include "fhiclcpp/ParameterSet.h"
#include "larcore/Geometry/ExptGeoHelperInterface.h"

class TString;

namespace geo{
  class ChannelMapAlg;
}

namespace maze
{


  class MazeGeometryHelper : public geo::ExptGeoHelperInterface
  {
  public:
  
    MazeGeometryHelper( fhicl::ParameterSet const & pset, art::ActivityRegistry &reg );
    ~MazeGeometryHelper() throw();

  private:

    void doConfigureChannelMapAlg( fhicl::ParameterSet const & sortingParameters, geo::GeometryCore* geom ) override;
    ChannelMapAlgPtr_t doGetChannelMapAlg() const override;
    std::shared_ptr<geo::ChannelMapAlg> fChannelMap;  
    fhicl::ParameterSet fPset;
  };

}
DECLARE_ART_SERVICE_INTERFACE_IMPL(maze::MazeGeometryHelper, geo::ExptGeoHelperInterface, LEGACY)

#endif 
