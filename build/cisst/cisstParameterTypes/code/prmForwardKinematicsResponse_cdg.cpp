// file automatically generated, do not modify
// cisst version: 1.3.1
// source file: /home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmForwardKinematicsResponse.cdg

#include <cisstParameterTypes/prmForwardKinematicsResponse.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 12 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmForwardKinematicsResponseProxy);

prmForwardKinematicsResponse::prmForwardKinematicsResponse(void):
    mtsGenericObject()
    , mcp()
    , mresult(false)
    , mmessage()
{}

prmForwardKinematicsResponse::prmForwardKinematicsResponse(const prmForwardKinematicsResponse & other):
    mtsGenericObject(other)
    , mcp(other.mcp)
    , mresult(other.mresult)
    , mmessage(other.mmessage)
{}

prmForwardKinematicsResponse & prmForwardKinematicsResponse::operator = (const prmForwardKinematicsResponse & other)
{
    mtsGenericObject::operator = (other);
    mcp = other.mcp;
    mresult = other.mresult;
    mmessage = other.mmessage;
    return *this;
}

prmForwardKinematicsResponse::~prmForwardKinematicsResponse(void){}


void prmForwardKinematicsResponse::SerializeRaw(std::ostream & outputStream__cdg) const
{
    mtsGenericObject::SerializeRaw(outputStream__cdg);
    cmnSerializeRaw(outputStream__cdg, this->mcp);
    cmnSerializeRaw(outputStream__cdg, this->mresult);
    cmnSerializeRaw(outputStream__cdg, this->mmessage);
}


void prmForwardKinematicsResponse::DeSerializeRaw(std::istream & inputStream__cdg)
{
    mtsGenericObject::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeRaw(inputStream__cdg, this->mcp);
    cmnDeSerializeRaw(inputStream__cdg, this->mresult);
    cmnDeSerializeRaw(inputStream__cdg, this->mmessage);
}


void prmForwardKinematicsResponse::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void prmForwardKinematicsResponse::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<prmForwardKinematicsResponse >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<prmForwardKinematicsResponse >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 22 */

/* accessors is set to: all */
void prmForwardKinematicsResponse::Getcp(vctFrm4x4 & placeHolder) const
{
    placeHolder = this->mcp;
}

void prmForwardKinematicsResponse::Setcp(const vctFrm4x4 & newValue)
{
    this->mcp = newValue;
}


/* accessors is set to: all */
const vctFrm4x4 & prmForwardKinematicsResponse::cp(void) const
{
    return this->mcp;
}

vctFrm4x4 & prmForwardKinematicsResponse::cp(void)
{
    return this->mcp;
}

/* source line: 28 */

/* accessors is set to: all */
void prmForwardKinematicsResponse::Getresult(bool & placeHolder) const
{
    placeHolder = this->mresult;
}

void prmForwardKinematicsResponse::Setresult(const bool & newValue)
{
    this->mresult = newValue;
}


/* accessors is set to: all */
const bool & prmForwardKinematicsResponse::result(void) const
{
    return this->mresult;
}

bool & prmForwardKinematicsResponse::result(void)
{
    return this->mresult;
}

/* source line: 34 */

/* accessors is set to: all */
void prmForwardKinematicsResponse::Getmessage(std::string & placeHolder) const
{
    placeHolder = this->mmessage;
}

void prmForwardKinematicsResponse::Setmessage(const std::string & newValue)
{
    this->mmessage = newValue;
}


/* accessors is set to: all */
const std::string & prmForwardKinematicsResponse::message(void) const
{
    return this->mmessage;
}

std::string & prmForwardKinematicsResponse::message(void)
{
    return this->mmessage;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmForwardKinematicsResponse & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmForwardKinematicsResponse & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmForwardKinematicsResponse::Copy(const prmForwardKinematicsResponse & source__cdg) {
    cmnData<mtsGenericObject >::Copy(*this, source__cdg);
    cmnData<vctFrm4x4 >::Copy(this->mcp, source__cdg.mcp);
    cmnData<bool >::Copy(this->mresult, source__cdg.mresult);
    cmnData<std::string >::Copy(this->mmessage, source__cdg.mmessage);
}
void prmForwardKinematicsResponse::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::SerializeBinary(*this, outputStream__cdg);
    cmnData<vctFrm4x4 >::SerializeBinary(this->mcp, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->mresult, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->mmessage, outputStream__cdg);
}
void prmForwardKinematicsResponse::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctFrm4x4 >::DeSerializeBinary(this->mcp, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->mresult, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->mmessage, inputStream__cdg, localFormat, remoteFormat);
}
void prmForwardKinematicsResponse::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
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
    cmnData<vctFrm4x4 >::SerializeText(this->mcp, outputStream__cdg, delimiter__cdg);
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
std::string prmForwardKinematicsResponse::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
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
    description__cdg << cmnData<vctFrm4x4 >::SerializeDescription(this->mcp, delimiter__cdg, prefix__cdg + "cp");
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
void prmForwardKinematicsResponse::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmForwardKinematicsResponse");
    }
    someData__cdg = true;
    cmnData<mtsGenericObject >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmForwardKinematicsResponse");
    }
    someData__cdg = true;
    cmnData<vctFrm4x4 >::DeSerializeText(this->mcp, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmForwardKinematicsResponse");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->mresult, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmForwardKinematicsResponse");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->mmessage, inputStream__cdg, delimiter__cdg);
}
std::string prmForwardKinematicsResponse::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "prmForwardKinematicsResponse" << std::endl;
    description__cdg << cmnData< mtsGenericObject >::HumanReadable(*this) << std::endl;
    description__cdg << "  cp:" << cmnData<vctFrm4x4 >::HumanReadable(this->mcp);
    description__cdg << "  result:" << cmnData<bool >::HumanReadable(this->mresult);
    description__cdg << "  message:" << cmnData<std::string >::HumanReadable(this->mmessage);
    return description__cdg.str();
}
bool prmForwardKinematicsResponse::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsGenericObject >::ScalarNumberIsFixed(*this)
           && cmnData<vctFrm4x4 >::ScalarNumberIsFixed(this->mcp)
           && cmnData<bool >::ScalarNumberIsFixed(this->mresult)
           && cmnData<std::string >::ScalarNumberIsFixed(this->mmessage)
    ;
}
size_t prmForwardKinematicsResponse::ScalarNumber(void) const {
    return 0
           + cmnData< mtsGenericObject >::ScalarNumber(*this)
           + cmnData<vctFrm4x4 >::ScalarNumber(this->mcp)
           + cmnData<bool >::ScalarNumber(this->mresult)
           + cmnData<std::string >::ScalarNumber(this->mmessage)
    ;
}
std::string prmForwardKinematicsResponse::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::ScalarDescription(*this, index_cdg - baseIndex__cdg, prefix__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctFrm4x4 >::ScalarNumber(this->mcp);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctFrm4x4 >::ScalarDescription(this->mcp, index_cdg - baseIndex__cdg, prefix__cdg + "cp");
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
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmForwardKinematicsResponse index out of range"));
    return "";
}
double prmForwardKinematicsResponse::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::Scalar(*this, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctFrm4x4 >::ScalarNumber(this->mcp);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctFrm4x4 >::Scalar(this->mcp, index_cdg - baseIndex__cdg);
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
    cmnThrow(std::out_of_range("cmnDataScalar: prmForwardKinematicsResponse index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmForwardKinematicsResponse >::SerializeText(const prmForwardKinematicsResponse & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmForwardKinematicsResponse::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsGenericObject >::SerializeText(*(dynamic_cast<const mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<vctFrm4x4 >::SerializeText(this->mcp, jsonValue["cp"]);
    cmnDataJSON<bool >::SerializeText(this->mresult, jsonValue["result"]);
    cmnDataJSON<std::string >::SerializeText(this->mmessage, jsonValue["message"]);
}
template<>
void cmnDataJSON<prmForwardKinematicsResponse >::DeSerializeText(prmForwardKinematicsResponse & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmForwardKinematicsResponse::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    cmnDataJSON<mtsGenericObject >::DeSerializeText(*(dynamic_cast<mtsGenericObject*>(this)), jsonValue);
    Json::Value field__cdg;
    field__cdg = jsonValue["cp"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctFrm4x4 >::DeSerializeText(this->mcp, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctFrm4x4>::DeSerializeText: empty JSON value for: mcp");
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


