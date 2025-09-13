# Install script for directory: /home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstNumerical/code

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/ytxu/cr_dvrk_ws/install/cisst")
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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstNumericalx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstNumerical" TYPE FILE FILES "/home/ytxu/cr_dvrk_ws/build/cisst/include/cisstNumerical/nmrConfig.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstNumericalx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstNumerical.so.1.3.1" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstNumerical.so.1.3.1")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstNumerical.so.1.3.1"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ytxu/cr_dvrk_ws/build/cisst/lib/libcisstNumerical.so.1.3.1")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstNumerical.so.1.3.1" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstNumerical.so.1.3.1")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstNumerical.so.1.3.1"
         OLD_RPATH "/home/ytxu/cr_dvrk_ws/build/cisst/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstNumerical.so.1.3.1")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstNumericalx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstNumerical.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstNumerical.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstNumerical.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ytxu/cr_dvrk_ws/build/cisst/lib/libcisstNumerical.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstNumerical.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstNumerical.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstNumerical.so"
         OLD_RPATH "/home/ytxu/cr_dvrk_ws/build/cisst/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstNumerical.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstNumericalx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.3/cmake" TYPE FILE FILES "/home/ytxu/cr_dvrk_ws/build/cisst/share/cisst-1.3/cmake/cisstNumericalInternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstNumericalx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.3/cmake" TYPE FILE FILES "/home/ytxu/cr_dvrk_ws/build/cisst/share/cisst-1.3/cmake/cisstNumericalInternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstNumerical-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstNumerical" TYPE FILE FILES
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstNumerical/nmrCallBack.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstNumerical/nmrConstraintOptimizer.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstNumerical/nmrExport.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstNumerical/nmrGaussJordanInverse.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstNumerical/nmrHFTISolver.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstNumerical/nmrInverse.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstNumerical/nmrInverseSPD.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstNumerical/nmrIsOrthonormal.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstNumerical/nmrLDPSolver.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstNumerical/nmrLSEISolver.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstNumerical/nmrLSMinNorm.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstNumerical/nmrLSSolver.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstNumerical/nmrLSqLin.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstNumerical/nmrLU.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstNumerical/nmrLinearRegression.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstNumerical/nmrNNLSSolver.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstNumerical/nmrNetlib.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstNumerical/nmrPInverse.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstNumerical/nmrPInverseEconomy.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstNumerical/nmrRegistrationRigid.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstNumerical/nmrSVD.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstNumerical/nmrSVDEconomy.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstNumerical/nmrSVDRSSolver.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstNumerical/nmrSavitzkyGolay.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstNumerical/nmrSymmetricEigenProblem.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstNumerical-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/home/ytxu/cr_dvrk_ws/build/cisst/include/cisstNumerical.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstNumericalx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.3/cmake" TYPE FILE FILES "/home/ytxu/cr_dvrk_ws/build/cisst/share/cisst-1.3/cmake/cisstNumericalBuild.cmake")
endif()

