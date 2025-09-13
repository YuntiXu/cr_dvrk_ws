// file automatically generated, do not modify
// cisst version: 1.3.1
// source file: /home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmForwardKinematicsRequest.cdg

#include <cisstParameterTypes/prmForwardKinematicsRequest.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 12 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmForwardKinematicsRequestProxy);

prmForwardKinematicsRequest::prmForwardKinematicsRequest(void):
    mtsGenericObject()
    , mjp()
{}

prmForwardKinematicsRequest::prmForwardKinematicsRequest(const prmForwardKinematicsRequest & other):
    mtsGenericObject(other)
    , mjp(other.mjp)
{}

prmForwardKinematicsRequest & prmForwardKinematicsRequest::operator = (const prmForwardKinematicsRequest & other)
{
    mtsGenericObject::operator = (other);
    mjp = other.mjp;
    return *this;
}

prmForwardKinematicsRequest::~prmForwardKinematicsRequest(void){}


void prmForwardKinematicsRequest::SerializeRaw(std::ostream & outputStream__cdg) const
{
    mtsGenericObject::SerializeRaw(outputStream__cdg);
    cmnSerializeRaw(outputStream__cdg, this->mjp);
}


void prmForwardKinematicsRequest::DeSerializeRaw(std::istream & inputStream__cdg)
{
    mtsGenericObject::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeRaw(inputStream__cdg, this->mjp);
}


void prmForwardKinematicsRequest::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void prmForwardKinematicsRequest::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<prmForwardKinematicsRequest >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<prmForwardKinematicsRequest >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 22 */

/* accessors is set to: all */
void prmForwardKinematicsRequest::Getjp(vctDynamicVector<double> & placeHolder) const
{
    placeHolder = this->mjp;
}

void prmForwardKinematicsRequest::Setjp(const vctDynamicVector<double> & newValue)
{
    this->mjp = newValue;
}


/* accessors is set to: all */
const vctDynamicVector<double> & prmForwardKinematicsRequest::jp(void) const
{
    return this->mjp;
}

vctDynamicVector<double> & prmForwardKinematicsRequest::jp(void)
{
    return this->mjp;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmForwardKinematicsRequest & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmForwardKinematicsRequest & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmForwardKinematicsRequest::Copy(const prmForwardKinematicsRequest & source__cdg) {
    cmnData<mtsGenericObject >::Copy(*this, source__cdg);
    cmnData<vctDynamicVector<double> >::Copy(this->mjp, source__cdg.mjp);
}
void prmForwardKinematicsRequest::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::SerializeBinary(*this, outputStream__cdg);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->mjp, outputStream__cdg);
}
void prmForwardKinematicsRequest::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->mjp, inputStream__cdg, localFormat, remoteFormat);
}
void prmForwardKinematicsRequest::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
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
}
std::string prmForwardKinematicsRequest::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
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
    return description__cdg.str();
}
void prmForwardKinematicsRequest::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmForwardKinematicsRequest");
    }
    someData__cdg = true;
    cmnData<mtsGenericObject >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmForwardKinematicsRequest");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->mjp, inputStream__cdg, delimiter__cdg);
}
std::string prmForwardKinematicsRequest::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "prmForwardKinematicsRequest" << std::endl;
    description__cdg << cmnData< mtsGenericObject >::HumanReadable(*this) << std::endl;
    description__cdg << "  jp:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->mjp);
    return description__cdg.str();
}
bool prmForwardKinematicsRequest::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsGenericObject >::ScalarNumberIsFixed(*this)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->mjp)
    ;
}
size_t prmForwardKinematicsRequest::ScalarNumber(void) const {
    return 0
           + cmnData< mtsGenericObject >::ScalarNumber(*this)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->mjp)
    ;
}
std::string prmForwardKinematicsRequest::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
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
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmForwardKinematicsRequest index out of range"));
    return "";
}
double prmForwardKinematicsRequest::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
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
    cmnThrow(std::out_of_range("cmnDataScalar: prmForwardKinematicsRequest index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmForwardKinematicsRequest >::SerializeText(const prmForwardKinematicsRequest & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmForwardKinematicsRequest::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsGenericObject >::SerializeText(*(dynamic_cast<const mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->mjp, jsonValue["jp"]);
}
template<>
void cmnDataJSON<prmForwardKinematicsRequest >::DeSerializeText(prmForwardKinematicsRequest & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmForwardKinematicsRequest::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    cmnDataJSON<mtsGenericObject >::DeSerializeText(*(dynamic_cast<mtsGenericObject*>(this)), jsonValue);
    Json::Value field__cdg;
    field__cdg = jsonValue["jp"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->mjp, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicVector<double>>::DeSerializeText: empty JSON value for: mjp");
    };
}
#endif // CISST_HAS_JSON


