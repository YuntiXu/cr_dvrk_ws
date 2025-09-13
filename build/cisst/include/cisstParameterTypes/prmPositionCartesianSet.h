// file automatically generated, do not modify
// cisst version: 1.3.1
// source file: /home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmPositionCartesianSet.cdg

#pragma once
#ifndef _cisstParameterTypes_prmPositionCartesianSet_h
#define _cisstParameterTypes_prmPositionCartesianSet_h

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

#include <cisstVector/vctFixedSizeVectorTypes.h>
#include <cisstVector/vctTransformationTypes.h>
#include <cisstMultiTask/mtsGenericObject.h>
#include <cisstParameterTypes/prmForwardDeclarations.h>
// Always include last
#include <cisstParameterTypes/prmExport.h>

/* source line: 13 */
class CISST_EXPORT prmPositionCartesianSet: public mtsGenericObject
{
 /* default constructors and destructors. */
 public:
    prmPositionCartesianSet(void);
    prmPositionCartesianSet(const prmPositionCartesianSet & other);
    prmPositionCartesianSet & operator = (const prmPositionCartesianSet & other);
    ~prmPositionCartesianSet();

/* source line: 23 */
 protected:
    vctDoubleFrm3 mGoal; // Desired position
 public:
    /* accessors is set to: all */
     void GetGoal(vctDoubleFrm3 & placeHolder) const;
     void SetGoal(const vctDoubleFrm3 & newValue);
    /* accessors is set to: all */
     const vctDoubleFrm3 & Goal(void) const;
     vctDoubleFrm3 & Goal(void);
/* source line: 29 */
 protected:
    vctDouble3 mVelocity; // Linear velocity that should be used for the trajectory generator.
 public:
    /* accessors is set to: all */
     void GetVelocity(vctDouble3 & placeHolder) const;
     void SetVelocity(const vctDouble3 & newValue);
    /* accessors is set to: all */
     const vctDouble3 & Velocity(void) const;
     vctDouble3 & Velocity(void);
/* source line: 36 */
 protected:
    vctDouble3 mVelocityAngular; // Angular velocity that should be used for the trajectory generator.
 public:
    /* accessors is set to: all */
     void GetVelocityAngular(vctDouble3 & placeHolder) const;
     void SetVelocityAngular(const vctDouble3 & newValue);
    /* accessors is set to: all */
     const vctDouble3 & VelocityAngular(void) const;
     vctDouble3 & VelocityAngular(void);
/* source line: 43 */
 protected:
    vctDouble3 mAcceleration; // Linear acceleration and deceleration that should be used for the trajectory generator.
 public:
    /* accessors is set to: all */
     void GetAcceleration(vctDouble3 & placeHolder) const;
     void SetAcceleration(const vctDouble3 & newValue);
    /* accessors is set to: all */
     const vctDouble3 & Acceleration(void) const;
     vctDouble3 & Acceleration(void);
/* source line: 50 */
 protected:
    vctDouble3 mAngularAcceleration; // Angular acceleration and deceleration that should be used for the trajectory generator.
 public:
    /* accessors is set to: all */
     void GetAngularAcceleration(vctDouble3 & placeHolder) const;
     void SetAngularAcceleration(const vctDouble3 & newValue);
    /* accessors is set to: all */
     const vctDouble3 & AngularAcceleration(void) const;
     vctDouble3 & AngularAcceleration(void);
/* source line: 57 */
 protected:
    vctBool2 mMask; // Two tuple, masks position/orientation parts of the Cartesian motion
 public:
    /* accessors is set to: all */
     void GetMask(vctBool2 & placeHolder) const;
     void SetMask(const vctBool2 & newValue);
    /* accessors is set to: all */
     const vctBool2 & Mask(void) const;
     vctBool2 & Mask(void);
/* source line: 64 */
 protected:
    std::string mMovingFrame; // Name of moving frame
 public:
    /* accessors is set to: all */
     void GetMovingFrame(std::string & placeHolder) const;
     void SetMovingFrame(const std::string & newValue);
    /* accessors is set to: all */
     const std::string & MovingFrame(void) const;
     std::string & MovingFrame(void);
/* source line: 71 */
 protected:
    std::string mReferenceFrame; // Name of reference frame
 public:
    /* accessors is set to: all */
     void GetReferenceFrame(std::string & placeHolder) const;
     void SetReferenceFrame(const std::string & newValue);
    /* accessors is set to: all */
     const std::string & ReferenceFrame(void) const;
     std::string & ReferenceFrame(void);
/* source line: 79 */
 protected:
    prmBlocking mBlockingFlag; // BlockingFlag
 public:
    /* accessors is set to: all */
     CISST_DEPRECATED void GetBlockingFlag(prmBlocking & placeHolder) const;
     CISST_DEPRECATED void SetBlockingFlag(const prmBlocking & newValue);
    /* accessors is set to: all */
     CISST_DEPRECATED const prmBlocking & BlockingFlag(void) const;
     CISST_DEPRECATED prmBlocking & BlockingFlag(void);
/* source line: 85 */
 protected:
    bool mBlendingFactor; // BlendingFactor
 public:
    /* accessors is set to: all */
     CISST_DEPRECATED void GetBlendingFactor(bool & placeHolder) const;
     CISST_DEPRECATED void SetBlendingFactor(const bool & newValue);
    /* accessors is set to: all */
     CISST_DEPRECATED const bool & BlendingFactor(void) const;
     CISST_DEPRECATED bool & BlendingFactor(void);
/* source line: 91 */
 protected:
    bool mIsPreemptable; // IsPreemptable
 public:
    /* accessors is set to: all */
     CISST_DEPRECATED void GetIsPreemptable(bool & placeHolder) const;
     CISST_DEPRECATED void SetIsPreemptable(const bool & newValue);
    /* accessors is set to: all */
     CISST_DEPRECATED const bool & IsPreemptable(void) const;
     CISST_DEPRECATED bool & IsPreemptable(void);
/* source line: 97 */
 protected:
    bool mIsGoalOnly; // IsGoalOnly
 public:
    /* accessors is set to: all */
     CISST_DEPRECATED void GetIsGoalOnly(bool & placeHolder) const;
     CISST_DEPRECATED void SetIsGoalOnly(const bool & newValue);
    /* accessors is set to: all */
     CISST_DEPRECATED const bool & IsGoalOnly(void) const;
     CISST_DEPRECATED bool & IsGoalOnly(void);
/* source line: 104 */

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
    void Copy(const prmPositionCartesianSet & source);
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

}; // prmPositionCartesianSet

// mts-proxy set to true
typedef mtsGenericObjectProxy<prmPositionCartesianSet> prmPositionCartesianSetProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(prmPositionCartesianSetProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const prmPositionCartesianSet & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, prmPositionCartesianSet & placeHolder);
/* data functions */
template <> class cmnData<prmPositionCartesianSet > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef prmPositionCartesianSet DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const prmPositionCartesianSet & data) {
    outputStream << cmnData<prmPositionCartesianSet >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<prmPositionCartesianSet >::SerializeText(const prmPositionCartesianSet & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<prmPositionCartesianSet >::DeSerializeText(prmPositionCartesianSet & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 111 */

CMN_DECLARE_SERVICES_INSTANTIATION(prmPositionCartesianSet);


#endif // _cisstParameterTypes_prmPositionCartesianSet_h
