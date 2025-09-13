# Install script for directory: /home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/code

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstMultiTaskx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstMultiTask" TYPE FILE FILES "/home/ytxu/cr_dvrk_ws/build/cisst/include/cisstMultiTask/mtsConfig.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstMultiTaskx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so.1.3.1" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so.1.3.1")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so.1.3.1"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ytxu/cr_dvrk_ws/build/cisst/lib/libcisstMultiTask.so.1.3.1")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so.1.3.1" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so.1.3.1")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so.1.3.1"
         OLD_RPATH "/home/ytxu/cr_dvrk_ws/build/cisst/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so.1.3.1")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstMultiTaskx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ytxu/cr_dvrk_ws/build/cisst/lib/libcisstMultiTask.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so"
         OLD_RPATH "/home/ytxu/cr_dvrk_ws/build/cisst/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstMultiTaskx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.3/cmake" TYPE FILE FILES "/home/ytxu/cr_dvrk_ws/build/cisst/share/cisst-1.3/cmake/cisstMultiTaskInternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstMultiTaskx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.3/cmake" TYPE FILE FILES "/home/ytxu/cr_dvrk_ws/build/cisst/share/cisst-1.3/cmake/cisstMultiTaskInternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstMultiTaskx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.3/cmake" TYPE FILE FILES "/home/ytxu/cr_dvrk_ws/build/cisst/share/cisst-1.3/cmake/cisstMultiTaskInternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstMultiTask-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstMultiTask" TYPE FILE FILES
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableQualifiedReadBase.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableQualifiedReadMethod.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableQualifiedReadReturnVoidMethod.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableReadBase.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableReadMethod.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableReadReturnVoidMethod.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableVoidBase.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableVoidFunction.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableVoidMethod.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableVoidReturnBase.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableVoidReturnMethod.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableWriteReturnBase.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableWriteReturnMethod.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCollectorBase.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCollectorEvent.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCollectorFactory.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCollectorState.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandBase.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandFilteredQueuedWrite.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandFilteredWrite.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandQualifiedRead.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandQueuedVoid.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandQueuedVoidReturn.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandQueuedWrite.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandQueuedWriteBase.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandQueuedWriteReturn.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandRead.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandVoid.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandVoidReturn.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandWrite.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandWriteBase.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandWriteReturn.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsComponent.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsComponentAddLatency.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsComponentGeneratorMacros.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsComponentViewer.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsConnection.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsDelayedConnections.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsEventReceiver.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsExport.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsFixedSizeVector.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsFixedSizeVectorTypes.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsForwardDeclarations.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsFunctionBase.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsFunctionQualifiedRead.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsFunctionRead.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsFunctionVoid.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsFunctionVoidReturn.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsFunctionWrite.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsFunctionWriteReturn.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsGenericObject.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsGenericObjectProxy.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsInterface.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsInterfaceInput.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsInterfaceOutput.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsInterfaceProvided.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsInterfaceRequired.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsIntervalStatistics.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsLODMultiplexerStreambuf.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsMacros.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsMailBox.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsManagerComponentBase.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsManagerComponentClient.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsManagerComponentServer.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsManagerComponentServices.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsManagerGlobal.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsManagerGlobalInterface.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsManagerLocal.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsManagerLocalInterface.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsMatrix.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsMulticastCommandVoid.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsMulticastCommandWrite.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsMulticastCommandWriteBase.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsParameterTypesOld.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsQueue.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsSocketProxyClient.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsSocketProxyCommon.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsSocketProxyServer.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsStateArray.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsStateArrayBase.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsStateData.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsStateIndex.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsStateTable.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsStateTableFilter.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsTask.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsTaskContinuous.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsTaskFromCallback.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsTaskFromSignal.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsTaskManager.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsTaskPeriodic.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsTransformationTypes.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsVector.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsWatchdogClient.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMultiTask/mtsWatchdogServer.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstMultiTask-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/home/ytxu/cr_dvrk_ws/build/cisst/include/cisstMultiTask.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstMultiTask" TYPE FILE FILES
    "/home/ytxu/cr_dvrk_ws/build/cisst/include/cisstMultiTask/mtsInterfaceCommon.h"
    "/home/ytxu/cr_dvrk_ws/build/cisst/include/cisstMultiTask/mtsComponentState.h"
    "/home/ytxu/cr_dvrk_ws/build/cisst/include/cisstMultiTask/mtsExecutionResult.h"
    "/home/ytxu/cr_dvrk_ws/build/cisst/include/cisstMultiTask/mtsParameterTypes.h"
    )
endif()

