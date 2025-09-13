/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-    */
/* ex: set filetype=cpp softtabstop=4 shiftwidth=4 tabstop=4 cindent expandtab: */

/*
  Author(s):  Anton Deguet
  Created on: 2012-09-25

  (C) Copyright 2012-2023 Johns Hopkins University (JHU), All Rights Reserved.

--- begin cisst license - do not edit ---

This software is provided "as is" under an open source license, with
no warranty.  The complete license can be found in license.txt and
http://www.cisst.org/cisst/license.txt.

--- end cisst license ---

*/

#pragma once

#ifndef _cisstNetlib_h
#define _cisstNetlib_h

#define cisstNetlib_VERSION 3.2.2
#define cisstNetlib_VERSION_MAJOR 3
#define cisstNetlib_VERSION_MINOR 2
#define cisstNetlib_VERSION_PATCH 2
#define cisstNetlib_C_BASED 1
#define cisstNetlib_FORTRAN_BASED 0

extern "C" {
#include <cisstNetlib/cisstNetlib-types.h>
#include <cisstNetlib/cisstNetlib-lapack.h>
#include <cisstNetlib/cisstNetlib-hanson-haskell.h>
#include <cisstNetlib/cisstNetlib-lawson-hanson.h>
}

#endif // _cisstNetlib_h

