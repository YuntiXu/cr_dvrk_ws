// file automatically generated, do not modify
// cisst version: 1.3.1
// source file: /home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmImageFrame.cdg

#include <cisstParameterTypes/prmImageFrame.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 12 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmImageFrameProxy);

prmImageFrame::prmImageFrame(void):
    mtsGenericObject()
    , mWidth(0)
    , mHeight(0)
    , mChannels(3)
    , mData()
{}

prmImageFrame::prmImageFrame(const prmImageFrame & other):
    mtsGenericObject(other)
    , mWidth(other.mWidth)
    , mHeight(other.mHeight)
    , mChannels(other.mChannels)
    , mData(other.mData)
{}

prmImageFrame & prmImageFrame::operator = (const prmImageFrame & other)
{
    mtsGenericObject::operator = (other);
    mWidth = other.mWidth;
    mHeight = other.mHeight;
    mChannels = other.mChannels;
    mData = other.mData;
    return *this;
}

prmImageFrame::~prmImageFrame(void){}


void prmImageFrame::SerializeRaw(std::ostream & outputStream__cdg) const
{
    mtsGenericObject::SerializeRaw(outputStream__cdg);
    cmnSerializeSizeRaw(outputStream__cdg, this->mWidth);
    cmnSerializeSizeRaw(outputStream__cdg, this->mHeight);
    cmnSerializeSizeRaw(outputStream__cdg, this->mChannels);
    cmnSerializeRaw(outputStream__cdg, this->mData);
}


void prmImageFrame::DeSerializeRaw(std::istream & inputStream__cdg)
{
    mtsGenericObject::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeSizeRaw(inputStream__cdg, this->mWidth);
    cmnDeSerializeSizeRaw(inputStream__cdg, this->mHeight);
    cmnDeSerializeSizeRaw(inputStream__cdg, this->mChannels);
    cmnDeSerializeRaw(inputStream__cdg, this->mData);
}


void prmImageFrame::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void prmImageFrame::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<prmImageFrame >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<prmImageFrame >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 22 */

/* accessors is set to: all */
void prmImageFrame::GetWidth(size_t & placeHolder) const
{
    placeHolder = this->mWidth;
}

void prmImageFrame::SetWidth(const size_t & newValue)
{
    this->mWidth = newValue;
}


/* accessors is set to: all */
const size_t & prmImageFrame::Width(void) const
{
    return this->mWidth;
}

size_t & prmImageFrame::Width(void)
{
    return this->mWidth;
}

/* source line: 28 */

/* accessors is set to: all */
void prmImageFrame::GetHeight(size_t & placeHolder) const
{
    placeHolder = this->mHeight;
}

void prmImageFrame::SetHeight(const size_t & newValue)
{
    this->mHeight = newValue;
}


/* accessors is set to: all */
const size_t & prmImageFrame::Height(void) const
{
    return this->mHeight;
}

size_t & prmImageFrame::Height(void)
{
    return this->mHeight;
}

/* source line: 34 */

/* accessors is set to: all */
void prmImageFrame::GetChannels(size_t & placeHolder) const
{
    placeHolder = this->mChannels;
}

void prmImageFrame::SetChannels(const size_t & newValue)
{
    this->mChannels = newValue;
}


/* accessors is set to: all */
const size_t & prmImageFrame::Channels(void) const
{
    return this->mChannels;
}

size_t & prmImageFrame::Channels(void)
{
    return this->mChannels;
}

/* source line: 40 */

/* accessors is set to: all */
void prmImageFrame::GetData(vctDynamicVector<char> & placeHolder) const
{
    placeHolder = this->mData;
}

void prmImageFrame::SetData(const vctDynamicVector<char> & newValue)
{
    this->mData = newValue;
}


/* accessors is set to: all */
const vctDynamicVector<char> & prmImageFrame::Data(void) const
{
    return this->mData;
}

vctDynamicVector<char> & prmImageFrame::Data(void)
{
    return this->mData;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmImageFrame & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmImageFrame & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmImageFrame::Copy(const prmImageFrame & source__cdg) {
    cmnData<mtsGenericObject >::Copy(*this, source__cdg);
    cmnData<size_t >::Copy(this->mWidth, source__cdg.mWidth);
    cmnData<size_t >::Copy(this->mHeight, source__cdg.mHeight);
    cmnData<size_t >::Copy(this->mChannels, source__cdg.mChannels);
    cmnData<vctDynamicVector<char> >::Copy(this->mData, source__cdg.mData);
}
void prmImageFrame::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::SerializeBinary(*this, outputStream__cdg);
    cmnData<size_t >::SerializeBinary(this->mWidth, outputStream__cdg);
    cmnData<size_t >::SerializeBinary(this->mHeight, outputStream__cdg);
    cmnData<size_t >::SerializeBinary(this->mChannels, outputStream__cdg);
    cmnData<vctDynamicVector<char> >::SerializeBinary(this->mData, outputStream__cdg);
}
void prmImageFrame::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnDataDeSerializeBinary_size_t(this->mWidth, inputStream__cdg, localFormat, remoteFormat);
    cmnDataDeSerializeBinary_size_t(this->mHeight, inputStream__cdg, localFormat, remoteFormat);
    cmnDataDeSerializeBinary_size_t(this->mChannels, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<char> >::DeSerializeBinary(this->mData, inputStream__cdg, localFormat, remoteFormat);
}
void prmImageFrame::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
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
    cmnData<size_t >::SerializeText(this->mChannels, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<char> >::SerializeText(this->mData, outputStream__cdg, delimiter__cdg);
}
std::string prmImageFrame::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
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
    description__cdg << cmnData<size_t >::SerializeDescription(this->mChannels, delimiter__cdg, prefix__cdg + "Channels");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDynamicVector<char> >::SerializeDescription(this->mData, delimiter__cdg, prefix__cdg + "Data");
    return description__cdg.str();
}
void prmImageFrame::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmImageFrame");
    }
    someData__cdg = true;
    cmnData<mtsGenericObject >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmImageFrame");
    }
    someData__cdg = true;
    cmnData<size_t >::DeSerializeText(this->mWidth, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmImageFrame");
    }
    someData__cdg = true;
    cmnData<size_t >::DeSerializeText(this->mHeight, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmImageFrame");
    }
    someData__cdg = true;
    cmnData<size_t >::DeSerializeText(this->mChannels, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmImageFrame");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<char> >::DeSerializeText(this->mData, inputStream__cdg, delimiter__cdg);
}
std::string prmImageFrame::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "prmImageFrame" << std::endl;
    description__cdg << cmnData< mtsGenericObject >::HumanReadable(*this) << std::endl;
    description__cdg << "  Width:" << cmnData<size_t >::HumanReadable(this->mWidth);
    description__cdg << "  Height:" << cmnData<size_t >::HumanReadable(this->mHeight);
    description__cdg << "  Channels:" << cmnData<size_t >::HumanReadable(this->mChannels);
    description__cdg << "  Data:" << cmnData<vctDynamicVector<char> >::HumanReadable(this->mData);
    return description__cdg.str();
}
bool prmImageFrame::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsGenericObject >::ScalarNumberIsFixed(*this)
           && cmnData<size_t >::ScalarNumberIsFixed(this->mWidth)
           && cmnData<size_t >::ScalarNumberIsFixed(this->mHeight)
           && cmnData<size_t >::ScalarNumberIsFixed(this->mChannels)
           && cmnData<vctDynamicVector<char> >::ScalarNumberIsFixed(this->mData)
    ;
}
size_t prmImageFrame::ScalarNumber(void) const {
    return 0
           + cmnData< mtsGenericObject >::ScalarNumber(*this)
           + cmnData<size_t >::ScalarNumber(this->mWidth)
           + cmnData<size_t >::ScalarNumber(this->mHeight)
           + cmnData<size_t >::ScalarNumber(this->mChannels)
           + cmnData<vctDynamicVector<char> >::ScalarNumber(this->mData)
    ;
}
std::string prmImageFrame::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
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
    currentMaxIndex__cdg += cmnData<size_t >::ScalarNumber(this->mChannels);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<size_t >::ScalarDescription(this->mChannels, index_cdg - baseIndex__cdg, prefix__cdg + "Channels");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<char> >::ScalarNumber(this->mData);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<char> >::ScalarDescription(this->mData, index_cdg - baseIndex__cdg, prefix__cdg + "Data");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmImageFrame index out of range"));
    return "";
}
double prmImageFrame::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
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
    currentMaxIndex__cdg += cmnData<size_t >::ScalarNumber(this->mChannels);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<size_t >::Scalar(this->mChannels, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<char> >::ScalarNumber(this->mData);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<char> >::Scalar(this->mData, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: prmImageFrame index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmImageFrame >::SerializeText(const prmImageFrame & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmImageFrame::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsGenericObject >::SerializeText(*(dynamic_cast<const mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<size_t >::SerializeText(this->mWidth, jsonValue["Width"]);
    cmnDataJSON<size_t >::SerializeText(this->mHeight, jsonValue["Height"]);
    cmnDataJSON<size_t >::SerializeText(this->mChannels, jsonValue["Channels"]);
    cmnDataJSON<vctDynamicVector<char> >::SerializeText(this->mData, jsonValue["Data"]);
}
template<>
void cmnDataJSON<prmImageFrame >::DeSerializeText(prmImageFrame & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmImageFrame::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
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
    field__cdg = jsonValue["Channels"];
    if (!field__cdg.empty()) {
        cmnDataJSON<size_t >::DeSerializeText(this->mChannels, field__cdg);
    };
    field__cdg = jsonValue["Data"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<char> >::DeSerializeText(this->mData, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicVector<char>>::DeSerializeText: empty JSON value for: mData");
    };
}
#endif // CISST_HAS_JSON


