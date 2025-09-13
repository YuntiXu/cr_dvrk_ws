#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "cisst_ros_crtk::cisst_ros_crtk" for configuration "Release"
set_property(TARGET cisst_ros_crtk::cisst_ros_crtk APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(cisst_ros_crtk::cisst_ros_crtk PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libcisst_ros_crtk.so"
  IMPORTED_SONAME_RELEASE "libcisst_ros_crtk.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS cisst_ros_crtk::cisst_ros_crtk )
list(APPEND _IMPORT_CHECK_FILES_FOR_cisst_ros_crtk::cisst_ros_crtk "${_IMPORT_PREFIX}/lib/libcisst_ros_crtk.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
