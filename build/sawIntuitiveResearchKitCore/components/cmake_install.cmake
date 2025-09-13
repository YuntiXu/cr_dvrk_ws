# Install script for directory: /home/ytxu/cr_dvrk_ws/src/cisst-saw/sawIntuitiveResearchKit/core/components

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/ytxu/cr_dvrk_ws/install/sawIntuitiveResearchKitCore")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xsawIntuitiveResearchKitx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sawIntuitiveResearchKit" TYPE FILE FILES
    "/home/ytxu/cr_dvrk_ws/build/sawIntuitiveResearchKitCore/components/sawIntuitiveResearchKitConfig.cmake"
    "/home/ytxu/cr_dvrk_ws/build/sawIntuitiveResearchKitCore/components/sawIntuitiveResearchKitConfigVersion.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xsawIntuitiveResearchKit-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/sawIntuitiveResearchKit/core/components/include/sawIntuitiveResearchKit"
    "/home/ytxu/cr_dvrk_ws/build/sawIntuitiveResearchKitCore/components/include/sawIntuitiveResearchKit"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xsawIntuitiveResearchKitx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsawIntuitiveResearchKit.so.2.3.1" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsawIntuitiveResearchKit.so.2.3.1")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsawIntuitiveResearchKit.so.2.3.1"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ytxu/cr_dvrk_ws/install/cisst/lib/libsawIntuitiveResearchKit.so.2.3.1")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsawIntuitiveResearchKit.so.2.3.1" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsawIntuitiveResearchKit.so.2.3.1")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsawIntuitiveResearchKit.so.2.3.1"
         OLD_RPATH "/home/ytxu/cr_dvrk_ws/install/cisst/lib:/home/ytxu/cr_dvrk_ws/build/cisst/cisstReflexxesTypeII/lib:/home/ytxu/cr_dvrk_ws/install/sawIntuitiveResearchKitCore/lib:/home/ytxu/cr_dvrk_ws/install/sawTextToSpeechAll/include/../lib:/home/ytxu/cr_dvrk_ws/install/sawRobotIO1394Core/include/../lib:/home/ytxu/cr_dvrk_ws/install/sawControllersAll/include/../lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsawIntuitiveResearchKit.so.2.3.1")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xsawIntuitiveResearchKitx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsawIntuitiveResearchKit.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsawIntuitiveResearchKit.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsawIntuitiveResearchKit.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ytxu/cr_dvrk_ws/install/cisst/lib/libsawIntuitiveResearchKit.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsawIntuitiveResearchKit.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsawIntuitiveResearchKit.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsawIntuitiveResearchKit.so"
         OLD_RPATH "/home/ytxu/cr_dvrk_ws/install/cisst/lib:/home/ytxu/cr_dvrk_ws/build/cisst/cisstReflexxesTypeII/lib:/home/ytxu/cr_dvrk_ws/install/sawIntuitiveResearchKitCore/lib:/home/ytxu/cr_dvrk_ws/install/sawTextToSpeechAll/include/../lib:/home/ytxu/cr_dvrk_ws/install/sawRobotIO1394Core/include/../lib:/home/ytxu/cr_dvrk_ws/install/sawControllersAll/include/../lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsawIntuitiveResearchKit.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/ytxu/cr_dvrk_ws/build/sawIntuitiveResearchKitCore/components/code/Qt/cmake_install.cmake")

endif()

