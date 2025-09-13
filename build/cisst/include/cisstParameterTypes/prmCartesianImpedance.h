// file automatically generated, do not modify
// cisst version: 1.3.1
// source file: /home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmCartesianImpedance.cdg

#pragma once
#ifndef _cisstParameterTypes_prmCartesianImpedance_h
#define _cisstParameterTypes_prmCartesianImpedance_h

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

#include <cisstVector/vctTransformationTypes.h>
#include <cisstVector/vctFixedSizeVectorTypes.h>
#include <cisstMultiTask/mtsGenericObject.h>

// Always include last
#include <cisstParameterTypes/prmExport.h>

/* source line: 13 */
class CISST_EXPORT prmCartesianImpedanceHalfPlaneGains
{
 /* default constructors and destructors. */
 public:
    prmCartesianImpedanceHalfPlaneGains(void);
    prmCartesianImpedanceHalfPlaneGains(const prmCartesianImpedanceHalfPlaneGains & other);
    prmCartesianImpedanceHalfPlaneGains & operator = (const prmCartesianImpedanceHalfPlaneGains & other);
    ~prmCartesianImpedanceHalfPlaneGains();

/* source line: 16 */
 public:
    vct3 P; // P gain, aka stiffness, applied to difference in position
/* source line: 23 */
 public:
    vct3 D; // D gain, aka dumping, applied velocity
/* source line: 30 */
 public:
    vct3 Bias; // Constant force added in this half-plane
/* source line: 37 */
 public:
    vct3 Deadband; // Deadband on position error, subtracted from difference on position
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const prmCartesianImpedanceHalfPlaneGains & source);
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

}; // prmCartesianImpedanceHalfPlaneGains

// mts-proxy set to true
typedef mtsGenericObjectProxy<prmCartesianImpedanceHalfPlaneGains> prmCartesianImpedanceHalfPlaneGainsProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(prmCartesianImpedanceHalfPlaneGainsProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const prmCartesianImpedanceHalfPlaneGains & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, prmCartesianImpedanceHalfPlaneGains & placeHolder);
/* data functions */
template <> class cmnData<prmCartesianImpedanceHalfPlaneGains > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef prmCartesianImpedanceHalfPlaneGains DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const prmCartesianImpedanceHalfPlaneGains & data) {
    outputStream << cmnData<prmCartesianImpedanceHalfPlaneGains >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<prmCartesianImpedanceHalfPlaneGains >::SerializeText(const prmCartesianImpedanceHalfPlaneGains & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<prmCartesianImpedanceHalfPlaneGains >::DeSerializeText(prmCartesianImpedanceHalfPlaneGains & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 46 */
class CISST_EXPORT prmCartesianImpedance: public mtsGenericObject
{
 /* default constructors and destructors. */
 public:
    prmCartesianImpedance(void);
    prmCartesianImpedance(const prmCartesianImpedance & other);
    prmCartesianImpedance & operator = (const prmCartesianImpedance & other);
    ~prmCartesianImpedance();

/* source line: 56 */
 public:
    vctMatRot3 ForceOrientation; // Force orientation matrix
/* source line: 63 */
 public:
    vct3 ForcePosition; // Force position vector
/* source line: 70 */
 public:
    vctMatRot3 TorqueOrientation; // Torque orientation matrix
/* source line: 77 */
 public:
    prmCartesianImpedanceHalfPlaneGains PositionPositive; // Gains used to compute effort for position in positive half-plane
/* source line: 84 */
 public:
    prmCartesianImpedanceHalfPlaneGains PositionNegative; // Gains used to compute effort for position in negative half-plane
/* source line: 91 */
 public:
    prmCartesianImpedanceHalfPlaneGains OrientationPositive; // Gains used to compute effort for orientation in positive half-plane
/* source line: 98 */
 public:
    prmCartesianImpedanceHalfPlaneGains OrientationNegative; // Gains used to compute effort for orientation in negative half-plane
/* source line: 105 */

    private:
        CMN_DECLARE_SERVICES(CMN_DYNAMIC_CREATION, CMN_LOG_ALLOW_DEFAULT);
        /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const override;
    void DeSerializeRaw(std::istream & inputStream) override;
    void ToStream(std::ostream & outputStream) const override;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const override;
    /* default data methods */
 public:
    void Copy(const prmCartesianImpedance & source);
    void SerializeBinary(std::ostream & outputStream) const CISST_THROW(std::runtime_error);
    void DeSerializeBinary(std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error);
    void SerializeText(std::ostream & outputStream, const char delimiter = ',') const CISST_THROW(std::runtime_error);
    std::string SerializeDescription(const char delimiter = ',', const std::string & userDescription = "") const;
    void DeSerializeText(std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error);
    std::string HumanReadable(void) const;
    bool ScalarNumberIsFixed(void) const override;
    size_t ScalarNumber(void) const override;
    double Scalar(const size_t index) const CISST_THROW(std::out_of_range) override;
    std::string ScalarDescription(const size_t index, const std::string & userDescription = "") const CISST_THROW(std::out_of_range) override;
#if CISST_HAS_JSON
    void SerializeTextJSON(Json::Value & jsonValue) const override;
    void DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) override;
#endif // CISST_HAS_JSON

}; // prmCartesianImpedance

// mts-proxy set to true
typedef mtsGenericObjectProxy<prmCartesianImpedance> prmCartesianImpedanceProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(prmCartesianImpedanceProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const prmCartesianImpedance & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, prmCartesianImpedance & placeHolder);
/* data functions */
template <> class cmnData<prmCartesianImpedance > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef prmCartesianImpedance DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const prmCartesianImpedance & data) {
    outputStream << cmnData<prmCartesianImpedance >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<prmCartesianImpedance >::SerializeText(const prmCartesianImpedance & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<prmCartesianImpedance >::DeSerializeText(prmCartesianImpedance & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 111 */

CMN_DECLARE_SERVICES_INSTANTIATION(prmCartesianImpedance);


#endif // _cisstParameterTypes_prmCartesianImpedance_h
