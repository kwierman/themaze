

art_make_library( LIBRARY_NAME 
                        maze_geometry  
                  SOURCE 
                        MazeChannelMapAlg.cc
                  LIBRARIES  
                        larcore_Geometry
                        ${MF_MESSAGELOGGER}
                        cetlib 
                        cetlib_except
                        ${FHICLCPP}
                        ${ROOT_BASIC_LIB_LIST}
                        larcore_Geometry
                        ${MF_UTILITIES}
                        ${FHICLCPP}
                        cetlib 
                        cetlib_except
                        ${ROOT_GEOM}
                        ${ROOT_XMLIO}
                        ${ROOT_GDML}
                        ${ROOT_BASIC_LIB_LIST}
)

simple_plugin( MazeGeometryHelper service
      maze_geometry
      larcore_Geometry
      ${MF_MESSAGELOGGER}
      cetlib 
      cetlib_except
      ${FHICLCPP}
      ${ROOT_BASIC_LIB_LIST}
      larcore_Geometry
      ${MF_UTILITIES}
      ${FHICLCPP}
      cetlib 
      cetlib_except
      ${ROOT_GEOM}
      ${ROOT_XMLIO}
      ${ROOT_GDML}
      ${ROOT_BASIC_LIB_LIST}
  )
							   

install_headers()
install_fhicl()
install_source()
install_gdml( SUBDIRS GDMLSchema )
#install_gdml()

