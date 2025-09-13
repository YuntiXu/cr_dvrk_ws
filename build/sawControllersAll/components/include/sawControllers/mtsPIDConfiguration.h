// file automatically generated, do not modify
// cisst version: 1.3.1
// source file: /home/ytxu/cr_dvrk_ws/src/cisst-saw/sawControllers/components/code/mtsPIDConfiguration.cdg

#pragma once
#ifndef _sawControllers_mtsPIDConfiguration_h
#define _sawControllers_mtsPIDConfiguration_h

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

#include <cisstCommon/cmnJointType.h>
#include <sawControllers/sawControllersExport.h>

/* source line: 9 */
class CISST_EXPORT mtsPIDAxisConfiguration
{
 /* default constructors and destructors. */
 public:
    mtsPIDAxisConfiguration(void);
    mtsPIDAxisConfiguration(const mtsPIDAxisConfiguration & other);
    mtsPIDAxisConfiguration & operator = (const mtsPIDAxisConfiguration & other);
    ~mtsPIDAxisConfiguration();

/* source line: 12 */
 public:
    size_t index; // axis index, this needs to match the axis position in the configuration vector
/* source line: 18 */
 public:
    std::string name; // name
/* source line: 23 */
 public:
    cmnJointType type; // 1 for prismatic or 2 for revolute
/* source line: 29 */
 public:
    double p_gain; // gain applied to error in position
/* source line: 35 */
 public:
    double d_gain; // gain applied to error in velocity
/* source line: 41 */
 public:
    double i_gain; // gain applied to error integral
/* source line: 47 */
 public:
    double i_forget_rate; // error integral preserve rate per second (multiplied to i_error)
/* source line: 54 */
 public:
    double i_limit; // cap on error integral
/* source line: 61 */
 public:
    double p_deadband; // deadband around goal position
/* source line: 68 */
 public:
    double offset; // constant effort offset applied to output
/* source line: 75 */
 public:
    double error_limit; // maximum position error between setpoint and measured position
/* source line: 82 */
 public:
    double v_low_pass_cutoff; // v_low_pass_cutoff
/* source line: 88 */
 public:
    bool use_disturbance_observer; // use_disturbance_observer
/* source line: 94 */
 public:
    double nominal_mass; // nominal_mass
/* source line: 100 */
 public:
    double disturbance_cutoff; // disturbance_cutoff
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsPIDAxisConfiguration & source);
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

}; // mtsPIDAxisConfiguration

// mts-proxy set to true
typedef mtsGenericObjectProxy<mtsPIDAxisConfiguration> mtsPIDAxisConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsPIDAxisConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const mtsPIDAxisConfiguration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, mtsPIDAxisConfiguration & placeHolder);
/* data functions */
template <> class cmnData<mtsPIDAxisConfiguration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsPIDAxisConfiguration DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const mtsPIDAxisConfiguration & data) {
    outputStream << cmnData<mtsPIDAxisConfiguration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<mtsPIDAxisConfiguration >::SerializeText(const mtsPIDAxisConfiguration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<mtsPIDAxisConfiguration >::DeSerializeText(mtsPIDAxisConfiguration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 108 */

    typedef std::vector<mtsPIDAxisConfiguration> mtsPIDConfiguration;
    typedef mtsGenericObjectProxy<mtsPIDConfiguration> mtsPIDConfigurationProxy;
    CMN_DECLARE_SERVICES_INSTANTIATION(mtsPIDConfigurationProxy);



#endif // _sawControllers_mtsPIDConfiguration_h
