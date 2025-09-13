# Install script for directory: /home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/code

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstCommonx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so.1.3.1" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so.1.3.1")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so.1.3.1"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ytxu/cr_dvrk_ws/build/cisst/lib/libcisstCommon.so.1.3.1")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so.1.3.1" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so.1.3.1")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so.1.3.1"
         OLD_RPATH "/home/ytxu/cr_dvrk_ws/build/cisst/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so.1.3.1")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstCommonx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ytxu/cr_dvrk_ws/build/cisst/lib/libcisstCommon.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so"
         OLD_RPATH "/home/ytxu/cr_dvrk_ws/build/cisst/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstCommon-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstCommon" TYPE FILE FILES
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnAccessorMacros.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnAssert.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnCallbackStreambuf.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnClassRegister.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnClassRegisterMacros.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnClassServices.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnClassServicesBase.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnCommandLineOptions.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnConstants.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnDataFormat.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnDataFunctions.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnDataFunctionsArray.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnDataFunctionsEnumMacros.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnDataFunctionsJSON.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnDataFunctionsList.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnDataFunctionsMacros.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnDataFunctionsMatrixHelpers.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnDataFunctionsString.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnDataFunctionsVector.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnDataFunctionsVectorHelpers.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnDeSerializer.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnExport.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnExportMacros.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnForwardDeclarations.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnGenericObject.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnGenericObjectProxy.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnGetChar.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnKbHit.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnLODMultiplexerStreambuf.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnLODOutputMultiplexer.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnLogLoD.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnLogger.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnMultiplexerStreambuf.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnMultiplexerStreambufProxy.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnNamedMap.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnObjectRegister.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnOutputMultiplexer.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnPath.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnPortability.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnPrintf.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnRandomSequence.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnRequiresDeepCopy.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnSerializer.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnStreamRawParser.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnStrings.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnThrow.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnTokenizer.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnTypeTraits.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/cmnUnits.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstCommon-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/home/ytxu/cr_dvrk_ws/build/cisst/include/cisstCommon.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstCommon" TYPE FILE FILES "/home/ytxu/cr_dvrk_ws/build/cisst/include/cisstCommon/cmnJointType.h")
endif()

