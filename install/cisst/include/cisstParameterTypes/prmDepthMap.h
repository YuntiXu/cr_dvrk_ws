// file automatically generated, do not modify
// cisst version: 1.3.1
// source file: /home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmDepthMap.cdg

#pragma once
#ifndef _cisstParameterTypes_prmDepthMap_h
#define _cisstParameterTypes_prmDepthMap_h

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
#include <cisstVector/vctDynamicNArray.h>
#include <cisstMultiTask/mtsGenericObject.h>
// Always include last
#include <cisstParameterTypes/prmExport.h>

/* source line: 12 */
class CISST_EXPORT prmDepthMap: public mtsGenericObject
{
 /* default constructors and destructors. */
 public:
    prmDepthMap(void);
    prmDepthMap(const prmDepthMap & other);
    prmDepthMap & operator = (const prmDepthMap & other);
    ~prmDepthMap();

/* source line: 22 */
 protected:
    size_t mWidth; // Width
 public:
    /* accessors is set to: all */
     void GetWidth(size_t & placeHolder) const;
     void SetWidth(const size_t & newValue);
    /* accessors is set to: all */
     const size_t & Width(void) const;
     size_t & Width(void);
/* source line: 28 */
 protected:
    size_t mHeight; // Height
 public:
    /* accessors is set to: all */
     void GetHeight(size_t & placeHolder) const;
     void SetHeight(const size_t & newValue);
    /* accessors is set to: all */
     const size_t & Height(void) const;
     size_t & Height(void);
/* source line: 34 */
 protected:
    vctDynamicVector<float> mPoints; // Points
 public:
    /* accessors is set to: all */
     void GetPoints(vctDynamicVector<float> & placeHolder) const;
     void SetPoints(const vctDynamicVector<float> & newValue);
    /* accessors is set to: all */
     const vctDynamicVector<float> & Points(void) const;
     vctDynamicVector<float> & Points(void);
/* source line: 39 */
 protected:
    vctDynamicVector<char> mColor; // Color
 public:
    /* accessors is set to: all */
     void GetColor(vctDynamicVector<char> & placeHolder) const;
     void SetColor(const vctDynamicVector<char> & newValue);
    /* accessors is set to: all */
     const vctDynamicVector<char> & Color(void) const;
     vctDynamicVector<char> & Color(void);
/* source line: 44 */
 protected:
    std::string mReferenceFrame; // ReferenceFrame
 public:
    /* accessors is set to: all */
     void GetReferenceFrame(std::string & placeHolder) const;
     void SetReferenceFrame(const std::string & newValue);
    /* accessors is set to: all */
     const std::string & ReferenceFrame(void) const;
     std::string & ReferenceFrame(void);
/* source line: 49 */

    public:

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
    void Copy(const prmDepthMap & source);
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

}; // prmDepthMap

// mts-proxy set to true
typedef mtsGenericObjectProxy<prmDepthMap> prmDepthMapProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(prmDepthMapProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const prmDepthMap & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, prmDepthMap & placeHolder);
/* data functions */
template <> class cmnData<prmDepthMap > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef prmDepthMap DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const prmDepthMap & data) {
    outputStream << cmnData<prmDepthMap >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<prmDepthMap >::SerializeText(const prmDepthMap & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<prmDepthMap >::DeSerializeText(prmDepthMap & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 58 */

CMN_DECLARE_SERVICES_INSTANTIATION(prmDepthMap);


#endif // _cisstParameterTypes_prmDepthMap_h
