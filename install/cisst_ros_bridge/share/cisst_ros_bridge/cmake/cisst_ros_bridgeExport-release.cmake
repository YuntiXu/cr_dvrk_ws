#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "cisst_ros_bridge::cisst_ros_bridge" for configuration "Release"
set_property(TARGET cisst_ros_bridge::cisst_ros_bridge APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(cisst_ros_bridge::cisst_ros_bridge PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libcisst_ros_bridge.so"
  IMPORTED_SONAME_RELEASE "libcisst_ros_bridge.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS cisst_ros_bridge::cisst_ros_bridge )
list(APPEND _IMPORT_CHECK_FILES_FOR_cisst_ros_bridge::cisst_ros_bridge "${_IMPORT_PREFIX}/lib/libcisst_ros_bridge.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
