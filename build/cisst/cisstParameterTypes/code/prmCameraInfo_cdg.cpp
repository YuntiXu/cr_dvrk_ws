// file automatically generated, do not modify
// cisst version: 1.3.1
// source file: /home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmCameraInfo.cdg

#include <cisstParameterTypes/prmCameraInfo.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 12 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmCameraInfoProxy);

prmCameraInfo::prmCameraInfo(void):
    mtsGenericObject()
    , mWidth(0)
    , mHeight(0)
    , mDistortionParameters()
    , mIntrinsic()
    , mRectification()
    , mProjection()
{}

prmCameraInfo::prmCameraInfo(const prmCameraInfo & other):
    mtsGenericObject(other)
    , mWidth(other.mWidth)
    , mHeight(other.mHeight)
    , mDistortionParameters(other.mDistortionParameters)
    , mIntrinsic(other.mIntrinsic)
    , mRectification(other.mRectification)
    , mProjection(other.mProjection)
{}

prmCameraInfo & prmCameraInfo::operator = (const prmCameraInfo & other)
{
    mtsGenericObject::operator = (other);
    mWidth = other.mWidth;
    mHeight = other.mHeight;
    mDistortionParameters = other.mDistortionParameters;
    mIntrinsic = other.mIntrinsic;
    mRectification = other.mRectification;
    mProjection = other.mProjection;
    return *this;
}

prmCameraInfo::~prmCameraInfo(void){}


void prmCameraInfo::SerializeRaw(std::ostream & outputStream__cdg) const
{
    mtsGenericObject::SerializeRaw(outputStream__cdg);
    cmnSerializeSizeRaw(outputStream__cdg, this->mWidth);
    cmnSerializeSizeRaw(outputStream__cdg, this->mHeight);
    cmnSerializeRaw(outputStream__cdg, this->mDistortionParameters);
    cmnSerializeRaw(outputStream__cdg, this->mIntrinsic);
    cmnSerializeRaw(outputStream__cdg, this->mRectification);
    cmnSerializeRaw(outputStream__cdg, this->mProjection);
}


void prmCameraInfo::DeSerializeRaw(std::istream & inputStream__cdg)
{
    mtsGenericObject::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeSizeRaw(inputStream__cdg, this->mWidth);
    cmnDeSerializeSizeRaw(inputStream__cdg, this->mHeight);
    cmnDeSerializeRaw(inputStream__cdg, this->mDistortionParameters);
    cmnDeSerializeRaw(inputStream__cdg, this->mIntrinsic);
    cmnDeSerializeRaw(inputStream__cdg, this->mRectification);
    cmnDeSerializeRaw(inputStream__cdg, this->mProjection);
}


void prmCameraInfo::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void prmCameraInfo::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<prmCameraInfo >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<prmCameraInfo >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 22 */

/* accessors is set to: all */
void prmCameraInfo::GetWidth(size_t & placeHolder) const
{
    placeHolder = this->mWidth;
}

void prmCameraInfo::SetWidth(const size_t & newValue)
{
    this->mWidth = newValue;
}


/* accessors is set to: all */
const size_t & prmCameraInfo::Width(void) const
{
    return this->mWidth;
}

size_t & prmCameraInfo::Width(void)
{
    return this->mWidth;
}

/* source line: 28 */

/* accessors is set to: all */
void prmCameraInfo::GetHeight(size_t & placeHolder) const
{
    placeHolder = this->mHeight;
}

void prmCameraInfo::SetHeight(const size_t & newValue)
{
    this->mHeight = newValue;
}


/* accessors is set to: all */
const size_t & prmCameraInfo::Height(void) const
{
    return this->mHeight;
}

size_t & prmCameraInfo::Height(void)
{
    return this->mHeight;
}

/* source line: 34 */

/* accessors is set to: all */
void prmCameraInfo::GetDistortionParameters(vctDoubleVec & placeHolder) const
{
    placeHolder = this->mDistortionParameters;
}

void prmCameraInfo::SetDistortionParameters(const vctDoubleVec & newValue)
{
    this->mDistortionParameters = newValue;
}


/* accessors is set to: all */
const vctDoubleVec & prmCameraInfo::DistortionParameters(void) const
{
    return this->mDistortionParameters;
}

vctDoubleVec & prmCameraInfo::DistortionParameters(void)
{
    return this->mDistortionParameters;
}

/* source line: 39 */

/* accessors is set to: all */
void prmCameraInfo::GetIntrinsic(vct3x3 & placeHolder) const
{
    placeHolder = this->mIntrinsic;
}

void prmCameraInfo::SetIntrinsic(const vct3x3 & newValue)
{
    this->mIntrinsic = newValue;
}


/* accessors is set to: all */
const vct3x3 & prmCameraInfo::Intrinsic(void) const
{
    return this->mIntrinsic;
}

vct3x3 & prmCameraInfo::Intrinsic(void)
{
    return this->mIntrinsic;
}

/* source line: 44 */

/* accessors is set to: all */
void prmCameraInfo::GetRectification(vctRot3 & placeHolder) const
{
    placeHolder = this->mRectification;
}

void prmCameraInfo::SetRectification(const vctRot3 & newValue)
{
    this->mRectification = newValue;
}


/* accessors is set to: all */
const vctRot3 & prmCameraInfo::Rectification(void) const
{
    return this->mRectification;
}

vctRot3 & prmCameraInfo::Rectification(void)
{
    return this->mRectification;
}

/* source line: 49 */

/* accessors is set to: all */
void prmCameraInfo::GetProjection(vct3x4 & placeHolder) const
{
    placeHolder = this->mProjection;
}

void prmCameraInfo::SetProjection(const vct3x4 & newValue)
{
    this->mProjection = newValue;
}


/* accessors is set to: all */
const vct3x4 & prmCameraInfo::Projection(void) const
{
    return this->mProjection;
}

vct3x4 & prmCameraInfo::Projection(void)
{
    return this->mProjection;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmCameraInfo & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmCameraInfo & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmCameraInfo::Copy(const prmCameraInfo & source__cdg) {
    cmnData<mtsGenericObject >::Copy(*this, source__cdg);
    cmnData<size_t >::Copy(this->mWidth, source__cdg.mWidth);
    cmnData<size_t >::Copy(this->mHeight, source__cdg.mHeight);
    cmnData<vctDoubleVec >::Copy(this->mDistortionParameters, source__cdg.mDistortionParameters);
    cmnData<vct3x3 >::Copy(this->mIntrinsic, source__cdg.mIntrinsic);
    cmnData<vctRot3 >::Copy(this->mRectification, source__cdg.mRectification);
    cmnData<vct3x4 >::Copy(this->mProjection, source__cdg.mProjection);
}
void prmCameraInfo::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::SerializeBinary(*this, outputStream__cdg);
    cmnData<size_t >::SerializeBinary(this->mWidth, outputStream__cdg);
    cmnData<size_t >::SerializeBinary(this->mHeight, outputStream__cdg);
    cmnData<vctDoubleVec >::SerializeBinary(this->mDistortionParameters, outputStream__cdg);
    cmnData<vct3x3 >::SerializeBinary(this->mIntrinsic, outputStream__cdg);
    cmnData<vctRot3 >::SerializeBinary(this->mRectification, outputStream__cdg);
    cmnData<vct3x4 >::SerializeBinary(this->mProjection, outputStream__cdg);
}
void prmCameraInfo::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnDataDeSerializeBinary_size_t(this->mWidth, inputStream__cdg, localFormat, remoteFormat);
    cmnDataDeSerializeBinary_size_t(this->mHeight, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDoubleVec >::DeSerializeBinary(this->mDistortionParameters, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct3x3 >::DeSerializeBinary(this->mIntrinsic, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctRot3 >::DeSerializeBinary(this->mRectification, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct3x4 >::DeSerializeBinary(this->mProjection, inputStream__cdg, localFormat, remoteFormat);
}
void prmCameraInfo::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
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
    cmnData<size_t >::SerializeText(this->mWidth, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<size_t >::SerializeText(this->mHeight, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDoubleVec >::SerializeText(this->mDistortionParameters, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct3x3 >::SerializeText(this->mIntrinsic, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctRot3 >::SerializeText(this->mRectification, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct3x4 >::SerializeText(this->mProjection, outputStream__cdg, delimiter__cdg);
}
std::string prmCameraInfo::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
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
    description__cdg << cmnData<size_t >::SerializeDescription(this->mWidth, delimiter__cdg, prefix__cdg + "Width");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<size_t >::SerializeDescription(this->mHeight, delimiter__cdg, prefix__cdg + "Height");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDoubleVec >::SerializeDescription(this->mDistortionParameters, delimiter__cdg, prefix__cdg + "DistortionParameters");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct3x3 >::SerializeDescription(this->mIntrinsic, delimiter__cdg, prefix__cdg + "Intrinsic");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctRot3 >::SerializeDescription(this->mRectification, delimiter__cdg, prefix__cdg + "Rectification");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct3x4 >::SerializeDescription(this->mProjection, delimiter__cdg, prefix__cdg + "Projection");
    return description__cdg.str();
}
void prmCameraInfo::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCameraInfo");
    }
    someData__cdg = true;
    cmnData<mtsGenericObject >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCameraInfo");
    }
    someData__cdg = true;
    cmnData<size_t >::DeSerializeText(this->mWidth, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCameraInfo");
    }
    someData__cdg = true;
    cmnData<size_t >::DeSerializeText(this->mHeight, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCameraInfo");
    }
    someData__cdg = true;
    cmnData<vctDoubleVec >::DeSerializeText(this->mDistortionParameters, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCameraInfo");
    }
    someData__cdg = true;
    cmnData<vct3x3 >::DeSerializeText(this->mIntrinsic, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCameraInfo");
    }
    someData__cdg = true;
    cmnData<vctRot3 >::DeSerializeText(this->mRectification, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCameraInfo");
    }
    someData__cdg = true;
    cmnData<vct3x4 >::DeSerializeText(this->mProjection, inputStream__cdg, delimiter__cdg);
}
std::string prmCameraInfo::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "prmCameraInfo" << std::endl;
    description__cdg << cmnData< mtsGenericObject >::HumanReadable(*this) << std::endl;
    description__cdg << "  Width:" << cmnData<size_t >::HumanReadable(this->mWidth);
    description__cdg << "  Height:" << cmnData<size_t >::HumanReadable(this->mHeight);
    description__cdg << "  DistortionParameters:" << cmnData<vctDoubleVec >::HumanReadable(this->mDistortionParameters);
    description__cdg << "  Intrinsic:" << cmnData<vct3x3 >::HumanReadable(this->mIntrinsic);
    description__cdg << "  Rectification:" << cmnData<vctRot3 >::HumanReadable(this->mRectification);
    description__cdg << "  Projection:" << cmnData<vct3x4 >::HumanReadable(this->mProjection);
    return description__cdg.str();
}
bool prmCameraInfo::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsGenericObject >::ScalarNumberIsFixed(*this)
           && cmnData<size_t >::ScalarNumberIsFixed(this->mWidth)
           && cmnData<size_t >::ScalarNumberIsFixed(this->mHeight)
           && cmnData<vctDoubleVec >::ScalarNumberIsFixed(this->mDistortionParameters)
           && cmnData<vct3x3 >::ScalarNumberIsFixed(this->mIntrinsic)
           && cmnData<vctRot3 >::ScalarNumberIsFixed(this->mRectification)
           && cmnData<vct3x4 >::ScalarNumberIsFixed(this->mProjection)
    ;
}
size_t prmCameraInfo::ScalarNumber(void) const {
    return 0
           + cmnData< mtsGenericObject >::ScalarNumber(*this)
           + cmnData<size_t >::ScalarNumber(this->mWidth)
           + cmnData<size_t >::ScalarNumber(this->mHeight)
           + cmnData<vctDoubleVec >::ScalarNumber(this->mDistortionParameters)
           + cmnData<vct3x3 >::ScalarNumber(this->mIntrinsic)
           + cmnData<vctRot3 >::ScalarNumber(this->mRectification)
           + cmnData<vct3x4 >::ScalarNumber(this->mProjection)
    ;
}
std::string prmCameraInfo::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::ScalarDescription(*this, index_cdg - baseIndex__cdg, prefix__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<size_t >::ScalarNumber(this->mWidth);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<size_t >::ScalarDescription(this->mWidth, index_cdg - baseIndex__cdg, prefix__cdg + "Width");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<size_t >::ScalarNumber(this->mHeight);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<size_t >::ScalarDescription(this->mHeight, index_cdg - baseIndex__cdg, prefix__cdg + "Height");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleVec >::ScalarNumber(this->mDistortionParameters);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleVec >::ScalarDescription(this->mDistortionParameters, index_cdg - baseIndex__cdg, prefix__cdg + "DistortionParameters");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3x3 >::ScalarNumber(this->mIntrinsic);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3x3 >::ScalarDescription(this->mIntrinsic, index_cdg - baseIndex__cdg, prefix__cdg + "Intrinsic");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctRot3 >::ScalarNumber(this->mRectification);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctRot3 >::ScalarDescription(this->mRectification, index_cdg - baseIndex__cdg, prefix__cdg + "Rectification");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3x4 >::ScalarNumber(this->mProjection);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3x4 >::ScalarDescription(this->mProjection, index_cdg - baseIndex__cdg, prefix__cdg + "Projection");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmCameraInfo index out of range"));
    return "";
}
double prmCameraInfo::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::Scalar(*this, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<size_t >::ScalarNumber(this->mWidth);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<size_t >::Scalar(this->mWidth, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<size_t >::ScalarNumber(this->mHeight);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<size_t >::Scalar(this->mHeight, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleVec >::ScalarNumber(this->mDistortionParameters);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleVec >::Scalar(this->mDistortionParameters, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3x3 >::ScalarNumber(this->mIntrinsic);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3x3 >::Scalar(this->mIntrinsic, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctRot3 >::ScalarNumber(this->mRectification);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctRot3 >::Scalar(this->mRectification, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3x4 >::ScalarNumber(this->mProjection);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3x4 >::Scalar(this->mProjection, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: prmCameraInfo index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmCameraInfo >::SerializeText(const prmCameraInfo & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmCameraInfo::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsGenericObject >::SerializeText(*(dynamic_cast<const mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<size_t >::SerializeText(this->mWidth, jsonValue["Width"]);
    cmnDataJSON<size_t >::SerializeText(this->mHeight, jsonValue["Height"]);
    cmnDataJSON<vctDoubleVec >::SerializeText(this->mDistortionParameters, jsonValue["DistortionParameters"]);
    cmnDataJSON<vct3x3 >::SerializeText(this->mIntrinsic, jsonValue["Intrinsic"]);
    cmnDataJSON<vctRot3 >::SerializeText(this->mRectification, jsonValue["Rectification"]);
    cmnDataJSON<vct3x4 >::SerializeText(this->mProjection, jsonValue["Projection"]);
}
template<>
void cmnDataJSON<prmCameraInfo >::DeSerializeText(prmCameraInfo & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmCameraInfo::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    cmnDataJSON<mtsGenericObject >::DeSerializeText(*(dynamic_cast<mtsGenericObject*>(this)), jsonValue);
    Json::Value field__cdg;
    field__cdg = jsonValue["Width"];
    if (!field__cdg.empty()) {
        cmnDataJSON<size_t >::DeSerializeText(this->mWidth, field__cdg);
    };
    field__cdg = jsonValue["Height"];
    if (!field__cdg.empty()) {
        cmnDataJSON<size_t >::DeSerializeText(this->mHeight, field__cdg);
    };
    field__cdg = jsonValue["DistortionParameters"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDoubleVec >::DeSerializeText(this->mDistortionParameters, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDoubleVec>::DeSerializeText: empty JSON value for: mDistortionParameters");
    };
    field__cdg = jsonValue["Intrinsic"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3x3 >::DeSerializeText(this->mIntrinsic, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vct3x3>::DeSerializeText: empty JSON value for: mIntrinsic");
    };
    field__cdg = jsonValue["Rectification"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctRot3 >::DeSerializeText(this->mRectification, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctRot3>::DeSerializeText: empty JSON value for: mRectification");
    };
    field__cdg = jsonValue["Projection"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3x4 >::DeSerializeText(this->mProjection, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vct3x4>::DeSerializeText: empty JSON value for: mProjection");
    };
}
#endif // CISST_HAS_JSON


