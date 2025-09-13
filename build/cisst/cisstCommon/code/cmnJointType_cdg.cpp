// file automatically generated, do not modify
// cisst version: 1.3.1
// source file: /home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstCommon/code/../cmnJointType.cdg

#include <cisstCommon/cmnJointType.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */



std::string cmnDataHumanReadable__cmnJointType(const cmnJointType & data) {
    switch (data) {
        case CMN_JOINT_UNDEFINED:
            return "undefined";
            break;
        case CMN_JOINT_PRISMATIC:
            return "prismatic joint";
            break;
        case CMN_JOINT_REVOLUTE:
            return "revolute joint";
            break;
        case CMN_JOINT_UNIVERSAL:
            return "universal joint";
            break;
        case CMN_JOINT_BALL_SOCKET:
            return "ball and socket";
            break;
        case CMN_JOINT_INACTIVE:
            return "inactive";
            break;
        default: return "undefined enum cmnJointType";
            break;
    }
}

std::string cmnJointTypeToString(const cmnJointType & data) CISST_THROW(std::runtime_error) {
    switch (data) {
        case CMN_JOINT_UNDEFINED:
            return "UNDEFINED";
            break;
        case CMN_JOINT_PRISMATIC:
            return "PRISMATIC";
            break;
        case CMN_JOINT_REVOLUTE:
            return "REVOLUTE";
            break;
        case CMN_JOINT_UNIVERSAL:
            return "UNIVERSAL";
            break;
        case CMN_JOINT_BALL_SOCKET:
            return "BALL_SOCKET";
            break;
        case CMN_JOINT_INACTIVE:
            return "INACTIVE";
            break;
        default:
            break;
    }
    cmnThrow("cmnJointTypeToString called with invalid enum");
    return "";
}

cmnJointType cmnJointTypeFromString(const std::string & value) CISST_THROW(std::runtime_error) {
    if (value == "UNDEFINED") {
        return CMN_JOINT_UNDEFINED;
    };
    if (value == "PRISMATIC") {
        return CMN_JOINT_PRISMATIC;
    };
    if (value == "REVOLUTE") {
        return CMN_JOINT_REVOLUTE;
    };
    if (value == "UNIVERSAL") {
        return CMN_JOINT_UNIVERSAL;
    };
    if (value == "BALL_SOCKET") {
        return CMN_JOINT_BALL_SOCKET;
    };
    if (value == "INACTIVE") {
        return CMN_JOINT_INACTIVE;
    };
    std::string message = "cmnJointTypeFromString can't find matching enum for " + value + ".  Options are: ";
    std::vector<std::string> options = cmnJointTypeVectorString();
    for (std::vector<std::string>::const_iterator i = options.begin(); i != options.end(); ++i) message += *i + " ";
    cmnThrow(message);
    return static_cast<cmnJointType >(0);
}

const std::vector<int> & cmnJointTypeVectorInt(void) {
    static std::vector<int> vectorInt;
    if (vectorInt.empty()) {
        vectorInt.push_back(static_cast<int>(CMN_JOINT_UNDEFINED));
        vectorInt.push_back(static_cast<int>(CMN_JOINT_PRISMATIC));
        vectorInt.push_back(static_cast<int>(CMN_JOINT_REVOLUTE));
        vectorInt.push_back(static_cast<int>(CMN_JOINT_UNIVERSAL));
        vectorInt.push_back(static_cast<int>(CMN_JOINT_BALL_SOCKET));
        vectorInt.push_back(static_cast<int>(CMN_JOINT_INACTIVE));
    }
    return vectorInt;
}

const std::vector<std::string> & cmnJointTypeVectorString(void) {
    static std::vector<std::string> vectorString;
    if (vectorString.empty()) {
        vectorString.push_back("UNDEFINED");
        vectorString.push_back("PRISMATIC");
        vectorString.push_back("REVOLUTE");
        vectorString.push_back("UNIVERSAL");
        vectorString.push_back("BALL_SOCKET");
        vectorString.push_back("INACTIVE");
    }
    return vectorString;
}

#if CISST_HAS_JSON
  CMN_IMPLEMENT_DATA_FUNCTIONS_JSON_FOR_ENUM_AS_STRING(cmnJointType, cmnJointTypeToString, cmnJointTypeFromString);
#endif // CISST_HAS_JSON

