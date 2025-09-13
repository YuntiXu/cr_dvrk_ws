// file automatically generated, do not modify
// cisst version: 1.3.1
// source file: /home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmForwardKinematicsResponse.cdg

#pragma once
#ifndef _cisstParameterTypes_prmForwardKinematicsResponse_h
#define _cisstParameterTypes_prmForwardKinematicsResponse_h

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

#include <cisstVector/vctDynamicVectorTypes.h>
#include <cisstVector/vctTransformationTypes.h>
#include <cisstMultiTask/mtsGenericObject.h>
// Always include last
#include <cisstParameterTypes/prmExport.h>

/* source line: 12 */
class CISST_EXPORT prmForwardKinematicsResponse: public mtsGenericObject
{
 /* default constructors and destructors. */
 public:
    prmForwardKinematicsResponse(void);
    prmForwardKinematicsResponse(const prmForwardKinematicsResponse & other);
    prmForwardKinematicsResponse & operator = (const prmForwardKinematicsResponse & other);
    ~prmForwardKinematicsResponse();

/* source line: 22 */
 protected:
    vctFrm4x4 mcp; // Cartesian pose
 public:
    /* accessors is set to: all */
     void Getcp(vctFrm4x4 & placeHolder) const;
     void Setcp(const vctFrm4x4 & newValue);
    /* accessors is set to: all */
     const vctFrm4x4 & cp(void) const;
     vctFrm4x4 & cp(void);
/* source line: 28 */
 protected:
    bool mresult; // result
 public:
    /* accessors is set to: all */
     void Getresult(bool & placeHolder) const;
     void Setresult(const bool & newValue);
    /* accessors is set to: all */
     const bool & result(void) const;
     bool & result(void);
/* source line: 34 */
 protected:
    std::string mmessage; // Error message
 public:
    /* accessors is set to: all */
     void Getmessage(std::string & placeHolder) const;
     void Setmessage(const std::string & newValue);
    /* accessors is set to: all */
     const std::string & message(void) const;
     std::string & message(void);
/* source line: 40 */

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
    void Copy(const prmForwardKinematicsResponse & source);
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

}; // prmForwardKinematicsResponse

// mts-proxy set to true
typedef mtsGenericObjectProxy<prmForwardKinematicsResponse> prmForwardKinematicsResponseProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(prmForwardKinematicsResponseProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const prmForwardKinematicsResponse & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, prmForwardKinematicsResponse & placeHolder);
/* data functions */
template <> class cmnData<prmForwardKinematicsResponse > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef prmForwardKinematicsResponse DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const prmForwardKinematicsResponse & data) {
    outputStream << cmnData<prmForwardKinematicsResponse >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<prmForwardKinematicsResponse >::SerializeText(const prmForwardKinematicsResponse & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<prmForwardKinematicsResponse >::DeSerializeText(prmForwardKinematicsResponse & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 46 */

CMN_DECLARE_SERVICES_INSTANTIATION(prmForwardKinematicsResponse);


#endif // _cisstParameterTypes_prmForwardKinematicsResponse_h
