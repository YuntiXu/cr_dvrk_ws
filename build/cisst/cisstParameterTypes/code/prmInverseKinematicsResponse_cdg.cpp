// file automatically generated, do not modify
// cisst version: 1.3.1
// source file: /home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmInverseKinematicsResponse.cdg

#include <cisstParameterTypes/prmInverseKinematicsResponse.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 12 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmInverseKinematicsResponseProxy);

prmInverseKinematicsResponse::prmInverseKinematicsResponse(void):
    mtsGenericObject()
    , mjp()
    , mresult(false)
    , mmessage()
{}

prmInverseKinematicsResponse::prmInverseKinematicsResponse(const prmInverseKinematicsResponse & other):
    mtsGenericObject(other)
    , mjp(other.mjp)
    , mresult(other.mresult)
    , mmessage(other.mmessage)
{}

prmInverseKinematicsResponse & prmInverseKinematicsResponse::operator = (const prmInverseKinematicsResponse & other)
{
    mtsGenericObject::operator = (other);
    mjp = other.mjp;
    mresult = other.mresult;
    mmessage = other.mmessage;
    return *this;
}

prmInverseKinematicsResponse::~prmInverseKinematicsResponse(void){}


void prmInverseKinematicsResponse::SerializeRaw(std::ostream & outputStream__cdg) const
{
    mtsGenericObject::SerializeRaw(outputStream__cdg);
    cmnSerializeRaw(outputStream__cdg, this->mjp);
    cmnSerializeRaw(outputStream__cdg, this->mresult);
    cmnSerializeRaw(outputStream__cdg, this->mmessage);
}


void prmInverseKinematicsResponse::DeSerializeRaw(std::istream & inputStream__cdg)
{
    mtsGenericObject::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeRaw(inputStream__cdg, this->mjp);
    cmnDeSerializeRaw(inputStream__cdg, this->mresult);
    cmnDeSerializeRaw(inputStream__cdg, this->mmessage);
}


void prmInverseKinematicsResponse::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void prmInverseKinematicsResponse::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<prmInverseKinematicsResponse >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<prmInverseKinematicsResponse >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 22 */

/* accessors is set to: all */
void prmInverseKinematicsResponse::Getjp(vctDynamicVector<double> & placeHolder) const
{
    placeHolder = this->mjp;
}

void prmInverseKinematicsResponse::Setjp(const vctDynamicVector<double> & newValue)
{
    this->mjp = newValue;
}


/* accessors is set to: all */
const vctDynamicVector<double> & prmInverseKinematicsResponse::jp(void) const
{
    return this->mjp;
}

vctDynamicVector<double> & prmInverseKinematicsResponse::jp(void)
{
    return this->mjp;
}

/* source line: 28 */

/* accessors is set to: all */
void prmInverseKinematicsResponse::Getresult(bool & placeHolder) const
{
    placeHolder = this->mresult;
}

void prmInverseKinematicsResponse::Setresult(const bool & newValue)
{
    this->mresult = newValue;
}


/* accessors is set to: all */
const bool & prmInverseKinematicsResponse::result(void) const
{
    return this->mresult;
}

bool & prmInverseKinematicsResponse::result(void)
{
    return this->mresult;
}

/* source line: 34 */

/* accessors is set to: all */
void prmInverseKinematicsResponse::Getmessage(std::string & placeHolder) const
{
    placeHolder = this->mmessage;
}

void prmInverseKinematicsResponse::Setmessage(const std::string & newValue)
{
    this->mmessage = newValue;
}


/* accessors is set to: all */
const std::string & prmInverseKinematicsResponse::message(void) const
{
    return this->mmessage;
}

std::string & prmInverseKinematicsResponse::message(void)
{
    return this->mmessage;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmInverseKinematicsResponse & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmInverseKinematicsResponse & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmInverseKinematicsResponse::Copy(const prmInverseKinematicsResponse & source__cdg) {
    cmnData<mtsGenericObject >::Copy(*this, source__cdg);
    cmnData<vctDynamicVector<double> >::Copy(this->mjp, source__cdg.mjp);
    cmnData<bool >::Copy(this->mresult, source__cdg.mresult);
    cmnData<std::string >::Copy(this->mmessage, source__cdg.mmessage);
}
void prmInverseKinematicsResponse::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::SerializeBinary(*this, outputStream__cdg);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->mjp, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->mresult, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->mmessage, outputStream__cdg);
}
void prmInverseKinematicsResponse::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->mjp, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->mresult, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->mmessage, inputStream__cdg, localFormat, remoteFormat);
}
void prmInverseKinematicsResponse::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<mtsGenericObject >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::SerializeText(this->mjp, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->mresult, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->mmessage, outputStream__cdg, delimiter__cdg);
}
std::string prmInverseKinematicsResponse::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<mtsGenericObject >::SerializeDescription(*this, delimiter__cdg, userDescription__cdg);
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDynamicVector<double> >::SerializeDescription(this->mjp, delimiter__cdg, prefix__cdg + "jp");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->mresult, delimiter__cdg, prefix__cdg + "result");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->mmessage, delimiter__cdg, prefix__cdg + "message");
    return description__cdg.str();
}
void prmInverseKinematicsResponse::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmInverseKinematicsResponse");
    }
    someData__cdg = true;
    cmnData<mtsGenericObject >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmInverseKinematicsResponse");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->mjp, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmInverseKinematicsResponse");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->mresult, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmInverseKinematicsResponse");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->mmessage, inputStream__cdg, delimiter__cdg);
}
std::string prmInverseKinematicsResponse::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "prmInverseKinematicsResponse" << std::endl;
    description__cdg << cmnData< mtsGenericObject >::HumanReadable(*this) << std::endl;
    description__cdg << "  jp:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->mjp);
    description__cdg << "  result:" << cmnData<bool >::HumanReadable(this->mresult);
    description__cdg << "  message:" << cmnData<std::string >::HumanReadable(this->mmessage);
    return description__cdg.str();
}
bool prmInverseKinematicsResponse::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsGenericObject >::ScalarNumberIsFixed(*this)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->mjp)
           && cmnData<bool >::ScalarNumberIsFixed(this->mresult)
           && cmnData<std::string >::ScalarNumberIsFixed(this->mmessage)
    ;
}
size_t prmInverseKinematicsResponse::ScalarNumber(void) const {
    return 0
           + cmnData< mtsGenericObject >::ScalarNumber(*this)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->mjp)
           + cmnData<bool >::ScalarNumber(this->mresult)
           + cmnData<std::string >::ScalarNumber(this->mmessage)
    ;
}
std::string prmInverseKinematicsResponse::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::ScalarDescription(*this, index_cdg - baseIndex__cdg, prefix__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mjp);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->mjp, index_cdg - baseIndex__cdg, prefix__cdg + "jp");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->mresult);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->mresult, index_cdg - baseIndex__cdg, prefix__cdg + "result");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->mmessage);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->mmessage, index_cdg - baseIndex__cdg, prefix__cdg + "message");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmInverseKinematicsResponse index out of range"));
    return "";
}
double prmInverseKinematicsResponse::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::Scalar(*this, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mjp);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->mjp, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->mresult);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->mresult, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->mmessage);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->mmessage, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: prmInverseKinematicsResponse index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmInverseKinematicsResponse >::SerializeText(const prmInverseKinematicsResponse & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmInverseKinematicsResponse::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsGenericObject >::SerializeText(*(dynamic_cast<const mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->mjp, jsonValue["jp"]);
    cmnDataJSON<bool >::SerializeText(this->mresult, jsonValue["result"]);
    cmnDataJSON<std::string >::SerializeText(this->mmessage, jsonValue["message"]);
}
template<>
void cmnDataJSON<prmInverseKinematicsResponse >::DeSerializeText(prmInverseKinematicsResponse & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmInverseKinematicsResponse::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    cmnDataJSON<mtsGenericObject >::DeSerializeText(*(dynamic_cast<mtsGenericObject*>(this)), jsonValue);
    Json::Value field__cdg;
    field__cdg = jsonValue["jp"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->mjp, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicVector<double>>::DeSerializeText: empty JSON value for: mjp");
    };
    field__cdg = jsonValue["result"];
    if (!field__cdg.empty()) {
        cmnDataJSON<bool >::DeSerializeText(this->mresult, field__cdg);
    };
    field__cdg = jsonValue["message"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->mmessage, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: mmessage");
    };
}
#endif // CISST_HAS_JSON


