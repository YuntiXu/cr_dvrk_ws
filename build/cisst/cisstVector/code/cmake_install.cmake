# Install script for directory: /home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/code

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstVectorx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.3/cmake" TYPE FILE FILES "/home/ytxu/cr_dvrk_ws/build/cisst/share/cisst-1.3/cmake/cisstVectorExternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstVectorx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so.1.3.1" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so.1.3.1")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so.1.3.1"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ytxu/cr_dvrk_ws/build/cisst/lib/libcisstVector.so.1.3.1")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so.1.3.1" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so.1.3.1")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so.1.3.1"
         OLD_RPATH "/home/ytxu/cr_dvrk_ws/build/cisst/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so.1.3.1")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstVectorx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ytxu/cr_dvrk_ws/build/cisst/lib/libcisstVector.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so"
         OLD_RPATH "/home/ytxu/cr_dvrk_ws/build/cisst/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstVectorx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.3/cmake" TYPE FILE FILES "/home/ytxu/cr_dvrk_ws/build/cisst/share/cisst-1.3/cmake/cisstVectorInternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstVector-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstVector" TYPE FILE FILES
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctAngleRotation2.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctAxisAngleRotation3.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctBarycentricVector.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctBinaryOperations.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctBoundingBox3.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctContainerTraits.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDataFunctionsDynamicMatrix.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDataFunctionsDynamicMatrixJSON.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDataFunctionsDynamicVector.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDataFunctionsDynamicVectorJSON.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDataFunctionsFixedSizeMatrix.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDataFunctionsFixedSizeMatrixJSON.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDataFunctionsFixedSizeVector.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDataFunctionsFixedSizeVectorJSON.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDataFunctionsTransformations.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDataFunctionsTransformationsJSON.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDeterminant.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDynamicCompactLoopEngines.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDynamicConstMatrixBase.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDynamicConstMatrixRef.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDynamicConstNArrayBase.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDynamicConstNArrayRef.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDynamicConstVectorBase.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDynamicConstVectorRef.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDynamicMatrix.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDynamicMatrixBase.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDynamicMatrixLoopEngines.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDynamicMatrixOwner.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDynamicMatrixRef.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDynamicMatrixRefOwner.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDynamicMatrixTypes.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDynamicNArray.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDynamicNArrayBase.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDynamicNArrayLoopEngines.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDynamicNArrayOwner.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDynamicNArrayRef.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDynamicNArrayRefOwner.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDynamicVector.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDynamicVectorBase.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDynamicVectorLoopEngines.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDynamicVectorOwner.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDynamicVectorRef.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDynamicVectorRefOwner.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctDynamicVectorTypes.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctEulerRotation3.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctExport.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctFastCopy.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeConstMatrixBase.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeConstMatrixRef.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeConstVectorBase.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeConstVectorRef.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeMatrix.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeMatrixBase.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeMatrixLoopEngines.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeMatrixRef.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeMatrixTraits.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeMatrixTypes.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeVector.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeVectorBase.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeVectorRecursiveEngines.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeVectorRef.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeVectorTraits.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeVectorTypes.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctFixedStrideMatrixIterator.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctFixedStrideVectorIterator.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctForwardDeclarations.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctFrame4x4.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctFrame4x4Base.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctFrame4x4ConstBase.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctFrameBase.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctMatrixRotation2.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctMatrixRotation2Base.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctMatrixRotation3.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctMatrixRotation3Base.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctMatrixRotation3ConstBase.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctMatrixRotation3ConstRef.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctMatrixRotation3Ref.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctPlot2DBase.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctPlot2DOpenGL.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctPrintf.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctQuaternion.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctQuaternionBase.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctQuaternionRotation3.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctQuaternionRotation3Base.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctRandom.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctRandomDynamicMatrix.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctRandomDynamicNArray.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctRandomDynamicVector.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctRandomFixedSizeMatrix.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctRandomFixedSizeVector.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctRandomTransformations.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctRodriguezRotation3.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctRodriguezRotation3Base.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctStoreBackBinaryOperations.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctStoreBackUnaryOperations.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctTransformationTypes.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctTypes.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctUnaryOperations.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctVarStrideMatrixIterator.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctVarStrideNArrayIterator.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstVector/vctVarStrideVectorIterator.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstVector-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/home/ytxu/cr_dvrk_ws/build/cisst/include/cisstVector.h")
endif()

