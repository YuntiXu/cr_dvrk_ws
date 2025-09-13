# Install script for directory: /home/ytxu/cr_dvrk_ws/src/cisst-saw/sawRobotIO1394/core/components/code/Amp1394/lib

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/ytxu/cr_dvrk_ws/install/sawRobotIO1394Core")
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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xAmp1394x" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/_Amp1394Python.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/_Amp1394Python.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/_Amp1394Python.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE MODULE FILES "/home/ytxu/cr_dvrk_ws/install/cisst/lib/_Amp1394Python.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/_Amp1394Python.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/_Amp1394Python.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/_Amp1394Python.so"
         OLD_RPATH "/home/ytxu/cr_dvrk_ws/install/cisst/lib:/home/ytxu/cr_dvrk_ws/build/cisst/cisstReflexxesTypeII/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/_Amp1394Python.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xAmp1394x" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES "/home/ytxu/cr_dvrk_ws/build/sawRobotIO1394Core/components/code/Amp1394/lib/Amp1394Python.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xAmp1394x" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/ytxu/cr_dvrk_ws/install/cisst/lib/libAmp1394.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xAmp1394x" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/ytxu/cr_dvrk_ws/install/cisst/lib/libAmp1394Console.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xAmp1394-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/Amp1394" TYPE FILE FILES
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/sawRobotIO1394/core/components/code/Amp1394/lib/BoardIO.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/sawRobotIO1394/core/components/code/Amp1394/lib/FpgaIO.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/sawRobotIO1394/core/components/code/Amp1394/lib/AmpIO.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/sawRobotIO1394/core/components/code/Amp1394/lib/Amp1394Types.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/sawRobotIO1394/core/components/code/Amp1394/lib/Amp1394Time.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/sawRobotIO1394/core/components/code/Amp1394/lib/Amp1394BSwap.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/sawRobotIO1394/core/components/code/Amp1394/lib/EncoderVelocity.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/sawRobotIO1394/core/components/code/Amp1394/lib/BasePort.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/sawRobotIO1394/core/components/code/Amp1394/lib/EthBasePort.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/sawRobotIO1394/core/components/code/Amp1394/lib/EthUdpPort.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/sawRobotIO1394/core/components/code/Amp1394/lib/PortFactory.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/sawRobotIO1394/core/components/code/Amp1394/lib/FirewirePort.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/sawRobotIO1394/core/components/code/Amp1394/lib/Amp1394Console.h"
    )
endif()

