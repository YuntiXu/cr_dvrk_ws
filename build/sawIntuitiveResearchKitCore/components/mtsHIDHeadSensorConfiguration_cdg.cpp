// file automatically generated, do not modify
// cisst version: 1.3.1
// source file: /home/ytxu/cr_dvrk_ws/src/cisst-saw/sawIntuitiveResearchKit/core/components/code/mtsHIDHeadSensorConfiguration.cdg

#include <sawIntuitiveResearchKit/mtsHIDHeadSensorConfiguration.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */
/* source line: 4 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(mtsHIDHeadSensorConfigurationProxy);

mtsHIDHeadSensorConfiguration::mtsHIDHeadSensorConfiguration(void):
    id_vendor()
    , id_product()
    , index_data()
{}

mtsHIDHeadSensorConfiguration::mtsHIDHeadSensorConfiguration(const mtsHIDHeadSensorConfiguration & other):
    id_vendor(other.id_vendor)
    , id_product(other.id_product)
    , index_data(other.index_data)
{}

mtsHIDHeadSensorConfiguration & mtsHIDHeadSensorConfiguration::operator = (const mtsHIDHeadSensorConfiguration & other)
{
    id_vendor = other.id_vendor;
    id_product = other.id_product;
    index_data = other.index_data;
    return *this;
}

mtsHIDHeadSensorConfiguration::~mtsHIDHeadSensorConfiguration(void){}


void mtsHIDHeadSensorConfiguration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->id_vendor);
    cmnSerializeRaw(outputStream__cdg, this->id_product);
    cmnSerializeSizeRaw(outputStream__cdg, this->index_data);
}


void mtsHIDHeadSensorConfiguration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->id_vendor);
    cmnDeSerializeRaw(inputStream__cdg, this->id_product);
    cmnDeSerializeSizeRaw(inputStream__cdg, this->index_data);
}


void mtsHIDHeadSensorConfiguration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsHIDHeadSensorConfiguration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsHIDHeadSensorConfiguration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsHIDHeadSensorConfiguration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 8 */
/* source line: 14 */
/* source line: 20 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsHIDHeadSensorConfiguration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsHIDHeadSensorConfiguration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsHIDHeadSensorConfiguration::Copy(const mtsHIDHeadSensorConfiguration & source__cdg) {
    cmnData<std::string >::Copy(this->id_vendor, source__cdg.id_vendor);
    cmnData<std::string >::Copy(this->id_product, source__cdg.id_product);
    cmnData<size_t >::Copy(this->index_data, source__cdg.index_data);
}
void mtsHIDHeadSensorConfiguration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->id_vendor, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->id_product, outputStream__cdg);
    cmnData<size_t >::SerializeBinary(this->index_data, outputStream__cdg);
}
void mtsHIDHeadSensorConfiguration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->id_vendor, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->id_product, inputStream__cdg, localFormat, remoteFormat);
    cmnDataDeSerializeBinary_size_t(this->index_data, inputStream__cdg, localFormat, remoteFormat);
}
void mtsHIDHeadSensorConfiguration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->id_vendor, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->id_product, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<size_t >::SerializeText(this->index_data, outputStream__cdg, delimiter__cdg);
}
std::string mtsHIDHeadSensorConfiguration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->id_vendor, delimiter__cdg, prefix__cdg + "id_vendor");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->id_product, delimiter__cdg, prefix__cdg + "id_product");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<size_t >::SerializeDescription(this->index_data, delimiter__cdg, prefix__cdg + "index_data");
    return description__cdg.str();
}
void mtsHIDHeadSensorConfiguration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsHIDHeadSensorConfiguration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->id_vendor, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsHIDHeadSensorConfiguration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->id_product, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsHIDHeadSensorConfiguration");
    }
    someData__cdg = true;
    cmnData<size_t >::DeSerializeText(this->index_data, inputStream__cdg, delimiter__cdg);
}
std::string mtsHIDHeadSensorConfiguration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsHIDHeadSensorConfiguration" << std::endl;
    description__cdg << "  id_vendor:" << cmnData<std::string >::HumanReadable(this->id_vendor);
    description__cdg << "  id_product:" << cmnData<std::string >::HumanReadable(this->id_product);
    description__cdg << "  index_data:" << cmnData<size_t >::HumanReadable(this->index_data);
    return description__cdg.str();
}
bool mtsHIDHeadSensorConfiguration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->id_vendor)
           && cmnData<std::string >::ScalarNumberIsFixed(this->id_product)
           && cmnData<size_t >::ScalarNumberIsFixed(this->index_data)
    ;
}
size_t mtsHIDHeadSensorConfiguration::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->id_vendor)
           + cmnData<std::string >::ScalarNumber(this->id_product)
           + cmnData<size_t >::ScalarNumber(this->index_data)
    ;
}
std::string mtsHIDHeadSensorConfiguration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->id_vendor);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->id_vendor, index_cdg - baseIndex__cdg, prefix__cdg + "id_vendor");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->id_product);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->id_product, index_cdg - baseIndex__cdg, prefix__cdg + "id_product");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<size_t >::ScalarNumber(this->index_data);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<size_t >::ScalarDescription(this->index_data, index_cdg - baseIndex__cdg, prefix__cdg + "index_data");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsHIDHeadSensorConfiguration index out of range"));
    return "";
}
double mtsHIDHeadSensorConfiguration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->id_vendor);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->id_vendor, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->id_product);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->id_product, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<size_t >::ScalarNumber(this->index_data);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<size_t >::Scalar(this->index_data, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsHIDHeadSensorConfiguration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsHIDHeadSensorConfiguration >::SerializeText(const mtsHIDHeadSensorConfiguration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsHIDHeadSensorConfiguration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->id_vendor, jsonValue["id_vendor"]);
    cmnDataJSON<std::string >::SerializeText(this->id_product, jsonValue["id_product"]);
    cmnDataJSON<size_t >::SerializeText(this->index_data, jsonValue["index_data"]);
}
template<>
void cmnDataJSON<mtsHIDHeadSensorConfiguration >::DeSerializeText(mtsHIDHeadSensorConfiguration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsHIDHeadSensorConfiguration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["id_vendor"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->id_vendor, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: id_vendor");
    };
    field__cdg = jsonValue["id_product"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->id_product, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: id_product");
    };
    field__cdg = jsonValue["index_data"];
    if (!field__cdg.empty()) {
        cmnDataJSON<size_t >::DeSerializeText(this->index_data, field__cdg);
    } else {
        cmnThrow("cmnDataJson<size_t>::DeSerializeText: empty JSON value for: index_data");
    };
}
#endif // CISST_HAS_JSON

