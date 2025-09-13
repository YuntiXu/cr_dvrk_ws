# Install script for directory: /home/ytxu/cr_dvrk_ws/src/cisst-saw/cisstNetlib

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/ytxu/cr_dvrk_ws/install/cisstNetlib")
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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/home/ytxu/cr_dvrk_ws/build/cisstNetlib/include/cisstNetlib.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstNetlib" TYPE FILE FILES
    "/home/ytxu/cr_dvrk_ws/build/cisstNetlib/include/cisstNetlib/cisstNetlib-types.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisstNetlib/include/cisstNetlib/cisstNetlib-lapack.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisstNetlib/include/cisstNetlib/cisstNetlib-hanson-haskell.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisstNetlib/include/cisstNetlib/cisstNetlib-lawson-hanson.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE RENAME "libcisstNetlib_lapack.a" FILES "/home/ytxu/cr_dvrk_ws/build/cisstNetlib/cisstNetlibLapack/src/cisstNetlib_C-build/SRC/liblapack.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE RENAME "libcisstNetlib_blas.a" FILES "/home/ytxu/cr_dvrk_ws/build/cisstNetlib/cisstNetlibLapack/src/cisstNetlib_C-build/BLAS/SRC/libblas.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE RENAME "libcisstNetlib_f2c.a" FILES "/home/ytxu/cr_dvrk_ws/build/cisstNetlib/cisstNetlibLapack/src/cisstNetlib_C-build/F2CLIBS/libf2c/libf2c.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisstNetlib" TYPE FILE FILES "/home/ytxu/cr_dvrk_ws/build/cisstNetlib/CisstNetlibConfig.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/ytxu/cr_dvrk_ws/build/cisstNetlib/hanson-haskell/cmake_install.cmake")
  include("/home/ytxu/cr_dvrk_ws/build/cisstNetlib/lawson-hanson/cmake_install.cmake")
  include("/home/ytxu/cr_dvrk_ws/build/cisstNetlib/cisstNetlib-wrappers/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/ytxu/cr_dvrk_ws/build/cisstNetlib/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
