// file automatically generated, do not modify
// cisst version: 1.3.1
// source file: /home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmDepthMap.cdg

#include <cisstParameterTypes/prmDepthMap.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 12 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmDepthMapProxy);

prmDepthMap::prmDepthMap(void):
    mtsGenericObject()
    , mWidth(0)
    , mHeight(0)
    , mPoints()
    , mColor()
    , mReferenceFrame()
{}

prmDepthMap::prmDepthMap(const prmDepthMap & other):
    mtsGenericObject(other)
    , mWidth(other.mWidth)
    , mHeight(other.mHeight)
    , mPoints(other.mPoints)
    , mColor(other.mColor)
    , mReferenceFrame(other.mReferenceFrame)
{}

prmDepthMap & prmDepthMap::operator = (const prmDepthMap & other)
{
    mtsGenericObject::operator = (other);
    mWidth = other.mWidth;
    mHeight = other.mHeight;
    mPoints = other.mPoints;
    mColor = other.mColor;
    mReferenceFrame = other.mReferenceFrame;
    return *this;
}

prmDepthMap::~prmDepthMap(void){}


void prmDepthMap::SerializeRaw(std::ostream & outputStream__cdg) const
{
    mtsGenericObject::SerializeRaw(outputStream__cdg);
    cmnSerializeSizeRaw(outputStream__cdg, this->mWidth);
    cmnSerializeSizeRaw(outputStream__cdg, this->mHeight);
    cmnSerializeRaw(outputStream__cdg, this->mPoints);
    cmnSerializeRaw(outputStream__cdg, this->mColor);
    cmnSerializeRaw(outputStream__cdg, this->mReferenceFrame);
}


void prmDepthMap::DeSerializeRaw(std::istream & inputStream__cdg)
{
    mtsGenericObject::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeSizeRaw(inputStream__cdg, this->mWidth);
    cmnDeSerializeSizeRaw(inputStream__cdg, this->mHeight);
    cmnDeSerializeRaw(inputStream__cdg, this->mPoints);
    cmnDeSerializeRaw(inputStream__cdg, this->mColor);
    cmnDeSerializeRaw(inputStream__cdg, this->mReferenceFrame);
}


void prmDepthMap::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void prmDepthMap::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<prmDepthMap >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<prmDepthMap >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 22 */

/* accessors is set to: all */
void prmDepthMap::GetWidth(size_t & placeHolder) const
{
    placeHolder = this->mWidth;
}

void prmDepthMap::SetWidth(const size_t & newValue)
{
    this->mWidth = newValue;
}


/* accessors is set to: all */
const size_t & prmDepthMap::Width(void) const
{
    return this->mWidth;
}

size_t & prmDepthMap::Width(void)
{
    return this->mWidth;
}

/* source line: 28 */

/* accessors is set to: all */
void prmDepthMap::GetHeight(size_t & placeHolder) const
{
    placeHolder = this->mHeight;
}

void prmDepthMap::SetHeight(const size_t & newValue)
{
    this->mHeight = newValue;
}


/* accessors is set to: all */
const size_t & prmDepthMap::Height(void) const
{
    return this->mHeight;
}

size_t & prmDepthMap::Height(void)
{
    return this->mHeight;
}

/* source line: 34 */

/* accessors is set to: all */
void prmDepthMap::GetPoints(vctDynamicVector<float> & placeHolder) const
{
    placeHolder = this->mPoints;
}

void prmDepthMap::SetPoints(const vctDynamicVector<float> & newValue)
{
    this->mPoints = newValue;
}


/* accessors is set to: all */
const vctDynamicVector<float> & prmDepthMap::Points(void) const
{
    return this->mPoints;
}

vctDynamicVector<float> & prmDepthMap::Points(void)
{
    return this->mPoints;
}

/* source line: 39 */

/* accessors is set to: all */
void prmDepthMap::GetColor(vctDynamicVector<char> & placeHolder) const
{
    placeHolder = this->mColor;
}

void prmDepthMap::SetColor(const vctDynamicVector<char> & newValue)
{
    this->mColor = newValue;
}


/* accessors is set to: all */
const vctDynamicVector<char> & prmDepthMap::Color(void) const
{
    return this->mColor;
}

vctDynamicVector<char> & prmDepthMap::Color(void)
{
    return this->mColor;
}

/* source line: 44 */

/* accessors is set to: all */
void prmDepthMap::GetReferenceFrame(std::string & placeHolder) const
{
    placeHolder = this->mReferenceFrame;
}

void prmDepthMap::SetReferenceFrame(const std::string & newValue)
{
    this->mReferenceFrame = newValue;
}


/* accessors is set to: all */
const std::string & prmDepthMap::ReferenceFrame(void) const
{
    return this->mReferenceFrame;
}

std::string & prmDepthMap::ReferenceFrame(void)
{
    return this->mReferenceFrame;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmDepthMap & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmDepthMap & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmDepthMap::Copy(const prmDepthMap & source__cdg) {
    cmnData<mtsGenericObject >::Copy(*this, source__cdg);
    cmnData<size_t >::Copy(this->mWidth, source__cdg.mWidth);
    cmnData<size_t >::Copy(this->mHeight, source__cdg.mHeight);
    cmnData<vctDynamicVector<float> >::Copy(this->mPoints, source__cdg.mPoints);
    cmnData<vctDynamicVector<char> >::Copy(this->mColor, source__cdg.mColor);
    cmnData<std::string >::Copy(this->mReferenceFrame, source__cdg.mReferenceFrame);
}
void prmDepthMap::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::SerializeBinary(*this, outputStream__cdg);
    cmnData<size_t >::SerializeBinary(this->mWidth, outputStream__cdg);
    cmnData<size_t >::SerializeBinary(this->mHeight, outputStream__cdg);
    cmnData<vctDynamicVector<float> >::SerializeBinary(this->mPoints, outputStream__cdg);
    cmnData<vctDynamicVector<char> >::SerializeBinary(this->mColor, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->mReferenceFrame, outputStream__cdg);
}
void prmDepthMap::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnDataDeSerializeBinary_size_t(this->mWidth, inputStream__cdg, localFormat, remoteFormat);
    cmnDataDeSerializeBinary_size_t(this->mHeight, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<float> >::DeSerializeBinary(this->mPoints, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<char> >::DeSerializeBinary(this->mColor, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->mReferenceFrame, inputStream__cdg, localFormat, remoteFormat);
}
void prmDepthMap::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
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
    cmnData<vctDynamicVector<float> >::SerializeText(this->mPoints, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<char> >::SerializeText(this->mColor, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->mReferenceFrame, outputStream__cdg, delimiter__cdg);
}
std::string prmDepthMap::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
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
    description__cdg << cmnData<vctDynamicVector<float> >::SerializeDescription(this->mPoints, delimiter__cdg, prefix__cdg + "Points");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDynamicVector<char> >::SerializeDescription(this->mColor, delimiter__cdg, prefix__cdg + "Color");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->mReferenceFrame, delimiter__cdg, prefix__cdg + "ReferenceFrame");
    return description__cdg.str();
}
void prmDepthMap::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmDepthMap");
    }
    someData__cdg = true;
    cmnData<mtsGenericObject >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmDepthMap");
    }
    someData__cdg = true;
    cmnData<size_t >::DeSerializeText(this->mWidth, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmDepthMap");
    }
    someData__cdg = true;
    cmnData<size_t >::DeSerializeText(this->mHeight, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmDepthMap");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<float> >::DeSerializeText(this->mPoints, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmDepthMap");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<char> >::DeSerializeText(this->mColor, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmDepthMap");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->mReferenceFrame, inputStream__cdg, delimiter__cdg);
}
std::string prmDepthMap::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "prmDepthMap" << std::endl;
    description__cdg << cmnData< mtsGenericObject >::HumanReadable(*this) << std::endl;
    description__cdg << "  Width:" << cmnData<size_t >::HumanReadable(this->mWidth);
    description__cdg << "  Height:" << cmnData<size_t >::HumanReadable(this->mHeight);
    description__cdg << "  Points:" << cmnData<vctDynamicVector<float> >::HumanReadable(this->mPoints);
    description__cdg << "  Color:" << cmnData<vctDynamicVector<char> >::HumanReadable(this->mColor);
    description__cdg << "  ReferenceFrame:" << cmnData<std::string >::HumanReadable(this->mReferenceFrame);
    return description__cdg.str();
}
bool prmDepthMap::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsGenericObject >::ScalarNumberIsFixed(*this)
           && cmnData<size_t >::ScalarNumberIsFixed(this->mWidth)
           && cmnData<size_t >::ScalarNumberIsFixed(this->mHeight)
           && cmnData<vctDynamicVector<float> >::ScalarNumberIsFixed(this->mPoints)
           && cmnData<vctDynamicVector<char> >::ScalarNumberIsFixed(this->mColor)
           && cmnData<std::string >::ScalarNumberIsFixed(this->mReferenceFrame)
    ;
}
size_t prmDepthMap::ScalarNumber(void) const {
    return 0
           + cmnData< mtsGenericObject >::ScalarNumber(*this)
           + cmnData<size_t >::ScalarNumber(this->mWidth)
           + cmnData<size_t >::ScalarNumber(this->mHeight)
           + cmnData<vctDynamicVector<float> >::ScalarNumber(this->mPoints)
           + cmnData<vctDynamicVector<char> >::ScalarNumber(this->mColor)
           + cmnData<std::string >::ScalarNumber(this->mReferenceFrame)
    ;
}
std::string prmDepthMap::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
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
    currentMaxIndex__cdg += cmnData<vctDynamicVector<float> >::ScalarNumber(this->mPoints);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<float> >::ScalarDescription(this->mPoints, index_cdg - baseIndex__cdg, prefix__cdg + "Points");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<char> >::ScalarNumber(this->mColor);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<char> >::ScalarDescription(this->mColor, index_cdg - baseIndex__cdg, prefix__cdg + "Color");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->mReferenceFrame);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->mReferenceFrame, index_cdg - baseIndex__cdg, prefix__cdg + "ReferenceFrame");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmDepthMap index out of range"));
    return "";
}
double prmDepthMap::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
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
    currentMaxIndex__cdg += cmnData<vctDynamicVector<float> >::ScalarNumber(this->mPoints);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<float> >::Scalar(this->mPoints, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<char> >::ScalarNumber(this->mColor);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<char> >::Scalar(this->mColor, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->mReferenceFrame);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->mReferenceFrame, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: prmDepthMap index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmDepthMap >::SerializeText(const prmDepthMap & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmDepthMap::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsGenericObject >::SerializeText(*(dynamic_cast<const mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<size_t >::SerializeText(this->mWidth, jsonValue["Width"]);
    cmnDataJSON<size_t >::SerializeText(this->mHeight, jsonValue["Height"]);
    cmnDataJSON<vctDynamicVector<float> >::SerializeText(this->mPoints, jsonValue["Points"]);
    cmnDataJSON<vctDynamicVector<char> >::SerializeText(this->mColor, jsonValue["Color"]);
    cmnDataJSON<std::string >::SerializeText(this->mReferenceFrame, jsonValue["ReferenceFrame"]);
}
template<>
void cmnDataJSON<prmDepthMap >::DeSerializeText(prmDepthMap & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmDepthMap::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
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
    field__cdg = jsonValue["Points"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<float> >::DeSerializeText(this->mPoints, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicVector<float>>::DeSerializeText: empty JSON value for: mPoints");
    };
    field__cdg = jsonValue["Color"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<char> >::DeSerializeText(this->mColor, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicVector<char>>::DeSerializeText: empty JSON value for: mColor");
    };
    field__cdg = jsonValue["ReferenceFrame"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->mReferenceFrame, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: mReferenceFrame");
    };
}
#endif // CISST_HAS_JSON


