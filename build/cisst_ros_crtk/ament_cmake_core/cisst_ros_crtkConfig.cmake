# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_cisst_ros_crtk_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED cisst_ros_crtk_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(cisst_ros_crtk_FOUND FALSE)
  elseif(NOT cisst_ros_crtk_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(cisst_ros_crtk_FOUND FALSE)
  endif()
  return()
endif()
set(_cisst_ros_crtk_CONFIG_INCLUDED TRUE)

# output package information
if(NOT cisst_ros_crtk_FIND_QUIETLY)
  message(STATUS "Found cisst_ros_crtk: 3.0.0 (${cisst_ros_crtk_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'cisst_ros_crtk' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${cisst_ros_crtk_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(cisst_ros_crtk_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_targets-extras.cmake")
foreach(_extra ${_extras})
  include("${cisst_ros_crtk_DIR}/${_extra}")
endforeach()
