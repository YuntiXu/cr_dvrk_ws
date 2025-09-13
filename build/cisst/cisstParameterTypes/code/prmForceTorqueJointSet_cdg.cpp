// file automatically generated, do not modify
// cisst version: 1.3.1
// source file: /home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmForceTorqueJointSet.cdg

#include <cisstParameterTypes/prmForceTorqueJointSet.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 12 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmForceTorqueJointSetProxy);

prmForceTorqueJointSet::prmForceTorqueJointSet(void):
    mtsGenericObject()
    , mForceTorque()
    , mMask(vctDynamicVector<bool>())
    , mBlockingFlag(prmBlocking::NO_WAIT)
    , mBlendingFactor(false)
    , mIsPreemptable(true)
    , mIsGoalOnly(true)
{}

prmForceTorqueJointSet::prmForceTorqueJointSet(const prmForceTorqueJointSet & other):
    mtsGenericObject(other)
    , mForceTorque(other.mForceTorque)
    , mMask(other.mMask)
    , mBlockingFlag(other.mBlockingFlag)
    , mBlendingFactor(other.mBlendingFactor)
    , mIsPreemptable(other.mIsPreemptable)
    , mIsGoalOnly(other.mIsGoalOnly)
{}

prmForceTorqueJointSet & prmForceTorqueJointSet::operator = (const prmForceTorqueJointSet & other)
{
    mtsGenericObject::operator = (other);
    mForceTorque = other.mForceTorque;
    mMask = other.mMask;
    mBlockingFlag = other.mBlockingFlag;
    mBlendingFactor = other.mBlendingFactor;
    mIsPreemptable = other.mIsPreemptable;
    mIsGoalOnly = other.mIsGoalOnly;
    return *this;
}

prmForceTorqueJointSet::~prmForceTorqueJointSet(void){}


void prmForceTorqueJointSet::SerializeRaw(std::ostream & outputStream__cdg) const
{
    mtsGenericObject::SerializeRaw(outputStream__cdg);
    cmnSerializeRaw(outputStream__cdg, this->mForceTorque);
    cmnSerializeRaw(outputStream__cdg, this->mMask);
    cmnSerializeRaw(outputStream__cdg, this->mBlockingFlag);
    cmnSerializeRaw(outputStream__cdg, this->mBlendingFactor);
    cmnSerializeRaw(outputStream__cdg, this->mIsPreemptable);
    cmnSerializeRaw(outputStream__cdg, this->mIsGoalOnly);
}


void prmForceTorqueJointSet::DeSerializeRaw(std::istream & inputStream__cdg)
{
    mtsGenericObject::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeRaw(inputStream__cdg, this->mForceTorque);
    cmnDeSerializeRaw(inputStream__cdg, this->mMask);
    cmnDeSerializeRaw(inputStream__cdg, this->mBlockingFlag);
    cmnDeSerializeRaw(inputStream__cdg, this->mBlendingFactor);
    cmnDeSerializeRaw(inputStream__cdg, this->mIsPreemptable);
    cmnDeSerializeRaw(inputStream__cdg, this->mIsGoalOnly);
}


void prmForceTorqueJointSet::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void prmForceTorqueJointSet::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<prmForceTorqueJointSet >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<prmForceTorqueJointSet >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 22 */

/* accessors is set to: all */
void prmForceTorqueJointSet::GetForceTorque(vctDynamicVector<double> & placeHolder) const
{
    placeHolder = this->mForceTorque;
}

void prmForceTorqueJointSet::SetForceTorque(const vctDynamicVector<double> & newValue)
{
    this->mForceTorque = newValue;
}


/* accessors is set to: all */
const vctDynamicVector<double> & prmForceTorqueJointSet::ForceTorque(void) const
{
    return this->mForceTorque;
}

vctDynamicVector<double> & prmForceTorqueJointSet::ForceTorque(void)
{
    return this->mForceTorque;
}

/* source line: 28 */

/* accessors is set to: all */
void prmForceTorqueJointSet::GetMask(vctDynamicVector<bool> & placeHolder) const
{
    placeHolder = this->mMask;
}

void prmForceTorqueJointSet::SetMask(const vctDynamicVector<bool> & newValue)
{
    this->mMask = newValue;
}


/* accessors is set to: all */
const vctDynamicVector<bool> & prmForceTorqueJointSet::Mask(void) const
{
    return this->mMask;
}

vctDynamicVector<bool> & prmForceTorqueJointSet::Mask(void)
{
    return this->mMask;
}

/* source line: 36 */

/* accessors is set to: all */
void prmForceTorqueJointSet::GetBlockingFlag(prmBlocking & placeHolder) const
{
    placeHolder = this->mBlockingFlag;
}

void prmForceTorqueJointSet::SetBlockingFlag(const prmBlocking & newValue)
{
    this->mBlockingFlag = newValue;
}


/* accessors is set to: all */
const prmBlocking & prmForceTorqueJointSet::BlockingFlag(void) const
{
    return this->mBlockingFlag;
}

prmBlocking & prmForceTorqueJointSet::BlockingFlag(void)
{
    return this->mBlockingFlag;
}

/* source line: 42 */

/* accessors is set to: all */
void prmForceTorqueJointSet::GetBlendingFactor(bool & placeHolder) const
{
    placeHolder = this->mBlendingFactor;
}

void prmForceTorqueJointSet::SetBlendingFactor(const bool & newValue)
{
    this->mBlendingFactor = newValue;
}


/* accessors is set to: all */
const bool & prmForceTorqueJointSet::BlendingFactor(void) const
{
    return this->mBlendingFactor;
}

bool & prmForceTorqueJointSet::BlendingFactor(void)
{
    return this->mBlendingFactor;
}

/* source line: 48 */

/* accessors is set to: all */
void prmForceTorqueJointSet::GetIsPreemptable(bool & placeHolder) const
{
    placeHolder = this->mIsPreemptable;
}

void prmForceTorqueJointSet::SetIsPreemptable(const bool & newValue)
{
    this->mIsPreemptable = newValue;
}


/* accessors is set to: all */
const bool & prmForceTorqueJointSet::IsPreemptable(void) const
{
    return this->mIsPreemptable;
}

bool & prmForceTorqueJointSet::IsPreemptable(void)
{
    return this->mIsPreemptable;
}

/* source line: 54 */

/* accessors is set to: all */
void prmForceTorqueJointSet::GetIsGoalOnly(bool & placeHolder) const
{
    placeHolder = this->mIsGoalOnly;
}

void prmForceTorqueJointSet::SetIsGoalOnly(const bool & newValue)
{
    this->mIsGoalOnly = newValue;
}


/* accessors is set to: all */
const bool & prmForceTorqueJointSet::IsGoalOnly(void) const
{
    return this->mIsGoalOnly;
}

bool & prmForceTorqueJointSet::IsGoalOnly(void)
{
    return this->mIsGoalOnly;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmForceTorqueJointSet & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmForceTorqueJointSet & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmForceTorqueJointSet::Copy(const prmForceTorqueJointSet & source__cdg) {
    cmnData<mtsGenericObject >::Copy(*this, source__cdg);
    cmnData<vctDynamicVector<double> >::Copy(this->mForceTorque, source__cdg.mForceTorque);
    cmnData<vctDynamicVector<bool> >::Copy(this->mMask, source__cdg.mMask);
    cmnData<prmBlocking >::Copy(this->mBlockingFlag, source__cdg.mBlockingFlag);
    cmnData<bool >::Copy(this->mBlendingFactor, source__cdg.mBlendingFactor);
    cmnData<bool >::Copy(this->mIsPreemptable, source__cdg.mIsPreemptable);
    cmnData<bool >::Copy(this->mIsGoalOnly, source__cdg.mIsGoalOnly);
}
void prmForceTorqueJointSet::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::SerializeBinary(*this, outputStream__cdg);
    cmnData<vctDynamicVector<double> >::SerializeBinary(this->mForceTorque, outputStream__cdg);
    cmnData<vctDynamicVector<bool> >::SerializeBinary(this->mMask, outputStream__cdg);
    cmnData<prmBlocking >::SerializeBinary(this->mBlockingFlag, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->mBlendingFactor, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->mIsPreemptable, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->mIsGoalOnly, outputStream__cdg);
}
void prmForceTorqueJointSet::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<double> >::DeSerializeBinary(this->mForceTorque, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDynamicVector<bool> >::DeSerializeBinary(this->mMask, inputStream__cdg, localFormat, remoteFormat);
    cmnData<prmBlocking >::DeSerializeBinary(this->mBlockingFlag, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->mBlendingFactor, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->mIsPreemptable, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->mIsGoalOnly, inputStream__cdg, localFormat, remoteFormat);
}
void prmForceTorqueJointSet::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
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
    cmnData<vctDynamicVector<double> >::SerializeText(this->mForceTorque, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<bool> >::SerializeText(this->mMask, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<prmBlocking >::SerializeText(this->mBlockingFlag, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->mBlendingFactor, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->mIsPreemptable, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->mIsGoalOnly, outputStream__cdg, delimiter__cdg);
}
std::string prmForceTorqueJointSet::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
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
    description__cdg << cmnData<vctDynamicVector<double> >::SerializeDescription(this->mForceTorque, delimiter__cdg, prefix__cdg + "ForceTorque");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDynamicVector<bool> >::SerializeDescription(this->mMask, delimiter__cdg, prefix__cdg + "Mask");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<prmBlocking >::SerializeDescription(this->mBlockingFlag, delimiter__cdg, prefix__cdg + "BlockingFlag");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->mBlendingFactor, delimiter__cdg, prefix__cdg + "BlendingFactor");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->mIsPreemptable, delimiter__cdg, prefix__cdg + "IsPreemptable");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->mIsGoalOnly, delimiter__cdg, prefix__cdg + "IsGoalOnly");
    return description__cdg.str();
}
void prmForceTorqueJointSet::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmForceTorqueJointSet");
    }
    someData__cdg = true;
    cmnData<mtsGenericObject >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmForceTorqueJointSet");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<double> >::DeSerializeText(this->mForceTorque, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmForceTorqueJointSet");
    }
    someData__cdg = true;
    cmnData<vctDynamicVector<bool> >::DeSerializeText(this->mMask, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmForceTorqueJointSet");
    }
    someData__cdg = true;
    cmnData<prmBlocking >::DeSerializeText(this->mBlockingFlag, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmForceTorqueJointSet");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->mBlendingFactor, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmForceTorqueJointSet");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->mIsPreemptable, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmForceTorqueJointSet");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->mIsGoalOnly, inputStream__cdg, delimiter__cdg);
}
std::string prmForceTorqueJointSet::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "prmForceTorqueJointSet" << std::endl;
    description__cdg << cmnData< mtsGenericObject >::HumanReadable(*this) << std::endl;
    description__cdg << "  ForceTorque:" << cmnData<vctDynamicVector<double> >::HumanReadable(this->mForceTorque);
    description__cdg << "  Mask:" << cmnData<vctDynamicVector<bool> >::HumanReadable(this->mMask);
    description__cdg << "  BlockingFlag:" << cmnData<prmBlocking >::HumanReadable(this->mBlockingFlag);
    description__cdg << "  BlendingFactor:" << cmnData<bool >::HumanReadable(this->mBlendingFactor);
    description__cdg << "  IsPreemptable:" << cmnData<bool >::HumanReadable(this->mIsPreemptable);
    description__cdg << "  IsGoalOnly:" << cmnData<bool >::HumanReadable(this->mIsGoalOnly);
    return description__cdg.str();
}
bool prmForceTorqueJointSet::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsGenericObject >::ScalarNumberIsFixed(*this)
           && cmnData<vctDynamicVector<double> >::ScalarNumberIsFixed(this->mForceTorque)
           && cmnData<vctDynamicVector<bool> >::ScalarNumberIsFixed(this->mMask)
           && cmnData<prmBlocking >::ScalarNumberIsFixed(this->mBlockingFlag)
           && cmnData<bool >::ScalarNumberIsFixed(this->mBlendingFactor)
           && cmnData<bool >::ScalarNumberIsFixed(this->mIsPreemptable)
           && cmnData<bool >::ScalarNumberIsFixed(this->mIsGoalOnly)
    ;
}
size_t prmForceTorqueJointSet::ScalarNumber(void) const {
    return 0
           + cmnData< mtsGenericObject >::ScalarNumber(*this)
           + cmnData<vctDynamicVector<double> >::ScalarNumber(this->mForceTorque)
           + cmnData<vctDynamicVector<bool> >::ScalarNumber(this->mMask)
           + cmnData<prmBlocking >::ScalarNumber(this->mBlockingFlag)
           + cmnData<bool >::ScalarNumber(this->mBlendingFactor)
           + cmnData<bool >::ScalarNumber(this->mIsPreemptable)
           + cmnData<bool >::ScalarNumber(this->mIsGoalOnly)
    ;
}
std::string prmForceTorqueJointSet::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::ScalarDescription(*this, index_cdg - baseIndex__cdg, prefix__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mForceTorque);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::ScalarDescription(this->mForceTorque, index_cdg - baseIndex__cdg, prefix__cdg + "ForceTorque");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<bool> >::ScalarNumber(this->mMask);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<bool> >::ScalarDescription(this->mMask, index_cdg - baseIndex__cdg, prefix__cdg + "Mask");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<prmBlocking >::ScalarNumber(this->mBlockingFlag);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<prmBlocking >::ScalarDescription(this->mBlockingFlag, index_cdg - baseIndex__cdg, prefix__cdg + "BlockingFlag");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->mBlendingFactor);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->mBlendingFactor, index_cdg - baseIndex__cdg, prefix__cdg + "BlendingFactor");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->mIsPreemptable);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->mIsPreemptable, index_cdg - baseIndex__cdg, prefix__cdg + "IsPreemptable");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->mIsGoalOnly);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->mIsGoalOnly, index_cdg - baseIndex__cdg, prefix__cdg + "IsGoalOnly");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmForceTorqueJointSet index out of range"));
    return "";
}
double prmForceTorqueJointSet::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::Scalar(*this, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<double> >::ScalarNumber(this->mForceTorque);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<double> >::Scalar(this->mForceTorque, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDynamicVector<bool> >::ScalarNumber(this->mMask);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDynamicVector<bool> >::Scalar(this->mMask, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<prmBlocking >::ScalarNumber(this->mBlockingFlag);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<prmBlocking >::Scalar(this->mBlockingFlag, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->mBlendingFactor);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->mBlendingFactor, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->mIsPreemptable);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->mIsPreemptable, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->mIsGoalOnly);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->mIsGoalOnly, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: prmForceTorqueJointSet index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmForceTorqueJointSet >::SerializeText(const prmForceTorqueJointSet & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmForceTorqueJointSet::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsGenericObject >::SerializeText(*(dynamic_cast<const mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<vctDynamicVector<double> >::SerializeText(this->mForceTorque, jsonValue["ForceTorque"]);
    cmnDataJSON<vctDynamicVector<bool> >::SerializeText(this->mMask, jsonValue["Mask"]);
    cmnDataJSON<prmBlocking >::SerializeText(this->mBlockingFlag, jsonValue["BlockingFlag"]);
    cmnDataJSON<bool >::SerializeText(this->mBlendingFactor, jsonValue["BlendingFactor"]);
    cmnDataJSON<bool >::SerializeText(this->mIsPreemptable, jsonValue["IsPreemptable"]);
    cmnDataJSON<bool >::SerializeText(this->mIsGoalOnly, jsonValue["IsGoalOnly"]);
}
template<>
void cmnDataJSON<prmForceTorqueJointSet >::DeSerializeText(prmForceTorqueJointSet & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmForceTorqueJointSet::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    cmnDataJSON<mtsGenericObject >::DeSerializeText(*(dynamic_cast<mtsGenericObject*>(this)), jsonValue);
    Json::Value field__cdg;
    field__cdg = jsonValue["ForceTorque"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<double> >::DeSerializeText(this->mForceTorque, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDynamicVector<double>>::DeSerializeText: empty JSON value for: mForceTorque");
    };
    field__cdg = jsonValue["Mask"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDynamicVector<bool> >::DeSerializeText(this->mMask, field__cdg);
    };
    field__cdg = jsonValue["BlockingFlag"];
    if (!field__cdg.empty()) {
        cmnDataJSON<prmBlocking >::DeSerializeText(this->mBlockingFlag, field__cdg);
    };
    field__cdg = jsonValue["BlendingFactor"];
    if (!field__cdg.empty()) {
        cmnDataJSON<bool >::DeSerializeText(this->mBlendingFactor, field__cdg);
    };
    field__cdg = jsonValue["IsPreemptable"];
    if (!field__cdg.empty()) {
        cmnDataJSON<bool >::DeSerializeText(this->mIsPreemptable, field__cdg);
    };
    field__cdg = jsonValue["IsGoalOnly"];
    if (!field__cdg.empty()) {
        cmnDataJSON<bool >::DeSerializeText(this->mIsGoalOnly, field__cdg);
    };
}
#endif // CISST_HAS_JSON


