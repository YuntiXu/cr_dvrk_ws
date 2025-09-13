// file automatically generated, do not modify
// cisst version: 1.3.1
// source file: /home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmInverseKinematicsRequest.cdg

#include <cisstParameterTypes/prmInverseKinematicsRequest.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 12 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmInverseKinematicsRequestProxy);

prmInverseKinematicsRequest::prmInverseKinematicsRequest(void):
    mtsGenericObject()
    , mjp()
    , mcp()
{}

prmInverseKinematicsRequest::prmInverseKinematicsRequest(const prmInverseKinematicsRequest & other):
    mtsGenericObject(other)
    , mjp(other.mjp)
    , mcp(other.mcp)
{}

prmInverseKinematicsRequest & prmInverseKinematicsRequest::operator = (const prmInverseKinematicsRequest & other)
{
    mtsGenericObject::operator = (other);
    mjp = other.mjp;
    mcp = other.mcp;
    return *this;
}

prmInverseKinematicsRequest::~prmInverseKinematicsRequest(void){}


void prmInverseKinematicsRequest::SerializeRaw(std::ostream & outputStream__cdg) const
{
    mtsGenericObject::SerializeRaw(outputStream__cdg);
    cmnSerializeRaw(outputStream__cdg, this->mjp);
    cmnSerializeRaw(outputStream__cdg, this->mcp);
}


void prmInverseKinematicsRequest::DeSerializeRaw(std::istream & inputStream__cdg)
{
    mtsGenericObject::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeRaw(inputStream__cdg, this->mjp);
    cmnDeSerializeRaw(inputStream__cdg, this->mcp);
}


void prmInverseKinematicsRequest::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void prmInverseKinematicsRequest::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<prmInverseKinematicsRequest >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<prmInverseKinematicsRequest >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 22 */

/* accessors is set to: all */
void prmInverseKinematicsRequest::Getjp(vctDynamicVector<double> & placeHolder) const
{
    placeHolder = this->mjp;
}

void prmInverseKinematicsRequest::Setjp(const vctDynamicVector<double> & newValue)
{
    this->mjp = newValue;
}


/* accessors is set to: all */
const vctDynamicVector<double> & prmInverseKinematicsRequest::jp(void) const
{
    return this->mjp;
}

vctDynamicVector<double> & prmInverseKinematicsRequest::jp(void)
{
    return this->mjp;
}

/* source line: 28 */

/* accessors is set to: all */
void prmInverseKinematicsRequest::Getcp(vctFrm4x4 & placeHolder) const
{
    placeHolder = this->mcp;
}

void prmInverseKinematicsRequest::Setcp(const vctFrm4x4 & newValue)
{
    this->mcp = newValue;
}


/* accessors is set to: all */
const vctFrm4x4 & prmInverseKinematicsRequest::cp(void) const
{
    return this->mcp;
}

vctFrm4x4 & prmInverseKinematicsRequest::cp(void)
{
    return this->mcp;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmInverseKinematicsRequest & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmInverseKinematicsRequest & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmInverseKinematicsRequest::Copy(const prmInverseKinematicsRequest & source__cdg) {
    cmnData<mtsGenericObject >::Copy(*this, source__cdg);
    cmnData<vctDynamicVector<double> >::Copy(this->mjp, source__cdg.mjp);
    cmnData<vctFrm4x4 >::Copy(this->mcp, source__cdg.mcp);
}
void prmInverseKinematicsRequest::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::SerializeBinary(*this, outputStream__cdg);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->mjp, outputStream__cdg);
    cmnData<vctFrm4x4 >::SerializeBinary(this->mcp, outputStream__cdg);
}
void prmInverseKinematicsRequest::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->mjp, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctFrm4x4 >::DeSerializeBinary(this->mcp, inputStream__cdg, localFormat, remoteFormat);
}
void prmInverseKinematicsRequest::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
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
    cmnData<vctFrm4x4 >::SerializeText(this->mcp, outputStream__cdg, delimiter__cdg);
}
std::string prmInverseKinematicsRequest::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
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
    description__cdg << cmnData<vctFrm4x4 >::SerializeDescription(this->mcp, delimiter__cdg, prefix__cdg + "cp");
    return description__cdg.str();
}
void prmInverseKinematicsRequest::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmInverseKinematicsRequest");
    }
    someData__cdg = true;
    cmnData<mtsGenericObject >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmInverseKinematicsRequest");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->mjp, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmInverseKinematicsRequest");
    }
    someData__cdg = true;
    cmnData<vctFrm4x4 >::DeSerializeText(this->mcp, inputStream__cdg, delimiter__cdg);
}
std::string prmInverseKinematicsRequest::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "prmInverseKinematicsRequest" << std::endl;
    description__cdg << cmnData< mtsGenericObject >::HumanReadable(*this) << std::endl;
    description__cdg << "  jp:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->mjp);
    description__cdg << "  cp:" << cmnData<vctFrm4x4 >::HumanReadable(this->mcp);
    return description__cdg.str();
}
bool prmInverseKinematicsRequest::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsGenericObject >::ScalarNumberIsFixed(*this)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->mjp)
           && cmnData<vctFrm4x4 >::ScalarNumberIsFixed(this->mcp)
    ;
}
size_t prmInverseKinematicsRequest::ScalarNumber(void) const {
    return 0
           + cmnData< mtsGenericObject >::ScalarNumber(*this)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->mjp)
           + cmnData<vctFrm4x4 >::ScalarNumber(this->mcp)
    ;
}
std::string prmInverseKinematicsRequest::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
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
    currentMaxIndex__cdg += cmnData<vctFrm4x4 >::ScalarNumber(this->mcp);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctFrm4x4 >::ScalarDescription(this->mcp, index_cdg - baseIndex__cdg, prefix__cdg + "cp");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmInverseKinematicsRequest index out of range"));
    return "";
}
double prmInverseKinematicsRequest::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
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
    currentMaxIndex__cdg += cmnData<vctFrm4x4 >::ScalarNumber(this->mcp);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctFrm4x4 >::Scalar(this->mcp, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: prmInverseKinematicsRequest index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmInverseKinematicsRequest >::SerializeText(const prmInverseKinematicsRequest & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmInverseKinematicsRequest::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsGenericObject >::SerializeText(*(dynamic_cast<const mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->mjp, jsonValue["jp"]);
    cmnDataJSON<vctFrm4x4 >::SerializeText(this->mcp, jsonValue["cp"]);
}
template<>
void cmnDataJSON<prmInverseKinematicsRequest >::DeSerializeText(prmInverseKinematicsRequest & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmInverseKinematicsRequest::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    cmnDataJSON<mtsGenericObject >::DeSerializeText(*(dynamic_cast<mtsGenericObject*>(this)), jsonValue);
    Json::Value field__cdg;
    field__cdg = jsonValue["jp"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->mjp, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicVector<double>>::DeSerializeText: empty JSON value for: mjp");
    };
    field__cdg = jsonValue["cp"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctFrm4x4 >::DeSerializeText(this->mcp, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctFrm4x4>::DeSerializeText: empty JSON value for: mcp");
    };
}
#endif // CISST_HAS_JSON


