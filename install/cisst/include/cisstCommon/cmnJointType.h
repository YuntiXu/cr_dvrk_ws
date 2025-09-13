// file automatically generated, do not modify
// cisst version: 1.3.1
// source file: /home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/code/../cmnJointType.cdg

#pragma once
#ifndef _cisstCommon_cmnJointType_h
#define _cisstCommon_cmnJointType_h

#include <cisstCommon/cmnDataFunctions.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#if CISST_HAS_JSON
#include <cisstCommon/cmnDataFunctionsJSON.h>
#endif // CISST_HAS_JSON

/* source line: 1 */



/* source line: 1 */
/* source line: 4 */


#include <cisstCommon/cmnUnits.h>

// Always include last
#include <cisstCommon/cmnExport.h>

/* source line: 12 */
enum cmnJointType {CMN_JOINT_UNDEFINED, CMN_JOINT_PRISMATIC, CMN_JOINT_REVOLUTE, CMN_JOINT_UNIVERSAL, CMN_JOINT_BALL_SOCKET, CMN_JOINT_INACTIVE };
CISST_EXPORT std::string cmnJointTypeToString(const cmnJointType & value) CISST_THROW(std::runtime_error);
CISST_EXPORT cmnJointType cmnJointTypeFromString(const std::string & value) CISST_THROW(std::runtime_error);
CISST_EXPORT const std::vector<int> & cmnJointTypeVectorInt(void);
CISST_EXPORT const std::vector<std::string> & cmnJointTypeVectorString(void);
CMN_DATA_SPECIALIZATION_FOR_ENUM_USER_HUMAN_READABLE(cmnJointType, int, cmnJointTypeToString);
#if CISST_HAS_JSON
  CMN_DECLARE_DATA_FUNCTIONS_JSON_FOR_ENUM_EXPORT(cmnJointType);
#endif // CISST_HAS_JSON

/* source line: 44 */


template <template<class> class _vector_type>
void cmnJointTypeToFactor(const _vector_type<cmnJointType> & types,
                          const double prismaticFactor,
                          const double revoluteFactor,
                          _vector_type<double> & factors)
{
    // set unitFactor;
    for (size_t i = 0; i < types.size(); i++) {
        switch (types.at(i)) {
        case CMN_JOINT_PRISMATIC:
            factors.at(i) = prismaticFactor;
            break;
        case CMN_JOINT_REVOLUTE:
            factors.at(i) = revoluteFactor;
            break;
        default:
            factors.at(i) = 1.0;
            break;
        }
    }
}


#endif // _cisstCommon_cmnJointType_h
