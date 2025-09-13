# Install script for directory: /home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/code

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstMeshx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstMesh" TYPE FILE FILES "/home/ytxu/cr_dvrk_ws/build/cisst/include/cisstMesh/mshConfig.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstMeshx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMesh.so.1.3.1" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMesh.so.1.3.1")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMesh.so.1.3.1"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ytxu/cr_dvrk_ws/build/cisst/lib/libcisstMesh.so.1.3.1")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMesh.so.1.3.1" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMesh.so.1.3.1")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMesh.so.1.3.1"
         OLD_RPATH "/home/ytxu/cr_dvrk_ws/build/cisst/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMesh.so.1.3.1")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstMeshx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMesh.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMesh.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMesh.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ytxu/cr_dvrk_ws/build/cisst/lib/libcisstMesh.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMesh.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMesh.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMesh.so"
         OLD_RPATH "/home/ytxu/cr_dvrk_ws/build/cisst/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMesh.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstMeshx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.3/cmake" TYPE FILE FILES "/home/ytxu/cr_dvrk_ws/build/cisst/share/cisst-1.3/cmake/cisstMeshInternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstMeshx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.3/cmake" TYPE FILE FILES "/home/ytxu/cr_dvrk_ws/build/cisst/share/cisst-1.3/cmake/cisstMeshInternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstMeshx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.3/cmake" TYPE FILE FILES "/home/ytxu/cr_dvrk_ws/build/cisst/share/cisst-1.3/cmake/cisstMeshInternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstMesh-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstMesh" TYPE FILE FILES
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/EllipsoidOBBIntersectionSolver.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/PointProjectionRoutines.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/TriangleClosestPointSolver.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh2AlgDirPDTree.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh2AlgDirPDTreeCP.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh2AlgDirPDTreeCPEdges.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh2AlgDirPDTreeCPPointCloud.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh2AlgDirPDTreevonMises.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh2AlgDirPDTreevonMisesEdges.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh2AlgDirPDTreevonMisesPointCloud.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh2BoundingBox.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh2DirPDTreeBase.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh2DirPDTreeEdges.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh2DirPDTreeNode.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh2DirPDTreePointCloud.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh2Edge.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh2Edges.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh2PointCloud.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh2Utilities.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh3AlgDirPDTree.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh3AlgDirPDTreeBA.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh3AlgDirPDTreeBAMesh.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh3AlgDirPDTreeBAPointCloud.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh3AlgDirPDTreevonMisesProj.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh3AlgDirPDTreevonMisesProjMesh.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh3AlgPDTree.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh3AlgPDTreeCP.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh3AlgPDTreeCPMesh.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh3AlgPDTreeCPPointCloud.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh3AlgPDTreeMLP.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh3AlgPDTreeMLPMesh.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh3AlgPDTreeMLPPointCloud.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh3BoundingBox.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh3DirPDTreeBase.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh3DirPDTreeMesh.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh3DirPDTreeNode.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh3DirPDTreePointCloud.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh3Mesh.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh3PDTreeBase.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh3PDTreeMesh.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh3PDTreeNode.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh3PDTreePointCloud.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh3PointCloud.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/msh3Utilities.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/mshExport.h"
    "/home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstMesh/mshForwardDeclarations.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstMesh-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/home/ytxu/cr_dvrk_ws/build/cisst/include/cisstMesh.h")
endif()

