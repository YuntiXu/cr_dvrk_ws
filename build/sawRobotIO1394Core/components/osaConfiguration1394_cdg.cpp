// file automatically generated, do not modify
// cisst version: 1.3.1
// source file: /home/ytxu/cr_dvrk_ws/src/cisst-saw/sawRobotIO1394/core/components/code/osaConfiguration1394.cdg

#include <sawRobotIO1394/osaConfiguration1394.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 60 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaLinearFunctionProxy);

sawRobotIO1394::osaLinearFunction::osaLinearFunction(void):
    Scale(1.0)
    , Offset(0.0)
    , Unit()
{}

sawRobotIO1394::osaLinearFunction::osaLinearFunction(const osaLinearFunction & other):
    Scale(other.Scale)
    , Offset(other.Offset)
    , Unit(other.Unit)
{}

sawRobotIO1394::osaLinearFunction & sawRobotIO1394::osaLinearFunction::operator = (const osaLinearFunction & other)
{
    Scale = other.Scale;
    Offset = other.Offset;
    Unit = other.Unit;
    return *this;
}

sawRobotIO1394::osaLinearFunction::~osaLinearFunction(void){}


void sawRobotIO1394::osaLinearFunction::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->Scale);
    cmnSerializeRaw(outputStream__cdg, this->Offset);
    cmnSerializeRaw(outputStream__cdg, this->Unit);
}


void sawRobotIO1394::osaLinearFunction::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->Scale);
    cmnDeSerializeRaw(inputStream__cdg, this->Offset);
    cmnDeSerializeRaw(inputStream__cdg, this->Unit);
}


void sawRobotIO1394::osaLinearFunction::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaLinearFunction::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaLinearFunction >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaLinearFunction >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 64 */
/* source line: 70 */
/* source line: 76 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaLinearFunction & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaLinearFunction & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaLinearFunction::Copy(const sawRobotIO1394::osaLinearFunction & source__cdg) {
    cmnData<double >::Copy(this->Scale, source__cdg.Scale);
    cmnData<double >::Copy(this->Offset, source__cdg.Offset);
    cmnData<std::string >::Copy(this->Unit, source__cdg.Unit);
}
void sawRobotIO1394::osaLinearFunction::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<double >::SerializeBinary(this->Scale, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->Offset, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->Unit, outputStream__cdg);
}
void sawRobotIO1394::osaLinearFunction::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<double >::DeSerializeBinary(this->Scale, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->Offset, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->Unit, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaLinearFunction::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->Scale, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->Offset, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->Unit, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaLinearFunction::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->Scale, delimiter__cdg, prefix__cdg + "Scale");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->Offset, delimiter__cdg, prefix__cdg + "Offset");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->Unit, delimiter__cdg, prefix__cdg + "Unit");
    return description__cdg.str();
}
void sawRobotIO1394::osaLinearFunction::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaLinearFunction");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->Scale, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaLinearFunction");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->Offset, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaLinearFunction");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->Unit, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaLinearFunction::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaLinearFunction" << std::endl;
    description__cdg << "  Scale:" << cmnData<double >::HumanReadable(this->Scale);
    description__cdg << "  Offset:" << cmnData<double >::HumanReadable(this->Offset);
    description__cdg << "  Unit:" << cmnData<std::string >::HumanReadable(this->Unit);
    return description__cdg.str();
}
bool sawRobotIO1394::osaLinearFunction::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<double >::ScalarNumberIsFixed(this->Scale)
           && cmnData<double >::ScalarNumberIsFixed(this->Offset)
           && cmnData<std::string >::ScalarNumberIsFixed(this->Unit)
    ;
}
size_t sawRobotIO1394::osaLinearFunction::ScalarNumber(void) const {
    return 0
           + cmnData<double >::ScalarNumber(this->Scale)
           + cmnData<double >::ScalarNumber(this->Offset)
           + cmnData<std::string >::ScalarNumber(this->Unit)
    ;
}
std::string sawRobotIO1394::osaLinearFunction::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->Scale);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->Scale, index_cdg - baseIndex__cdg, prefix__cdg + "Scale");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->Offset);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->Offset, index_cdg - baseIndex__cdg, prefix__cdg + "Offset");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Unit);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->Unit, index_cdg - baseIndex__cdg, prefix__cdg + "Unit");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaLinearFunction index out of range"));
    return "";
}
double sawRobotIO1394::osaLinearFunction::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->Scale);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->Scale, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->Offset);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->Offset, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Unit);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->Unit, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaLinearFunction index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaLinearFunction >::SerializeText(const sawRobotIO1394::osaLinearFunction & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaLinearFunction::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<double >::SerializeText(this->Scale, jsonValue["Scale"]);
    cmnDataJSON<double >::SerializeText(this->Offset, jsonValue["Offset"]);
    cmnDataJSON<std::string >::SerializeText(this->Unit, jsonValue["Unit"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaLinearFunction >::DeSerializeText(sawRobotIO1394::osaLinearFunction & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaLinearFunction::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["Scale"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->Scale, field__cdg);
    };
    field__cdg = jsonValue["Offset"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->Offset, field__cdg);
    };
    field__cdg = jsonValue["Unit"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->Unit, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: Unit");
    };
}
#endif // CISST_HAS_JSON

/* source line: 83 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaLimitsProxy);

sawRobotIO1394::osaLimits::osaLimits(void):
    Lower()
    , Upper()
    , Unit()
{}

sawRobotIO1394::osaLimits::osaLimits(const osaLimits & other):
    Lower(other.Lower)
    , Upper(other.Upper)
    , Unit(other.Unit)
{}

sawRobotIO1394::osaLimits & sawRobotIO1394::osaLimits::operator = (const osaLimits & other)
{
    Lower = other.Lower;
    Upper = other.Upper;
    Unit = other.Unit;
    return *this;
}

sawRobotIO1394::osaLimits::~osaLimits(void){}


void sawRobotIO1394::osaLimits::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->Lower);
    cmnSerializeRaw(outputStream__cdg, this->Upper);
    cmnSerializeRaw(outputStream__cdg, this->Unit);
}


void sawRobotIO1394::osaLimits::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->Lower);
    cmnDeSerializeRaw(inputStream__cdg, this->Upper);
    cmnDeSerializeRaw(inputStream__cdg, this->Unit);
}


void sawRobotIO1394::osaLimits::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaLimits::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaLimits >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaLimits >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 87 */
/* source line: 92 */
/* source line: 97 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaLimits & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaLimits & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaLimits::Copy(const sawRobotIO1394::osaLimits & source__cdg) {
    cmnData<double >::Copy(this->Lower, source__cdg.Lower);
    cmnData<double >::Copy(this->Upper, source__cdg.Upper);
    cmnData<std::string >::Copy(this->Unit, source__cdg.Unit);
}
void sawRobotIO1394::osaLimits::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<double >::SerializeBinary(this->Lower, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->Upper, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->Unit, outputStream__cdg);
}
void sawRobotIO1394::osaLimits::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<double >::DeSerializeBinary(this->Lower, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->Upper, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->Unit, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaLimits::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->Lower, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->Upper, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->Unit, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaLimits::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->Lower, delimiter__cdg, prefix__cdg + "Lower");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->Upper, delimiter__cdg, prefix__cdg + "Upper");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->Unit, delimiter__cdg, prefix__cdg + "Unit");
    return description__cdg.str();
}
void sawRobotIO1394::osaLimits::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaLimits");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->Lower, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaLimits");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->Upper, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaLimits");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->Unit, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaLimits::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaLimits" << std::endl;
    description__cdg << "  Lower:" << cmnData<double >::HumanReadable(this->Lower);
    description__cdg << "  Upper:" << cmnData<double >::HumanReadable(this->Upper);
    description__cdg << "  Unit:" << cmnData<std::string >::HumanReadable(this->Unit);
    return description__cdg.str();
}
bool sawRobotIO1394::osaLimits::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<double >::ScalarNumberIsFixed(this->Lower)
           && cmnData<double >::ScalarNumberIsFixed(this->Upper)
           && cmnData<std::string >::ScalarNumberIsFixed(this->Unit)
    ;
}
size_t sawRobotIO1394::osaLimits::ScalarNumber(void) const {
    return 0
           + cmnData<double >::ScalarNumber(this->Lower)
           + cmnData<double >::ScalarNumber(this->Upper)
           + cmnData<std::string >::ScalarNumber(this->Unit)
    ;
}
std::string sawRobotIO1394::osaLimits::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->Lower);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->Lower, index_cdg - baseIndex__cdg, prefix__cdg + "Lower");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->Upper);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->Upper, index_cdg - baseIndex__cdg, prefix__cdg + "Upper");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Unit);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->Unit, index_cdg - baseIndex__cdg, prefix__cdg + "Unit");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaLimits index out of range"));
    return "";
}
double sawRobotIO1394::osaLimits::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->Lower);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->Lower, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->Upper);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->Upper, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Unit);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->Unit, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaLimits index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaLimits >::SerializeText(const sawRobotIO1394::osaLimits & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaLimits::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<double >::SerializeText(this->Lower, jsonValue["Lower"]);
    cmnDataJSON<double >::SerializeText(this->Upper, jsonValue["Upper"]);
    cmnDataJSON<std::string >::SerializeText(this->Unit, jsonValue["Unit"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaLimits >::DeSerializeText(sawRobotIO1394::osaLimits & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaLimits::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["Lower"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->Lower, field__cdg);
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: Lower");
    };
    field__cdg = jsonValue["Upper"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->Upper, field__cdg);
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: Upper");
    };
    field__cdg = jsonValue["Unit"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->Unit, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: Unit");
    };
}
#endif // CISST_HAS_JSON

/* source line: 104 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaDrive1394ConfigurationProxy);

sawRobotIO1394::osaDrive1394Configuration::osaDrive1394Configuration(void):
    EffortToCurrent()
    , CurrentToBits()
    , BitsToCurrent()
    , CurrentCommandLimit(0.0)
{}

sawRobotIO1394::osaDrive1394Configuration::osaDrive1394Configuration(const osaDrive1394Configuration & other):
    EffortToCurrent(other.EffortToCurrent)
    , CurrentToBits(other.CurrentToBits)
    , BitsToCurrent(other.BitsToCurrent)
    , CurrentCommandLimit(other.CurrentCommandLimit)
{}

sawRobotIO1394::osaDrive1394Configuration & sawRobotIO1394::osaDrive1394Configuration::operator = (const osaDrive1394Configuration & other)
{
    EffortToCurrent = other.EffortToCurrent;
    CurrentToBits = other.CurrentToBits;
    BitsToCurrent = other.BitsToCurrent;
    CurrentCommandLimit = other.CurrentCommandLimit;
    return *this;
}

sawRobotIO1394::osaDrive1394Configuration::~osaDrive1394Configuration(void){}


void sawRobotIO1394::osaDrive1394Configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->EffortToCurrent);
    cmnSerializeRaw(outputStream__cdg, this->CurrentToBits);
    cmnSerializeRaw(outputStream__cdg, this->BitsToCurrent);
    cmnSerializeRaw(outputStream__cdg, this->CurrentCommandLimit);
}


void sawRobotIO1394::osaDrive1394Configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->EffortToCurrent);
    cmnDeSerializeRaw(inputStream__cdg, this->CurrentToBits);
    cmnDeSerializeRaw(inputStream__cdg, this->BitsToCurrent);
    cmnDeSerializeRaw(inputStream__cdg, this->CurrentCommandLimit);
}


void sawRobotIO1394::osaDrive1394Configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaDrive1394Configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaDrive1394Configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaDrive1394Configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 108 */
/* source line: 113 */
/* source line: 118 */
/* source line: 123 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaDrive1394Configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaDrive1394Configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaDrive1394Configuration::Copy(const sawRobotIO1394::osaDrive1394Configuration & source__cdg) {
    cmnData<osaLinearFunction >::Copy(this->EffortToCurrent, source__cdg.EffortToCurrent);
    cmnData<osaLinearFunction >::Copy(this->CurrentToBits, source__cdg.CurrentToBits);
    cmnData<osaLinearFunction >::Copy(this->BitsToCurrent, source__cdg.BitsToCurrent);
    cmnData<double >::Copy(this->CurrentCommandLimit, source__cdg.CurrentCommandLimit);
}
void sawRobotIO1394::osaDrive1394Configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<osaLinearFunction >::SerializeBinary(this->EffortToCurrent, outputStream__cdg);
    cmnData<osaLinearFunction >::SerializeBinary(this->CurrentToBits, outputStream__cdg);
    cmnData<osaLinearFunction >::SerializeBinary(this->BitsToCurrent, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->CurrentCommandLimit, outputStream__cdg);
}
void sawRobotIO1394::osaDrive1394Configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<osaLinearFunction >::DeSerializeBinary(this->EffortToCurrent, inputStream__cdg, localFormat, remoteFormat);
    cmnData<osaLinearFunction >::DeSerializeBinary(this->CurrentToBits, inputStream__cdg, localFormat, remoteFormat);
    cmnData<osaLinearFunction >::DeSerializeBinary(this->BitsToCurrent, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->CurrentCommandLimit, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaDrive1394Configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::SerializeText(this->EffortToCurrent, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::SerializeText(this->CurrentToBits, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::SerializeText(this->BitsToCurrent, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->CurrentCommandLimit, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaDrive1394Configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaLinearFunction >::SerializeDescription(this->EffortToCurrent, delimiter__cdg, prefix__cdg + "EffortToCurrent");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaLinearFunction >::SerializeDescription(this->CurrentToBits, delimiter__cdg, prefix__cdg + "CurrentToBits");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaLinearFunction >::SerializeDescription(this->BitsToCurrent, delimiter__cdg, prefix__cdg + "BitsToCurrent");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->CurrentCommandLimit, delimiter__cdg, prefix__cdg + "CurrentCommandLimit");
    return description__cdg.str();
}
void sawRobotIO1394::osaDrive1394Configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDrive1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::DeSerializeText(this->EffortToCurrent, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDrive1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::DeSerializeText(this->CurrentToBits, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDrive1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::DeSerializeText(this->BitsToCurrent, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDrive1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->CurrentCommandLimit, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaDrive1394Configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaDrive1394Configuration" << std::endl;
    description__cdg << "  EffortToCurrent:" << cmnData<osaLinearFunction >::HumanReadable(this->EffortToCurrent);
    description__cdg << "  CurrentToBits:" << cmnData<osaLinearFunction >::HumanReadable(this->CurrentToBits);
    description__cdg << "  BitsToCurrent:" << cmnData<osaLinearFunction >::HumanReadable(this->BitsToCurrent);
    description__cdg << "  CurrentCommandLimit:" << cmnData<double >::HumanReadable(this->CurrentCommandLimit);
    return description__cdg.str();
}
bool sawRobotIO1394::osaDrive1394Configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<osaLinearFunction >::ScalarNumberIsFixed(this->EffortToCurrent)
           && cmnData<osaLinearFunction >::ScalarNumberIsFixed(this->CurrentToBits)
           && cmnData<osaLinearFunction >::ScalarNumberIsFixed(this->BitsToCurrent)
           && cmnData<double >::ScalarNumberIsFixed(this->CurrentCommandLimit)
    ;
}
size_t sawRobotIO1394::osaDrive1394Configuration::ScalarNumber(void) const {
    return 0
           + cmnData<osaLinearFunction >::ScalarNumber(this->EffortToCurrent)
           + cmnData<osaLinearFunction >::ScalarNumber(this->CurrentToBits)
           + cmnData<osaLinearFunction >::ScalarNumber(this->BitsToCurrent)
           + cmnData<double >::ScalarNumber(this->CurrentCommandLimit)
    ;
}
std::string sawRobotIO1394::osaDrive1394Configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->EffortToCurrent);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::ScalarDescription(this->EffortToCurrent, index_cdg - baseIndex__cdg, prefix__cdg + "EffortToCurrent");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->CurrentToBits);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::ScalarDescription(this->CurrentToBits, index_cdg - baseIndex__cdg, prefix__cdg + "CurrentToBits");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->BitsToCurrent);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::ScalarDescription(this->BitsToCurrent, index_cdg - baseIndex__cdg, prefix__cdg + "BitsToCurrent");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->CurrentCommandLimit);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->CurrentCommandLimit, index_cdg - baseIndex__cdg, prefix__cdg + "CurrentCommandLimit");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaDrive1394Configuration index out of range"));
    return "";
}
double sawRobotIO1394::osaDrive1394Configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->EffortToCurrent);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::Scalar(this->EffortToCurrent, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->CurrentToBits);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::Scalar(this->CurrentToBits, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->BitsToCurrent);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::Scalar(this->BitsToCurrent, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->CurrentCommandLimit);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->CurrentCommandLimit, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaDrive1394Configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaDrive1394Configuration >::SerializeText(const sawRobotIO1394::osaDrive1394Configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaDrive1394Configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<osaLinearFunction >::SerializeText(this->EffortToCurrent, jsonValue["EffortToCurrent"]);
    cmnDataJSON<osaLinearFunction >::SerializeText(this->CurrentToBits, jsonValue["CurrentToBits"]);
    cmnDataJSON<osaLinearFunction >::SerializeText(this->BitsToCurrent, jsonValue["BitsToCurrent"]);
    cmnDataJSON<double >::SerializeText(this->CurrentCommandLimit, jsonValue["CurrentCommandLimit"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaDrive1394Configuration >::DeSerializeText(sawRobotIO1394::osaDrive1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaDrive1394Configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["EffortToCurrent"];
    if (!field__cdg.empty()) {
        cmnDataJSON<osaLinearFunction >::DeSerializeText(this->EffortToCurrent, field__cdg);
    } else {
        cmnThrow("cmnDataJson<osaLinearFunction>::DeSerializeText: empty JSON value for: EffortToCurrent");
    };
    field__cdg = jsonValue["CurrentToBits"];
    if (!field__cdg.empty()) {
        cmnDataJSON<osaLinearFunction >::DeSerializeText(this->CurrentToBits, field__cdg);
    } else {
        cmnThrow("cmnDataJson<osaLinearFunction>::DeSerializeText: empty JSON value for: CurrentToBits");
    };
    field__cdg = jsonValue["BitsToCurrent"];
    if (!field__cdg.empty()) {
        cmnDataJSON<osaLinearFunction >::DeSerializeText(this->BitsToCurrent, field__cdg);
    } else {
        cmnThrow("cmnDataJson<osaLinearFunction>::DeSerializeText: empty JSON value for: BitsToCurrent");
    };
    field__cdg = jsonValue["CurrentCommandLimit"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->CurrentCommandLimit, field__cdg);
    };
}
#endif // CISST_HAS_JSON

/* source line: 131 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaEncoder1394ConfigurationProxy);

sawRobotIO1394::osaEncoder1394Configuration::osaEncoder1394Configuration(void):
    BitsToPosition()
    , PositionLimitsSoft()
    , VelocitySource()
{}

sawRobotIO1394::osaEncoder1394Configuration::osaEncoder1394Configuration(const osaEncoder1394Configuration & other):
    BitsToPosition(other.BitsToPosition)
    , PositionLimitsSoft(other.PositionLimitsSoft)
    , VelocitySource(other.VelocitySource)
{}

sawRobotIO1394::osaEncoder1394Configuration & sawRobotIO1394::osaEncoder1394Configuration::operator = (const osaEncoder1394Configuration & other)
{
    BitsToPosition = other.BitsToPosition;
    PositionLimitsSoft = other.PositionLimitsSoft;
    VelocitySource = other.VelocitySource;
    return *this;
}

sawRobotIO1394::osaEncoder1394Configuration::~osaEncoder1394Configuration(void){}


void sawRobotIO1394::osaEncoder1394Configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->BitsToPosition);
    cmnSerializeRaw(outputStream__cdg, this->PositionLimitsSoft);
    cmnSerializeRaw(outputStream__cdg, this->VelocitySource);
}


void sawRobotIO1394::osaEncoder1394Configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->BitsToPosition);
    cmnDeSerializeRaw(inputStream__cdg, this->PositionLimitsSoft);
    cmnDeSerializeRaw(inputStream__cdg, this->VelocitySource);
}


void sawRobotIO1394::osaEncoder1394Configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaEncoder1394Configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaEncoder1394Configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaEncoder1394Configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 146 */
/* source line: 151 */
/* source line: 156 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaEncoder1394Configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaEncoder1394Configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaEncoder1394Configuration::Copy(const sawRobotIO1394::osaEncoder1394Configuration & source__cdg) {
    cmnData<osaLinearFunction >::Copy(this->BitsToPosition, source__cdg.BitsToPosition);
    cmnData<osaLimits >::Copy(this->PositionLimitsSoft, source__cdg.PositionLimitsSoft);
    cmnData<osaEncoder1394Configuration::VelocitySourceType >::Copy(this->VelocitySource, source__cdg.VelocitySource);
}
void sawRobotIO1394::osaEncoder1394Configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<osaLinearFunction >::SerializeBinary(this->BitsToPosition, outputStream__cdg);
    cmnData<osaLimits >::SerializeBinary(this->PositionLimitsSoft, outputStream__cdg);
    cmnData<osaEncoder1394Configuration::VelocitySourceType >::SerializeBinary(this->VelocitySource, outputStream__cdg);
}
void sawRobotIO1394::osaEncoder1394Configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<osaLinearFunction >::DeSerializeBinary(this->BitsToPosition, inputStream__cdg, localFormat, remoteFormat);
    cmnData<osaLimits >::DeSerializeBinary(this->PositionLimitsSoft, inputStream__cdg, localFormat, remoteFormat);
    cmnData<osaEncoder1394Configuration::VelocitySourceType >::DeSerializeBinary(this->VelocitySource, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaEncoder1394Configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::SerializeText(this->BitsToPosition, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaLimits >::SerializeText(this->PositionLimitsSoft, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaEncoder1394Configuration::VelocitySourceType >::SerializeText(this->VelocitySource, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaEncoder1394Configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaLinearFunction >::SerializeDescription(this->BitsToPosition, delimiter__cdg, prefix__cdg + "BitsToPosition");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaLimits >::SerializeDescription(this->PositionLimitsSoft, delimiter__cdg, prefix__cdg + "PositionLimitsSoft");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaEncoder1394Configuration::VelocitySourceType >::SerializeDescription(this->VelocitySource, delimiter__cdg, prefix__cdg + "VelocitySource");
    return description__cdg.str();
}
void sawRobotIO1394::osaEncoder1394Configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaEncoder1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::DeSerializeText(this->BitsToPosition, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaEncoder1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaLimits >::DeSerializeText(this->PositionLimitsSoft, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaEncoder1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaEncoder1394Configuration::VelocitySourceType >::DeSerializeText(this->VelocitySource, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaEncoder1394Configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaEncoder1394Configuration" << std::endl;
    description__cdg << "  BitsToPosition:" << cmnData<osaLinearFunction >::HumanReadable(this->BitsToPosition);
    description__cdg << "  PositionLimitsSoft:" << cmnData<osaLimits >::HumanReadable(this->PositionLimitsSoft);
    description__cdg << "  VelocitySource:" << cmnData<osaEncoder1394Configuration::VelocitySourceType >::HumanReadable(this->VelocitySource);
    return description__cdg.str();
}
bool sawRobotIO1394::osaEncoder1394Configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<osaLinearFunction >::ScalarNumberIsFixed(this->BitsToPosition)
           && cmnData<osaLimits >::ScalarNumberIsFixed(this->PositionLimitsSoft)
           && cmnData<osaEncoder1394Configuration::VelocitySourceType >::ScalarNumberIsFixed(this->VelocitySource)
    ;
}
size_t sawRobotIO1394::osaEncoder1394Configuration::ScalarNumber(void) const {
    return 0
           + cmnData<osaLinearFunction >::ScalarNumber(this->BitsToPosition)
           + cmnData<osaLimits >::ScalarNumber(this->PositionLimitsSoft)
           + cmnData<osaEncoder1394Configuration::VelocitySourceType >::ScalarNumber(this->VelocitySource)
    ;
}
std::string sawRobotIO1394::osaEncoder1394Configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->BitsToPosition);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::ScalarDescription(this->BitsToPosition, index_cdg - baseIndex__cdg, prefix__cdg + "BitsToPosition");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaLimits >::ScalarNumber(this->PositionLimitsSoft);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLimits >::ScalarDescription(this->PositionLimitsSoft, index_cdg - baseIndex__cdg, prefix__cdg + "PositionLimitsSoft");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaEncoder1394Configuration::VelocitySourceType >::ScalarNumber(this->VelocitySource);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaEncoder1394Configuration::VelocitySourceType >::ScalarDescription(this->VelocitySource, index_cdg - baseIndex__cdg, prefix__cdg + "VelocitySource");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaEncoder1394Configuration index out of range"));
    return "";
}
double sawRobotIO1394::osaEncoder1394Configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->BitsToPosition);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::Scalar(this->BitsToPosition, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaLimits >::ScalarNumber(this->PositionLimitsSoft);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLimits >::Scalar(this->PositionLimitsSoft, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaEncoder1394Configuration::VelocitySourceType >::ScalarNumber(this->VelocitySource);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaEncoder1394Configuration::VelocitySourceType >::Scalar(this->VelocitySource, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaEncoder1394Configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaEncoder1394Configuration >::SerializeText(const sawRobotIO1394::osaEncoder1394Configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaEncoder1394Configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<osaLinearFunction >::SerializeText(this->BitsToPosition, jsonValue["BitsToPosition"]);
    cmnDataJSON<osaLimits >::SerializeText(this->PositionLimitsSoft, jsonValue["PositionLimitsSoft"]);
    cmnDataJSON<osaEncoder1394Configuration::VelocitySourceType >::SerializeText(this->VelocitySource, jsonValue["VelocitySource"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaEncoder1394Configuration >::DeSerializeText(sawRobotIO1394::osaEncoder1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaEncoder1394Configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["BitsToPosition"];
    if (!field__cdg.empty()) {
        cmnDataJSON<osaLinearFunction >::DeSerializeText(this->BitsToPosition, field__cdg);
    } else {
        cmnThrow("cmnDataJson<osaLinearFunction>::DeSerializeText: empty JSON value for: BitsToPosition");
    };
    field__cdg = jsonValue["PositionLimitsSoft"];
    if (!field__cdg.empty()) {
        cmnDataJSON<osaLimits >::DeSerializeText(this->PositionLimitsSoft, field__cdg);
    } else {
        cmnThrow("cmnDataJson<osaLimits>::DeSerializeText: empty JSON value for: PositionLimitsSoft");
    };
    field__cdg = jsonValue["VelocitySource"];
    if (!field__cdg.empty()) {
        cmnDataJSON<osaEncoder1394Configuration::VelocitySourceType >::DeSerializeText(this->VelocitySource, field__cdg);
    } else {
        cmnThrow("cmnDataJson<osaEncoder1394Configuration::VelocitySourceType>::DeSerializeText: empty JSON value for: VelocitySource");
    };
}
#endif // CISST_HAS_JSON
std::string cmnDataHumanReadable_sawRobotIO1394__osaEncoder1394Configuration_VelocitySourceType(const sawRobotIO1394::osaEncoder1394Configuration::VelocitySourceType & data) {
    switch (data) {
        case sawRobotIO1394::osaEncoder1394Configuration::FIRMWARE:
            return "firmware";
            break;
        case sawRobotIO1394::osaEncoder1394Configuration::SOFTWARE:
            return "software";
            break;
        default: return "undefined enum sawRobotIO1394::osaEncoder1394Configuration::VelocitySourceType";
            break;
    }
}

std::string sawRobotIO1394::osaEncoder1394Configuration::VelocitySourceTypeToString(const sawRobotIO1394::osaEncoder1394Configuration::VelocitySourceType & data) CISST_THROW(std::runtime_error) {
    switch (data) {
        case sawRobotIO1394::osaEncoder1394Configuration::FIRMWARE:
            return "FIRMWARE";
            break;
        case sawRobotIO1394::osaEncoder1394Configuration::SOFTWARE:
            return "SOFTWARE";
            break;
        default:
            break;
    }
    cmnThrow("sawRobotIO1394::osaEncoder1394Configuration::VelocitySourceTypeToString called with invalid enum");
    return "";
}

sawRobotIO1394::osaEncoder1394Configuration::VelocitySourceType sawRobotIO1394::osaEncoder1394Configuration::VelocitySourceTypeFromString(const std::string & value) CISST_THROW(std::runtime_error) {
    if (value == "FIRMWARE") {
        return sawRobotIO1394::osaEncoder1394Configuration::FIRMWARE;
    };
    if (value == "SOFTWARE") {
        return sawRobotIO1394::osaEncoder1394Configuration::SOFTWARE;
    };
    std::string message = "sawRobotIO1394::osaEncoder1394Configuration::VelocitySourceTypeFromString can't find matching enum for " + value + ".  Options are: ";
    std::vector<std::string> options = VelocitySourceTypeVectorString();
    for (std::vector<std::string>::const_iterator i = options.begin(); i != options.end(); ++i) message += *i + " ";
    cmnThrow(message);
    return static_cast<sawRobotIO1394::osaEncoder1394Configuration::VelocitySourceType >(0);
}

const std::vector<int> & sawRobotIO1394::osaEncoder1394Configuration::VelocitySourceTypeVectorInt(void) {
    static std::vector<int> vectorInt;
    if (vectorInt.empty()) {
        vectorInt.push_back(static_cast<int>(FIRMWARE));
        vectorInt.push_back(static_cast<int>(SOFTWARE));
    }
    return vectorInt;
}

const std::vector<std::string> & sawRobotIO1394::osaEncoder1394Configuration::VelocitySourceTypeVectorString(void) {
    static std::vector<std::string> vectorString;
    if (vectorString.empty()) {
        vectorString.push_back("FIRMWARE");
        vectorString.push_back("SOFTWARE");
    }
    return vectorString;
}

#if CISST_HAS_JSON
  CMN_IMPLEMENT_DATA_FUNCTIONS_JSON_FOR_ENUM_AS_STRING(sawRobotIO1394::osaEncoder1394Configuration::VelocitySourceType, sawRobotIO1394::osaEncoder1394Configuration::VelocitySourceTypeToString, sawRobotIO1394::osaEncoder1394Configuration::VelocitySourceTypeFromString);
#endif // CISST_HAS_JSON

/* source line: 163 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaPot1394ConfigurationProxy);

sawRobotIO1394::osaPot1394Configuration::osaPot1394Configuration(void):
    Type()
    , BitsToVoltage()
    , SensorToPosition()
    , LookupTable()
{}

sawRobotIO1394::osaPot1394Configuration::osaPot1394Configuration(const osaPot1394Configuration & other):
    Type(other.Type)
    , BitsToVoltage(other.BitsToVoltage)
    , SensorToPosition(other.SensorToPosition)
    , LookupTable(other.LookupTable)
{}

sawRobotIO1394::osaPot1394Configuration & sawRobotIO1394::osaPot1394Configuration::operator = (const osaPot1394Configuration & other)
{
    Type = other.Type;
    BitsToVoltage = other.BitsToVoltage;
    SensorToPosition = other.SensorToPosition;
    LookupTable = other.LookupTable;
    return *this;
}

sawRobotIO1394::osaPot1394Configuration::~osaPot1394Configuration(void){}


void sawRobotIO1394::osaPot1394Configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->Type);
    cmnSerializeRaw(outputStream__cdg, this->BitsToVoltage);
    cmnSerializeRaw(outputStream__cdg, this->SensorToPosition);
    cmnSerializeRaw(outputStream__cdg, this->LookupTable);
}


void sawRobotIO1394::osaPot1394Configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->Type);
    cmnDeSerializeRaw(inputStream__cdg, this->BitsToVoltage);
    cmnDeSerializeRaw(inputStream__cdg, this->SensorToPosition);
    cmnDeSerializeRaw(inputStream__cdg, this->LookupTable);
}


void sawRobotIO1394::osaPot1394Configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaPot1394Configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaPot1394Configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaPot1394Configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 167 */
/* source line: 173 */
/* source line: 178 */
/* source line: 183 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaPot1394Configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaPot1394Configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaPot1394Configuration::Copy(const sawRobotIO1394::osaPot1394Configuration & source__cdg) {
    cmnData<int >::Copy(this->Type, source__cdg.Type);
    cmnData<osaLinearFunction >::Copy(this->BitsToVoltage, source__cdg.BitsToVoltage);
    cmnData<osaLinearFunction >::Copy(this->SensorToPosition, source__cdg.SensorToPosition);
    cmnData<vctDoubleVec >::Copy(this->LookupTable, source__cdg.LookupTable);
}
void sawRobotIO1394::osaPot1394Configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<int >::SerializeBinary(this->Type, outputStream__cdg);
    cmnData<osaLinearFunction >::SerializeBinary(this->BitsToVoltage, outputStream__cdg);
    cmnData<osaLinearFunction >::SerializeBinary(this->SensorToPosition, outputStream__cdg);
    cmnData<vctDoubleVec >::SerializeBinary(this->LookupTable, outputStream__cdg);
}
void sawRobotIO1394::osaPot1394Configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<int >::DeSerializeBinary(this->Type, inputStream__cdg, localFormat, remoteFormat);
    cmnData<osaLinearFunction >::DeSerializeBinary(this->BitsToVoltage, inputStream__cdg, localFormat, remoteFormat);
    cmnData<osaLinearFunction >::DeSerializeBinary(this->SensorToPosition, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDoubleVec >::DeSerializeBinary(this->LookupTable, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaPot1394Configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->Type, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::SerializeText(this->BitsToVoltage, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::SerializeText(this->SensorToPosition, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDoubleVec >::SerializeText(this->LookupTable, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaPot1394Configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->Type, delimiter__cdg, prefix__cdg + "Type");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaLinearFunction >::SerializeDescription(this->BitsToVoltage, delimiter__cdg, prefix__cdg + "BitsToVoltage");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaLinearFunction >::SerializeDescription(this->SensorToPosition, delimiter__cdg, prefix__cdg + "SensorToPosition");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDoubleVec >::SerializeDescription(this->LookupTable, delimiter__cdg, prefix__cdg + "LookupTable");
    return description__cdg.str();
}
void sawRobotIO1394::osaPot1394Configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaPot1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->Type, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaPot1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::DeSerializeText(this->BitsToVoltage, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaPot1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaLinearFunction >::DeSerializeText(this->SensorToPosition, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaPot1394Configuration");
    }
    someData__cdg = true;
    cmnData<vctDoubleVec >::DeSerializeText(this->LookupTable, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaPot1394Configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaPot1394Configuration" << std::endl;
    description__cdg << "  Type:" << cmnData<int >::HumanReadable(this->Type);
    description__cdg << "  BitsToVoltage:" << cmnData<osaLinearFunction >::HumanReadable(this->BitsToVoltage);
    description__cdg << "  SensorToPosition:" << cmnData<osaLinearFunction >::HumanReadable(this->SensorToPosition);
    description__cdg << "  LookupTable:" << cmnData<vctDoubleVec >::HumanReadable(this->LookupTable);
    return description__cdg.str();
}
bool sawRobotIO1394::osaPot1394Configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<int >::ScalarNumberIsFixed(this->Type)
           && cmnData<osaLinearFunction >::ScalarNumberIsFixed(this->BitsToVoltage)
           && cmnData<osaLinearFunction >::ScalarNumberIsFixed(this->SensorToPosition)
           && cmnData<vctDoubleVec >::ScalarNumberIsFixed(this->LookupTable)
    ;
}
size_t sawRobotIO1394::osaPot1394Configuration::ScalarNumber(void) const {
    return 0
           + cmnData<int >::ScalarNumber(this->Type)
           + cmnData<osaLinearFunction >::ScalarNumber(this->BitsToVoltage)
           + cmnData<osaLinearFunction >::ScalarNumber(this->SensorToPosition)
           + cmnData<vctDoubleVec >::ScalarNumber(this->LookupTable)
    ;
}
std::string sawRobotIO1394::osaPot1394Configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->Type);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->Type, index_cdg - baseIndex__cdg, prefix__cdg + "Type");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->BitsToVoltage);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::ScalarDescription(this->BitsToVoltage, index_cdg - baseIndex__cdg, prefix__cdg + "BitsToVoltage");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->SensorToPosition);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::ScalarDescription(this->SensorToPosition, index_cdg - baseIndex__cdg, prefix__cdg + "SensorToPosition");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleVec >::ScalarNumber(this->LookupTable);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleVec >::ScalarDescription(this->LookupTable, index_cdg - baseIndex__cdg, prefix__cdg + "LookupTable");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaPot1394Configuration index out of range"));
    return "";
}
double sawRobotIO1394::osaPot1394Configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->Type);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->Type, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->BitsToVoltage);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::Scalar(this->BitsToVoltage, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaLinearFunction >::ScalarNumber(this->SensorToPosition);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaLinearFunction >::Scalar(this->SensorToPosition, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleVec >::ScalarNumber(this->LookupTable);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleVec >::Scalar(this->LookupTable, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaPot1394Configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaPot1394Configuration >::SerializeText(const sawRobotIO1394::osaPot1394Configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaPot1394Configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<int >::SerializeText(this->Type, jsonValue["Type"]);
    cmnDataJSON<osaLinearFunction >::SerializeText(this->BitsToVoltage, jsonValue["BitsToVoltage"]);
    cmnDataJSON<osaLinearFunction >::SerializeText(this->SensorToPosition, jsonValue["SensorToPosition"]);
    cmnDataJSON<vctDoubleVec >::SerializeText(this->LookupTable, jsonValue["LookupTable"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaPot1394Configuration >::DeSerializeText(sawRobotIO1394::osaPot1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaPot1394Configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["Type"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->Type, field__cdg);
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: Type");
    };
    field__cdg = jsonValue["BitsToVoltage"];
    if (!field__cdg.empty()) {
        cmnDataJSON<osaLinearFunction >::DeSerializeText(this->BitsToVoltage, field__cdg);
    } else {
        cmnThrow("cmnDataJson<osaLinearFunction>::DeSerializeText: empty JSON value for: BitsToVoltage");
    };
    field__cdg = jsonValue["SensorToPosition"];
    if (!field__cdg.empty()) {
        cmnDataJSON<osaLinearFunction >::DeSerializeText(this->SensorToPosition, field__cdg);
    } else {
        cmnThrow("cmnDataJson<osaLinearFunction>::DeSerializeText: empty JSON value for: SensorToPosition");
    };
    field__cdg = jsonValue["LookupTable"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDoubleVec >::DeSerializeText(this->LookupTable, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDoubleVec>::DeSerializeText: empty JSON value for: LookupTable");
    };
}
#endif // CISST_HAS_JSON

/* source line: 190 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaAnalogBrake1394ConfigurationProxy);

sawRobotIO1394::osaAnalogBrake1394Configuration::osaAnalogBrake1394Configuration(void):
    BoardID()
    , AxisID()
    , Drive()
    , ReleaseCurrent()
    , ReleaseTime()
    , ReleasedCurrent()
    , EngagedCurrent()
{}

sawRobotIO1394::osaAnalogBrake1394Configuration::osaAnalogBrake1394Configuration(const osaAnalogBrake1394Configuration & other):
    BoardID(other.BoardID)
    , AxisID(other.AxisID)
    , Drive(other.Drive)
    , ReleaseCurrent(other.ReleaseCurrent)
    , ReleaseTime(other.ReleaseTime)
    , ReleasedCurrent(other.ReleasedCurrent)
    , EngagedCurrent(other.EngagedCurrent)
{}

sawRobotIO1394::osaAnalogBrake1394Configuration & sawRobotIO1394::osaAnalogBrake1394Configuration::operator = (const osaAnalogBrake1394Configuration & other)
{
    BoardID = other.BoardID;
    AxisID = other.AxisID;
    Drive = other.Drive;
    ReleaseCurrent = other.ReleaseCurrent;
    ReleaseTime = other.ReleaseTime;
    ReleasedCurrent = other.ReleasedCurrent;
    EngagedCurrent = other.EngagedCurrent;
    return *this;
}

sawRobotIO1394::osaAnalogBrake1394Configuration::~osaAnalogBrake1394Configuration(void){}


void sawRobotIO1394::osaAnalogBrake1394Configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->BoardID);
    cmnSerializeRaw(outputStream__cdg, this->AxisID);
    cmnSerializeRaw(outputStream__cdg, this->Drive);
    cmnSerializeRaw(outputStream__cdg, this->ReleaseCurrent);
    cmnSerializeRaw(outputStream__cdg, this->ReleaseTime);
    cmnSerializeRaw(outputStream__cdg, this->ReleasedCurrent);
    cmnSerializeRaw(outputStream__cdg, this->EngagedCurrent);
}


void sawRobotIO1394::osaAnalogBrake1394Configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->BoardID);
    cmnDeSerializeRaw(inputStream__cdg, this->AxisID);
    cmnDeSerializeRaw(inputStream__cdg, this->Drive);
    cmnDeSerializeRaw(inputStream__cdg, this->ReleaseCurrent);
    cmnDeSerializeRaw(inputStream__cdg, this->ReleaseTime);
    cmnDeSerializeRaw(inputStream__cdg, this->ReleasedCurrent);
    cmnDeSerializeRaw(inputStream__cdg, this->EngagedCurrent);
}


void sawRobotIO1394::osaAnalogBrake1394Configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaAnalogBrake1394Configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaAnalogBrake1394Configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaAnalogBrake1394Configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 194 */
/* source line: 199 */
/* source line: 204 */
/* source line: 209 */
/* source line: 214 */
/* source line: 219 */
/* source line: 224 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaAnalogBrake1394Configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaAnalogBrake1394Configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaAnalogBrake1394Configuration::Copy(const sawRobotIO1394::osaAnalogBrake1394Configuration & source__cdg) {
    cmnData<int >::Copy(this->BoardID, source__cdg.BoardID);
    cmnData<int >::Copy(this->AxisID, source__cdg.AxisID);
    cmnData<osaDrive1394Configuration >::Copy(this->Drive, source__cdg.Drive);
    cmnData<double >::Copy(this->ReleaseCurrent, source__cdg.ReleaseCurrent);
    cmnData<double >::Copy(this->ReleaseTime, source__cdg.ReleaseTime);
    cmnData<double >::Copy(this->ReleasedCurrent, source__cdg.ReleasedCurrent);
    cmnData<double >::Copy(this->EngagedCurrent, source__cdg.EngagedCurrent);
}
void sawRobotIO1394::osaAnalogBrake1394Configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<int >::SerializeBinary(this->BoardID, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->AxisID, outputStream__cdg);
    cmnData<osaDrive1394Configuration >::SerializeBinary(this->Drive, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->ReleaseCurrent, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->ReleaseTime, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->ReleasedCurrent, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->EngagedCurrent, outputStream__cdg);
}
void sawRobotIO1394::osaAnalogBrake1394Configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<int >::DeSerializeBinary(this->BoardID, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->AxisID, inputStream__cdg, localFormat, remoteFormat);
    cmnData<osaDrive1394Configuration >::DeSerializeBinary(this->Drive, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->ReleaseCurrent, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->ReleaseTime, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->ReleasedCurrent, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->EngagedCurrent, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaAnalogBrake1394Configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->BoardID, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->AxisID, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaDrive1394Configuration >::SerializeText(this->Drive, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->ReleaseCurrent, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->ReleaseTime, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->ReleasedCurrent, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->EngagedCurrent, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaAnalogBrake1394Configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->BoardID, delimiter__cdg, prefix__cdg + "BoardID");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->AxisID, delimiter__cdg, prefix__cdg + "AxisID");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaDrive1394Configuration >::SerializeDescription(this->Drive, delimiter__cdg, prefix__cdg + "Drive");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->ReleaseCurrent, delimiter__cdg, prefix__cdg + "ReleaseCurrent");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->ReleaseTime, delimiter__cdg, prefix__cdg + "ReleaseTime");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->ReleasedCurrent, delimiter__cdg, prefix__cdg + "ReleasedCurrent");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->EngagedCurrent, delimiter__cdg, prefix__cdg + "EngagedCurrent");
    return description__cdg.str();
}
void sawRobotIO1394::osaAnalogBrake1394Configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaAnalogBrake1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->BoardID, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaAnalogBrake1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->AxisID, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaAnalogBrake1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaDrive1394Configuration >::DeSerializeText(this->Drive, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaAnalogBrake1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->ReleaseCurrent, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaAnalogBrake1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->ReleaseTime, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaAnalogBrake1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->ReleasedCurrent, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaAnalogBrake1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->EngagedCurrent, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaAnalogBrake1394Configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaAnalogBrake1394Configuration" << std::endl;
    description__cdg << "  BoardID:" << cmnData<int >::HumanReadable(this->BoardID);
    description__cdg << "  AxisID:" << cmnData<int >::HumanReadable(this->AxisID);
    description__cdg << "  Drive:" << cmnData<osaDrive1394Configuration >::HumanReadable(this->Drive);
    description__cdg << "  ReleaseCurrent:" << cmnData<double >::HumanReadable(this->ReleaseCurrent);
    description__cdg << "  ReleaseTime:" << cmnData<double >::HumanReadable(this->ReleaseTime);
    description__cdg << "  ReleasedCurrent:" << cmnData<double >::HumanReadable(this->ReleasedCurrent);
    description__cdg << "  EngagedCurrent:" << cmnData<double >::HumanReadable(this->EngagedCurrent);
    return description__cdg.str();
}
bool sawRobotIO1394::osaAnalogBrake1394Configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<int >::ScalarNumberIsFixed(this->BoardID)
           && cmnData<int >::ScalarNumberIsFixed(this->AxisID)
           && cmnData<osaDrive1394Configuration >::ScalarNumberIsFixed(this->Drive)
           && cmnData<double >::ScalarNumberIsFixed(this->ReleaseCurrent)
           && cmnData<double >::ScalarNumberIsFixed(this->ReleaseTime)
           && cmnData<double >::ScalarNumberIsFixed(this->ReleasedCurrent)
           && cmnData<double >::ScalarNumberIsFixed(this->EngagedCurrent)
    ;
}
size_t sawRobotIO1394::osaAnalogBrake1394Configuration::ScalarNumber(void) const {
    return 0
           + cmnData<int >::ScalarNumber(this->BoardID)
           + cmnData<int >::ScalarNumber(this->AxisID)
           + cmnData<osaDrive1394Configuration >::ScalarNumber(this->Drive)
           + cmnData<double >::ScalarNumber(this->ReleaseCurrent)
           + cmnData<double >::ScalarNumber(this->ReleaseTime)
           + cmnData<double >::ScalarNumber(this->ReleasedCurrent)
           + cmnData<double >::ScalarNumber(this->EngagedCurrent)
    ;
}
std::string sawRobotIO1394::osaAnalogBrake1394Configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BoardID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->BoardID, index_cdg - baseIndex__cdg, prefix__cdg + "BoardID");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->AxisID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->AxisID, index_cdg - baseIndex__cdg, prefix__cdg + "AxisID");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaDrive1394Configuration >::ScalarNumber(this->Drive);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaDrive1394Configuration >::ScalarDescription(this->Drive, index_cdg - baseIndex__cdg, prefix__cdg + "Drive");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->ReleaseCurrent);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->ReleaseCurrent, index_cdg - baseIndex__cdg, prefix__cdg + "ReleaseCurrent");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->ReleaseTime);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->ReleaseTime, index_cdg - baseIndex__cdg, prefix__cdg + "ReleaseTime");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->ReleasedCurrent);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->ReleasedCurrent, index_cdg - baseIndex__cdg, prefix__cdg + "ReleasedCurrent");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->EngagedCurrent);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->EngagedCurrent, index_cdg - baseIndex__cdg, prefix__cdg + "EngagedCurrent");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaAnalogBrake1394Configuration index out of range"));
    return "";
}
double sawRobotIO1394::osaAnalogBrake1394Configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BoardID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->BoardID, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->AxisID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->AxisID, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaDrive1394Configuration >::ScalarNumber(this->Drive);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaDrive1394Configuration >::Scalar(this->Drive, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->ReleaseCurrent);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->ReleaseCurrent, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->ReleaseTime);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->ReleaseTime, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->ReleasedCurrent);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->ReleasedCurrent, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->EngagedCurrent);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->EngagedCurrent, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaAnalogBrake1394Configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaAnalogBrake1394Configuration >::SerializeText(const sawRobotIO1394::osaAnalogBrake1394Configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaAnalogBrake1394Configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<int >::SerializeText(this->BoardID, jsonValue["BoardID"]);
    cmnDataJSON<int >::SerializeText(this->AxisID, jsonValue["AxisID"]);
    cmnDataJSON<osaDrive1394Configuration >::SerializeText(this->Drive, jsonValue["Drive"]);
    cmnDataJSON<double >::SerializeText(this->ReleaseCurrent, jsonValue["ReleaseCurrent"]);
    cmnDataJSON<double >::SerializeText(this->ReleaseTime, jsonValue["ReleaseTime"]);
    cmnDataJSON<double >::SerializeText(this->ReleasedCurrent, jsonValue["ReleasedCurrent"]);
    cmnDataJSON<double >::SerializeText(this->EngagedCurrent, jsonValue["EngagedCurrent"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaAnalogBrake1394Configuration >::DeSerializeText(sawRobotIO1394::osaAnalogBrake1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaAnalogBrake1394Configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["BoardID"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->BoardID, field__cdg);
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: BoardID");
    };
    field__cdg = jsonValue["AxisID"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->AxisID, field__cdg);
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: AxisID");
    };
    field__cdg = jsonValue["Drive"];
    if (!field__cdg.empty()) {
        cmnDataJSON<osaDrive1394Configuration >::DeSerializeText(this->Drive, field__cdg);
    } else {
        cmnThrow("cmnDataJson<osaDrive1394Configuration>::DeSerializeText: empty JSON value for: Drive");
    };
    field__cdg = jsonValue["ReleaseCurrent"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->ReleaseCurrent, field__cdg);
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: ReleaseCurrent");
    };
    field__cdg = jsonValue["ReleaseTime"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->ReleaseTime, field__cdg);
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: ReleaseTime");
    };
    field__cdg = jsonValue["ReleasedCurrent"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->ReleasedCurrent, field__cdg);
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: ReleasedCurrent");
    };
    field__cdg = jsonValue["EngagedCurrent"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->EngagedCurrent, field__cdg);
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: EngagedCurrent");
    };
}
#endif // CISST_HAS_JSON

/* source line: 231 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaActuator1394ConfigurationProxy);

sawRobotIO1394::osaActuator1394Configuration::osaActuator1394Configuration(void):
    BoardID()
    , AxisID()
    , JointType()
    , Drive()
    , Encoder()
    , Pot()
    , Brake(nullptr)
{}

sawRobotIO1394::osaActuator1394Configuration::osaActuator1394Configuration(const osaActuator1394Configuration & other):
    BoardID(other.BoardID)
    , AxisID(other.AxisID)
    , JointType(other.JointType)
    , Drive(other.Drive)
    , Encoder(other.Encoder)
    , Pot(other.Pot)
    , Brake(other.Brake)
{}

sawRobotIO1394::osaActuator1394Configuration & sawRobotIO1394::osaActuator1394Configuration::operator = (const osaActuator1394Configuration & other)
{
    BoardID = other.BoardID;
    AxisID = other.AxisID;
    JointType = other.JointType;
    Drive = other.Drive;
    Encoder = other.Encoder;
    Pot = other.Pot;
    Brake = other.Brake;
    return *this;
}

sawRobotIO1394::osaActuator1394Configuration::~osaActuator1394Configuration(void){}


void sawRobotIO1394::osaActuator1394Configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->BoardID);
    cmnSerializeRaw(outputStream__cdg, this->AxisID);
    cmnSerializeRaw(outputStream__cdg, this->JointType);
    cmnSerializeRaw(outputStream__cdg, this->Drive);
    cmnSerializeRaw(outputStream__cdg, this->Encoder);
    cmnSerializeRaw(outputStream__cdg, this->Pot);
}


void sawRobotIO1394::osaActuator1394Configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->BoardID);
    cmnDeSerializeRaw(inputStream__cdg, this->AxisID);
    cmnDeSerializeRaw(inputStream__cdg, this->JointType);
    cmnDeSerializeRaw(inputStream__cdg, this->Drive);
    cmnDeSerializeRaw(inputStream__cdg, this->Encoder);
    cmnDeSerializeRaw(inputStream__cdg, this->Pot);
}


void sawRobotIO1394::osaActuator1394Configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaActuator1394Configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaActuator1394Configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaActuator1394Configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 235 */
/* source line: 240 */
/* source line: 245 */
/* source line: 250 */
/* source line: 255 */
/* source line: 260 */
/* source line: 265 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaActuator1394Configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaActuator1394Configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaActuator1394Configuration::Copy(const sawRobotIO1394::osaActuator1394Configuration & source__cdg) {
    cmnData<int >::Copy(this->BoardID, source__cdg.BoardID);
    cmnData<int >::Copy(this->AxisID, source__cdg.AxisID);
    cmnData<cmnJointType >::Copy(this->JointType, source__cdg.JointType);
    cmnData<osaDrive1394Configuration >::Copy(this->Drive, source__cdg.Drive);
    cmnData<osaEncoder1394Configuration >::Copy(this->Encoder, source__cdg.Encoder);
    cmnData<osaPot1394Configuration >::Copy(this->Pot, source__cdg.Pot);
}
void sawRobotIO1394::osaActuator1394Configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<int >::SerializeBinary(this->BoardID, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->AxisID, outputStream__cdg);
    cmnData<cmnJointType >::SerializeBinary(this->JointType, outputStream__cdg);
    cmnData<osaDrive1394Configuration >::SerializeBinary(this->Drive, outputStream__cdg);
    cmnData<osaEncoder1394Configuration >::SerializeBinary(this->Encoder, outputStream__cdg);
    cmnData<osaPot1394Configuration >::SerializeBinary(this->Pot, outputStream__cdg);
}
void sawRobotIO1394::osaActuator1394Configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<int >::DeSerializeBinary(this->BoardID, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->AxisID, inputStream__cdg, localFormat, remoteFormat);
    cmnData<cmnJointType >::DeSerializeBinary(this->JointType, inputStream__cdg, localFormat, remoteFormat);
    cmnData<osaDrive1394Configuration >::DeSerializeBinary(this->Drive, inputStream__cdg, localFormat, remoteFormat);
    cmnData<osaEncoder1394Configuration >::DeSerializeBinary(this->Encoder, inputStream__cdg, localFormat, remoteFormat);
    cmnData<osaPot1394Configuration >::DeSerializeBinary(this->Pot, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaActuator1394Configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->BoardID, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->AxisID, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<cmnJointType >::SerializeText(this->JointType, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaDrive1394Configuration >::SerializeText(this->Drive, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaEncoder1394Configuration >::SerializeText(this->Encoder, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osaPot1394Configuration >::SerializeText(this->Pot, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaActuator1394Configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->BoardID, delimiter__cdg, prefix__cdg + "BoardID");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->AxisID, delimiter__cdg, prefix__cdg + "AxisID");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<cmnJointType >::SerializeDescription(this->JointType, delimiter__cdg, prefix__cdg + "JointType");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaDrive1394Configuration >::SerializeDescription(this->Drive, delimiter__cdg, prefix__cdg + "Drive");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaEncoder1394Configuration >::SerializeDescription(this->Encoder, delimiter__cdg, prefix__cdg + "Encoder");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osaPot1394Configuration >::SerializeDescription(this->Pot, delimiter__cdg, prefix__cdg + "Pot");
    return description__cdg.str();
}
void sawRobotIO1394::osaActuator1394Configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaActuator1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->BoardID, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaActuator1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->AxisID, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaActuator1394Configuration");
    }
    someData__cdg = true;
    cmnData<cmnJointType >::DeSerializeText(this->JointType, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaActuator1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaDrive1394Configuration >::DeSerializeText(this->Drive, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaActuator1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaEncoder1394Configuration >::DeSerializeText(this->Encoder, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaActuator1394Configuration");
    }
    someData__cdg = true;
    cmnData<osaPot1394Configuration >::DeSerializeText(this->Pot, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaActuator1394Configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaActuator1394Configuration" << std::endl;
    description__cdg << "  BoardID:" << cmnData<int >::HumanReadable(this->BoardID);
    description__cdg << "  AxisID:" << cmnData<int >::HumanReadable(this->AxisID);
    description__cdg << "  JointType:" << cmnData<cmnJointType >::HumanReadable(this->JointType);
    description__cdg << "  Drive:" << cmnData<osaDrive1394Configuration >::HumanReadable(this->Drive);
    description__cdg << "  Encoder:" << cmnData<osaEncoder1394Configuration >::HumanReadable(this->Encoder);
    description__cdg << "  Pot:" << cmnData<osaPot1394Configuration >::HumanReadable(this->Pot);
    return description__cdg.str();
}
bool sawRobotIO1394::osaActuator1394Configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<int >::ScalarNumberIsFixed(this->BoardID)
           && cmnData<int >::ScalarNumberIsFixed(this->AxisID)
           && cmnData<cmnJointType >::ScalarNumberIsFixed(this->JointType)
           && cmnData<osaDrive1394Configuration >::ScalarNumberIsFixed(this->Drive)
           && cmnData<osaEncoder1394Configuration >::ScalarNumberIsFixed(this->Encoder)
           && cmnData<osaPot1394Configuration >::ScalarNumberIsFixed(this->Pot)
    ;
}
size_t sawRobotIO1394::osaActuator1394Configuration::ScalarNumber(void) const {
    return 0
           + cmnData<int >::ScalarNumber(this->BoardID)
           + cmnData<int >::ScalarNumber(this->AxisID)
           + cmnData<cmnJointType >::ScalarNumber(this->JointType)
           + cmnData<osaDrive1394Configuration >::ScalarNumber(this->Drive)
           + cmnData<osaEncoder1394Configuration >::ScalarNumber(this->Encoder)
           + cmnData<osaPot1394Configuration >::ScalarNumber(this->Pot)
    ;
}
std::string sawRobotIO1394::osaActuator1394Configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BoardID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->BoardID, index_cdg - baseIndex__cdg, prefix__cdg + "BoardID");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->AxisID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->AxisID, index_cdg - baseIndex__cdg, prefix__cdg + "AxisID");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<cmnJointType >::ScalarNumber(this->JointType);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<cmnJointType >::ScalarDescription(this->JointType, index_cdg - baseIndex__cdg, prefix__cdg + "JointType");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaDrive1394Configuration >::ScalarNumber(this->Drive);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaDrive1394Configuration >::ScalarDescription(this->Drive, index_cdg - baseIndex__cdg, prefix__cdg + "Drive");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaEncoder1394Configuration >::ScalarNumber(this->Encoder);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaEncoder1394Configuration >::ScalarDescription(this->Encoder, index_cdg - baseIndex__cdg, prefix__cdg + "Encoder");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaPot1394Configuration >::ScalarNumber(this->Pot);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaPot1394Configuration >::ScalarDescription(this->Pot, index_cdg - baseIndex__cdg, prefix__cdg + "Pot");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaActuator1394Configuration index out of range"));
    return "";
}
double sawRobotIO1394::osaActuator1394Configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BoardID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->BoardID, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->AxisID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->AxisID, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<cmnJointType >::ScalarNumber(this->JointType);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<cmnJointType >::Scalar(this->JointType, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaDrive1394Configuration >::ScalarNumber(this->Drive);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaDrive1394Configuration >::Scalar(this->Drive, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaEncoder1394Configuration >::ScalarNumber(this->Encoder);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaEncoder1394Configuration >::Scalar(this->Encoder, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osaPot1394Configuration >::ScalarNumber(this->Pot);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osaPot1394Configuration >::Scalar(this->Pot, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaActuator1394Configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaActuator1394Configuration >::SerializeText(const sawRobotIO1394::osaActuator1394Configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaActuator1394Configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<int >::SerializeText(this->BoardID, jsonValue["BoardID"]);
    cmnDataJSON<int >::SerializeText(this->AxisID, jsonValue["AxisID"]);
    cmnDataJSON<cmnJointType >::SerializeText(this->JointType, jsonValue["JointType"]);
    cmnDataJSON<osaDrive1394Configuration >::SerializeText(this->Drive, jsonValue["Drive"]);
    cmnDataJSON<osaEncoder1394Configuration >::SerializeText(this->Encoder, jsonValue["Encoder"]);
    cmnDataJSON<osaPot1394Configuration >::SerializeText(this->Pot, jsonValue["Pot"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaActuator1394Configuration >::DeSerializeText(sawRobotIO1394::osaActuator1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaActuator1394Configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["BoardID"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->BoardID, field__cdg);
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: BoardID");
    };
    field__cdg = jsonValue["AxisID"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->AxisID, field__cdg);
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: AxisID");
    };
    field__cdg = jsonValue["JointType"];
    if (!field__cdg.empty()) {
        cmnDataJSON<cmnJointType >::DeSerializeText(this->JointType, field__cdg);
    } else {
        cmnThrow("cmnDataJson<cmnJointType>::DeSerializeText: empty JSON value for: JointType");
    };
    field__cdg = jsonValue["Drive"];
    if (!field__cdg.empty()) {
        cmnDataJSON<osaDrive1394Configuration >::DeSerializeText(this->Drive, field__cdg);
    } else {
        cmnThrow("cmnDataJson<osaDrive1394Configuration>::DeSerializeText: empty JSON value for: Drive");
    };
    field__cdg = jsonValue["Encoder"];
    if (!field__cdg.empty()) {
        cmnDataJSON<osaEncoder1394Configuration >::DeSerializeText(this->Encoder, field__cdg);
    } else {
        cmnThrow("cmnDataJson<osaEncoder1394Configuration>::DeSerializeText: empty JSON value for: Encoder");
    };
    field__cdg = jsonValue["Pot"];
    if (!field__cdg.empty()) {
        cmnDataJSON<osaPot1394Configuration >::DeSerializeText(this->Pot, field__cdg);
    } else {
        cmnThrow("cmnDataJson<osaPot1394Configuration>::DeSerializeText: empty JSON value for: Pot");
    };
}
#endif // CISST_HAS_JSON

/* source line: 274 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaPotTolerance1394ConfigurationProxy);

sawRobotIO1394::osaPotTolerance1394Configuration::osaPotTolerance1394Configuration(void):
    AxisID()
    , Distance()
    , Latency()
{}

sawRobotIO1394::osaPotTolerance1394Configuration::osaPotTolerance1394Configuration(const osaPotTolerance1394Configuration & other):
    AxisID(other.AxisID)
    , Distance(other.Distance)
    , Latency(other.Latency)
{}

sawRobotIO1394::osaPotTolerance1394Configuration & sawRobotIO1394::osaPotTolerance1394Configuration::operator = (const osaPotTolerance1394Configuration & other)
{
    AxisID = other.AxisID;
    Distance = other.Distance;
    Latency = other.Latency;
    return *this;
}

sawRobotIO1394::osaPotTolerance1394Configuration::~osaPotTolerance1394Configuration(void){}


void sawRobotIO1394::osaPotTolerance1394Configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->AxisID);
    cmnSerializeRaw(outputStream__cdg, this->Distance);
    cmnSerializeRaw(outputStream__cdg, this->Latency);
}


void sawRobotIO1394::osaPotTolerance1394Configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->AxisID);
    cmnDeSerializeRaw(inputStream__cdg, this->Distance);
    cmnDeSerializeRaw(inputStream__cdg, this->Latency);
}


void sawRobotIO1394::osaPotTolerance1394Configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaPotTolerance1394Configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaPotTolerance1394Configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaPotTolerance1394Configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 278 */
/* source line: 283 */
/* source line: 288 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaPotTolerance1394Configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaPotTolerance1394Configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaPotTolerance1394Configuration::Copy(const sawRobotIO1394::osaPotTolerance1394Configuration & source__cdg) {
    cmnData<int >::Copy(this->AxisID, source__cdg.AxisID);
    cmnData<double >::Copy(this->Distance, source__cdg.Distance);
    cmnData<double >::Copy(this->Latency, source__cdg.Latency);
}
void sawRobotIO1394::osaPotTolerance1394Configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<int >::SerializeBinary(this->AxisID, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->Distance, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->Latency, outputStream__cdg);
}
void sawRobotIO1394::osaPotTolerance1394Configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<int >::DeSerializeBinary(this->AxisID, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->Distance, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->Latency, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaPotTolerance1394Configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->AxisID, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->Distance, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->Latency, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaPotTolerance1394Configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->AxisID, delimiter__cdg, prefix__cdg + "AxisID");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->Distance, delimiter__cdg, prefix__cdg + "Distance");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->Latency, delimiter__cdg, prefix__cdg + "Latency");
    return description__cdg.str();
}
void sawRobotIO1394::osaPotTolerance1394Configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaPotTolerance1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->AxisID, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaPotTolerance1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->Distance, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaPotTolerance1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->Latency, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaPotTolerance1394Configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaPotTolerance1394Configuration" << std::endl;
    description__cdg << "  AxisID:" << cmnData<int >::HumanReadable(this->AxisID);
    description__cdg << "  Distance:" << cmnData<double >::HumanReadable(this->Distance);
    description__cdg << "  Latency:" << cmnData<double >::HumanReadable(this->Latency);
    return description__cdg.str();
}
bool sawRobotIO1394::osaPotTolerance1394Configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<int >::ScalarNumberIsFixed(this->AxisID)
           && cmnData<double >::ScalarNumberIsFixed(this->Distance)
           && cmnData<double >::ScalarNumberIsFixed(this->Latency)
    ;
}
size_t sawRobotIO1394::osaPotTolerance1394Configuration::ScalarNumber(void) const {
    return 0
           + cmnData<int >::ScalarNumber(this->AxisID)
           + cmnData<double >::ScalarNumber(this->Distance)
           + cmnData<double >::ScalarNumber(this->Latency)
    ;
}
std::string sawRobotIO1394::osaPotTolerance1394Configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->AxisID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->AxisID, index_cdg - baseIndex__cdg, prefix__cdg + "AxisID");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->Distance);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->Distance, index_cdg - baseIndex__cdg, prefix__cdg + "Distance");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->Latency);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->Latency, index_cdg - baseIndex__cdg, prefix__cdg + "Latency");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaPotTolerance1394Configuration index out of range"));
    return "";
}
double sawRobotIO1394::osaPotTolerance1394Configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->AxisID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->AxisID, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->Distance);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->Distance, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->Latency);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->Latency, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaPotTolerance1394Configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaPotTolerance1394Configuration >::SerializeText(const sawRobotIO1394::osaPotTolerance1394Configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaPotTolerance1394Configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<int >::SerializeText(this->AxisID, jsonValue["AxisID"]);
    cmnDataJSON<double >::SerializeText(this->Distance, jsonValue["Distance"]);
    cmnDataJSON<double >::SerializeText(this->Latency, jsonValue["Latency"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaPotTolerance1394Configuration >::DeSerializeText(sawRobotIO1394::osaPotTolerance1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaPotTolerance1394Configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["AxisID"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->AxisID, field__cdg);
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: AxisID");
    };
    field__cdg = jsonValue["Distance"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->Distance, field__cdg);
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: Distance");
    };
    field__cdg = jsonValue["Latency"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->Latency, field__cdg);
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: Latency");
    };
}
#endif // CISST_HAS_JSON

/* source line: 295 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(osa1394Proxy);

osa1394::osa1394(void)
{}

osa1394::osa1394(const osa1394 & CMN_UNUSED(other))
{}

osa1394 & osa1394::operator = (const osa1394 & CMN_UNUSED(other))
{
    return *this;
}

osa1394::~osa1394(void){}


void osa1394::SerializeRaw(std::ostream & CMN_UNUSED(outputStream__cdg)) const
{
}


void osa1394::DeSerializeRaw(std::istream & CMN_UNUSED(inputStream__cdg))
{
}


void osa1394::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void osa1394::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<osa1394 >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<osa1394 >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const osa1394 & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, osa1394 & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void osa1394::Copy(const osa1394 & CMN_UNUSED(source__cdg)) {
}
void osa1394::SerializeBinary(std::ostream & CMN_UNUSED(outputStream__cdg)) const CISST_THROW(std::runtime_error) {
}
void osa1394::DeSerializeBinary(std::istream & CMN_UNUSED(inputStream__cdg),
                                            const cmnDataFormat & CMN_UNUSED(localFormat),
                                            const cmnDataFormat & CMN_UNUSED(remoteFormat)) CISST_THROW(std::runtime_error) {
}
void osa1394::SerializeText(std::ostream & CMN_UNUSED(outputStream__cdg), const char CMN_UNUSED(delimiter__cdg)) const CISST_THROW(std::runtime_error) {
}
std::string osa1394::SerializeDescription(const char CMN_UNUSED(delimiter__cdg), const std::string & CMN_UNUSED(userDescription__cdg)) const {
    std::stringstream description__cdg;
    return description__cdg.str();
}
void osa1394::DeSerializeText(std::istream & CMN_UNUSED(inputStream__cdg),
                                          const char CMN_UNUSED(delimiter__cdg)) CISST_THROW(std::runtime_error) {
}
std::string osa1394::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "osa1394" << std::endl;
    return description__cdg.str();
}
bool osa1394::ScalarNumberIsFixed(void) const {
    return true
    ;
}
size_t osa1394::ScalarNumber(void) const {
    return 0
    ;
}
std::string osa1394::ScalarDescription(const size_t CMN_UNUSED(index_cdg), const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    cmnThrow(std::out_of_range("cmnDataScalarDescription: osa1394 index out of range"));
    return "";
}
double osa1394::Scalar(const size_t CMN_UNUSED(index_cdg)) const CISST_THROW(std::out_of_range) {
    cmnThrow(std::out_of_range("cmnDataScalar: osa1394 index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<osa1394 >::SerializeText(const osa1394 & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void osa1394::SerializeTextJSON(Json::Value & CMN_UNUSED(jsonValue)) const {
}
template<>
void cmnDataJSON<osa1394 >::DeSerializeText(osa1394 & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void osa1394::DeSerializeTextJSON(const Json::Value & CMN_UNUSED(jsonValue)) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
}
#endif // CISST_HAS_JSON
std::string cmnDataHumanReadable_osa1394_HardwareType(const osa1394::HardwareType & data) {
    switch (data) {
        case osa1394::HARDWARE_UNDEFINED:
            return "Undefined";
            break;
        case osa1394::QLA1:
            return "QLA1";
            break;
        case osa1394::DQLA:
            return "DQLA";
            break;
        case osa1394::dRA1:
            return "dRA1";
            break;
        default: return "undefined enum osa1394::HardwareType";
            break;
    }
}

std::string osa1394::HardwareTypeToString(const osa1394::HardwareType & data) CISST_THROW(std::runtime_error) {
    switch (data) {
        case osa1394::HARDWARE_UNDEFINED:
            return "HARDWARE_UNDEFINED";
            break;
        case osa1394::QLA1:
            return "QLA1";
            break;
        case osa1394::DQLA:
            return "DQLA";
            break;
        case osa1394::dRA1:
            return "dRA1";
            break;
        default:
            break;
    }
    cmnThrow("osa1394::HardwareTypeToString called with invalid enum");
    return "";
}

osa1394::HardwareType osa1394::HardwareTypeFromString(const std::string & value) CISST_THROW(std::runtime_error) {
    if (value == "HARDWARE_UNDEFINED") {
        return osa1394::HARDWARE_UNDEFINED;
    };
    if (value == "QLA1") {
        return osa1394::QLA1;
    };
    if (value == "DQLA") {
        return osa1394::DQLA;
    };
    if (value == "dRA1") {
        return osa1394::dRA1;
    };
    std::string message = "osa1394::HardwareTypeFromString can't find matching enum for " + value + ".  Options are: ";
    std::vector<std::string> options = HardwareTypeVectorString();
    for (std::vector<std::string>::const_iterator i = options.begin(); i != options.end(); ++i) message += *i + " ";
    cmnThrow(message);
    return static_cast<osa1394::HardwareType >(0);
}

const std::vector<int> & osa1394::HardwareTypeVectorInt(void) {
    static std::vector<int> vectorInt;
    if (vectorInt.empty()) {
        vectorInt.push_back(static_cast<int>(HARDWARE_UNDEFINED));
        vectorInt.push_back(static_cast<int>(QLA1));
        vectorInt.push_back(static_cast<int>(DQLA));
        vectorInt.push_back(static_cast<int>(dRA1));
    }
    return vectorInt;
}

const std::vector<std::string> & osa1394::HardwareTypeVectorString(void) {
    static std::vector<std::string> vectorString;
    if (vectorString.empty()) {
        vectorString.push_back("HARDWARE_UNDEFINED");
        vectorString.push_back("QLA1");
        vectorString.push_back("DQLA");
        vectorString.push_back("dRA1");
    }
    return vectorString;
}

#if CISST_HAS_JSON
  CMN_IMPLEMENT_DATA_FUNCTIONS_JSON_FOR_ENUM_AS_STRING(osa1394::HardwareType, osa1394::HardwareTypeToString, osa1394::HardwareTypeFromString);
#endif // CISST_HAS_JSON

/* source line: 318 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaRobot1394ConfigurationProxy);

sawRobotIO1394::osaRobot1394Configuration::osaRobot1394Configuration(void):
    Name()
    , HardwareVersion(osa1394::HARDWARE_UNDEFINED)
    , NumberOfActuators(0)
    , SerialNumber()
    , NumberOfBrakes(0)
    , OnlyIO(false)
    , HasEncoderPreload(false)
    , Actuators()
    , PotTolerances()
    , PotCoupling()
{}

sawRobotIO1394::osaRobot1394Configuration::osaRobot1394Configuration(const osaRobot1394Configuration & other):
    Name(other.Name)
    , HardwareVersion(other.HardwareVersion)
    , NumberOfActuators(other.NumberOfActuators)
    , SerialNumber(other.SerialNumber)
    , NumberOfBrakes(other.NumberOfBrakes)
    , OnlyIO(other.OnlyIO)
    , HasEncoderPreload(other.HasEncoderPreload)
    , Actuators(other.Actuators)
    , PotTolerances(other.PotTolerances)
    , PotCoupling(other.PotCoupling)
{}

sawRobotIO1394::osaRobot1394Configuration & sawRobotIO1394::osaRobot1394Configuration::operator = (const osaRobot1394Configuration & other)
{
    Name = other.Name;
    HardwareVersion = other.HardwareVersion;
    NumberOfActuators = other.NumberOfActuators;
    SerialNumber = other.SerialNumber;
    NumberOfBrakes = other.NumberOfBrakes;
    OnlyIO = other.OnlyIO;
    HasEncoderPreload = other.HasEncoderPreload;
    Actuators = other.Actuators;
    PotTolerances = other.PotTolerances;
    PotCoupling = other.PotCoupling;
    return *this;
}

sawRobotIO1394::osaRobot1394Configuration::~osaRobot1394Configuration(void){}


void sawRobotIO1394::osaRobot1394Configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->Name);
    cmnSerializeRaw(outputStream__cdg, this->HardwareVersion);
    cmnSerializeRaw(outputStream__cdg, this->NumberOfActuators);
    cmnSerializeRaw(outputStream__cdg, this->SerialNumber);
    cmnSerializeRaw(outputStream__cdg, this->NumberOfBrakes);
    cmnSerializeRaw(outputStream__cdg, this->OnlyIO);
    cmnSerializeRaw(outputStream__cdg, this->HasEncoderPreload);
    cmnSerializeRaw(outputStream__cdg, this->Actuators);
    cmnSerializeRaw(outputStream__cdg, this->PotTolerances);
    cmnSerializeRaw(outputStream__cdg, this->PotCoupling);
}


void sawRobotIO1394::osaRobot1394Configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->Name);
    cmnDeSerializeRaw(inputStream__cdg, this->HardwareVersion);
    cmnDeSerializeRaw(inputStream__cdg, this->NumberOfActuators);
    cmnDeSerializeRaw(inputStream__cdg, this->SerialNumber);
    cmnDeSerializeRaw(inputStream__cdg, this->NumberOfBrakes);
    cmnDeSerializeRaw(inputStream__cdg, this->OnlyIO);
    cmnDeSerializeRaw(inputStream__cdg, this->HasEncoderPreload);
    cmnDeSerializeRaw(inputStream__cdg, this->Actuators);
    cmnDeSerializeRaw(inputStream__cdg, this->PotTolerances);
    cmnDeSerializeRaw(inputStream__cdg, this->PotCoupling);
}


void sawRobotIO1394::osaRobot1394Configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaRobot1394Configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaRobot1394Configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaRobot1394Configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 323 */
/* source line: 328 */
/* source line: 334 */
/* source line: 340 */
/* source line: 345 */
/* source line: 351 */
/* source line: 357 */
/* source line: 363 */
/* source line: 368 */
/* source line: 373 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaRobot1394Configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaRobot1394Configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaRobot1394Configuration::Copy(const sawRobotIO1394::osaRobot1394Configuration & source__cdg) {
    cmnData<std::string >::Copy(this->Name, source__cdg.Name);
    cmnData<osa1394::HardwareType >::Copy(this->HardwareVersion, source__cdg.HardwareVersion);
    cmnData<int >::Copy(this->NumberOfActuators, source__cdg.NumberOfActuators);
    cmnData<std::string >::Copy(this->SerialNumber, source__cdg.SerialNumber);
    cmnData<int >::Copy(this->NumberOfBrakes, source__cdg.NumberOfBrakes);
    cmnData<bool >::Copy(this->OnlyIO, source__cdg.OnlyIO);
    cmnData<bool >::Copy(this->HasEncoderPreload, source__cdg.HasEncoderPreload);
    cmnData<std::vector<osaActuator1394Configuration> >::Copy(this->Actuators, source__cdg.Actuators);
    cmnData<std::vector<osaPotTolerance1394Configuration> >::Copy(this->PotTolerances, source__cdg.PotTolerances);
    cmnData<prmActuatorJointCoupling >::Copy(this->PotCoupling, source__cdg.PotCoupling);
}
void sawRobotIO1394::osaRobot1394Configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->Name, outputStream__cdg);
    cmnData<osa1394::HardwareType >::SerializeBinary(this->HardwareVersion, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->NumberOfActuators, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->SerialNumber, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->NumberOfBrakes, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->OnlyIO, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->HasEncoderPreload, outputStream__cdg);
    cmnData<std::vector<osaActuator1394Configuration> >::SerializeBinary(this->Actuators, outputStream__cdg);
    cmnData<std::vector<osaPotTolerance1394Configuration> >::SerializeBinary(this->PotTolerances, outputStream__cdg);
    cmnData<prmActuatorJointCoupling >::SerializeBinary(this->PotCoupling, outputStream__cdg);
}
void sawRobotIO1394::osaRobot1394Configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->Name, inputStream__cdg, localFormat, remoteFormat);
    cmnData<osa1394::HardwareType >::DeSerializeBinary(this->HardwareVersion, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->NumberOfActuators, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->SerialNumber, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->NumberOfBrakes, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->OnlyIO, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->HasEncoderPreload, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::vector<osaActuator1394Configuration> >::DeSerializeBinary(this->Actuators, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::vector<osaPotTolerance1394Configuration> >::DeSerializeBinary(this->PotTolerances, inputStream__cdg, localFormat, remoteFormat);
    cmnData<prmActuatorJointCoupling >::DeSerializeBinary(this->PotCoupling, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaRobot1394Configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->Name, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<osa1394::HardwareType >::SerializeText(this->HardwareVersion, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->NumberOfActuators, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->SerialNumber, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->NumberOfBrakes, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->OnlyIO, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->HasEncoderPreload, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::vector<osaActuator1394Configuration> >::SerializeText(this->Actuators, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::vector<osaPotTolerance1394Configuration> >::SerializeText(this->PotTolerances, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<prmActuatorJointCoupling >::SerializeText(this->PotCoupling, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaRobot1394Configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->Name, delimiter__cdg, prefix__cdg + "Name");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<osa1394::HardwareType >::SerializeDescription(this->HardwareVersion, delimiter__cdg, prefix__cdg + "HardwareVersion");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->NumberOfActuators, delimiter__cdg, prefix__cdg + "NumberOfActuators");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->SerialNumber, delimiter__cdg, prefix__cdg + "SerialNumber");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->NumberOfBrakes, delimiter__cdg, prefix__cdg + "NumberOfBrakes");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->OnlyIO, delimiter__cdg, prefix__cdg + "OnlyIO");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->HasEncoderPreload, delimiter__cdg, prefix__cdg + "HasEncoderPreload");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::vector<osaActuator1394Configuration> >::SerializeDescription(this->Actuators, delimiter__cdg, prefix__cdg + "Actuators");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::vector<osaPotTolerance1394Configuration> >::SerializeDescription(this->PotTolerances, delimiter__cdg, prefix__cdg + "PotTolerances");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<prmActuatorJointCoupling >::SerializeDescription(this->PotCoupling, delimiter__cdg, prefix__cdg + "PotCoupling");
    return description__cdg.str();
}
void sawRobotIO1394::osaRobot1394Configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaRobot1394Configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->Name, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaRobot1394Configuration");
    }
    someData__cdg = true;
    cmnData<osa1394::HardwareType >::DeSerializeText(this->HardwareVersion, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaRobot1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->NumberOfActuators, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaRobot1394Configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->SerialNumber, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaRobot1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->NumberOfBrakes, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaRobot1394Configuration");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->OnlyIO, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaRobot1394Configuration");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->HasEncoderPreload, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaRobot1394Configuration");
    }
    someData__cdg = true;
    cmnData<std::vector<osaActuator1394Configuration> >::DeSerializeText(this->Actuators, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaRobot1394Configuration");
    }
    someData__cdg = true;
    cmnData<std::vector<osaPotTolerance1394Configuration> >::DeSerializeText(this->PotTolerances, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaRobot1394Configuration");
    }
    someData__cdg = true;
    cmnData<prmActuatorJointCoupling >::DeSerializeText(this->PotCoupling, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaRobot1394Configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaRobot1394Configuration" << std::endl;
    description__cdg << "  Name:" << cmnData<std::string >::HumanReadable(this->Name);
    description__cdg << "  HardwareVersion:" << cmnData<osa1394::HardwareType >::HumanReadable(this->HardwareVersion);
    description__cdg << "  NumberOfActuators:" << cmnData<int >::HumanReadable(this->NumberOfActuators);
    description__cdg << "  SerialNumber:" << cmnData<std::string >::HumanReadable(this->SerialNumber);
    description__cdg << "  NumberOfBrakes:" << cmnData<int >::HumanReadable(this->NumberOfBrakes);
    description__cdg << "  OnlyIO:" << cmnData<bool >::HumanReadable(this->OnlyIO);
    description__cdg << "  HasEncoderPreload:" << cmnData<bool >::HumanReadable(this->HasEncoderPreload);
    description__cdg << "  Actuators:" << cmnData<std::vector<osaActuator1394Configuration> >::HumanReadable(this->Actuators);
    description__cdg << "  PotTolerances:" << cmnData<std::vector<osaPotTolerance1394Configuration> >::HumanReadable(this->PotTolerances);
    description__cdg << "  PotCoupling:" << cmnData<prmActuatorJointCoupling >::HumanReadable(this->PotCoupling);
    return description__cdg.str();
}
bool sawRobotIO1394::osaRobot1394Configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->Name)
           && cmnData<osa1394::HardwareType >::ScalarNumberIsFixed(this->HardwareVersion)
           && cmnData<int >::ScalarNumberIsFixed(this->NumberOfActuators)
           && cmnData<std::string >::ScalarNumberIsFixed(this->SerialNumber)
           && cmnData<int >::ScalarNumberIsFixed(this->NumberOfBrakes)
           && cmnData<bool >::ScalarNumberIsFixed(this->OnlyIO)
           && cmnData<bool >::ScalarNumberIsFixed(this->HasEncoderPreload)
           && cmnData<std::vector<osaActuator1394Configuration> >::ScalarNumberIsFixed(this->Actuators)
           && cmnData<std::vector<osaPotTolerance1394Configuration> >::ScalarNumberIsFixed(this->PotTolerances)
           && cmnData<prmActuatorJointCoupling >::ScalarNumberIsFixed(this->PotCoupling)
    ;
}
size_t sawRobotIO1394::osaRobot1394Configuration::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->Name)
           + cmnData<osa1394::HardwareType >::ScalarNumber(this->HardwareVersion)
           + cmnData<int >::ScalarNumber(this->NumberOfActuators)
           + cmnData<std::string >::ScalarNumber(this->SerialNumber)
           + cmnData<int >::ScalarNumber(this->NumberOfBrakes)
           + cmnData<bool >::ScalarNumber(this->OnlyIO)
           + cmnData<bool >::ScalarNumber(this->HasEncoderPreload)
           + cmnData<std::vector<osaActuator1394Configuration> >::ScalarNumber(this->Actuators)
           + cmnData<std::vector<osaPotTolerance1394Configuration> >::ScalarNumber(this->PotTolerances)
           + cmnData<prmActuatorJointCoupling >::ScalarNumber(this->PotCoupling)
    ;
}
std::string sawRobotIO1394::osaRobot1394Configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->Name, index_cdg - baseIndex__cdg, prefix__cdg + "Name");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osa1394::HardwareType >::ScalarNumber(this->HardwareVersion);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osa1394::HardwareType >::ScalarDescription(this->HardwareVersion, index_cdg - baseIndex__cdg, prefix__cdg + "HardwareVersion");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->NumberOfActuators);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->NumberOfActuators, index_cdg - baseIndex__cdg, prefix__cdg + "NumberOfActuators");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->SerialNumber);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->SerialNumber, index_cdg - baseIndex__cdg, prefix__cdg + "SerialNumber");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->NumberOfBrakes);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->NumberOfBrakes, index_cdg - baseIndex__cdg, prefix__cdg + "NumberOfBrakes");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->OnlyIO);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->OnlyIO, index_cdg - baseIndex__cdg, prefix__cdg + "OnlyIO");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->HasEncoderPreload);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->HasEncoderPreload, index_cdg - baseIndex__cdg, prefix__cdg + "HasEncoderPreload");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<osaActuator1394Configuration> >::ScalarNumber(this->Actuators);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaActuator1394Configuration> >::ScalarDescription(this->Actuators, index_cdg - baseIndex__cdg, prefix__cdg + "Actuators");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<osaPotTolerance1394Configuration> >::ScalarNumber(this->PotTolerances);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaPotTolerance1394Configuration> >::ScalarDescription(this->PotTolerances, index_cdg - baseIndex__cdg, prefix__cdg + "PotTolerances");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<prmActuatorJointCoupling >::ScalarNumber(this->PotCoupling);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<prmActuatorJointCoupling >::ScalarDescription(this->PotCoupling, index_cdg - baseIndex__cdg, prefix__cdg + "PotCoupling");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaRobot1394Configuration index out of range"));
    return "";
}
double sawRobotIO1394::osaRobot1394Configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->Name, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<osa1394::HardwareType >::ScalarNumber(this->HardwareVersion);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<osa1394::HardwareType >::Scalar(this->HardwareVersion, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->NumberOfActuators);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->NumberOfActuators, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->SerialNumber);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->SerialNumber, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->NumberOfBrakes);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->NumberOfBrakes, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->OnlyIO);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->OnlyIO, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->HasEncoderPreload);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->HasEncoderPreload, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<osaActuator1394Configuration> >::ScalarNumber(this->Actuators);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaActuator1394Configuration> >::Scalar(this->Actuators, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<osaPotTolerance1394Configuration> >::ScalarNumber(this->PotTolerances);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaPotTolerance1394Configuration> >::Scalar(this->PotTolerances, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<prmActuatorJointCoupling >::ScalarNumber(this->PotCoupling);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<prmActuatorJointCoupling >::Scalar(this->PotCoupling, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaRobot1394Configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaRobot1394Configuration >::SerializeText(const sawRobotIO1394::osaRobot1394Configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaRobot1394Configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<osa1394::HardwareType >::SerializeText(this->HardwareVersion, jsonValue["HardwareVersion"]);
    cmnDataJSON<int >::SerializeText(this->NumberOfActuators, jsonValue["NumberOfActuators"]);
    cmnDataJSON<std::string >::SerializeText(this->SerialNumber, jsonValue["SerialNumber"]);
    cmnDataJSON<int >::SerializeText(this->NumberOfBrakes, jsonValue["NumberOfBrakes"]);
    cmnDataJSON<bool >::SerializeText(this->OnlyIO, jsonValue["OnlyIO"]);
    cmnDataJSON<bool >::SerializeText(this->HasEncoderPreload, jsonValue["HasEncoderPreload"]);
    cmnDataJSON<std::vector<osaActuator1394Configuration> >::SerializeText(this->Actuators, jsonValue["Actuators"]);
    cmnDataJSON<std::vector<osaPotTolerance1394Configuration> >::SerializeText(this->PotTolerances, jsonValue["PotTolerances"]);
    cmnDataJSON<prmActuatorJointCoupling >::SerializeText(this->PotCoupling, jsonValue["PotCoupling"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaRobot1394Configuration >::DeSerializeText(sawRobotIO1394::osaRobot1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaRobot1394Configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["Name"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->Name, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: Name");
    };
    field__cdg = jsonValue["HardwareVersion"];
    if (!field__cdg.empty()) {
        cmnDataJSON<osa1394::HardwareType >::DeSerializeText(this->HardwareVersion, field__cdg);
    };
    field__cdg = jsonValue["NumberOfActuators"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->NumberOfActuators, field__cdg);
    };
    field__cdg = jsonValue["SerialNumber"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->SerialNumber, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: SerialNumber");
    };
    field__cdg = jsonValue["NumberOfBrakes"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->NumberOfBrakes, field__cdg);
    };
    field__cdg = jsonValue["OnlyIO"];
    if (!field__cdg.empty()) {
        cmnDataJSON<bool >::DeSerializeText(this->OnlyIO, field__cdg);
    };
    field__cdg = jsonValue["HasEncoderPreload"];
    if (!field__cdg.empty()) {
        cmnDataJSON<bool >::DeSerializeText(this->HasEncoderPreload, field__cdg);
    };
    field__cdg = jsonValue["Actuators"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::vector<osaActuator1394Configuration> >::DeSerializeText(this->Actuators, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::vector<osaActuator1394Configuration>>::DeSerializeText: empty JSON value for: Actuators");
    };
    field__cdg = jsonValue["PotTolerances"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::vector<osaPotTolerance1394Configuration> >::DeSerializeText(this->PotTolerances, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::vector<osaPotTolerance1394Configuration>>::DeSerializeText: empty JSON value for: PotTolerances");
    };
    field__cdg = jsonValue["PotCoupling"];
    if (!field__cdg.empty()) {
        cmnDataJSON<prmActuatorJointCoupling >::DeSerializeText(this->PotCoupling, field__cdg);
    } else {
        cmnThrow("cmnDataJson<prmActuatorJointCoupling>::DeSerializeText: empty JSON value for: PotCoupling");
    };
}
#endif // CISST_HAS_JSON

/* source line: 381 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaDigitalInput1394ConfigurationProxy);

sawRobotIO1394::osaDigitalInput1394Configuration::osaDigitalInput1394Configuration(void):
    Name()
    , BoardID()
    , BitID()
    , TriggerWhenPressed()
    , TriggerWhenReleased()
    , PressedValue()
    , SkipFirstRun(false)
    , DebounceThreshold()
    , DebounceThresholdClick()
{}

sawRobotIO1394::osaDigitalInput1394Configuration::osaDigitalInput1394Configuration(const osaDigitalInput1394Configuration & other):
    Name(other.Name)
    , BoardID(other.BoardID)
    , BitID(other.BitID)
    , TriggerWhenPressed(other.TriggerWhenPressed)
    , TriggerWhenReleased(other.TriggerWhenReleased)
    , PressedValue(other.PressedValue)
    , SkipFirstRun(other.SkipFirstRun)
    , DebounceThreshold(other.DebounceThreshold)
    , DebounceThresholdClick(other.DebounceThresholdClick)
{}

sawRobotIO1394::osaDigitalInput1394Configuration & sawRobotIO1394::osaDigitalInput1394Configuration::operator = (const osaDigitalInput1394Configuration & other)
{
    Name = other.Name;
    BoardID = other.BoardID;
    BitID = other.BitID;
    TriggerWhenPressed = other.TriggerWhenPressed;
    TriggerWhenReleased = other.TriggerWhenReleased;
    PressedValue = other.PressedValue;
    SkipFirstRun = other.SkipFirstRun;
    DebounceThreshold = other.DebounceThreshold;
    DebounceThresholdClick = other.DebounceThresholdClick;
    return *this;
}

sawRobotIO1394::osaDigitalInput1394Configuration::~osaDigitalInput1394Configuration(void){}


void sawRobotIO1394::osaDigitalInput1394Configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->Name);
    cmnSerializeRaw(outputStream__cdg, this->BoardID);
    cmnSerializeRaw(outputStream__cdg, this->BitID);
    cmnSerializeRaw(outputStream__cdg, this->TriggerWhenPressed);
    cmnSerializeRaw(outputStream__cdg, this->TriggerWhenReleased);
    cmnSerializeRaw(outputStream__cdg, this->PressedValue);
    cmnSerializeRaw(outputStream__cdg, this->SkipFirstRun);
    cmnSerializeRaw(outputStream__cdg, this->DebounceThreshold);
    cmnSerializeRaw(outputStream__cdg, this->DebounceThresholdClick);
}


void sawRobotIO1394::osaDigitalInput1394Configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->Name);
    cmnDeSerializeRaw(inputStream__cdg, this->BoardID);
    cmnDeSerializeRaw(inputStream__cdg, this->BitID);
    cmnDeSerializeRaw(inputStream__cdg, this->TriggerWhenPressed);
    cmnDeSerializeRaw(inputStream__cdg, this->TriggerWhenReleased);
    cmnDeSerializeRaw(inputStream__cdg, this->PressedValue);
    cmnDeSerializeRaw(inputStream__cdg, this->SkipFirstRun);
    cmnDeSerializeRaw(inputStream__cdg, this->DebounceThreshold);
    cmnDeSerializeRaw(inputStream__cdg, this->DebounceThresholdClick);
}


void sawRobotIO1394::osaDigitalInput1394Configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaDigitalInput1394Configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaDigitalInput1394Configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaDigitalInput1394Configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 385 */
/* source line: 390 */
/* source line: 395 */
/* source line: 400 */
/* source line: 405 */
/* source line: 410 */
/* source line: 415 */
/* source line: 421 */
/* source line: 426 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaDigitalInput1394Configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaDigitalInput1394Configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaDigitalInput1394Configuration::Copy(const sawRobotIO1394::osaDigitalInput1394Configuration & source__cdg) {
    cmnData<std::string >::Copy(this->Name, source__cdg.Name);
    cmnData<int >::Copy(this->BoardID, source__cdg.BoardID);
    cmnData<int >::Copy(this->BitID, source__cdg.BitID);
    cmnData<bool >::Copy(this->TriggerWhenPressed, source__cdg.TriggerWhenPressed);
    cmnData<bool >::Copy(this->TriggerWhenReleased, source__cdg.TriggerWhenReleased);
    cmnData<bool >::Copy(this->PressedValue, source__cdg.PressedValue);
    cmnData<bool >::Copy(this->SkipFirstRun, source__cdg.SkipFirstRun);
    cmnData<double >::Copy(this->DebounceThreshold, source__cdg.DebounceThreshold);
    cmnData<double >::Copy(this->DebounceThresholdClick, source__cdg.DebounceThresholdClick);
}
void sawRobotIO1394::osaDigitalInput1394Configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->Name, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->BoardID, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->BitID, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->TriggerWhenPressed, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->TriggerWhenReleased, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->PressedValue, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->SkipFirstRun, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->DebounceThreshold, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->DebounceThresholdClick, outputStream__cdg);
}
void sawRobotIO1394::osaDigitalInput1394Configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->Name, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->BoardID, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->BitID, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->TriggerWhenPressed, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->TriggerWhenReleased, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->PressedValue, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->SkipFirstRun, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->DebounceThreshold, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->DebounceThresholdClick, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaDigitalInput1394Configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->Name, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->BoardID, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->BitID, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->TriggerWhenPressed, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->TriggerWhenReleased, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->PressedValue, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->SkipFirstRun, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->DebounceThreshold, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->DebounceThresholdClick, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaDigitalInput1394Configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->Name, delimiter__cdg, prefix__cdg + "Name");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->BoardID, delimiter__cdg, prefix__cdg + "BoardID");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->BitID, delimiter__cdg, prefix__cdg + "BitID");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->TriggerWhenPressed, delimiter__cdg, prefix__cdg + "TriggerWhenPressed");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->TriggerWhenReleased, delimiter__cdg, prefix__cdg + "TriggerWhenReleased");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->PressedValue, delimiter__cdg, prefix__cdg + "PressedValue");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->SkipFirstRun, delimiter__cdg, prefix__cdg + "SkipFirstRun");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->DebounceThreshold, delimiter__cdg, prefix__cdg + "DebounceThreshold");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->DebounceThresholdClick, delimiter__cdg, prefix__cdg + "DebounceThresholdClick");
    return description__cdg.str();
}
void sawRobotIO1394::osaDigitalInput1394Configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalInput1394Configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->Name, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalInput1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->BoardID, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalInput1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->BitID, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalInput1394Configuration");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->TriggerWhenPressed, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalInput1394Configuration");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->TriggerWhenReleased, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalInput1394Configuration");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->PressedValue, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalInput1394Configuration");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->SkipFirstRun, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalInput1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->DebounceThreshold, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalInput1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->DebounceThresholdClick, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaDigitalInput1394Configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaDigitalInput1394Configuration" << std::endl;
    description__cdg << "  Name:" << cmnData<std::string >::HumanReadable(this->Name);
    description__cdg << "  BoardID:" << cmnData<int >::HumanReadable(this->BoardID);
    description__cdg << "  BitID:" << cmnData<int >::HumanReadable(this->BitID);
    description__cdg << "  TriggerWhenPressed:" << cmnData<bool >::HumanReadable(this->TriggerWhenPressed);
    description__cdg << "  TriggerWhenReleased:" << cmnData<bool >::HumanReadable(this->TriggerWhenReleased);
    description__cdg << "  PressedValue:" << cmnData<bool >::HumanReadable(this->PressedValue);
    description__cdg << "  SkipFirstRun:" << cmnData<bool >::HumanReadable(this->SkipFirstRun);
    description__cdg << "  DebounceThreshold:" << cmnData<double >::HumanReadable(this->DebounceThreshold);
    description__cdg << "  DebounceThresholdClick:" << cmnData<double >::HumanReadable(this->DebounceThresholdClick);
    return description__cdg.str();
}
bool sawRobotIO1394::osaDigitalInput1394Configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->Name)
           && cmnData<int >::ScalarNumberIsFixed(this->BoardID)
           && cmnData<int >::ScalarNumberIsFixed(this->BitID)
           && cmnData<bool >::ScalarNumberIsFixed(this->TriggerWhenPressed)
           && cmnData<bool >::ScalarNumberIsFixed(this->TriggerWhenReleased)
           && cmnData<bool >::ScalarNumberIsFixed(this->PressedValue)
           && cmnData<bool >::ScalarNumberIsFixed(this->SkipFirstRun)
           && cmnData<double >::ScalarNumberIsFixed(this->DebounceThreshold)
           && cmnData<double >::ScalarNumberIsFixed(this->DebounceThresholdClick)
    ;
}
size_t sawRobotIO1394::osaDigitalInput1394Configuration::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->Name)
           + cmnData<int >::ScalarNumber(this->BoardID)
           + cmnData<int >::ScalarNumber(this->BitID)
           + cmnData<bool >::ScalarNumber(this->TriggerWhenPressed)
           + cmnData<bool >::ScalarNumber(this->TriggerWhenReleased)
           + cmnData<bool >::ScalarNumber(this->PressedValue)
           + cmnData<bool >::ScalarNumber(this->SkipFirstRun)
           + cmnData<double >::ScalarNumber(this->DebounceThreshold)
           + cmnData<double >::ScalarNumber(this->DebounceThresholdClick)
    ;
}
std::string sawRobotIO1394::osaDigitalInput1394Configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->Name, index_cdg - baseIndex__cdg, prefix__cdg + "Name");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BoardID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->BoardID, index_cdg - baseIndex__cdg, prefix__cdg + "BoardID");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BitID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->BitID, index_cdg - baseIndex__cdg, prefix__cdg + "BitID");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->TriggerWhenPressed);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->TriggerWhenPressed, index_cdg - baseIndex__cdg, prefix__cdg + "TriggerWhenPressed");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->TriggerWhenReleased);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->TriggerWhenReleased, index_cdg - baseIndex__cdg, prefix__cdg + "TriggerWhenReleased");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->PressedValue);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->PressedValue, index_cdg - baseIndex__cdg, prefix__cdg + "PressedValue");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->SkipFirstRun);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->SkipFirstRun, index_cdg - baseIndex__cdg, prefix__cdg + "SkipFirstRun");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->DebounceThreshold);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->DebounceThreshold, index_cdg - baseIndex__cdg, prefix__cdg + "DebounceThreshold");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->DebounceThresholdClick);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->DebounceThresholdClick, index_cdg - baseIndex__cdg, prefix__cdg + "DebounceThresholdClick");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaDigitalInput1394Configuration index out of range"));
    return "";
}
double sawRobotIO1394::osaDigitalInput1394Configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->Name, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BoardID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->BoardID, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BitID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->BitID, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->TriggerWhenPressed);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->TriggerWhenPressed, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->TriggerWhenReleased);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->TriggerWhenReleased, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->PressedValue);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->PressedValue, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->SkipFirstRun);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->SkipFirstRun, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->DebounceThreshold);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->DebounceThreshold, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->DebounceThresholdClick);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->DebounceThresholdClick, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaDigitalInput1394Configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaDigitalInput1394Configuration >::SerializeText(const sawRobotIO1394::osaDigitalInput1394Configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaDigitalInput1394Configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<int >::SerializeText(this->BoardID, jsonValue["BoardID"]);
    cmnDataJSON<int >::SerializeText(this->BitID, jsonValue["BitID"]);
    cmnDataJSON<bool >::SerializeText(this->TriggerWhenPressed, jsonValue["TriggerWhenPressed"]);
    cmnDataJSON<bool >::SerializeText(this->TriggerWhenReleased, jsonValue["TriggerWhenReleased"]);
    cmnDataJSON<bool >::SerializeText(this->PressedValue, jsonValue["PressedValue"]);
    cmnDataJSON<bool >::SerializeText(this->SkipFirstRun, jsonValue["SkipFirstRun"]);
    cmnDataJSON<double >::SerializeText(this->DebounceThreshold, jsonValue["DebounceThreshold"]);
    cmnDataJSON<double >::SerializeText(this->DebounceThresholdClick, jsonValue["DebounceThresholdClick"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaDigitalInput1394Configuration >::DeSerializeText(sawRobotIO1394::osaDigitalInput1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaDigitalInput1394Configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["Name"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->Name, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: Name");
    };
    field__cdg = jsonValue["BoardID"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->BoardID, field__cdg);
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: BoardID");
    };
    field__cdg = jsonValue["BitID"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->BitID, field__cdg);
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: BitID");
    };
    field__cdg = jsonValue["TriggerWhenPressed"];
    if (!field__cdg.empty()) {
        cmnDataJSON<bool >::DeSerializeText(this->TriggerWhenPressed, field__cdg);
    } else {
        cmnThrow("cmnDataJson<bool>::DeSerializeText: empty JSON value for: TriggerWhenPressed");
    };
    field__cdg = jsonValue["TriggerWhenReleased"];
    if (!field__cdg.empty()) {
        cmnDataJSON<bool >::DeSerializeText(this->TriggerWhenReleased, field__cdg);
    } else {
        cmnThrow("cmnDataJson<bool>::DeSerializeText: empty JSON value for: TriggerWhenReleased");
    };
    field__cdg = jsonValue["PressedValue"];
    if (!field__cdg.empty()) {
        cmnDataJSON<bool >::DeSerializeText(this->PressedValue, field__cdg);
    } else {
        cmnThrow("cmnDataJson<bool>::DeSerializeText: empty JSON value for: PressedValue");
    };
    field__cdg = jsonValue["SkipFirstRun"];
    if (!field__cdg.empty()) {
        cmnDataJSON<bool >::DeSerializeText(this->SkipFirstRun, field__cdg);
    };
    field__cdg = jsonValue["DebounceThreshold"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->DebounceThreshold, field__cdg);
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: DebounceThreshold");
    };
    field__cdg = jsonValue["DebounceThresholdClick"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->DebounceThresholdClick, field__cdg);
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: DebounceThresholdClick");
    };
}
#endif // CISST_HAS_JSON

/* source line: 433 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaDigitalOutput1394ConfigurationProxy);

sawRobotIO1394::osaDigitalOutput1394Configuration::osaDigitalOutput1394Configuration(void):
    Name()
    , BoardID()
    , BitID()
    , HighDuration()
    , LowDuration()
    , IsPWM()
    , PWMFrequency()
{}

sawRobotIO1394::osaDigitalOutput1394Configuration::osaDigitalOutput1394Configuration(const osaDigitalOutput1394Configuration & other):
    Name(other.Name)
    , BoardID(other.BoardID)
    , BitID(other.BitID)
    , HighDuration(other.HighDuration)
    , LowDuration(other.LowDuration)
    , IsPWM(other.IsPWM)
    , PWMFrequency(other.PWMFrequency)
{}

sawRobotIO1394::osaDigitalOutput1394Configuration & sawRobotIO1394::osaDigitalOutput1394Configuration::operator = (const osaDigitalOutput1394Configuration & other)
{
    Name = other.Name;
    BoardID = other.BoardID;
    BitID = other.BitID;
    HighDuration = other.HighDuration;
    LowDuration = other.LowDuration;
    IsPWM = other.IsPWM;
    PWMFrequency = other.PWMFrequency;
    return *this;
}

sawRobotIO1394::osaDigitalOutput1394Configuration::~osaDigitalOutput1394Configuration(void){}


void sawRobotIO1394::osaDigitalOutput1394Configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->Name);
    cmnSerializeRaw(outputStream__cdg, this->BoardID);
    cmnSerializeRaw(outputStream__cdg, this->BitID);
    cmnSerializeRaw(outputStream__cdg, this->HighDuration);
    cmnSerializeRaw(outputStream__cdg, this->LowDuration);
    cmnSerializeRaw(outputStream__cdg, this->IsPWM);
    cmnSerializeRaw(outputStream__cdg, this->PWMFrequency);
}


void sawRobotIO1394::osaDigitalOutput1394Configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->Name);
    cmnDeSerializeRaw(inputStream__cdg, this->BoardID);
    cmnDeSerializeRaw(inputStream__cdg, this->BitID);
    cmnDeSerializeRaw(inputStream__cdg, this->HighDuration);
    cmnDeSerializeRaw(inputStream__cdg, this->LowDuration);
    cmnDeSerializeRaw(inputStream__cdg, this->IsPWM);
    cmnDeSerializeRaw(inputStream__cdg, this->PWMFrequency);
}


void sawRobotIO1394::osaDigitalOutput1394Configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaDigitalOutput1394Configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaDigitalOutput1394Configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaDigitalOutput1394Configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 437 */
/* source line: 442 */
/* source line: 447 */
/* source line: 452 */
/* source line: 457 */
/* source line: 462 */
/* source line: 467 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaDigitalOutput1394Configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaDigitalOutput1394Configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaDigitalOutput1394Configuration::Copy(const sawRobotIO1394::osaDigitalOutput1394Configuration & source__cdg) {
    cmnData<std::string >::Copy(this->Name, source__cdg.Name);
    cmnData<int >::Copy(this->BoardID, source__cdg.BoardID);
    cmnData<int >::Copy(this->BitID, source__cdg.BitID);
    cmnData<double >::Copy(this->HighDuration, source__cdg.HighDuration);
    cmnData<double >::Copy(this->LowDuration, source__cdg.LowDuration);
    cmnData<bool >::Copy(this->IsPWM, source__cdg.IsPWM);
    cmnData<double >::Copy(this->PWMFrequency, source__cdg.PWMFrequency);
}
void sawRobotIO1394::osaDigitalOutput1394Configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->Name, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->BoardID, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->BitID, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->HighDuration, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->LowDuration, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->IsPWM, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->PWMFrequency, outputStream__cdg);
}
void sawRobotIO1394::osaDigitalOutput1394Configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->Name, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->BoardID, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->BitID, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->HighDuration, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->LowDuration, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->IsPWM, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->PWMFrequency, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaDigitalOutput1394Configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->Name, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->BoardID, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->BitID, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->HighDuration, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->LowDuration, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->IsPWM, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->PWMFrequency, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaDigitalOutput1394Configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->Name, delimiter__cdg, prefix__cdg + "Name");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->BoardID, delimiter__cdg, prefix__cdg + "BoardID");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->BitID, delimiter__cdg, prefix__cdg + "BitID");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->HighDuration, delimiter__cdg, prefix__cdg + "HighDuration");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->LowDuration, delimiter__cdg, prefix__cdg + "LowDuration");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->IsPWM, delimiter__cdg, prefix__cdg + "IsPWM");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->PWMFrequency, delimiter__cdg, prefix__cdg + "PWMFrequency");
    return description__cdg.str();
}
void sawRobotIO1394::osaDigitalOutput1394Configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalOutput1394Configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->Name, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalOutput1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->BoardID, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalOutput1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->BitID, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalOutput1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->HighDuration, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalOutput1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->LowDuration, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalOutput1394Configuration");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->IsPWM, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDigitalOutput1394Configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->PWMFrequency, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaDigitalOutput1394Configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaDigitalOutput1394Configuration" << std::endl;
    description__cdg << "  Name:" << cmnData<std::string >::HumanReadable(this->Name);
    description__cdg << "  BoardID:" << cmnData<int >::HumanReadable(this->BoardID);
    description__cdg << "  BitID:" << cmnData<int >::HumanReadable(this->BitID);
    description__cdg << "  HighDuration:" << cmnData<double >::HumanReadable(this->HighDuration);
    description__cdg << "  LowDuration:" << cmnData<double >::HumanReadable(this->LowDuration);
    description__cdg << "  IsPWM:" << cmnData<bool >::HumanReadable(this->IsPWM);
    description__cdg << "  PWMFrequency:" << cmnData<double >::HumanReadable(this->PWMFrequency);
    return description__cdg.str();
}
bool sawRobotIO1394::osaDigitalOutput1394Configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->Name)
           && cmnData<int >::ScalarNumberIsFixed(this->BoardID)
           && cmnData<int >::ScalarNumberIsFixed(this->BitID)
           && cmnData<double >::ScalarNumberIsFixed(this->HighDuration)
           && cmnData<double >::ScalarNumberIsFixed(this->LowDuration)
           && cmnData<bool >::ScalarNumberIsFixed(this->IsPWM)
           && cmnData<double >::ScalarNumberIsFixed(this->PWMFrequency)
    ;
}
size_t sawRobotIO1394::osaDigitalOutput1394Configuration::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->Name)
           + cmnData<int >::ScalarNumber(this->BoardID)
           + cmnData<int >::ScalarNumber(this->BitID)
           + cmnData<double >::ScalarNumber(this->HighDuration)
           + cmnData<double >::ScalarNumber(this->LowDuration)
           + cmnData<bool >::ScalarNumber(this->IsPWM)
           + cmnData<double >::ScalarNumber(this->PWMFrequency)
    ;
}
std::string sawRobotIO1394::osaDigitalOutput1394Configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->Name, index_cdg - baseIndex__cdg, prefix__cdg + "Name");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BoardID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->BoardID, index_cdg - baseIndex__cdg, prefix__cdg + "BoardID");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BitID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->BitID, index_cdg - baseIndex__cdg, prefix__cdg + "BitID");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->HighDuration);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->HighDuration, index_cdg - baseIndex__cdg, prefix__cdg + "HighDuration");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->LowDuration);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->LowDuration, index_cdg - baseIndex__cdg, prefix__cdg + "LowDuration");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->IsPWM);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->IsPWM, index_cdg - baseIndex__cdg, prefix__cdg + "IsPWM");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->PWMFrequency);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->PWMFrequency, index_cdg - baseIndex__cdg, prefix__cdg + "PWMFrequency");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaDigitalOutput1394Configuration index out of range"));
    return "";
}
double sawRobotIO1394::osaDigitalOutput1394Configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->Name, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BoardID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->BoardID, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BitID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->BitID, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->HighDuration);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->HighDuration, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->LowDuration);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->LowDuration, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->IsPWM);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->IsPWM, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->PWMFrequency);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->PWMFrequency, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaDigitalOutput1394Configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaDigitalOutput1394Configuration >::SerializeText(const sawRobotIO1394::osaDigitalOutput1394Configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaDigitalOutput1394Configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<int >::SerializeText(this->BoardID, jsonValue["BoardID"]);
    cmnDataJSON<int >::SerializeText(this->BitID, jsonValue["BitID"]);
    cmnDataJSON<double >::SerializeText(this->HighDuration, jsonValue["HighDuration"]);
    cmnDataJSON<double >::SerializeText(this->LowDuration, jsonValue["LowDuration"]);
    cmnDataJSON<bool >::SerializeText(this->IsPWM, jsonValue["IsPWM"]);
    cmnDataJSON<double >::SerializeText(this->PWMFrequency, jsonValue["PWMFrequency"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaDigitalOutput1394Configuration >::DeSerializeText(sawRobotIO1394::osaDigitalOutput1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaDigitalOutput1394Configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["Name"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->Name, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: Name");
    };
    field__cdg = jsonValue["BoardID"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->BoardID, field__cdg);
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: BoardID");
    };
    field__cdg = jsonValue["BitID"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->BitID, field__cdg);
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: BitID");
    };
    field__cdg = jsonValue["HighDuration"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->HighDuration, field__cdg);
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: HighDuration");
    };
    field__cdg = jsonValue["LowDuration"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->LowDuration, field__cdg);
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: LowDuration");
    };
    field__cdg = jsonValue["IsPWM"];
    if (!field__cdg.empty()) {
        cmnDataJSON<bool >::DeSerializeText(this->IsPWM, field__cdg);
    } else {
        cmnThrow("cmnDataJson<bool>::DeSerializeText: empty JSON value for: IsPWM");
    };
    field__cdg = jsonValue["PWMFrequency"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->PWMFrequency, field__cdg);
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: PWMFrequency");
    };
}
#endif // CISST_HAS_JSON

/* source line: 474 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaDallasChip1394ConfigurationProxy);

sawRobotIO1394::osaDallasChip1394Configuration::osaDallasChip1394Configuration(void):
    Name()
    , BoardID()
{}

sawRobotIO1394::osaDallasChip1394Configuration::osaDallasChip1394Configuration(const osaDallasChip1394Configuration & other):
    Name(other.Name)
    , BoardID(other.BoardID)
{}

sawRobotIO1394::osaDallasChip1394Configuration & sawRobotIO1394::osaDallasChip1394Configuration::operator = (const osaDallasChip1394Configuration & other)
{
    Name = other.Name;
    BoardID = other.BoardID;
    return *this;
}

sawRobotIO1394::osaDallasChip1394Configuration::~osaDallasChip1394Configuration(void){}


void sawRobotIO1394::osaDallasChip1394Configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->Name);
    cmnSerializeRaw(outputStream__cdg, this->BoardID);
}


void sawRobotIO1394::osaDallasChip1394Configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->Name);
    cmnDeSerializeRaw(inputStream__cdg, this->BoardID);
}


void sawRobotIO1394::osaDallasChip1394Configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaDallasChip1394Configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaDallasChip1394Configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaDallasChip1394Configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 478 */
/* source line: 483 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaDallasChip1394Configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaDallasChip1394Configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaDallasChip1394Configuration::Copy(const sawRobotIO1394::osaDallasChip1394Configuration & source__cdg) {
    cmnData<std::string >::Copy(this->Name, source__cdg.Name);
    cmnData<int >::Copy(this->BoardID, source__cdg.BoardID);
}
void sawRobotIO1394::osaDallasChip1394Configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->Name, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->BoardID, outputStream__cdg);
}
void sawRobotIO1394::osaDallasChip1394Configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->Name, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->BoardID, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaDallasChip1394Configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->Name, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->BoardID, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaDallasChip1394Configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->Name, delimiter__cdg, prefix__cdg + "Name");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->BoardID, delimiter__cdg, prefix__cdg + "BoardID");
    return description__cdg.str();
}
void sawRobotIO1394::osaDallasChip1394Configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDallasChip1394Configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->Name, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaDallasChip1394Configuration");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->BoardID, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaDallasChip1394Configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaDallasChip1394Configuration" << std::endl;
    description__cdg << "  Name:" << cmnData<std::string >::HumanReadable(this->Name);
    description__cdg << "  BoardID:" << cmnData<int >::HumanReadable(this->BoardID);
    return description__cdg.str();
}
bool sawRobotIO1394::osaDallasChip1394Configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->Name)
           && cmnData<int >::ScalarNumberIsFixed(this->BoardID)
    ;
}
size_t sawRobotIO1394::osaDallasChip1394Configuration::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->Name)
           + cmnData<int >::ScalarNumber(this->BoardID)
    ;
}
std::string sawRobotIO1394::osaDallasChip1394Configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->Name, index_cdg - baseIndex__cdg, prefix__cdg + "Name");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BoardID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->BoardID, index_cdg - baseIndex__cdg, prefix__cdg + "BoardID");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaDallasChip1394Configuration index out of range"));
    return "";
}
double sawRobotIO1394::osaDallasChip1394Configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->Name, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BoardID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->BoardID, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaDallasChip1394Configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaDallasChip1394Configuration >::SerializeText(const sawRobotIO1394::osaDallasChip1394Configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaDallasChip1394Configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<int >::SerializeText(this->BoardID, jsonValue["BoardID"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaDallasChip1394Configuration >::DeSerializeText(sawRobotIO1394::osaDallasChip1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaDallasChip1394Configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["Name"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->Name, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: Name");
    };
    field__cdg = jsonValue["BoardID"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->BoardID, field__cdg);
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: BoardID");
    };
}
#endif // CISST_HAS_JSON

/* source line: 490 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaPort1394ConfigurationProxy);

sawRobotIO1394::osaPort1394Configuration::osaPort1394Configuration(void):
    Robots()
    , DigitalInputs()
    , DigitalOutputs()
    , DallasChips()
{}

sawRobotIO1394::osaPort1394Configuration::osaPort1394Configuration(const osaPort1394Configuration & other):
    Robots(other.Robots)
    , DigitalInputs(other.DigitalInputs)
    , DigitalOutputs(other.DigitalOutputs)
    , DallasChips(other.DallasChips)
{}

sawRobotIO1394::osaPort1394Configuration & sawRobotIO1394::osaPort1394Configuration::operator = (const osaPort1394Configuration & other)
{
    Robots = other.Robots;
    DigitalInputs = other.DigitalInputs;
    DigitalOutputs = other.DigitalOutputs;
    DallasChips = other.DallasChips;
    return *this;
}

sawRobotIO1394::osaPort1394Configuration::~osaPort1394Configuration(void){}


void sawRobotIO1394::osaPort1394Configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->Robots);
    cmnSerializeRaw(outputStream__cdg, this->DigitalInputs);
    cmnSerializeRaw(outputStream__cdg, this->DigitalOutputs);
    cmnSerializeRaw(outputStream__cdg, this->DallasChips);
}


void sawRobotIO1394::osaPort1394Configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->Robots);
    cmnDeSerializeRaw(inputStream__cdg, this->DigitalInputs);
    cmnDeSerializeRaw(inputStream__cdg, this->DigitalOutputs);
    cmnDeSerializeRaw(inputStream__cdg, this->DallasChips);
}


void sawRobotIO1394::osaPort1394Configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaPort1394Configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaPort1394Configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaPort1394Configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 494 */
/* source line: 499 */
/* source line: 504 */
/* source line: 509 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaPort1394Configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaPort1394Configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaPort1394Configuration::Copy(const sawRobotIO1394::osaPort1394Configuration & source__cdg) {
    cmnData<std::vector<osaRobot1394Configuration> >::Copy(this->Robots, source__cdg.Robots);
    cmnData<std::vector<osaDigitalInput1394Configuration> >::Copy(this->DigitalInputs, source__cdg.DigitalInputs);
    cmnData<std::vector<osaDigitalOutput1394Configuration> >::Copy(this->DigitalOutputs, source__cdg.DigitalOutputs);
    cmnData<std::vector<osaDallasChip1394Configuration> >::Copy(this->DallasChips, source__cdg.DallasChips);
}
void sawRobotIO1394::osaPort1394Configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::vector<osaRobot1394Configuration> >::SerializeBinary(this->Robots, outputStream__cdg);
    cmnData<std::vector<osaDigitalInput1394Configuration> >::SerializeBinary(this->DigitalInputs, outputStream__cdg);
    cmnData<std::vector<osaDigitalOutput1394Configuration> >::SerializeBinary(this->DigitalOutputs, outputStream__cdg);
    cmnData<std::vector<osaDallasChip1394Configuration> >::SerializeBinary(this->DallasChips, outputStream__cdg);
}
void sawRobotIO1394::osaPort1394Configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::vector<osaRobot1394Configuration> >::DeSerializeBinary(this->Robots, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::vector<osaDigitalInput1394Configuration> >::DeSerializeBinary(this->DigitalInputs, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::vector<osaDigitalOutput1394Configuration> >::DeSerializeBinary(this->DigitalOutputs, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::vector<osaDallasChip1394Configuration> >::DeSerializeBinary(this->DallasChips, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaPort1394Configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::vector<osaRobot1394Configuration> >::SerializeText(this->Robots, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::vector<osaDigitalInput1394Configuration> >::SerializeText(this->DigitalInputs, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::vector<osaDigitalOutput1394Configuration> >::SerializeText(this->DigitalOutputs, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::vector<osaDallasChip1394Configuration> >::SerializeText(this->DallasChips, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaPort1394Configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::vector<osaRobot1394Configuration> >::SerializeDescription(this->Robots, delimiter__cdg, prefix__cdg + "Robots");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::vector<osaDigitalInput1394Configuration> >::SerializeDescription(this->DigitalInputs, delimiter__cdg, prefix__cdg + "DigitalInputs");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::vector<osaDigitalOutput1394Configuration> >::SerializeDescription(this->DigitalOutputs, delimiter__cdg, prefix__cdg + "DigitalOutputs");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::vector<osaDallasChip1394Configuration> >::SerializeDescription(this->DallasChips, delimiter__cdg, prefix__cdg + "DallasChips");
    return description__cdg.str();
}
void sawRobotIO1394::osaPort1394Configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaPort1394Configuration");
    }
    someData__cdg = true;
    cmnData<std::vector<osaRobot1394Configuration> >::DeSerializeText(this->Robots, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaPort1394Configuration");
    }
    someData__cdg = true;
    cmnData<std::vector<osaDigitalInput1394Configuration> >::DeSerializeText(this->DigitalInputs, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaPort1394Configuration");
    }
    someData__cdg = true;
    cmnData<std::vector<osaDigitalOutput1394Configuration> >::DeSerializeText(this->DigitalOutputs, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaPort1394Configuration");
    }
    someData__cdg = true;
    cmnData<std::vector<osaDallasChip1394Configuration> >::DeSerializeText(this->DallasChips, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaPort1394Configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaPort1394Configuration" << std::endl;
    description__cdg << "  Robots:" << cmnData<std::vector<osaRobot1394Configuration> >::HumanReadable(this->Robots);
    description__cdg << "  DigitalInputs:" << cmnData<std::vector<osaDigitalInput1394Configuration> >::HumanReadable(this->DigitalInputs);
    description__cdg << "  DigitalOutputs:" << cmnData<std::vector<osaDigitalOutput1394Configuration> >::HumanReadable(this->DigitalOutputs);
    description__cdg << "  DallasChips:" << cmnData<std::vector<osaDallasChip1394Configuration> >::HumanReadable(this->DallasChips);
    return description__cdg.str();
}
bool sawRobotIO1394::osaPort1394Configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::vector<osaRobot1394Configuration> >::ScalarNumberIsFixed(this->Robots)
           && cmnData<std::vector<osaDigitalInput1394Configuration> >::ScalarNumberIsFixed(this->DigitalInputs)
           && cmnData<std::vector<osaDigitalOutput1394Configuration> >::ScalarNumberIsFixed(this->DigitalOutputs)
           && cmnData<std::vector<osaDallasChip1394Configuration> >::ScalarNumberIsFixed(this->DallasChips)
    ;
}
size_t sawRobotIO1394::osaPort1394Configuration::ScalarNumber(void) const {
    return 0
           + cmnData<std::vector<osaRobot1394Configuration> >::ScalarNumber(this->Robots)
           + cmnData<std::vector<osaDigitalInput1394Configuration> >::ScalarNumber(this->DigitalInputs)
           + cmnData<std::vector<osaDigitalOutput1394Configuration> >::ScalarNumber(this->DigitalOutputs)
           + cmnData<std::vector<osaDallasChip1394Configuration> >::ScalarNumber(this->DallasChips)
    ;
}
std::string sawRobotIO1394::osaPort1394Configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::vector<osaRobot1394Configuration> >::ScalarNumber(this->Robots);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaRobot1394Configuration> >::ScalarDescription(this->Robots, index_cdg - baseIndex__cdg, prefix__cdg + "Robots");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<osaDigitalInput1394Configuration> >::ScalarNumber(this->DigitalInputs);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaDigitalInput1394Configuration> >::ScalarDescription(this->DigitalInputs, index_cdg - baseIndex__cdg, prefix__cdg + "DigitalInputs");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<osaDigitalOutput1394Configuration> >::ScalarNumber(this->DigitalOutputs);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaDigitalOutput1394Configuration> >::ScalarDescription(this->DigitalOutputs, index_cdg - baseIndex__cdg, prefix__cdg + "DigitalOutputs");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<osaDallasChip1394Configuration> >::ScalarNumber(this->DallasChips);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaDallasChip1394Configuration> >::ScalarDescription(this->DallasChips, index_cdg - baseIndex__cdg, prefix__cdg + "DallasChips");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaPort1394Configuration index out of range"));
    return "";
}
double sawRobotIO1394::osaPort1394Configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::vector<osaRobot1394Configuration> >::ScalarNumber(this->Robots);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaRobot1394Configuration> >::Scalar(this->Robots, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<osaDigitalInput1394Configuration> >::ScalarNumber(this->DigitalInputs);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaDigitalInput1394Configuration> >::Scalar(this->DigitalInputs, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<osaDigitalOutput1394Configuration> >::ScalarNumber(this->DigitalOutputs);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaDigitalOutput1394Configuration> >::Scalar(this->DigitalOutputs, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<osaDallasChip1394Configuration> >::ScalarNumber(this->DallasChips);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<osaDallasChip1394Configuration> >::Scalar(this->DallasChips, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaPort1394Configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaPort1394Configuration >::SerializeText(const sawRobotIO1394::osaPort1394Configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaPort1394Configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::vector<osaRobot1394Configuration> >::SerializeText(this->Robots, jsonValue["Robots"]);
    cmnDataJSON<std::vector<osaDigitalInput1394Configuration> >::SerializeText(this->DigitalInputs, jsonValue["DigitalInputs"]);
    cmnDataJSON<std::vector<osaDigitalOutput1394Configuration> >::SerializeText(this->DigitalOutputs, jsonValue["DigitalOutputs"]);
    cmnDataJSON<std::vector<osaDallasChip1394Configuration> >::SerializeText(this->DallasChips, jsonValue["DallasChips"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaPort1394Configuration >::DeSerializeText(sawRobotIO1394::osaPort1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaPort1394Configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["Robots"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::vector<osaRobot1394Configuration> >::DeSerializeText(this->Robots, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::vector<osaRobot1394Configuration>>::DeSerializeText: empty JSON value for: Robots");
    };
    field__cdg = jsonValue["DigitalInputs"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::vector<osaDigitalInput1394Configuration> >::DeSerializeText(this->DigitalInputs, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::vector<osaDigitalInput1394Configuration>>::DeSerializeText: empty JSON value for: DigitalInputs");
    };
    field__cdg = jsonValue["DigitalOutputs"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::vector<osaDigitalOutput1394Configuration> >::DeSerializeText(this->DigitalOutputs, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::vector<osaDigitalOutput1394Configuration>>::DeSerializeText: empty JSON value for: DigitalOutputs");
    };
    field__cdg = jsonValue["DallasChips"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::vector<osaDallasChip1394Configuration> >::DeSerializeText(this->DallasChips, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::vector<osaDallasChip1394Configuration>>::DeSerializeText: empty JSON value for: DallasChips");
    };
}
#endif // CISST_HAS_JSON

/* source line: 516 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaActuatorMappingProxy);

sawRobotIO1394::osaActuatorMapping::osaActuatorMapping(void):
    Board(nullptr)
    , BoardID()
    , Axis()
{}

sawRobotIO1394::osaActuatorMapping::osaActuatorMapping(const osaActuatorMapping & other):
    Board(other.Board)
    , BoardID(other.BoardID)
    , Axis(other.Axis)
{}

sawRobotIO1394::osaActuatorMapping & sawRobotIO1394::osaActuatorMapping::operator = (const osaActuatorMapping & other)
{
    Board = other.Board;
    BoardID = other.BoardID;
    Axis = other.Axis;
    return *this;
}

sawRobotIO1394::osaActuatorMapping::~osaActuatorMapping(void){}


void sawRobotIO1394::osaActuatorMapping::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->BoardID);
    cmnSerializeRaw(outputStream__cdg, this->Axis);
}


void sawRobotIO1394::osaActuatorMapping::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->BoardID);
    cmnDeSerializeRaw(inputStream__cdg, this->Axis);
}


void sawRobotIO1394::osaActuatorMapping::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaActuatorMapping::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaActuatorMapping >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaActuatorMapping >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 520 */
/* source line: 527 */
/* source line: 532 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaActuatorMapping & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaActuatorMapping & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaActuatorMapping::Copy(const sawRobotIO1394::osaActuatorMapping & source__cdg) {
    cmnData<int >::Copy(this->BoardID, source__cdg.BoardID);
    cmnData<int >::Copy(this->Axis, source__cdg.Axis);
}
void sawRobotIO1394::osaActuatorMapping::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<int >::SerializeBinary(this->BoardID, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->Axis, outputStream__cdg);
}
void sawRobotIO1394::osaActuatorMapping::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<int >::DeSerializeBinary(this->BoardID, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->Axis, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaActuatorMapping::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->BoardID, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->Axis, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaActuatorMapping::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->BoardID, delimiter__cdg, prefix__cdg + "BoardID");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->Axis, delimiter__cdg, prefix__cdg + "Axis");
    return description__cdg.str();
}
void sawRobotIO1394::osaActuatorMapping::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaActuatorMapping");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->BoardID, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaActuatorMapping");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->Axis, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaActuatorMapping::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaActuatorMapping" << std::endl;
    description__cdg << "  BoardID:" << cmnData<int >::HumanReadable(this->BoardID);
    description__cdg << "  Axis:" << cmnData<int >::HumanReadable(this->Axis);
    return description__cdg.str();
}
bool sawRobotIO1394::osaActuatorMapping::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<int >::ScalarNumberIsFixed(this->BoardID)
           && cmnData<int >::ScalarNumberIsFixed(this->Axis)
    ;
}
size_t sawRobotIO1394::osaActuatorMapping::ScalarNumber(void) const {
    return 0
           + cmnData<int >::ScalarNumber(this->BoardID)
           + cmnData<int >::ScalarNumber(this->Axis)
    ;
}
std::string sawRobotIO1394::osaActuatorMapping::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BoardID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->BoardID, index_cdg - baseIndex__cdg, prefix__cdg + "BoardID");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->Axis);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->Axis, index_cdg - baseIndex__cdg, prefix__cdg + "Axis");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaActuatorMapping index out of range"));
    return "";
}
double sawRobotIO1394::osaActuatorMapping::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BoardID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->BoardID, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->Axis);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->Axis, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaActuatorMapping index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaActuatorMapping >::SerializeText(const sawRobotIO1394::osaActuatorMapping & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaActuatorMapping::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<int >::SerializeText(this->BoardID, jsonValue["BoardID"]);
    cmnDataJSON<int >::SerializeText(this->Axis, jsonValue["Axis"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaActuatorMapping >::DeSerializeText(sawRobotIO1394::osaActuatorMapping & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaActuatorMapping::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["BoardID"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->BoardID, field__cdg);
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: BoardID");
    };
    field__cdg = jsonValue["Axis"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->Axis, field__cdg);
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: Axis");
    };
}
#endif // CISST_HAS_JSON

/* source line: 539 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(sawRobotIO1394_osaBrakeMappingProxy);

sawRobotIO1394::osaBrakeMapping::osaBrakeMapping(void):
    Board(nullptr)
    , BoardID()
    , Axis()
{}

sawRobotIO1394::osaBrakeMapping::osaBrakeMapping(const osaBrakeMapping & other):
    Board(other.Board)
    , BoardID(other.BoardID)
    , Axis(other.Axis)
{}

sawRobotIO1394::osaBrakeMapping & sawRobotIO1394::osaBrakeMapping::operator = (const osaBrakeMapping & other)
{
    Board = other.Board;
    BoardID = other.BoardID;
    Axis = other.Axis;
    return *this;
}

sawRobotIO1394::osaBrakeMapping::~osaBrakeMapping(void){}


void sawRobotIO1394::osaBrakeMapping::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->BoardID);
    cmnSerializeRaw(outputStream__cdg, this->Axis);
}


void sawRobotIO1394::osaBrakeMapping::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->BoardID);
    cmnDeSerializeRaw(inputStream__cdg, this->Axis);
}


void sawRobotIO1394::osaBrakeMapping::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void sawRobotIO1394::osaBrakeMapping::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<sawRobotIO1394::osaBrakeMapping >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<sawRobotIO1394::osaBrakeMapping >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 543 */
/* source line: 550 */
/* source line: 555 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaBrakeMapping & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaBrakeMapping & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void sawRobotIO1394::osaBrakeMapping::Copy(const sawRobotIO1394::osaBrakeMapping & source__cdg) {
    cmnData<int >::Copy(this->BoardID, source__cdg.BoardID);
    cmnData<int >::Copy(this->Axis, source__cdg.Axis);
}
void sawRobotIO1394::osaBrakeMapping::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<int >::SerializeBinary(this->BoardID, outputStream__cdg);
    cmnData<int >::SerializeBinary(this->Axis, outputStream__cdg);
}
void sawRobotIO1394::osaBrakeMapping::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<int >::DeSerializeBinary(this->BoardID, inputStream__cdg, localFormat, remoteFormat);
    cmnData<int >::DeSerializeBinary(this->Axis, inputStream__cdg, localFormat, remoteFormat);
}
void sawRobotIO1394::osaBrakeMapping::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->BoardID, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<int >::SerializeText(this->Axis, outputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaBrakeMapping::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->BoardID, delimiter__cdg, prefix__cdg + "BoardID");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<int >::SerializeDescription(this->Axis, delimiter__cdg, prefix__cdg + "Axis");
    return description__cdg.str();
}
void sawRobotIO1394::osaBrakeMapping::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaBrakeMapping");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->BoardID, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "sawRobotIO1394::osaBrakeMapping");
    }
    someData__cdg = true;
    cmnData<int >::DeSerializeText(this->Axis, inputStream__cdg, delimiter__cdg);
}
std::string sawRobotIO1394::osaBrakeMapping::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "sawRobotIO1394::osaBrakeMapping" << std::endl;
    description__cdg << "  BoardID:" << cmnData<int >::HumanReadable(this->BoardID);
    description__cdg << "  Axis:" << cmnData<int >::HumanReadable(this->Axis);
    return description__cdg.str();
}
bool sawRobotIO1394::osaBrakeMapping::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<int >::ScalarNumberIsFixed(this->BoardID)
           && cmnData<int >::ScalarNumberIsFixed(this->Axis)
    ;
}
size_t sawRobotIO1394::osaBrakeMapping::ScalarNumber(void) const {
    return 0
           + cmnData<int >::ScalarNumber(this->BoardID)
           + cmnData<int >::ScalarNumber(this->Axis)
    ;
}
std::string sawRobotIO1394::osaBrakeMapping::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BoardID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->BoardID, index_cdg - baseIndex__cdg, prefix__cdg + "BoardID");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->Axis);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::ScalarDescription(this->Axis, index_cdg - baseIndex__cdg, prefix__cdg + "Axis");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: sawRobotIO1394::osaBrakeMapping index out of range"));
    return "";
}
double sawRobotIO1394::osaBrakeMapping::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->BoardID);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->BoardID, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<int >::ScalarNumber(this->Axis);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<int >::Scalar(this->Axis, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: sawRobotIO1394::osaBrakeMapping index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<sawRobotIO1394::osaBrakeMapping >::SerializeText(const sawRobotIO1394::osaBrakeMapping & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaBrakeMapping::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<int >::SerializeText(this->BoardID, jsonValue["BoardID"]);
    cmnDataJSON<int >::SerializeText(this->Axis, jsonValue["Axis"]);
}
template<>
void cmnDataJSON<sawRobotIO1394::osaBrakeMapping >::DeSerializeText(sawRobotIO1394::osaBrakeMapping & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void sawRobotIO1394::osaBrakeMapping::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["BoardID"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->BoardID, field__cdg);
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: BoardID");
    };
    field__cdg = jsonValue["Axis"];
    if (!field__cdg.empty()) {
        cmnDataJSON<int >::DeSerializeText(this->Axis, field__cdg);
    } else {
        cmnThrow("cmnDataJson<int>::DeSerializeText: empty JSON value for: Axis");
    };
}
#endif // CISST_HAS_JSON

