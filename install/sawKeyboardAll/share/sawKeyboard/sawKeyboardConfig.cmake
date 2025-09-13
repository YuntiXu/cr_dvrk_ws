#
# (C) Copyright 2011-2021 Johns Hopkins University (JHU), All Rights Reserved.
#

set (sawKeyboard_VERSION_MAJOR "1")
set (sawKeyboard_VERSION_MINOR "4")
set (sawKeyboard_VERSION_PATCH "0")
set (sawKeyboard_VERSION "1.4.0")


# figure out if this file is where it was configured (build tree) or
# not (installed tree)
set (sawKeyboard_CMAKE_CONFIG_FILE "/home/ytxu/cr_dvrk_ws/build/sawKeyboardAll/components/sawKeyboardConfig.cmake")
get_filename_component (THIS_FILE_PATH
                        ${CMAKE_CURRENT_LIST_FILE}
                        REALPATH)

if ("${sawKeyboard_CMAKE_CONFIG_FILE}" STREQUAL "${THIS_FILE_PATH}")
  # we're using the build directories
  set (sawKeyboard_INCLUDE_DIR "/home/ytxu/cr_dvrk_ws/src/cisst-saw/sawKeyboard/components/include;/home/ytxu/cr_dvrk_ws/build/sawKeyboardAll/components/include")
  set (sawKeyboard_LIBRARY_DIR "/home/ytxu/cr_dvrk_ws/install/cisst//lib")
else ()
  # try to find the install dir, we know the install is using
  # share/sawControllers so we can go ../.. or ../../..
  # find include path first
  find_path (sawKeyboard_INCLUDE_DIR
    NAMES sawKeyboard/sawKeyboardExport.h
    HINTS ${THIS_FILE_PATH}/../.. ${THIS_FILE_PATH}/../../..)
  # set library path relative to include
  set (sawKeyboard_LIBRARY_DIR "${sawKeyboard_INCLUDE_DIR}/../lib")
endif ()

set (sawKeyboard_LIBRARIES "sawKeyboard")
