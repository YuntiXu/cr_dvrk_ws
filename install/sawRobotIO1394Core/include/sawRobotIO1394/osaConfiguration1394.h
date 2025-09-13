// file automatically generated, do not modify
// cisst version: 1.3.1
// source file: /home/ytxu/cr_dvrk_ws/src/cisst-saw/sawRobotIO1394/core/components/code/osaConfiguration1394.cdg

#pragma once
#ifndef _sawRobotIO1394_osaConfiguration1394_h
#define _sawRobotIO1394_osaConfiguration1394_h

#include <cisstCommon/cmnDataFunctions.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#if CISST_HAS_JSON
#include <cisstCommon/cmnDataFunctionsJSON.h>
#endif // CISST_HAS_JSON

/* source line: 1 */


















// for mts-proxy 
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>

/* source line: 1 */
/* source line: 4 */

#include <set>
#include <cisstCommon/cmnUnits.h>
#include <cisstCommon/cmnJointType.h>
#include <cisstVector/vctDynamicMatrixTypes.h>
#include <cisstParameterTypes/prmActuatorJointCoupling.h>
#include <sawRobotIO1394/sawRobotIO1394Revision.h>
#include <sawRobotIO1394/sawRobotIO1394Export.h>

class AmpIO;

namespace sawRobotIO1394 {
    const size_t MAX_BOARDS = 16;
    const size_t MAX_AXES = 10;

    inline bool osaUnitIsDistance(const std::string & unit) {
        // make sure this is properly sorted?
        static const std::set<std::string> keywords {"cm", "deg", "m", "mm", "rad"};
        return keywords.find(unit) != keywords.end();
    }

    inline bool osaUnitIsDistanceRevolute(const std::string & unit) {
        // make sure this is properly sorted?
        static const std::set<std::string> keywords {"deg", "rad"};
        return keywords.find(unit) != keywords.end();
    }

    inline bool osaUnitIsDistancePrismatic(const std::string & unit) {
        // make sure this is properly sorted?
        static const std::set<std::string> keywords {"cm", "m", "mm"};
        return keywords.find(unit) != keywords.end();
    }

    inline double osaUnitToSIFactor(const std::string & unit) {
        // make sure this is properly sorted?
        static const std::map<std::string, double> factors {
            { "A",   1.0},
            { "cm",  cmn_cm},
            { "deg", cmnPI_180},
            { "m",   cmn_m},
            { "mA",  1.000},
            { "mm",  cmn_mm},
            { "rad", 1.0},
            { "none", 1.0}
        };
        const auto factor = factors.find(unit);
        if (factor != factors.end()) {
            return factor->second;
        }
        return 0.0;
    }
} // namespace sawRobotIO1394


/* source line: 60 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaLinearFunction
{
 /* default constructors and destructors. */
 public:
    osaLinearFunction(void);
    osaLinearFunction(const osaLinearFunction & other);
    osaLinearFunction & operator = (const osaLinearFunction & other);
    ~osaLinearFunction();

/* source line: 64 */
 public:
    double Scale; // Scale
/* source line: 70 */
 public:
    double Offset; // Offset
/* source line: 76 */
 public:
    std::string Unit; // Unit
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaLinearFunction & source);
    void SerializeBinary(std::ostream & outputStream) const CISST_THROW(std::runtime_error);
    void DeSerializeBinary(std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error);
    void SerializeText(std::ostream & outputStream, const char delimiter = ',') const CISST_THROW(std::runtime_error);
    std::string SerializeDescription(const char delimiter = ',', const std::string & userDescription = "") const;
    void DeSerializeText(std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error);
    std::string HumanReadable(void) const;
    bool ScalarNumberIsFixed(void) const;
    size_t ScalarNumber(void) const;
    double Scalar(const size_t index) const CISST_THROW(std::out_of_range);
    std::string ScalarDescription(const size_t index, const std::string & userDescription = "") const CISST_THROW(std::out_of_range);
#if CISST_HAS_JSON
    void SerializeTextJSON(Json::Value & jsonValue) const;
    void DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

}; // osaLinearFunction
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaLinearFunction> sawRobotIO1394_osaLinearFunctionProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaLinearFunctionProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaLinearFunction & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaLinearFunction & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaLinearFunction > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaLinearFunction DataType;
    static void Copy(DataType & data, const DataType & source) {
        data.Copy(source);
    }
    static std::string SerializeDescription(const DataType & data, const char delimiter, const std::string & userDescription) {
        return data.SerializeDescription(delimiter, userDescription);
    }
    static void SerializeBinary(const DataType & data, std::ostream & outputStream) CISST_THROW(std::runtime_error) {
        data.SerializeBinary(outputStream);
    }
    static void DeSerializeBinary(DataType & data, std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
        data.DeSerializeBinary(inputStream, localFormat, remoteFormat);
    }
    static void SerializeText(const DataType & data, std::ostream & outputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.SerializeText(outputStream, delimiter);
    }
    static void DeSerializeText(DataType & data, std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.DeSerializeText(inputStream, delimiter);
    }
    static std::string HumanReadable(const DataType & data) {
        return data.HumanReadable();
    }
    static bool ScalarNumberIsFixed(const DataType & data) {
        return data.ScalarNumberIsFixed();
    }
    static size_t ScalarNumber(const DataType & data) {
        return data.ScalarNumber();
    }
    static std::string ScalarDescription(const DataType & data, const size_t index, const std::string & userDescription = "") CISST_THROW(std::out_of_range) {
        return data.ScalarDescription(index, userDescription);
    }
    static double Scalar(const DataType & data, const size_t index) CISST_THROW(std::out_of_range) {
        return data.Scalar(index);
    }
};
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaLinearFunction & data) {
    outputStream << cmnData<sawRobotIO1394::osaLinearFunction >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaLinearFunction >::SerializeText(const sawRobotIO1394::osaLinearFunction & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaLinearFunction >::DeSerializeText(sawRobotIO1394::osaLinearFunction & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 83 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaLimits
{
 /* default constructors and destructors. */
 public:
    osaLimits(void);
    osaLimits(const osaLimits & other);
    osaLimits & operator = (const osaLimits & other);
    ~osaLimits();

/* source line: 87 */
 public:
    double Lower; // Lower
/* source line: 92 */
 public:
    double Upper; // Upper
/* source line: 97 */
 public:
    std::string Unit; // Unit
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaLimits & source);
    void SerializeBinary(std::ostream & outputStream) const CISST_THROW(std::runtime_error);
    void DeSerializeBinary(std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error);
    void SerializeText(std::ostream & outputStream, const char delimiter = ',') const CISST_THROW(std::runtime_error);
    std::string SerializeDescription(const char delimiter = ',', const std::string & userDescription = "") const;
    void DeSerializeText(std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error);
    std::string HumanReadable(void) const;
    bool ScalarNumberIsFixed(void) const;
    size_t ScalarNumber(void) const;
    double Scalar(const size_t index) const CISST_THROW(std::out_of_range);
    std::string ScalarDescription(const size_t index, const std::string & userDescription = "") const CISST_THROW(std::out_of_range);
#if CISST_HAS_JSON
    void SerializeTextJSON(Json::Value & jsonValue) const;
    void DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

}; // osaLimits
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaLimits> sawRobotIO1394_osaLimitsProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaLimitsProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaLimits & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaLimits & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaLimits > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaLimits DataType;
    static void Copy(DataType & data, const DataType & source) {
        data.Copy(source);
    }
    static std::string SerializeDescription(const DataType & data, const char delimiter, const std::string & userDescription) {
        return data.SerializeDescription(delimiter, userDescription);
    }
    static void SerializeBinary(const DataType & data, std::ostream & outputStream) CISST_THROW(std::runtime_error) {
        data.SerializeBinary(outputStream);
    }
    static void DeSerializeBinary(DataType & data, std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
        data.DeSerializeBinary(inputStream, localFormat, remoteFormat);
    }
    static void SerializeText(const DataType & data, std::ostream & outputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.SerializeText(outputStream, delimiter);
    }
    static void DeSerializeText(DataType & data, std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.DeSerializeText(inputStream, delimiter);
    }
    static std::string HumanReadable(const DataType & data) {
        return data.HumanReadable();
    }
    static bool ScalarNumberIsFixed(const DataType & data) {
        return data.ScalarNumberIsFixed();
    }
    static size_t ScalarNumber(const DataType & data) {
        return data.ScalarNumber();
    }
    static std::string ScalarDescription(const DataType & data, const size_t index, const std::string & userDescription = "") CISST_THROW(std::out_of_range) {
        return data.ScalarDescription(index, userDescription);
    }
    static double Scalar(const DataType & data, const size_t index) CISST_THROW(std::out_of_range) {
        return data.Scalar(index);
    }
};
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaLimits & data) {
    outputStream << cmnData<sawRobotIO1394::osaLimits >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaLimits >::SerializeText(const sawRobotIO1394::osaLimits & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaLimits >::DeSerializeText(sawRobotIO1394::osaLimits & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 104 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaDrive1394Configuration
{
 /* default constructors and destructors. */
 public:
    osaDrive1394Configuration(void);
    osaDrive1394Configuration(const osaDrive1394Configuration & other);
    osaDrive1394Configuration & operator = (const osaDrive1394Configuration & other);
    ~osaDrive1394Configuration();

/* source line: 108 */
 public:
    osaLinearFunction EffortToCurrent; // EffortToCurrent
/* source line: 113 */
 public:
    osaLinearFunction CurrentToBits; // CurrentToBits
/* source line: 118 */
 public:
    osaLinearFunction BitsToCurrent; // BitsToCurrent
/* source line: 123 */
 public:
    double CurrentCommandLimit; // CurrentCommandLimit
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaDrive1394Configuration & source);
    void SerializeBinary(std::ostream & outputStream) const CISST_THROW(std::runtime_error);
    void DeSerializeBinary(std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error);
    void SerializeText(std::ostream & outputStream, const char delimiter = ',') const CISST_THROW(std::runtime_error);
    std::string SerializeDescription(const char delimiter = ',', const std::string & userDescription = "") const;
    void DeSerializeText(std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error);
    std::string HumanReadable(void) const;
    bool ScalarNumberIsFixed(void) const;
    size_t ScalarNumber(void) const;
    double Scalar(const size_t index) const CISST_THROW(std::out_of_range);
    std::string ScalarDescription(const size_t index, const std::string & userDescription = "") const CISST_THROW(std::out_of_range);
#if CISST_HAS_JSON
    void SerializeTextJSON(Json::Value & jsonValue) const;
    void DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

}; // osaDrive1394Configuration
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaDrive1394Configuration> sawRobotIO1394_osaDrive1394ConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaDrive1394ConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaDrive1394Configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaDrive1394Configuration & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaDrive1394Configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaDrive1394Configuration DataType;
    static void Copy(DataType & data, const DataType & source) {
        data.Copy(source);
    }
    static std::string SerializeDescription(const DataType & data, const char delimiter, const std::string & userDescription) {
        return data.SerializeDescription(delimiter, userDescription);
    }
    static void SerializeBinary(const DataType & data, std::ostream & outputStream) CISST_THROW(std::runtime_error) {
        data.SerializeBinary(outputStream);
    }
    static void DeSerializeBinary(DataType & data, std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
        data.DeSerializeBinary(inputStream, localFormat, remoteFormat);
    }
    static void SerializeText(const DataType & data, std::ostream & outputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.SerializeText(outputStream, delimiter);
    }
    static void DeSerializeText(DataType & data, std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.DeSerializeText(inputStream, delimiter);
    }
    static std::string HumanReadable(const DataType & data) {
        return data.HumanReadable();
    }
    static bool ScalarNumberIsFixed(const DataType & data) {
        return data.ScalarNumberIsFixed();
    }
    static size_t ScalarNumber(const DataType & data) {
        return data.ScalarNumber();
    }
    static std::string ScalarDescription(const DataType & data, const size_t index, const std::string & userDescription = "") CISST_THROW(std::out_of_range) {
        return data.ScalarDescription(index, userDescription);
    }
    static double Scalar(const DataType & data, const size_t index) CISST_THROW(std::out_of_range) {
        return data.Scalar(index);
    }
};
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaDrive1394Configuration & data) {
    outputStream << cmnData<sawRobotIO1394::osaDrive1394Configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaDrive1394Configuration >::SerializeText(const sawRobotIO1394::osaDrive1394Configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaDrive1394Configuration >::DeSerializeText(sawRobotIO1394::osaDrive1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 131 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaEncoder1394Configuration
{
 /* default constructors and destructors. */
 public:
    osaEncoder1394Configuration(void);
    osaEncoder1394Configuration(const osaEncoder1394Configuration & other);
    osaEncoder1394Configuration & operator = (const osaEncoder1394Configuration & other);
    ~osaEncoder1394Configuration();

/* source line: 135 */
public:
    enum VelocitySourceType {FIRMWARE, SOFTWARE };
static std::string VelocitySourceTypeToString(const VelocitySourceType & value) CISST_THROW(std::runtime_error);
static VelocitySourceType VelocitySourceTypeFromString(const std::string & value) CISST_THROW(std::runtime_error);
static const std::vector<int> & VelocitySourceTypeVectorInt(void);
static const std::vector<std::string> & VelocitySourceTypeVectorString(void);
/* source line: 146 */
 public:
    osaLinearFunction BitsToPosition; // BitsToPosition
/* source line: 151 */
 public:
    osaLimits PositionLimitsSoft; // PositionLimitsSoft
/* source line: 156 */
 public:
    osaEncoder1394Configuration::VelocitySourceType VelocitySource; // VelocitySource
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaEncoder1394Configuration & source);
    void SerializeBinary(std::ostream & outputStream) const CISST_THROW(std::runtime_error);
    void DeSerializeBinary(std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error);
    void SerializeText(std::ostream & outputStream, const char delimiter = ',') const CISST_THROW(std::runtime_error);
    std::string SerializeDescription(const char delimiter = ',', const std::string & userDescription = "") const;
    void DeSerializeText(std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error);
    std::string HumanReadable(void) const;
    bool ScalarNumberIsFixed(void) const;
    size_t ScalarNumber(void) const;
    double Scalar(const size_t index) const CISST_THROW(std::out_of_range);
    std::string ScalarDescription(const size_t index, const std::string & userDescription = "") const CISST_THROW(std::out_of_range);
#if CISST_HAS_JSON
    void SerializeTextJSON(Json::Value & jsonValue) const;
    void DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

}; // osaEncoder1394Configuration
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaEncoder1394Configuration> sawRobotIO1394_osaEncoder1394ConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaEncoder1394ConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaEncoder1394Configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaEncoder1394Configuration & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaEncoder1394Configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaEncoder1394Configuration DataType;
    static void Copy(DataType & data, const DataType & source) {
        data.Copy(source);
    }
    static std::string SerializeDescription(const DataType & data, const char delimiter, const std::string & userDescription) {
        return data.SerializeDescription(delimiter, userDescription);
    }
    static void SerializeBinary(const DataType & data, std::ostream & outputStream) CISST_THROW(std::runtime_error) {
        data.SerializeBinary(outputStream);
    }
    static void DeSerializeBinary(DataType & data, std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
        data.DeSerializeBinary(inputStream, localFormat, remoteFormat);
    }
    static void SerializeText(const DataType & data, std::ostream & outputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.SerializeText(outputStream, delimiter);
    }
    static void DeSerializeText(DataType & data, std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.DeSerializeText(inputStream, delimiter);
    }
    static std::string HumanReadable(const DataType & data) {
        return data.HumanReadable();
    }
    static bool ScalarNumberIsFixed(const DataType & data) {
        return data.ScalarNumberIsFixed();
    }
    static size_t ScalarNumber(const DataType & data) {
        return data.ScalarNumber();
    }
    static std::string ScalarDescription(const DataType & data, const size_t index, const std::string & userDescription = "") CISST_THROW(std::out_of_range) {
        return data.ScalarDescription(index, userDescription);
    }
    static double Scalar(const DataType & data, const size_t index) CISST_THROW(std::out_of_range) {
        return data.Scalar(index);
    }
};
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaEncoder1394Configuration & data) {
    outputStream << cmnData<sawRobotIO1394::osaEncoder1394Configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaEncoder1394Configuration >::SerializeText(const sawRobotIO1394::osaEncoder1394Configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaEncoder1394Configuration >::DeSerializeText(sawRobotIO1394::osaEncoder1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON
std::string CISST_EXPORT cmnDataHumanReadable_sawRobotIO1394__osaEncoder1394Configuration_VelocitySourceType(const sawRobotIO1394::osaEncoder1394Configuration::VelocitySourceType & data);
CMN_DATA_SPECIALIZATION_FOR_ENUM_USER_HUMAN_READABLE(sawRobotIO1394::osaEncoder1394Configuration::VelocitySourceType, int, cmnDataHumanReadable_sawRobotIO1394__osaEncoder1394Configuration_VelocitySourceType);
#if CISST_HAS_JSON
  CMN_DECLARE_DATA_FUNCTIONS_JSON_FOR_ENUM(sawRobotIO1394::osaEncoder1394Configuration::VelocitySourceType);
#endif // CISST_HAS_JSON

/* source line: 163 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaPot1394Configuration
{
 /* default constructors and destructors. */
 public:
    osaPot1394Configuration(void);
    osaPot1394Configuration(const osaPot1394Configuration & other);
    osaPot1394Configuration & operator = (const osaPot1394Configuration & other);
    ~osaPot1394Configuration();

/* source line: 167 */
 public:
    int Type; // 1 for analog pots, 2 for digital pots
/* source line: 173 */
 public:
    osaLinearFunction BitsToVoltage; // BitsToVoltage
/* source line: 178 */
 public:
    osaLinearFunction SensorToPosition; // SensorToPosition
/* source line: 183 */
 public:
    vctDoubleVec LookupTable; // LookupTable
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaPot1394Configuration & source);
    void SerializeBinary(std::ostream & outputStream) const CISST_THROW(std::runtime_error);
    void DeSerializeBinary(std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error);
    void SerializeText(std::ostream & outputStream, const char delimiter = ',') const CISST_THROW(std::runtime_error);
    std::string SerializeDescription(const char delimiter = ',', const std::string & userDescription = "") const;
    void DeSerializeText(std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error);
    std::string HumanReadable(void) const;
    bool ScalarNumberIsFixed(void) const;
    size_t ScalarNumber(void) const;
    double Scalar(const size_t index) const CISST_THROW(std::out_of_range);
    std::string ScalarDescription(const size_t index, const std::string & userDescription = "") const CISST_THROW(std::out_of_range);
#if CISST_HAS_JSON
    void SerializeTextJSON(Json::Value & jsonValue) const;
    void DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

}; // osaPot1394Configuration
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaPot1394Configuration> sawRobotIO1394_osaPot1394ConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaPot1394ConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaPot1394Configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaPot1394Configuration & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaPot1394Configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaPot1394Configuration DataType;
    static void Copy(DataType & data, const DataType & source) {
        data.Copy(source);
    }
    static std::string SerializeDescription(const DataType & data, const char delimiter, const std::string & userDescription) {
        return data.SerializeDescription(delimiter, userDescription);
    }
    static void SerializeBinary(const DataType & data, std::ostream & outputStream) CISST_THROW(std::runtime_error) {
        data.SerializeBinary(outputStream);
    }
    static void DeSerializeBinary(DataType & data, std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
        data.DeSerializeBinary(inputStream, localFormat, remoteFormat);
    }
    static void SerializeText(const DataType & data, std::ostream & outputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.SerializeText(outputStream, delimiter);
    }
    static void DeSerializeText(DataType & data, std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.DeSerializeText(inputStream, delimiter);
    }
    static std::string HumanReadable(const DataType & data) {
        return data.HumanReadable();
    }
    static bool ScalarNumberIsFixed(const DataType & data) {
        return data.ScalarNumberIsFixed();
    }
    static size_t ScalarNumber(const DataType & data) {
        return data.ScalarNumber();
    }
    static std::string ScalarDescription(const DataType & data, const size_t index, const std::string & userDescription = "") CISST_THROW(std::out_of_range) {
        return data.ScalarDescription(index, userDescription);
    }
    static double Scalar(const DataType & data, const size_t index) CISST_THROW(std::out_of_range) {
        return data.Scalar(index);
    }
};
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaPot1394Configuration & data) {
    outputStream << cmnData<sawRobotIO1394::osaPot1394Configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaPot1394Configuration >::SerializeText(const sawRobotIO1394::osaPot1394Configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaPot1394Configuration >::DeSerializeText(sawRobotIO1394::osaPot1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 190 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaAnalogBrake1394Configuration
{
 /* default constructors and destructors. */
 public:
    osaAnalogBrake1394Configuration(void);
    osaAnalogBrake1394Configuration(const osaAnalogBrake1394Configuration & other);
    osaAnalogBrake1394Configuration & operator = (const osaAnalogBrake1394Configuration & other);
    ~osaAnalogBrake1394Configuration();

/* source line: 194 */
 public:
    int BoardID; // BoardID
/* source line: 199 */
 public:
    int AxisID; // AxisID
/* source line: 204 */
 public:
    osaDrive1394Configuration Drive; // Drive
/* source line: 209 */
 public:
    double ReleaseCurrent; // ReleaseCurrent
/* source line: 214 */
 public:
    double ReleaseTime; // ReleaseTime
/* source line: 219 */
 public:
    double ReleasedCurrent; // ReleasedCurrent
/* source line: 224 */
 public:
    double EngagedCurrent; // EngagedCurrent
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaAnalogBrake1394Configuration & source);
    void SerializeBinary(std::ostream & outputStream) const CISST_THROW(std::runtime_error);
    void DeSerializeBinary(std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error);
    void SerializeText(std::ostream & outputStream, const char delimiter = ',') const CISST_THROW(std::runtime_error);
    std::string SerializeDescription(const char delimiter = ',', const std::string & userDescription = "") const;
    void DeSerializeText(std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error);
    std::string HumanReadable(void) const;
    bool ScalarNumberIsFixed(void) const;
    size_t ScalarNumber(void) const;
    double Scalar(const size_t index) const CISST_THROW(std::out_of_range);
    std::string ScalarDescription(const size_t index, const std::string & userDescription = "") const CISST_THROW(std::out_of_range);
#if CISST_HAS_JSON
    void SerializeTextJSON(Json::Value & jsonValue) const;
    void DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

}; // osaAnalogBrake1394Configuration
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaAnalogBrake1394Configuration> sawRobotIO1394_osaAnalogBrake1394ConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaAnalogBrake1394ConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaAnalogBrake1394Configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaAnalogBrake1394Configuration & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaAnalogBrake1394Configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaAnalogBrake1394Configuration DataType;
    static void Copy(DataType & data, const DataType & source) {
        data.Copy(source);
    }
    static std::string SerializeDescription(const DataType & data, const char delimiter, const std::string & userDescription) {
        return data.SerializeDescription(delimiter, userDescription);
    }
    static void SerializeBinary(const DataType & data, std::ostream & outputStream) CISST_THROW(std::runtime_error) {
        data.SerializeBinary(outputStream);
    }
    static void DeSerializeBinary(DataType & data, std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
        data.DeSerializeBinary(inputStream, localFormat, remoteFormat);
    }
    static void SerializeText(const DataType & data, std::ostream & outputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.SerializeText(outputStream, delimiter);
    }
    static void DeSerializeText(DataType & data, std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.DeSerializeText(inputStream, delimiter);
    }
    static std::string HumanReadable(const DataType & data) {
        return data.HumanReadable();
    }
    static bool ScalarNumberIsFixed(const DataType & data) {
        return data.ScalarNumberIsFixed();
    }
    static size_t ScalarNumber(const DataType & data) {
        return data.ScalarNumber();
    }
    static std::string ScalarDescription(const DataType & data, const size_t index, const std::string & userDescription = "") CISST_THROW(std::out_of_range) {
        return data.ScalarDescription(index, userDescription);
    }
    static double Scalar(const DataType & data, const size_t index) CISST_THROW(std::out_of_range) {
        return data.Scalar(index);
    }
};
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaAnalogBrake1394Configuration & data) {
    outputStream << cmnData<sawRobotIO1394::osaAnalogBrake1394Configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaAnalogBrake1394Configuration >::SerializeText(const sawRobotIO1394::osaAnalogBrake1394Configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaAnalogBrake1394Configuration >::DeSerializeText(sawRobotIO1394::osaAnalogBrake1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 231 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaActuator1394Configuration
{
 /* default constructors and destructors. */
 public:
    osaActuator1394Configuration(void);
    osaActuator1394Configuration(const osaActuator1394Configuration & other);
    osaActuator1394Configuration & operator = (const osaActuator1394Configuration & other);
    ~osaActuator1394Configuration();

/* source line: 235 */
 public:
    int BoardID; // BoardID
/* source line: 240 */
 public:
    int AxisID; // AxisID
/* source line: 245 */
 public:
    cmnJointType JointType; // JointType
/* source line: 250 */
 public:
    osaDrive1394Configuration Drive; // Drive
/* source line: 255 */
 public:
    osaEncoder1394Configuration Encoder; // Encoder
/* source line: 260 */
 public:
    osaPot1394Configuration Pot; // Pot
/* source line: 265 */
 public:
    osaAnalogBrake1394Configuration * Brake; // Brake
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaActuator1394Configuration & source);
    void SerializeBinary(std::ostream & outputStream) const CISST_THROW(std::runtime_error);
    void DeSerializeBinary(std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error);
    void SerializeText(std::ostream & outputStream, const char delimiter = ',') const CISST_THROW(std::runtime_error);
    std::string SerializeDescription(const char delimiter = ',', const std::string & userDescription = "") const;
    void DeSerializeText(std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error);
    std::string HumanReadable(void) const;
    bool ScalarNumberIsFixed(void) const;
    size_t ScalarNumber(void) const;
    double Scalar(const size_t index) const CISST_THROW(std::out_of_range);
    std::string ScalarDescription(const size_t index, const std::string & userDescription = "") const CISST_THROW(std::out_of_range);
#if CISST_HAS_JSON
    void SerializeTextJSON(Json::Value & jsonValue) const;
    void DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

}; // osaActuator1394Configuration
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaActuator1394Configuration> sawRobotIO1394_osaActuator1394ConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaActuator1394ConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaActuator1394Configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaActuator1394Configuration & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaActuator1394Configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaActuator1394Configuration DataType;
    static void Copy(DataType & data, const DataType & source) {
        data.Copy(source);
    }
    static std::string SerializeDescription(const DataType & data, const char delimiter, const std::string & userDescription) {
        return data.SerializeDescription(delimiter, userDescription);
    }
    static void SerializeBinary(const DataType & data, std::ostream & outputStream) CISST_THROW(std::runtime_error) {
        data.SerializeBinary(outputStream);
    }
    static void DeSerializeBinary(DataType & data, std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
        data.DeSerializeBinary(inputStream, localFormat, remoteFormat);
    }
    static void SerializeText(const DataType & data, std::ostream & outputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.SerializeText(outputStream, delimiter);
    }
    static void DeSerializeText(DataType & data, std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.DeSerializeText(inputStream, delimiter);
    }
    static std::string HumanReadable(const DataType & data) {
        return data.HumanReadable();
    }
    static bool ScalarNumberIsFixed(const DataType & data) {
        return data.ScalarNumberIsFixed();
    }
    static size_t ScalarNumber(const DataType & data) {
        return data.ScalarNumber();
    }
    static std::string ScalarDescription(const DataType & data, const size_t index, const std::string & userDescription = "") CISST_THROW(std::out_of_range) {
        return data.ScalarDescription(index, userDescription);
    }
    static double Scalar(const DataType & data, const size_t index) CISST_THROW(std::out_of_range) {
        return data.Scalar(index);
    }
};
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaActuator1394Configuration & data) {
    outputStream << cmnData<sawRobotIO1394::osaActuator1394Configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaActuator1394Configuration >::SerializeText(const sawRobotIO1394::osaActuator1394Configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaActuator1394Configuration >::DeSerializeText(sawRobotIO1394::osaActuator1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 274 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaPotTolerance1394Configuration
{
 /* default constructors and destructors. */
 public:
    osaPotTolerance1394Configuration(void);
    osaPotTolerance1394Configuration(const osaPotTolerance1394Configuration & other);
    osaPotTolerance1394Configuration & operator = (const osaPotTolerance1394Configuration & other);
    ~osaPotTolerance1394Configuration();

/* source line: 278 */
 public:
    int AxisID; // AxisID
/* source line: 283 */
 public:
    double Distance; // Distance
/* source line: 288 */
 public:
    double Latency; // Latency
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaPotTolerance1394Configuration & source);
    void SerializeBinary(std::ostream & outputStream) const CISST_THROW(std::runtime_error);
    void DeSerializeBinary(std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error);
    void SerializeText(std::ostream & outputStream, const char delimiter = ',') const CISST_THROW(std::runtime_error);
    std::string SerializeDescription(const char delimiter = ',', const std::string & userDescription = "") const;
    void DeSerializeText(std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error);
    std::string HumanReadable(void) const;
    bool ScalarNumberIsFixed(void) const;
    size_t ScalarNumber(void) const;
    double Scalar(const size_t index) const CISST_THROW(std::out_of_range);
    std::string ScalarDescription(const size_t index, const std::string & userDescription = "") const CISST_THROW(std::out_of_range);
#if CISST_HAS_JSON
    void SerializeTextJSON(Json::Value & jsonValue) const;
    void DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

}; // osaPotTolerance1394Configuration
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaPotTolerance1394Configuration> sawRobotIO1394_osaPotTolerance1394ConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaPotTolerance1394ConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaPotTolerance1394Configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaPotTolerance1394Configuration & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaPotTolerance1394Configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaPotTolerance1394Configuration DataType;
    static void Copy(DataType & data, const DataType & source) {
        data.Copy(source);
    }
    static std::string SerializeDescription(const DataType & data, const char delimiter, const std::string & userDescription) {
        return data.SerializeDescription(delimiter, userDescription);
    }
    static void SerializeBinary(const DataType & data, std::ostream & outputStream) CISST_THROW(std::runtime_error) {
        data.SerializeBinary(outputStream);
    }
    static void DeSerializeBinary(DataType & data, std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
        data.DeSerializeBinary(inputStream, localFormat, remoteFormat);
    }
    static void SerializeText(const DataType & data, std::ostream & outputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.SerializeText(outputStream, delimiter);
    }
    static void DeSerializeText(DataType & data, std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.DeSerializeText(inputStream, delimiter);
    }
    static std::string HumanReadable(const DataType & data) {
        return data.HumanReadable();
    }
    static bool ScalarNumberIsFixed(const DataType & data) {
        return data.ScalarNumberIsFixed();
    }
    static size_t ScalarNumber(const DataType & data) {
        return data.ScalarNumber();
    }
    static std::string ScalarDescription(const DataType & data, const size_t index, const std::string & userDescription = "") CISST_THROW(std::out_of_range) {
        return data.ScalarDescription(index, userDescription);
    }
    static double Scalar(const DataType & data, const size_t index) CISST_THROW(std::out_of_range) {
        return data.Scalar(index);
    }
};
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaPotTolerance1394Configuration & data) {
    outputStream << cmnData<sawRobotIO1394::osaPotTolerance1394Configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaPotTolerance1394Configuration >::SerializeText(const sawRobotIO1394::osaPotTolerance1394Configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaPotTolerance1394Configuration >::DeSerializeText(sawRobotIO1394::osaPotTolerance1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 295 */
class  osa1394
{
 /* default constructors and destructors. */
 public:
    osa1394(void);
    osa1394(const osa1394 & other);
    osa1394 & operator = (const osa1394 & other);
    ~osa1394();

/* source line: 297 */
public:
    enum HardwareType {HARDWARE_UNDEFINED, QLA1, DQLA, dRA1 };
static std::string HardwareTypeToString(const HardwareType & value) CISST_THROW(std::runtime_error);
static HardwareType HardwareTypeFromString(const std::string & value) CISST_THROW(std::runtime_error);
static const std::vector<int> & HardwareTypeVectorInt(void);
static const std::vector<std::string> & HardwareTypeVectorString(void);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osa1394 & source);
    void SerializeBinary(std::ostream & outputStream) const CISST_THROW(std::runtime_error);
    void DeSerializeBinary(std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error);
    void SerializeText(std::ostream & outputStream, const char delimiter = ',') const CISST_THROW(std::runtime_error);
    std::string SerializeDescription(const char delimiter = ',', const std::string & userDescription = "") const;
    void DeSerializeText(std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error);
    std::string HumanReadable(void) const;
    bool ScalarNumberIsFixed(void) const;
    size_t ScalarNumber(void) const;
    double Scalar(const size_t index) const CISST_THROW(std::out_of_range);
    std::string ScalarDescription(const size_t index, const std::string & userDescription = "") const CISST_THROW(std::out_of_range);
#if CISST_HAS_JSON
    void SerializeTextJSON(Json::Value & jsonValue) const;
    void DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

}; // osa1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<osa1394> osa1394Proxy;
CMN_DECLARE_SERVICES_INSTANTIATION(osa1394Proxy);

/* default functions */
void  cmnSerializeRaw(std::ostream & outputStream, const osa1394 & object);
void  cmnDeSerializeRaw(std::istream & inputStream, osa1394 & placeHolder);
/* data functions */
template <> class cmnData<osa1394 > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef osa1394 DataType;
    static void Copy(DataType & data, const DataType & source) {
        data.Copy(source);
    }
    static std::string SerializeDescription(const DataType & data, const char delimiter, const std::string & userDescription) {
        return data.SerializeDescription(delimiter, userDescription);
    }
    static void SerializeBinary(const DataType & data, std::ostream & outputStream) CISST_THROW(std::runtime_error) {
        data.SerializeBinary(outputStream);
    }
    static void DeSerializeBinary(DataType & data, std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
        data.DeSerializeBinary(inputStream, localFormat, remoteFormat);
    }
    static void SerializeText(const DataType & data, std::ostream & outputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.SerializeText(outputStream, delimiter);
    }
    static void DeSerializeText(DataType & data, std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.DeSerializeText(inputStream, delimiter);
    }
    static std::string HumanReadable(const DataType & data) {
        return data.HumanReadable();
    }
    static bool ScalarNumberIsFixed(const DataType & data) {
        return data.ScalarNumberIsFixed();
    }
    static size_t ScalarNumber(const DataType & data) {
        return data.ScalarNumber();
    }
    static std::string ScalarDescription(const DataType & data, const size_t index, const std::string & userDescription = "") CISST_THROW(std::out_of_range) {
        return data.ScalarDescription(index, userDescription);
    }
    static double Scalar(const DataType & data, const size_t index) CISST_THROW(std::out_of_range) {
        return data.Scalar(index);
    }
};
inline std::ostream & operator << (std::ostream & outputStream, const osa1394 & data) {
    outputStream << cmnData<osa1394 >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void  cmnDataJSON<osa1394 >::SerializeText(const osa1394 & data, Json::Value & jsonValue);
template <> void  cmnDataJSON<osa1394 >::DeSerializeText(osa1394 & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON
std::string  cmnDataHumanReadable_osa1394_HardwareType(const osa1394::HardwareType & data);
CMN_DATA_SPECIALIZATION_FOR_ENUM_USER_HUMAN_READABLE(osa1394::HardwareType, int, cmnDataHumanReadable_osa1394_HardwareType);
#if CISST_HAS_JSON
  CMN_DECLARE_DATA_FUNCTIONS_JSON_FOR_ENUM(osa1394::HardwareType);
#endif // CISST_HAS_JSON

/* source line: 318 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaRobot1394Configuration
{
 /* default constructors and destructors. */
 public:
    osaRobot1394Configuration(void);
    osaRobot1394Configuration(const osaRobot1394Configuration & other);
    osaRobot1394Configuration & operator = (const osaRobot1394Configuration & other);
    ~osaRobot1394Configuration();

/* source line: 323 */
 public:
    std::string Name; // Name
/* source line: 328 */
 public:
    osa1394::HardwareType HardwareVersion; // HardwareVersion
/* source line: 334 */
 public:
    int NumberOfActuators; // NumberOfActuators
/* source line: 340 */
 public:
    std::string SerialNumber; // SerialNumber
/* source line: 345 */
 public:
    int NumberOfBrakes; // NumberOfBrakes
/* source line: 351 */
 public:
    bool OnlyIO; // OnlyIO
/* source line: 357 */
 public:
    bool HasEncoderPreload; // HasEncoderPreload
/* source line: 363 */
 public:
    std::vector<osaActuator1394Configuration> Actuators; // Actuators
/* source line: 368 */
 public:
    std::vector<osaPotTolerance1394Configuration> PotTolerances; // PotTolerances
/* source line: 373 */
 public:
    prmActuatorJointCoupling PotCoupling; // Matrix to convert potentiometer to actuators. E.g. on dVRK MTMsm the potentiometers are mounted on the joints
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaRobot1394Configuration & source);
    void SerializeBinary(std::ostream & outputStream) const CISST_THROW(std::runtime_error);
    void DeSerializeBinary(std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error);
    void SerializeText(std::ostream & outputStream, const char delimiter = ',') const CISST_THROW(std::runtime_error);
    std::string SerializeDescription(const char delimiter = ',', const std::string & userDescription = "") const;
    void DeSerializeText(std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error);
    std::string HumanReadable(void) const;
    bool ScalarNumberIsFixed(void) const;
    size_t ScalarNumber(void) const;
    double Scalar(const size_t index) const CISST_THROW(std::out_of_range);
    std::string ScalarDescription(const size_t index, const std::string & userDescription = "") const CISST_THROW(std::out_of_range);
#if CISST_HAS_JSON
    void SerializeTextJSON(Json::Value & jsonValue) const;
    void DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

}; // osaRobot1394Configuration
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaRobot1394Configuration> sawRobotIO1394_osaRobot1394ConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaRobot1394ConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaRobot1394Configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaRobot1394Configuration & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaRobot1394Configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaRobot1394Configuration DataType;
    static void Copy(DataType & data, const DataType & source) {
        data.Copy(source);
    }
    static std::string SerializeDescription(const DataType & data, const char delimiter, const std::string & userDescription) {
        return data.SerializeDescription(delimiter, userDescription);
    }
    static void SerializeBinary(const DataType & data, std::ostream & outputStream) CISST_THROW(std::runtime_error) {
        data.SerializeBinary(outputStream);
    }
    static void DeSerializeBinary(DataType & data, std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
        data.DeSerializeBinary(inputStream, localFormat, remoteFormat);
    }
    static void SerializeText(const DataType & data, std::ostream & outputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.SerializeText(outputStream, delimiter);
    }
    static void DeSerializeText(DataType & data, std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.DeSerializeText(inputStream, delimiter);
    }
    static std::string HumanReadable(const DataType & data) {
        return data.HumanReadable();
    }
    static bool ScalarNumberIsFixed(const DataType & data) {
        return data.ScalarNumberIsFixed();
    }
    static size_t ScalarNumber(const DataType & data) {
        return data.ScalarNumber();
    }
    static std::string ScalarDescription(const DataType & data, const size_t index, const std::string & userDescription = "") CISST_THROW(std::out_of_range) {
        return data.ScalarDescription(index, userDescription);
    }
    static double Scalar(const DataType & data, const size_t index) CISST_THROW(std::out_of_range) {
        return data.Scalar(index);
    }
};
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaRobot1394Configuration & data) {
    outputStream << cmnData<sawRobotIO1394::osaRobot1394Configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaRobot1394Configuration >::SerializeText(const sawRobotIO1394::osaRobot1394Configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaRobot1394Configuration >::DeSerializeText(sawRobotIO1394::osaRobot1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 381 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaDigitalInput1394Configuration
{
 /* default constructors and destructors. */
 public:
    osaDigitalInput1394Configuration(void);
    osaDigitalInput1394Configuration(const osaDigitalInput1394Configuration & other);
    osaDigitalInput1394Configuration & operator = (const osaDigitalInput1394Configuration & other);
    ~osaDigitalInput1394Configuration();

/* source line: 385 */
 public:
    std::string Name; // Name
/* source line: 390 */
 public:
    int BoardID; // BoardID
/* source line: 395 */
 public:
    int BitID; // BitID
/* source line: 400 */
 public:
    bool TriggerWhenPressed; // TriggerWhenPressed
/* source line: 405 */
 public:
    bool TriggerWhenReleased; // TriggerWhenReleased
/* source line: 410 */
 public:
    bool PressedValue; // PressedValue
/* source line: 415 */
 public:
    bool SkipFirstRun; // SkipFirstRun
/* source line: 421 */
 public:
    double DebounceThreshold; // DebounceThreshold
/* source line: 426 */
 public:
    double DebounceThresholdClick; // DebounceThresholdClick
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaDigitalInput1394Configuration & source);
    void SerializeBinary(std::ostream & outputStream) const CISST_THROW(std::runtime_error);
    void DeSerializeBinary(std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error);
    void SerializeText(std::ostream & outputStream, const char delimiter = ',') const CISST_THROW(std::runtime_error);
    std::string SerializeDescription(const char delimiter = ',', const std::string & userDescription = "") const;
    void DeSerializeText(std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error);
    std::string HumanReadable(void) const;
    bool ScalarNumberIsFixed(void) const;
    size_t ScalarNumber(void) const;
    double Scalar(const size_t index) const CISST_THROW(std::out_of_range);
    std::string ScalarDescription(const size_t index, const std::string & userDescription = "") const CISST_THROW(std::out_of_range);
#if CISST_HAS_JSON
    void SerializeTextJSON(Json::Value & jsonValue) const;
    void DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

}; // osaDigitalInput1394Configuration
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaDigitalInput1394Configuration> sawRobotIO1394_osaDigitalInput1394ConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaDigitalInput1394ConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaDigitalInput1394Configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaDigitalInput1394Configuration & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaDigitalInput1394Configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaDigitalInput1394Configuration DataType;
    static void Copy(DataType & data, const DataType & source) {
        data.Copy(source);
    }
    static std::string SerializeDescription(const DataType & data, const char delimiter, const std::string & userDescription) {
        return data.SerializeDescription(delimiter, userDescription);
    }
    static void SerializeBinary(const DataType & data, std::ostream & outputStream) CISST_THROW(std::runtime_error) {
        data.SerializeBinary(outputStream);
    }
    static void DeSerializeBinary(DataType & data, std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
        data.DeSerializeBinary(inputStream, localFormat, remoteFormat);
    }
    static void SerializeText(const DataType & data, std::ostream & outputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.SerializeText(outputStream, delimiter);
    }
    static void DeSerializeText(DataType & data, std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.DeSerializeText(inputStream, delimiter);
    }
    static std::string HumanReadable(const DataType & data) {
        return data.HumanReadable();
    }
    static bool ScalarNumberIsFixed(const DataType & data) {
        return data.ScalarNumberIsFixed();
    }
    static size_t ScalarNumber(const DataType & data) {
        return data.ScalarNumber();
    }
    static std::string ScalarDescription(const DataType & data, const size_t index, const std::string & userDescription = "") CISST_THROW(std::out_of_range) {
        return data.ScalarDescription(index, userDescription);
    }
    static double Scalar(const DataType & data, const size_t index) CISST_THROW(std::out_of_range) {
        return data.Scalar(index);
    }
};
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaDigitalInput1394Configuration & data) {
    outputStream << cmnData<sawRobotIO1394::osaDigitalInput1394Configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaDigitalInput1394Configuration >::SerializeText(const sawRobotIO1394::osaDigitalInput1394Configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaDigitalInput1394Configuration >::DeSerializeText(sawRobotIO1394::osaDigitalInput1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 433 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaDigitalOutput1394Configuration
{
 /* default constructors and destructors. */
 public:
    osaDigitalOutput1394Configuration(void);
    osaDigitalOutput1394Configuration(const osaDigitalOutput1394Configuration & other);
    osaDigitalOutput1394Configuration & operator = (const osaDigitalOutput1394Configuration & other);
    ~osaDigitalOutput1394Configuration();

/* source line: 437 */
 public:
    std::string Name; // Name
/* source line: 442 */
 public:
    int BoardID; // BoardID
/* source line: 447 */
 public:
    int BitID; // BitID
/* source line: 452 */
 public:
    double HighDuration; // HighDuration
/* source line: 457 */
 public:
    double LowDuration; // LowDuration
/* source line: 462 */
 public:
    bool IsPWM; // IsPWM
/* source line: 467 */
 public:
    double PWMFrequency; // PWMFrequency
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaDigitalOutput1394Configuration & source);
    void SerializeBinary(std::ostream & outputStream) const CISST_THROW(std::runtime_error);
    void DeSerializeBinary(std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error);
    void SerializeText(std::ostream & outputStream, const char delimiter = ',') const CISST_THROW(std::runtime_error);
    std::string SerializeDescription(const char delimiter = ',', const std::string & userDescription = "") const;
    void DeSerializeText(std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error);
    std::string HumanReadable(void) const;
    bool ScalarNumberIsFixed(void) const;
    size_t ScalarNumber(void) const;
    double Scalar(const size_t index) const CISST_THROW(std::out_of_range);
    std::string ScalarDescription(const size_t index, const std::string & userDescription = "") const CISST_THROW(std::out_of_range);
#if CISST_HAS_JSON
    void SerializeTextJSON(Json::Value & jsonValue) const;
    void DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

}; // osaDigitalOutput1394Configuration
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaDigitalOutput1394Configuration> sawRobotIO1394_osaDigitalOutput1394ConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaDigitalOutput1394ConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaDigitalOutput1394Configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaDigitalOutput1394Configuration & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaDigitalOutput1394Configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaDigitalOutput1394Configuration DataType;
    static void Copy(DataType & data, const DataType & source) {
        data.Copy(source);
    }
    static std::string SerializeDescription(const DataType & data, const char delimiter, const std::string & userDescription) {
        return data.SerializeDescription(delimiter, userDescription);
    }
    static void SerializeBinary(const DataType & data, std::ostream & outputStream) CISST_THROW(std::runtime_error) {
        data.SerializeBinary(outputStream);
    }
    static void DeSerializeBinary(DataType & data, std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
        data.DeSerializeBinary(inputStream, localFormat, remoteFormat);
    }
    static void SerializeText(const DataType & data, std::ostream & outputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.SerializeText(outputStream, delimiter);
    }
    static void DeSerializeText(DataType & data, std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.DeSerializeText(inputStream, delimiter);
    }
    static std::string HumanReadable(const DataType & data) {
        return data.HumanReadable();
    }
    static bool ScalarNumberIsFixed(const DataType & data) {
        return data.ScalarNumberIsFixed();
    }
    static size_t ScalarNumber(const DataType & data) {
        return data.ScalarNumber();
    }
    static std::string ScalarDescription(const DataType & data, const size_t index, const std::string & userDescription = "") CISST_THROW(std::out_of_range) {
        return data.ScalarDescription(index, userDescription);
    }
    static double Scalar(const DataType & data, const size_t index) CISST_THROW(std::out_of_range) {
        return data.Scalar(index);
    }
};
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaDigitalOutput1394Configuration & data) {
    outputStream << cmnData<sawRobotIO1394::osaDigitalOutput1394Configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaDigitalOutput1394Configuration >::SerializeText(const sawRobotIO1394::osaDigitalOutput1394Configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaDigitalOutput1394Configuration >::DeSerializeText(sawRobotIO1394::osaDigitalOutput1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 474 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaDallasChip1394Configuration
{
 /* default constructors and destructors. */
 public:
    osaDallasChip1394Configuration(void);
    osaDallasChip1394Configuration(const osaDallasChip1394Configuration & other);
    osaDallasChip1394Configuration & operator = (const osaDallasChip1394Configuration & other);
    ~osaDallasChip1394Configuration();

/* source line: 478 */
 public:
    std::string Name; // Name
/* source line: 483 */
 public:
    int BoardID; // BoardID
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaDallasChip1394Configuration & source);
    void SerializeBinary(std::ostream & outputStream) const CISST_THROW(std::runtime_error);
    void DeSerializeBinary(std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error);
    void SerializeText(std::ostream & outputStream, const char delimiter = ',') const CISST_THROW(std::runtime_error);
    std::string SerializeDescription(const char delimiter = ',', const std::string & userDescription = "") const;
    void DeSerializeText(std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error);
    std::string HumanReadable(void) const;
    bool ScalarNumberIsFixed(void) const;
    size_t ScalarNumber(void) const;
    double Scalar(const size_t index) const CISST_THROW(std::out_of_range);
    std::string ScalarDescription(const size_t index, const std::string & userDescription = "") const CISST_THROW(std::out_of_range);
#if CISST_HAS_JSON
    void SerializeTextJSON(Json::Value & jsonValue) const;
    void DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

}; // osaDallasChip1394Configuration
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaDallasChip1394Configuration> sawRobotIO1394_osaDallasChip1394ConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaDallasChip1394ConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaDallasChip1394Configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaDallasChip1394Configuration & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaDallasChip1394Configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaDallasChip1394Configuration DataType;
    static void Copy(DataType & data, const DataType & source) {
        data.Copy(source);
    }
    static std::string SerializeDescription(const DataType & data, const char delimiter, const std::string & userDescription) {
        return data.SerializeDescription(delimiter, userDescription);
    }
    static void SerializeBinary(const DataType & data, std::ostream & outputStream) CISST_THROW(std::runtime_error) {
        data.SerializeBinary(outputStream);
    }
    static void DeSerializeBinary(DataType & data, std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
        data.DeSerializeBinary(inputStream, localFormat, remoteFormat);
    }
    static void SerializeText(const DataType & data, std::ostream & outputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.SerializeText(outputStream, delimiter);
    }
    static void DeSerializeText(DataType & data, std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.DeSerializeText(inputStream, delimiter);
    }
    static std::string HumanReadable(const DataType & data) {
        return data.HumanReadable();
    }
    static bool ScalarNumberIsFixed(const DataType & data) {
        return data.ScalarNumberIsFixed();
    }
    static size_t ScalarNumber(const DataType & data) {
        return data.ScalarNumber();
    }
    static std::string ScalarDescription(const DataType & data, const size_t index, const std::string & userDescription = "") CISST_THROW(std::out_of_range) {
        return data.ScalarDescription(index, userDescription);
    }
    static double Scalar(const DataType & data, const size_t index) CISST_THROW(std::out_of_range) {
        return data.Scalar(index);
    }
};
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaDallasChip1394Configuration & data) {
    outputStream << cmnData<sawRobotIO1394::osaDallasChip1394Configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaDallasChip1394Configuration >::SerializeText(const sawRobotIO1394::osaDallasChip1394Configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaDallasChip1394Configuration >::DeSerializeText(sawRobotIO1394::osaDallasChip1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 490 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaPort1394Configuration
{
 /* default constructors and destructors. */
 public:
    osaPort1394Configuration(void);
    osaPort1394Configuration(const osaPort1394Configuration & other);
    osaPort1394Configuration & operator = (const osaPort1394Configuration & other);
    ~osaPort1394Configuration();

/* source line: 494 */
 public:
    std::vector<osaRobot1394Configuration> Robots; // Robots
/* source line: 499 */
 public:
    std::vector<osaDigitalInput1394Configuration> DigitalInputs; // DigitalInputs
/* source line: 504 */
 public:
    std::vector<osaDigitalOutput1394Configuration> DigitalOutputs; // DigitalOutputs
/* source line: 509 */
 public:
    std::vector<osaDallasChip1394Configuration> DallasChips; // DallasChips
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaPort1394Configuration & source);
    void SerializeBinary(std::ostream & outputStream) const CISST_THROW(std::runtime_error);
    void DeSerializeBinary(std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error);
    void SerializeText(std::ostream & outputStream, const char delimiter = ',') const CISST_THROW(std::runtime_error);
    std::string SerializeDescription(const char delimiter = ',', const std::string & userDescription = "") const;
    void DeSerializeText(std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error);
    std::string HumanReadable(void) const;
    bool ScalarNumberIsFixed(void) const;
    size_t ScalarNumber(void) const;
    double Scalar(const size_t index) const CISST_THROW(std::out_of_range);
    std::string ScalarDescription(const size_t index, const std::string & userDescription = "") const CISST_THROW(std::out_of_range);
#if CISST_HAS_JSON
    void SerializeTextJSON(Json::Value & jsonValue) const;
    void DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

}; // osaPort1394Configuration
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaPort1394Configuration> sawRobotIO1394_osaPort1394ConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaPort1394ConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaPort1394Configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaPort1394Configuration & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaPort1394Configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaPort1394Configuration DataType;
    static void Copy(DataType & data, const DataType & source) {
        data.Copy(source);
    }
    static std::string SerializeDescription(const DataType & data, const char delimiter, const std::string & userDescription) {
        return data.SerializeDescription(delimiter, userDescription);
    }
    static void SerializeBinary(const DataType & data, std::ostream & outputStream) CISST_THROW(std::runtime_error) {
        data.SerializeBinary(outputStream);
    }
    static void DeSerializeBinary(DataType & data, std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
        data.DeSerializeBinary(inputStream, localFormat, remoteFormat);
    }
    static void SerializeText(const DataType & data, std::ostream & outputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.SerializeText(outputStream, delimiter);
    }
    static void DeSerializeText(DataType & data, std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.DeSerializeText(inputStream, delimiter);
    }
    static std::string HumanReadable(const DataType & data) {
        return data.HumanReadable();
    }
    static bool ScalarNumberIsFixed(const DataType & data) {
        return data.ScalarNumberIsFixed();
    }
    static size_t ScalarNumber(const DataType & data) {
        return data.ScalarNumber();
    }
    static std::string ScalarDescription(const DataType & data, const size_t index, const std::string & userDescription = "") CISST_THROW(std::out_of_range) {
        return data.ScalarDescription(index, userDescription);
    }
    static double Scalar(const DataType & data, const size_t index) CISST_THROW(std::out_of_range) {
        return data.Scalar(index);
    }
};
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaPort1394Configuration & data) {
    outputStream << cmnData<sawRobotIO1394::osaPort1394Configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaPort1394Configuration >::SerializeText(const sawRobotIO1394::osaPort1394Configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaPort1394Configuration >::DeSerializeText(sawRobotIO1394::osaPort1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 516 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaActuatorMapping
{
 /* default constructors and destructors. */
 public:
    osaActuatorMapping(void);
    osaActuatorMapping(const osaActuatorMapping & other);
    osaActuatorMapping & operator = (const osaActuatorMapping & other);
    ~osaActuatorMapping();

/* source line: 520 */
 public:
    AmpIO * Board; // Board
/* source line: 527 */
 public:
    int BoardID; // BoardID
/* source line: 532 */
 public:
    int Axis; // Axis
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaActuatorMapping & source);
    void SerializeBinary(std::ostream & outputStream) const CISST_THROW(std::runtime_error);
    void DeSerializeBinary(std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error);
    void SerializeText(std::ostream & outputStream, const char delimiter = ',') const CISST_THROW(std::runtime_error);
    std::string SerializeDescription(const char delimiter = ',', const std::string & userDescription = "") const;
    void DeSerializeText(std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error);
    std::string HumanReadable(void) const;
    bool ScalarNumberIsFixed(void) const;
    size_t ScalarNumber(void) const;
    double Scalar(const size_t index) const CISST_THROW(std::out_of_range);
    std::string ScalarDescription(const size_t index, const std::string & userDescription = "") const CISST_THROW(std::out_of_range);
#if CISST_HAS_JSON
    void SerializeTextJSON(Json::Value & jsonValue) const;
    void DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

}; // osaActuatorMapping
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaActuatorMapping> sawRobotIO1394_osaActuatorMappingProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaActuatorMappingProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaActuatorMapping & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaActuatorMapping & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaActuatorMapping > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaActuatorMapping DataType;
    static void Copy(DataType & data, const DataType & source) {
        data.Copy(source);
    }
    static std::string SerializeDescription(const DataType & data, const char delimiter, const std::string & userDescription) {
        return data.SerializeDescription(delimiter, userDescription);
    }
    static void SerializeBinary(const DataType & data, std::ostream & outputStream) CISST_THROW(std::runtime_error) {
        data.SerializeBinary(outputStream);
    }
    static void DeSerializeBinary(DataType & data, std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
        data.DeSerializeBinary(inputStream, localFormat, remoteFormat);
    }
    static void SerializeText(const DataType & data, std::ostream & outputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.SerializeText(outputStream, delimiter);
    }
    static void DeSerializeText(DataType & data, std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.DeSerializeText(inputStream, delimiter);
    }
    static std::string HumanReadable(const DataType & data) {
        return data.HumanReadable();
    }
    static bool ScalarNumberIsFixed(const DataType & data) {
        return data.ScalarNumberIsFixed();
    }
    static size_t ScalarNumber(const DataType & data) {
        return data.ScalarNumber();
    }
    static std::string ScalarDescription(const DataType & data, const size_t index, const std::string & userDescription = "") CISST_THROW(std::out_of_range) {
        return data.ScalarDescription(index, userDescription);
    }
    static double Scalar(const DataType & data, const size_t index) CISST_THROW(std::out_of_range) {
        return data.Scalar(index);
    }
};
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaActuatorMapping & data) {
    outputStream << cmnData<sawRobotIO1394::osaActuatorMapping >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaActuatorMapping >::SerializeText(const sawRobotIO1394::osaActuatorMapping & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaActuatorMapping >::DeSerializeText(sawRobotIO1394::osaActuatorMapping & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 539 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaBrakeMapping
{
 /* default constructors and destructors. */
 public:
    osaBrakeMapping(void);
    osaBrakeMapping(const osaBrakeMapping & other);
    osaBrakeMapping & operator = (const osaBrakeMapping & other);
    ~osaBrakeMapping();

/* source line: 543 */
 public:
    AmpIO * Board; // Board
/* source line: 550 */
 public:
    int BoardID; // BoardID
/* source line: 555 */
 public:
    int Axis; // Axis
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaBrakeMapping & source);
    void SerializeBinary(std::ostream & outputStream) const CISST_THROW(std::runtime_error);
    void DeSerializeBinary(std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error);
    void SerializeText(std::ostream & outputStream, const char delimiter = ',') const CISST_THROW(std::runtime_error);
    std::string SerializeDescription(const char delimiter = ',', const std::string & userDescription = "") const;
    void DeSerializeText(std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error);
    std::string HumanReadable(void) const;
    bool ScalarNumberIsFixed(void) const;
    size_t ScalarNumber(void) const;
    double Scalar(const size_t index) const CISST_THROW(std::out_of_range);
    std::string ScalarDescription(const size_t index, const std::string & userDescription = "") const CISST_THROW(std::out_of_range);
#if CISST_HAS_JSON
    void SerializeTextJSON(Json::Value & jsonValue) const;
    void DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

}; // osaBrakeMapping
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaBrakeMapping> sawRobotIO1394_osaBrakeMappingProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaBrakeMappingProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaBrakeMapping & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaBrakeMapping & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaBrakeMapping > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaBrakeMapping DataType;
    static void Copy(DataType & data, const DataType & source) {
        data.Copy(source);
    }
    static std::string SerializeDescription(const DataType & data, const char delimiter, const std::string & userDescription) {
        return data.SerializeDescription(delimiter, userDescription);
    }
    static void SerializeBinary(const DataType & data, std::ostream & outputStream) CISST_THROW(std::runtime_error) {
        data.SerializeBinary(outputStream);
    }
    static void DeSerializeBinary(DataType & data, std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
        data.DeSerializeBinary(inputStream, localFormat, remoteFormat);
    }
    static void SerializeText(const DataType & data, std::ostream & outputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.SerializeText(outputStream, delimiter);
    }
    static void DeSerializeText(DataType & data, std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.DeSerializeText(inputStream, delimiter);
    }
    static std::string HumanReadable(const DataType & data) {
        return data.HumanReadable();
    }
    static bool ScalarNumberIsFixed(const DataType & data) {
        return data.ScalarNumberIsFixed();
    }
    static size_t ScalarNumber(const DataType & data) {
        return data.ScalarNumber();
    }
    static std::string ScalarDescription(const DataType & data, const size_t index, const std::string & userDescription = "") CISST_THROW(std::out_of_range) {
        return data.ScalarDescription(index, userDescription);
    }
    static double Scalar(const DataType & data, const size_t index) CISST_THROW(std::out_of_range) {
        return data.Scalar(index);
    }
};
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaBrakeMapping & data) {
    outputStream << cmnData<sawRobotIO1394::osaBrakeMapping >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaBrakeMapping >::SerializeText(const sawRobotIO1394::osaBrakeMapping & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaBrakeMapping >::DeSerializeText(sawRobotIO1394::osaBrakeMapping & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON


#endif // _sawRobotIO1394_osaConfiguration1394_h
