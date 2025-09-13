// file automatically generated, do not modify
// cisst version: 1.3.1
// source file: /home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmCartesianImpedance.cdg

#include <cisstParameterTypes/prmCartesianImpedance.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 13 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmCartesianImpedanceHalfPlaneGainsProxy);

prmCartesianImpedanceHalfPlaneGains::prmCartesianImpedanceHalfPlaneGains(void):
    P(0.0)
    , D(0.0)
    , Bias(0.0)
    , Deadband(0.0)
{}

prmCartesianImpedanceHalfPlaneGains::prmCartesianImpedanceHalfPlaneGains(const prmCartesianImpedanceHalfPlaneGains & other):
    P(other.P)
    , D(other.D)
    , Bias(other.Bias)
    , Deadband(other.Deadband)
{}

prmCartesianImpedanceHalfPlaneGains & prmCartesianImpedanceHalfPlaneGains::operator = (const prmCartesianImpedanceHalfPlaneGains & other)
{
    P = other.P;
    D = other.D;
    Bias = other.Bias;
    Deadband = other.Deadband;
    return *this;
}

prmCartesianImpedanceHalfPlaneGains::~prmCartesianImpedanceHalfPlaneGains(void){}


void prmCartesianImpedanceHalfPlaneGains::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->P);
    cmnSerializeRaw(outputStream__cdg, this->D);
    cmnSerializeRaw(outputStream__cdg, this->Bias);
    cmnSerializeRaw(outputStream__cdg, this->Deadband);
}


void prmCartesianImpedanceHalfPlaneGains::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->P);
    cmnDeSerializeRaw(inputStream__cdg, this->D);
    cmnDeSerializeRaw(inputStream__cdg, this->Bias);
    cmnDeSerializeRaw(inputStream__cdg, this->Deadband);
}


void prmCartesianImpedanceHalfPlaneGains::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void prmCartesianImpedanceHalfPlaneGains::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<prmCartesianImpedanceHalfPlaneGains >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<prmCartesianImpedanceHalfPlaneGains >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 16 */
/* source line: 23 */
/* source line: 30 */
/* source line: 37 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmCartesianImpedanceHalfPlaneGains & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmCartesianImpedanceHalfPlaneGains & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmCartesianImpedanceHalfPlaneGains::Copy(const prmCartesianImpedanceHalfPlaneGains & source__cdg) {
    cmnData<vct3 >::Copy(this->P, source__cdg.P);
    cmnData<vct3 >::Copy(this->D, source__cdg.D);
    cmnData<vct3 >::Copy(this->Bias, source__cdg.Bias);
    cmnData<vct3 >::Copy(this->Deadband, source__cdg.Deadband);
}
void prmCartesianImpedanceHalfPlaneGains::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<vct3 >::SerializeBinary(this->P, outputStream__cdg);
    cmnData<vct3 >::SerializeBinary(this->D, outputStream__cdg);
    cmnData<vct3 >::SerializeBinary(this->Bias, outputStream__cdg);
    cmnData<vct3 >::SerializeBinary(this->Deadband, outputStream__cdg);
}
void prmCartesianImpedanceHalfPlaneGains::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<vct3 >::DeSerializeBinary(this->P, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->D, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->Bias, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->Deadband, inputStream__cdg, localFormat, remoteFormat);
}
void prmCartesianImpedanceHalfPlaneGains::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct3 >::SerializeText(this->P, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct3 >::SerializeText(this->D, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct3 >::SerializeText(this->Bias, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct3 >::SerializeText(this->Deadband, outputStream__cdg, delimiter__cdg);
}
std::string prmCartesianImpedanceHalfPlaneGains::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct3 >::SerializeDescription(this->P, delimiter__cdg, prefix__cdg + "P");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct3 >::SerializeDescription(this->D, delimiter__cdg, prefix__cdg + "D");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct3 >::SerializeDescription(this->Bias, delimiter__cdg, prefix__cdg + "Bias");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct3 >::SerializeDescription(this->Deadband, delimiter__cdg, prefix__cdg + "Deadband");
    return description__cdg.str();
}
void prmCartesianImpedanceHalfPlaneGains::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCartesianImpedanceHalfPlaneGains");
    }
    someData__cdg = true;
    cmnData<vct3 >::DeSerializeText(this->P, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCartesianImpedanceHalfPlaneGains");
    }
    someData__cdg = true;
    cmnData<vct3 >::DeSerializeText(this->D, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCartesianImpedanceHalfPlaneGains");
    }
    someData__cdg = true;
    cmnData<vct3 >::DeSerializeText(this->Bias, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCartesianImpedanceHalfPlaneGains");
    }
    someData__cdg = true;
    cmnData<vct3 >::DeSerializeText(this->Deadband, inputStream__cdg, delimiter__cdg);
}
std::string prmCartesianImpedanceHalfPlaneGains::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "prmCartesianImpedanceHalfPlaneGains" << std::endl;
    description__cdg << "  P:" << cmnData<vct3 >::HumanReadable(this->P);
    description__cdg << "  D:" << cmnData<vct3 >::HumanReadable(this->D);
    description__cdg << "  Bias:" << cmnData<vct3 >::HumanReadable(this->Bias);
    description__cdg << "  Deadband:" << cmnData<vct3 >::HumanReadable(this->Deadband);
    return description__cdg.str();
}
bool prmCartesianImpedanceHalfPlaneGains::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<vct3 >::ScalarNumberIsFixed(this->P)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->D)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->Bias)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->Deadband)
    ;
}
size_t prmCartesianImpedanceHalfPlaneGains::ScalarNumber(void) const {
    return 0
           + cmnData<vct3 >::ScalarNumber(this->P)
           + cmnData<vct3 >::ScalarNumber(this->D)
           + cmnData<vct3 >::ScalarNumber(this->Bias)
           + cmnData<vct3 >::ScalarNumber(this->Deadband)
    ;
}
std::string prmCartesianImpedanceHalfPlaneGains::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->P);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::ScalarDescription(this->P, index_cdg - baseIndex__cdg, prefix__cdg + "P");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->D);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::ScalarDescription(this->D, index_cdg - baseIndex__cdg, prefix__cdg + "D");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->Bias);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::ScalarDescription(this->Bias, index_cdg - baseIndex__cdg, prefix__cdg + "Bias");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->Deadband);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::ScalarDescription(this->Deadband, index_cdg - baseIndex__cdg, prefix__cdg + "Deadband");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmCartesianImpedanceHalfPlaneGains index out of range"));
    return "";
}
double prmCartesianImpedanceHalfPlaneGains::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->P);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::Scalar(this->P, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->D);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::Scalar(this->D, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->Bias);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::Scalar(this->Bias, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->Deadband);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::Scalar(this->Deadband, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: prmCartesianImpedanceHalfPlaneGains index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmCartesianImpedanceHalfPlaneGains >::SerializeText(const prmCartesianImpedanceHalfPlaneGains & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmCartesianImpedanceHalfPlaneGains::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<vct3 >::SerializeText(this->P, jsonValue["P"]);
    cmnDataJSON<vct3 >::SerializeText(this->D, jsonValue["D"]);
    cmnDataJSON<vct3 >::SerializeText(this->Bias, jsonValue["Bias"]);
    cmnDataJSON<vct3 >::SerializeText(this->Deadband, jsonValue["Deadband"]);
}
template<>
void cmnDataJSON<prmCartesianImpedanceHalfPlaneGains >::DeSerializeText(prmCartesianImpedanceHalfPlaneGains & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmCartesianImpedanceHalfPlaneGains::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["P"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3 >::DeSerializeText(this->P, field__cdg);
    };
    field__cdg = jsonValue["D"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3 >::DeSerializeText(this->D, field__cdg);
    };
    field__cdg = jsonValue["Bias"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3 >::DeSerializeText(this->Bias, field__cdg);
    };
    field__cdg = jsonValue["Deadband"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3 >::DeSerializeText(this->Deadband, field__cdg);
    };
}
#endif // CISST_HAS_JSON

/* source line: 46 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmCartesianImpedanceProxy);

prmCartesianImpedance::prmCartesianImpedance(void):
    mtsGenericObject()
    , ForceOrientation()
    , ForcePosition()
    , TorqueOrientation()
    , PositionPositive()
    , PositionNegative()
    , OrientationPositive()
    , OrientationNegative()
{}

prmCartesianImpedance::prmCartesianImpedance(const prmCartesianImpedance & other):
    mtsGenericObject(other)
    , ForceOrientation(other.ForceOrientation)
    , ForcePosition(other.ForcePosition)
    , TorqueOrientation(other.TorqueOrientation)
    , PositionPositive(other.PositionPositive)
    , PositionNegative(other.PositionNegative)
    , OrientationPositive(other.OrientationPositive)
    , OrientationNegative(other.OrientationNegative)
{}

prmCartesianImpedance & prmCartesianImpedance::operator = (const prmCartesianImpedance & other)
{
    mtsGenericObject::operator = (other);
    ForceOrientation = other.ForceOrientation;
    ForcePosition = other.ForcePosition;
    TorqueOrientation = other.TorqueOrientation;
    PositionPositive = other.PositionPositive;
    PositionNegative = other.PositionNegative;
    OrientationPositive = other.OrientationPositive;
    OrientationNegative = other.OrientationNegative;
    return *this;
}

prmCartesianImpedance::~prmCartesianImpedance(void){}


void prmCartesianImpedance::SerializeRaw(std::ostream & outputStream__cdg) const
{
    mtsGenericObject::SerializeRaw(outputStream__cdg);
    cmnSerializeRaw(outputStream__cdg, this->ForceOrientation);
    cmnSerializeRaw(outputStream__cdg, this->ForcePosition);
    cmnSerializeRaw(outputStream__cdg, this->TorqueOrientation);
    cmnSerializeRaw(outputStream__cdg, this->PositionPositive);
    cmnSerializeRaw(outputStream__cdg, this->PositionNegative);
    cmnSerializeRaw(outputStream__cdg, this->OrientationPositive);
    cmnSerializeRaw(outputStream__cdg, this->OrientationNegative);
}


void prmCartesianImpedance::DeSerializeRaw(std::istream & inputStream__cdg)
{
    mtsGenericObject::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeRaw(inputStream__cdg, this->ForceOrientation);
    cmnDeSerializeRaw(inputStream__cdg, this->ForcePosition);
    cmnDeSerializeRaw(inputStream__cdg, this->TorqueOrientation);
    cmnDeSerializeRaw(inputStream__cdg, this->PositionPositive);
    cmnDeSerializeRaw(inputStream__cdg, this->PositionNegative);
    cmnDeSerializeRaw(inputStream__cdg, this->OrientationPositive);
    cmnDeSerializeRaw(inputStream__cdg, this->OrientationNegative);
}


void prmCartesianImpedance::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void prmCartesianImpedance::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<prmCartesianImpedance >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<prmCartesianImpedance >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 56 */
/* source line: 63 */
/* source line: 70 */
/* source line: 77 */
/* source line: 84 */
/* source line: 91 */
/* source line: 98 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmCartesianImpedance & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmCartesianImpedance & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmCartesianImpedance::Copy(const prmCartesianImpedance & source__cdg) {
    cmnData<mtsGenericObject >::Copy(*this, source__cdg);
    cmnData<vctMatRot3 >::Copy(this->ForceOrientation, source__cdg.ForceOrientation);
    cmnData<vct3 >::Copy(this->ForcePosition, source__cdg.ForcePosition);
    cmnData<vctMatRot3 >::Copy(this->TorqueOrientation, source__cdg.TorqueOrientation);
    cmnData<prmCartesianImpedanceHalfPlaneGains >::Copy(this->PositionPositive, source__cdg.PositionPositive);
    cmnData<prmCartesianImpedanceHalfPlaneGains >::Copy(this->PositionNegative, source__cdg.PositionNegative);
    cmnData<prmCartesianImpedanceHalfPlaneGains >::Copy(this->OrientationPositive, source__cdg.OrientationPositive);
    cmnData<prmCartesianImpedanceHalfPlaneGains >::Copy(this->OrientationNegative, source__cdg.OrientationNegative);
}
void prmCartesianImpedance::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::SerializeBinary(*this, outputStream__cdg);
    cmnData<vctMatRot3 >::SerializeBinary(this->ForceOrientation, outputStream__cdg);
    cmnData<vct3 >::SerializeBinary(this->ForcePosition, outputStream__cdg);
    cmnData<vctMatRot3 >::SerializeBinary(this->TorqueOrientation, outputStream__cdg);
    cmnData<prmCartesianImpedanceHalfPlaneGains >::SerializeBinary(this->PositionPositive, outputStream__cdg);
    cmnData<prmCartesianImpedanceHalfPlaneGains >::SerializeBinary(this->PositionNegative, outputStream__cdg);
    cmnData<prmCartesianImpedanceHalfPlaneGains >::SerializeBinary(this->OrientationPositive, outputStream__cdg);
    cmnData<prmCartesianImpedanceHalfPlaneGains >::SerializeBinary(this->OrientationNegative, outputStream__cdg);
}
void prmCartesianImpedance::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctMatRot3 >::DeSerializeBinary(this->ForceOrientation, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct3 >::DeSerializeBinary(this->ForcePosition, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctMatRot3 >::DeSerializeBinary(this->TorqueOrientation, inputStream__cdg, localFormat, remoteFormat);
    cmnData<prmCartesianImpedanceHalfPlaneGains >::DeSerializeBinary(this->PositionPositive, inputStream__cdg, localFormat, remoteFormat);
    cmnData<prmCartesianImpedanceHalfPlaneGains >::DeSerializeBinary(this->PositionNegative, inputStream__cdg, localFormat, remoteFormat);
    cmnData<prmCartesianImpedanceHalfPlaneGains >::DeSerializeBinary(this->OrientationPositive, inputStream__cdg, localFormat, remoteFormat);
    cmnData<prmCartesianImpedanceHalfPlaneGains >::DeSerializeBinary(this->OrientationNegative, inputStream__cdg, localFormat, remoteFormat);
}
void prmCartesianImpedance::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
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
    cmnData<vctMatRot3 >::SerializeText(this->ForceOrientation, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct3 >::SerializeText(this->ForcePosition, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctMatRot3 >::SerializeText(this->TorqueOrientation, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<prmCartesianImpedanceHalfPlaneGains >::SerializeText(this->PositionPositive, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<prmCartesianImpedanceHalfPlaneGains >::SerializeText(this->PositionNegative, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<prmCartesianImpedanceHalfPlaneGains >::SerializeText(this->OrientationPositive, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<prmCartesianImpedanceHalfPlaneGains >::SerializeText(this->OrientationNegative, outputStream__cdg, delimiter__cdg);
}
std::string prmCartesianImpedance::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
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
    description__cdg << cmnData<vctMatRot3 >::SerializeDescription(this->ForceOrientation, delimiter__cdg, prefix__cdg + "ForceOrientation");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct3 >::SerializeDescription(this->ForcePosition, delimiter__cdg, prefix__cdg + "ForcePosition");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctMatRot3 >::SerializeDescription(this->TorqueOrientation, delimiter__cdg, prefix__cdg + "TorqueOrientation");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<prmCartesianImpedanceHalfPlaneGains >::SerializeDescription(this->PositionPositive, delimiter__cdg, prefix__cdg + "PositionPositive");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<prmCartesianImpedanceHalfPlaneGains >::SerializeDescription(this->PositionNegative, delimiter__cdg, prefix__cdg + "PositionNegative");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<prmCartesianImpedanceHalfPlaneGains >::SerializeDescription(this->OrientationPositive, delimiter__cdg, prefix__cdg + "OrientationPositive");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<prmCartesianImpedanceHalfPlaneGains >::SerializeDescription(this->OrientationNegative, delimiter__cdg, prefix__cdg + "OrientationNegative");
    return description__cdg.str();
}
void prmCartesianImpedance::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCartesianImpedance");
    }
    someData__cdg = true;
    cmnData<mtsGenericObject >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCartesianImpedance");
    }
    someData__cdg = true;
    cmnData<vctMatRot3 >::DeSerializeText(this->ForceOrientation, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCartesianImpedance");
    }
    someData__cdg = true;
    cmnData<vct3 >::DeSerializeText(this->ForcePosition, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCartesianImpedance");
    }
    someData__cdg = true;
    cmnData<vctMatRot3 >::DeSerializeText(this->TorqueOrientation, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCartesianImpedance");
    }
    someData__cdg = true;
    cmnData<prmCartesianImpedanceHalfPlaneGains >::DeSerializeText(this->PositionPositive, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCartesianImpedance");
    }
    someData__cdg = true;
    cmnData<prmCartesianImpedanceHalfPlaneGains >::DeSerializeText(this->PositionNegative, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCartesianImpedance");
    }
    someData__cdg = true;
    cmnData<prmCartesianImpedanceHalfPlaneGains >::DeSerializeText(this->OrientationPositive, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmCartesianImpedance");
    }
    someData__cdg = true;
    cmnData<prmCartesianImpedanceHalfPlaneGains >::DeSerializeText(this->OrientationNegative, inputStream__cdg, delimiter__cdg);
}
std::string prmCartesianImpedance::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "prmCartesianImpedance" << std::endl;
    description__cdg << cmnData< mtsGenericObject >::HumanReadable(*this) << std::endl;
    description__cdg << "  ForceOrientation:" << cmnData<vctMatRot3 >::HumanReadable(this->ForceOrientation);
    description__cdg << "  ForcePosition:" << cmnData<vct3 >::HumanReadable(this->ForcePosition);
    description__cdg << "  TorqueOrientation:" << cmnData<vctMatRot3 >::HumanReadable(this->TorqueOrientation);
    description__cdg << "  PositionPositive:" << cmnData<prmCartesianImpedanceHalfPlaneGains >::HumanReadable(this->PositionPositive);
    description__cdg << "  PositionNegative:" << cmnData<prmCartesianImpedanceHalfPlaneGains >::HumanReadable(this->PositionNegative);
    description__cdg << "  OrientationPositive:" << cmnData<prmCartesianImpedanceHalfPlaneGains >::HumanReadable(this->OrientationPositive);
    description__cdg << "  OrientationNegative:" << cmnData<prmCartesianImpedanceHalfPlaneGains >::HumanReadable(this->OrientationNegative);
    return description__cdg.str();
}
bool prmCartesianImpedance::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsGenericObject >::ScalarNumberIsFixed(*this)
           && cmnData<vctMatRot3 >::ScalarNumberIsFixed(this->ForceOrientation)
           && cmnData<vct3 >::ScalarNumberIsFixed(this->ForcePosition)
           && cmnData<vctMatRot3 >::ScalarNumberIsFixed(this->TorqueOrientation)
           && cmnData<prmCartesianImpedanceHalfPlaneGains >::ScalarNumberIsFixed(this->PositionPositive)
           && cmnData<prmCartesianImpedanceHalfPlaneGains >::ScalarNumberIsFixed(this->PositionNegative)
           && cmnData<prmCartesianImpedanceHalfPlaneGains >::ScalarNumberIsFixed(this->OrientationPositive)
           && cmnData<prmCartesianImpedanceHalfPlaneGains >::ScalarNumberIsFixed(this->OrientationNegative)
    ;
}
size_t prmCartesianImpedance::ScalarNumber(void) const {
    return 0
           + cmnData< mtsGenericObject >::ScalarNumber(*this)
           + cmnData<vctMatRot3 >::ScalarNumber(this->ForceOrientation)
           + cmnData<vct3 >::ScalarNumber(this->ForcePosition)
           + cmnData<vctMatRot3 >::ScalarNumber(this->TorqueOrientation)
           + cmnData<prmCartesianImpedanceHalfPlaneGains >::ScalarNumber(this->PositionPositive)
           + cmnData<prmCartesianImpedanceHalfPlaneGains >::ScalarNumber(this->PositionNegative)
           + cmnData<prmCartesianImpedanceHalfPlaneGains >::ScalarNumber(this->OrientationPositive)
           + cmnData<prmCartesianImpedanceHalfPlaneGains >::ScalarNumber(this->OrientationNegative)
    ;
}
std::string prmCartesianImpedance::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::ScalarDescription(*this, index_cdg - baseIndex__cdg, prefix__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctMatRot3 >::ScalarNumber(this->ForceOrientation);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctMatRot3 >::ScalarDescription(this->ForceOrientation, index_cdg - baseIndex__cdg, prefix__cdg + "ForceOrientation");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->ForcePosition);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::ScalarDescription(this->ForcePosition, index_cdg - baseIndex__cdg, prefix__cdg + "ForcePosition");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctMatRot3 >::ScalarNumber(this->TorqueOrientation);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctMatRot3 >::ScalarDescription(this->TorqueOrientation, index_cdg - baseIndex__cdg, prefix__cdg + "TorqueOrientation");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<prmCartesianImpedanceHalfPlaneGains >::ScalarNumber(this->PositionPositive);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<prmCartesianImpedanceHalfPlaneGains >::ScalarDescription(this->PositionPositive, index_cdg - baseIndex__cdg, prefix__cdg + "PositionPositive");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<prmCartesianImpedanceHalfPlaneGains >::ScalarNumber(this->PositionNegative);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<prmCartesianImpedanceHalfPlaneGains >::ScalarDescription(this->PositionNegative, index_cdg - baseIndex__cdg, prefix__cdg + "PositionNegative");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<prmCartesianImpedanceHalfPlaneGains >::ScalarNumber(this->OrientationPositive);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<prmCartesianImpedanceHalfPlaneGains >::ScalarDescription(this->OrientationPositive, index_cdg - baseIndex__cdg, prefix__cdg + "OrientationPositive");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<prmCartesianImpedanceHalfPlaneGains >::ScalarNumber(this->OrientationNegative);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<prmCartesianImpedanceHalfPlaneGains >::ScalarDescription(this->OrientationNegative, index_cdg - baseIndex__cdg, prefix__cdg + "OrientationNegative");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmCartesianImpedance index out of range"));
    return "";
}
double prmCartesianImpedance::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::Scalar(*this, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctMatRot3 >::ScalarNumber(this->ForceOrientation);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctMatRot3 >::Scalar(this->ForceOrientation, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct3 >::ScalarNumber(this->ForcePosition);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct3 >::Scalar(this->ForcePosition, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctMatRot3 >::ScalarNumber(this->TorqueOrientation);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctMatRot3 >::Scalar(this->TorqueOrientation, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<prmCartesianImpedanceHalfPlaneGains >::ScalarNumber(this->PositionPositive);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<prmCartesianImpedanceHalfPlaneGains >::Scalar(this->PositionPositive, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<prmCartesianImpedanceHalfPlaneGains >::ScalarNumber(this->PositionNegative);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<prmCartesianImpedanceHalfPlaneGains >::Scalar(this->PositionNegative, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<prmCartesianImpedanceHalfPlaneGains >::ScalarNumber(this->OrientationPositive);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<prmCartesianImpedanceHalfPlaneGains >::Scalar(this->OrientationPositive, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<prmCartesianImpedanceHalfPlaneGains >::ScalarNumber(this->OrientationNegative);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<prmCartesianImpedanceHalfPlaneGains >::Scalar(this->OrientationNegative, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: prmCartesianImpedance index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmCartesianImpedance >::SerializeText(const prmCartesianImpedance & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmCartesianImpedance::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsGenericObject >::SerializeText(*(dynamic_cast<const mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<vctMatRot3 >::SerializeText(this->ForceOrientation, jsonValue["ForceOrientation"]);
    cmnDataJSON<vct3 >::SerializeText(this->ForcePosition, jsonValue["ForcePosition"]);
    cmnDataJSON<vctMatRot3 >::SerializeText(this->TorqueOrientation, jsonValue["TorqueOrientation"]);
    cmnDataJSON<prmCartesianImpedanceHalfPlaneGains >::SerializeText(this->PositionPositive, jsonValue["PositionPositive"]);
    cmnDataJSON<prmCartesianImpedanceHalfPlaneGains >::SerializeText(this->PositionNegative, jsonValue["PositionNegative"]);
    cmnDataJSON<prmCartesianImpedanceHalfPlaneGains >::SerializeText(this->OrientationPositive, jsonValue["OrientationPositive"]);
    cmnDataJSON<prmCartesianImpedanceHalfPlaneGains >::SerializeText(this->OrientationNegative, jsonValue["OrientationNegative"]);
}
template<>
void cmnDataJSON<prmCartesianImpedance >::DeSerializeText(prmCartesianImpedance & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmCartesianImpedance::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    cmnDataJSON<mtsGenericObject >::DeSerializeText(*(dynamic_cast<mtsGenericObject*>(this)), jsonValue);
    Json::Value field__cdg;
    field__cdg = jsonValue["ForceOrientation"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctMatRot3 >::DeSerializeText(this->ForceOrientation, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctMatRot3>::DeSerializeText: empty JSON value for: ForceOrientation");
    };
    field__cdg = jsonValue["ForcePosition"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vct3 >::DeSerializeText(this->ForcePosition, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vct3>::DeSerializeText: empty JSON value for: ForcePosition");
    };
    field__cdg = jsonValue["TorqueOrientation"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctMatRot3 >::DeSerializeText(this->TorqueOrientation, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctMatRot3>::DeSerializeText: empty JSON value for: TorqueOrientation");
    };
    field__cdg = jsonValue["PositionPositive"];
    if (!field__cdg.empty()) {
        cmnDataJSON<prmCartesianImpedanceHalfPlaneGains >::DeSerializeText(this->PositionPositive, field__cdg);
    } else {
        cmnThrow("cmnDataJson<prmCartesianImpedanceHalfPlaneGains>::DeSerializeText: empty JSON value for: PositionPositive");
    };
    field__cdg = jsonValue["PositionNegative"];
    if (!field__cdg.empty()) {
        cmnDataJSON<prmCartesianImpedanceHalfPlaneGains >::DeSerializeText(this->PositionNegative, field__cdg);
    } else {
        cmnThrow("cmnDataJson<prmCartesianImpedanceHalfPlaneGains>::DeSerializeText: empty JSON value for: PositionNegative");
    };
    field__cdg = jsonValue["OrientationPositive"];
    if (!field__cdg.empty()) {
        cmnDataJSON<prmCartesianImpedanceHalfPlaneGains >::DeSerializeText(this->OrientationPositive, field__cdg);
    } else {
        cmnThrow("cmnDataJson<prmCartesianImpedanceHalfPlaneGains>::DeSerializeText: empty JSON value for: OrientationPositive");
    };
    field__cdg = jsonValue["OrientationNegative"];
    if (!field__cdg.empty()) {
        cmnDataJSON<prmCartesianImpedanceHalfPlaneGains >::DeSerializeText(this->OrientationNegative, field__cdg);
    } else {
        cmnThrow("cmnDataJson<prmCartesianImpedanceHalfPlaneGains>::DeSerializeText: empty JSON value for: OrientationNegative");
    };
}
#endif // CISST_HAS_JSON


