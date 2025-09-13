// file automatically generated, do not modify
// cisst version: 1.3.1
// source file: /home/ytxu/cr_dvrk_ws/src/cisst-saw/sawIntuitiveResearchKit/core/components/code/mtsHIDHeadSensorConfiguration.cdg

#pragma once
#ifndef _sawIntuitiveResearchKit_mtsHIDHeadSensorConfiguration_h
#define _sawIntuitiveResearchKit_mtsHIDHeadSensorConfiguration_h

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
class CISST_EXPORT mtsHIDHeadSensorConfiguration
{
 /* default constructors and destructors. */
 public:
    mtsHIDHeadSensorConfiguration(void);
    mtsHIDHeadSensorConfiguration(const mtsHIDHeadSensorConfiguration & other);
    mtsHIDHeadSensorConfiguration & operator = (const mtsHIDHeadSensorConfiguration & other);
    ~mtsHIDHeadSensorConfiguration();

/* source line: 8 */
 public:
    std::string id_vendor; // id_vendor
/* source line: 14 */
 public:
    std::string id_product; // id_product
/* source line: 20 */
 public:
    size_t index_data; // index_data
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsHIDHeadSensorConfiguration & source);
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

}; // mtsHIDHeadSensorConfiguration

// mts-proxy set to true
typedef mtsGenericObjectProxy<mtsHIDHeadSensorConfiguration> mtsHIDHeadSensorConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsHIDHeadSensorConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsHIDHeadSensorConfiguration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsHIDHeadSensorConfiguration & placeHolder);
/* data functions */
template <> class cmnData<mtsHIDHeadSensorConfiguration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsHIDHeadSensorConfiguration DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsHIDHeadSensorConfiguration & data) {
    outputStream << cmnData<mtsHIDHeadSensorConfiguration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsHIDHeadSensorConfiguration >::SerializeText(const mtsHIDHeadSensorConfiguration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsHIDHeadSensorConfiguration >::DeSerializeText(mtsHIDHeadSensorConfiguration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON


#endif // _sawIntuitiveResearchKit_mtsHIDHeadSensorConfiguration_h
