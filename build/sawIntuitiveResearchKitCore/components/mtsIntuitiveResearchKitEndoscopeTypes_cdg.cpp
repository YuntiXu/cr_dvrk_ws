// file automatically generated, do not modify
// cisst version: 1.3.1
// source file: /home/ytxu/cr_dvrk_ws/src/cisst-saw/sawIntuitiveResearchKit/core/components/code/mtsIntuitiveResearchKitEndoscopeTypes.cdg

#include <sawIntuitiveResearchKit/mtsIntuitiveResearchKitEndoscopeTypes.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 6 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(mtsIntuitiveResearchKitEndoscopeTypesProxy);

mtsIntuitiveResearchKitEndoscopeTypes::mtsIntuitiveResearchKitEndoscopeTypes(void)
{}

mtsIntuitiveResearchKitEndoscopeTypes::mtsIntuitiveResearchKitEndoscopeTypes(const mtsIntuitiveResearchKitEndoscopeTypes & CMN_UNUSED(other))
{}

mtsIntuitiveResearchKitEndoscopeTypes & mtsIntuitiveResearchKitEndoscopeTypes::operator = (const mtsIntuitiveResearchKitEndoscopeTypes & CMN_UNUSED(other))
{
    return *this;
}

mtsIntuitiveResearchKitEndoscopeTypes::~mtsIntuitiveResearchKitEndoscopeTypes(void){}


void mtsIntuitiveResearchKitEndoscopeTypes::SerializeRaw(std::ostream & CMN_UNUSED(outputStream__cdg)) const
{
}


void mtsIntuitiveResearchKitEndoscopeTypes::DeSerializeRaw(std::istream & CMN_UNUSED(inputStream__cdg))
{
}


void mtsIntuitiveResearchKitEndoscopeTypes::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsIntuitiveResearchKitEndoscopeTypes::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsIntuitiveResearchKitEndoscopeTypes >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsIntuitiveResearchKitEndoscopeTypes >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsIntuitiveResearchKitEndoscopeTypes & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsIntuitiveResearchKitEndoscopeTypes & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsIntuitiveResearchKitEndoscopeTypes::Copy(const mtsIntuitiveResearchKitEndoscopeTypes & CMN_UNUSED(source__cdg)) {
}
void mtsIntuitiveResearchKitEndoscopeTypes::SerializeBinary(std::ostream & CMN_UNUSED(outputStream__cdg)) const CISST_THROW(std::runtime_error) {
}
void mtsIntuitiveResearchKitEndoscopeTypes::DeSerializeBinary(std::istream & CMN_UNUSED(inputStream__cdg),
                                            const cmnDataFormat & CMN_UNUSED(localFormat),
                                            const cmnDataFormat & CMN_UNUSED(remoteFormat)) CISST_THROW(std::runtime_error) {
}
void mtsIntuitiveResearchKitEndoscopeTypes::SerializeText(std::ostream & CMN_UNUSED(outputStream__cdg), const char CMN_UNUSED(delimiter__cdg)) const CISST_THROW(std::runtime_error) {
}
std::string mtsIntuitiveResearchKitEndoscopeTypes::SerializeDescription(const char CMN_UNUSED(delimiter__cdg), const std::string & CMN_UNUSED(userDescription__cdg)) const {
    std::stringstream description__cdg;
    return description__cdg.str();
}
void mtsIntuitiveResearchKitEndoscopeTypes::DeSerializeText(std::istream & CMN_UNUSED(inputStream__cdg),
                                          const char CMN_UNUSED(delimiter__cdg)) CISST_THROW(std::runtime_error) {
}
std::string mtsIntuitiveResearchKitEndoscopeTypes::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsIntuitiveResearchKitEndoscopeTypes" << std::endl;
    return description__cdg.str();
}
bool mtsIntuitiveResearchKitEndoscopeTypes::ScalarNumberIsFixed(void) const {
    return true
    ;
}
size_t mtsIntuitiveResearchKitEndoscopeTypes::ScalarNumber(void) const {
    return 0
    ;
}
std::string mtsIntuitiveResearchKitEndoscopeTypes::ScalarDescription(const size_t CMN_UNUSED(index_cdg), const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsIntuitiveResearchKitEndoscopeTypes index out of range"));
    return "";
}
double mtsIntuitiveResearchKitEndoscopeTypes::Scalar(const size_t CMN_UNUSED(index_cdg)) const CISST_THROW(std::out_of_range) {
    cmnThrow(std::out_of_range("cmnDataScalar: mtsIntuitiveResearchKitEndoscopeTypes index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsIntuitiveResearchKitEndoscopeTypes >::SerializeText(const mtsIntuitiveResearchKitEndoscopeTypes & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsIntuitiveResearchKitEndoscopeTypes::SerializeTextJSON(Json::Value & CMN_UNUSED(jsonValue)) const {
}
template<>
void cmnDataJSON<mtsIntuitiveResearchKitEndoscopeTypes >::DeSerializeText(mtsIntuitiveResearchKitEndoscopeTypes & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsIntuitiveResearchKitEndoscopeTypes::DeSerializeTextJSON(const Json::Value & CMN_UNUSED(jsonValue)) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
}
#endif // CISST_HAS_JSON
std::string cmnDataHumanReadable_mtsIntuitiveResearchKitEndoscopeTypes_Type(const mtsIntuitiveResearchKitEndoscopeTypes::Type & data) {
    switch (data) {
        case mtsIntuitiveResearchKitEndoscopeTypes::SCOPE_ERROR:
            return "Error";
            break;
        case mtsIntuitiveResearchKitEndoscopeTypes::SCOPE_NONE:
            return "No endoscope (zero weight)";
            break;
        case mtsIntuitiveResearchKitEndoscopeTypes::SCOPE_Classic_SD_STRAIGHT:
            return "Classic SD Straight";
            break;
        case mtsIntuitiveResearchKitEndoscopeTypes::SCOPE_Classic_SD_UP:
            return "Classic SD Up";
            break;
        case mtsIntuitiveResearchKitEndoscopeTypes::SCOPE_Classic_SD_DOWN:
            return "Classic SD Down";
            break;
        case mtsIntuitiveResearchKitEndoscopeTypes::SCOPE_Classic_HD_STRAIGHT:
            return "Classic HD Straight";
            break;
        case mtsIntuitiveResearchKitEndoscopeTypes::SCOPE_Classic_HD_UP:
            return "Classic HD Up";
            break;
        case mtsIntuitiveResearchKitEndoscopeTypes::SCOPE_Classic_HD_DOWN:
            return "Classic HD Down";
            break;
        case mtsIntuitiveResearchKitEndoscopeTypes::SCOPE_Si_HD_STRAIGHT:
            return "Si HD Straight";
            break;
        case mtsIntuitiveResearchKitEndoscopeTypes::SCOPE_Si_HD_UP:
            return "Si HD Up";
            break;
        case mtsIntuitiveResearchKitEndoscopeTypes::SCOPE_Si_HD_DOWN:
            return "Si HD Down";
            break;
        default: return "undefined enum mtsIntuitiveResearchKitEndoscopeTypes::Type";
            break;
    }
}

std::string mtsIntuitiveResearchKitEndoscopeTypes::TypeToString(const mtsIntuitiveResearchKitEndoscopeTypes::Type & data) CISST_THROW(std::runtime_error) {
    switch (data) {
        case mtsIntuitiveResearchKitEndoscopeTypes::SCOPE_ERROR:
            return "ERROR";
            break;
        case mtsIntuitiveResearchKitEndoscopeTypes::SCOPE_NONE:
            return "NONE";
            break;
        case mtsIntuitiveResearchKitEndoscopeTypes::SCOPE_Classic_SD_STRAIGHT:
            return "Classic_SD_STRAIGHT";
            break;
        case mtsIntuitiveResearchKitEndoscopeTypes::SCOPE_Classic_SD_UP:
            return "Classic_SD_UP";
            break;
        case mtsIntuitiveResearchKitEndoscopeTypes::SCOPE_Classic_SD_DOWN:
            return "Classic_SD_DOWN";
            break;
        case mtsIntuitiveResearchKitEndoscopeTypes::SCOPE_Classic_HD_STRAIGHT:
            return "Classic_HD_STRAIGHT";
            break;
        case mtsIntuitiveResearchKitEndoscopeTypes::SCOPE_Classic_HD_UP:
            return "Classic_HD_UP";
            break;
        case mtsIntuitiveResearchKitEndoscopeTypes::SCOPE_Classic_HD_DOWN:
            return "Classic_HD_DOWN";
            break;
        case mtsIntuitiveResearchKitEndoscopeTypes::SCOPE_Si_HD_STRAIGHT:
            return "Si_HD_STRAIGHT";
            break;
        case mtsIntuitiveResearchKitEndoscopeTypes::SCOPE_Si_HD_UP:
            return "Si_HD_UP";
            break;
        case mtsIntuitiveResearchKitEndoscopeTypes::SCOPE_Si_HD_DOWN:
            return "Si_HD_DOWN";
            break;
        default:
            break;
    }
    cmnThrow("mtsIntuitiveResearchKitEndoscopeTypes::TypeToString called with invalid enum");
    return "";
}

mtsIntuitiveResearchKitEndoscopeTypes::Type mtsIntuitiveResearchKitEndoscopeTypes::TypeFromString(const std::string & value) CISST_THROW(std::runtime_error) {
    if (value == "ERROR") {
        return mtsIntuitiveResearchKitEndoscopeTypes::SCOPE_ERROR;
    };
    if (value == "NONE") {
        return mtsIntuitiveResearchKitEndoscopeTypes::SCOPE_NONE;
    };
    if (value == "Classic_SD_STRAIGHT") {
        return mtsIntuitiveResearchKitEndoscopeTypes::SCOPE_Classic_SD_STRAIGHT;
    };
    if (value == "Classic_SD_UP") {
        return mtsIntuitiveResearchKitEndoscopeTypes::SCOPE_Classic_SD_UP;
    };
    if (value == "Classic_SD_DOWN") {
        return mtsIntuitiveResearchKitEndoscopeTypes::SCOPE_Classic_SD_DOWN;
    };
    if (value == "Classic_HD_STRAIGHT") {
        return mtsIntuitiveResearchKitEndoscopeTypes::SCOPE_Classic_HD_STRAIGHT;
    };
    if (value == "Classic_HD_UP") {
        return mtsIntuitiveResearchKitEndoscopeTypes::SCOPE_Classic_HD_UP;
    };
    if (value == "Classic_HD_DOWN") {
        return mtsIntuitiveResearchKitEndoscopeTypes::SCOPE_Classic_HD_DOWN;
    };
    if (value == "Si_HD_STRAIGHT") {
        return mtsIntuitiveResearchKitEndoscopeTypes::SCOPE_Si_HD_STRAIGHT;
    };
    if (value == "Si_HD_UP") {
        return mtsIntuitiveResearchKitEndoscopeTypes::SCOPE_Si_HD_UP;
    };
    if (value == "Si_HD_DOWN") {
        return mtsIntuitiveResearchKitEndoscopeTypes::SCOPE_Si_HD_DOWN;
    };
    std::string message = "mtsIntuitiveResearchKitEndoscopeTypes::TypeFromString can't find matching enum for " + value + ".  Options are: ";
    std::vector<std::string> options = TypeVectorString();
    for (std::vector<std::string>::const_iterator i = options.begin(); i != options.end(); ++i) message += *i + " ";
    cmnThrow(message);
    return static_cast<mtsIntuitiveResearchKitEndoscopeTypes::Type >(0);
}

const std::vector<int> & mtsIntuitiveResearchKitEndoscopeTypes::TypeVectorInt(void) {
    static std::vector<int> vectorInt;
    if (vectorInt.empty()) {
        vectorInt.push_back(static_cast<int>(SCOPE_ERROR));
        vectorInt.push_back(static_cast<int>(SCOPE_NONE));
        vectorInt.push_back(static_cast<int>(SCOPE_Classic_SD_STRAIGHT));
        vectorInt.push_back(static_cast<int>(SCOPE_Classic_SD_UP));
        vectorInt.push_back(static_cast<int>(SCOPE_Classic_SD_DOWN));
        vectorInt.push_back(static_cast<int>(SCOPE_Classic_HD_STRAIGHT));
        vectorInt.push_back(static_cast<int>(SCOPE_Classic_HD_UP));
        vectorInt.push_back(static_cast<int>(SCOPE_Classic_HD_DOWN));
        vectorInt.push_back(static_cast<int>(SCOPE_Si_HD_STRAIGHT));
        vectorInt.push_back(static_cast<int>(SCOPE_Si_HD_UP));
        vectorInt.push_back(static_cast<int>(SCOPE_Si_HD_DOWN));
    }
    return vectorInt;
}

const std::vector<std::string> & mtsIntuitiveResearchKitEndoscopeTypes::TypeVectorString(void) {
    static std::vector<std::string> vectorString;
    if (vectorString.empty()) {
        vectorString.push_back("ERROR");
        vectorString.push_back("NONE");
        vectorString.push_back("Classic_SD_STRAIGHT");
        vectorString.push_back("Classic_SD_UP");
        vectorString.push_back("Classic_SD_DOWN");
        vectorString.push_back("Classic_HD_STRAIGHT");
        vectorString.push_back("Classic_HD_UP");
        vectorString.push_back("Classic_HD_DOWN");
        vectorString.push_back("Si_HD_STRAIGHT");
        vectorString.push_back("Si_HD_UP");
        vectorString.push_back("Si_HD_DOWN");
    }
    return vectorString;
}

#if CISST_HAS_JSON
  CMN_IMPLEMENT_DATA_FUNCTIONS_JSON_FOR_ENUM_AS_STRING(mtsIntuitiveResearchKitEndoscopeTypes::Type, mtsIntuitiveResearchKitEndoscopeTypes::TypeToString, mtsIntuitiveResearchKitEndoscopeTypes::TypeFromString);
#endif // CISST_HAS_JSON

