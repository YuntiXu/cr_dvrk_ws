cmake_minimum_required (VERSION 3.16)
project (ctr_teleop_python VERSION 1.3.1)

# first test for ROS1
find_package (catkin QUIET
  COMPONENTS rospy)

if (catkin_FOUND)

  catkin_package (CATKIN_DEPENDS rospy)
  catkin_python_setup ()

else (catkin_FOUND)

  # look for ROS2
  find_package (ament_cmake QUIET)
  if (ament_cmake_FOUND)
    find_package (ament_cmake_python REQUIRED)
    ament_python_install_package (ctr_teleop
      PACKAGE_DIR ${ctr_teleop_python_SOURCE_DIR}/src/ctr_teleop)

    file (GLOB ctr_teleop_SCRIPTS scripts/*.py)
    install (PROGRAMS ${ctr_teleop_SCRIPTS}
      DESTINATION lib/${PROJECT_NAME})

    ament_package ()
  endif (ament_cmake_FOUND)

endif (catkin_FOUND)
