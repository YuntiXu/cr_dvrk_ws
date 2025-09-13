// file automatically generated, do not modify
// cisst version: 1.3.1
// source file: /home/ytxu/cr_dvrk_ws/src/cisst-saw/cisst/cisstParameterTypes/code/../prmPositionCartesianSet.cdg

#include <cisstParameterTypes/prmPositionCartesianSet.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 13 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmPositionCartesianSetProxy);

prmPositionCartesianSet::prmPositionCartesianSet(void):
    mtsGenericObject()
    , mGoal()
    , mVelocity(vctDouble3(0.0))
    , mVelocityAngular(vctDouble3(0.0))
    , mAcceleration(vctDouble3(0.0))
    , mAngularAcceleration(vctDouble3(0.0))
    , mMask(true)
    , mMovingFrame(std::string())
    , mReferenceFrame(std::string())
    , mBlockingFlag(prmBlocking::NO_WAIT)
    , mBlendingFactor(false)
    , mIsPreemptable(true)
    , mIsGoalOnly(true)
{}

prmPositionCartesianSet::prmPositionCartesianSet(const prmPositionCartesianSet & other):
    mtsGenericObject(other)
    , mGoal(other.mGoal)
    , mVelocity(other.mVelocity)
    , mVelocityAngular(other.mVelocityAngular)
    , mAcceleration(other.mAcceleration)
    , mAngularAcceleration(other.mAngularAcceleration)
    , mMask(other.mMask)
    , mMovingFrame(other.mMovingFrame)
    , mReferenceFrame(other.mReferenceFrame)
    , mBlockingFlag(other.mBlockingFlag)
    , mBlendingFactor(other.mBlendingFactor)
    , mIsPreemptable(other.mIsPreemptable)
    , mIsGoalOnly(other.mIsGoalOnly)
{}

prmPositionCartesianSet & prmPositionCartesianSet::operator = (const prmPositionCartesianSet & other)
{
    mtsGenericObject::operator = (other);
    mGoal = other.mGoal;
    mVelocity = other.mVelocity;
    mVelocityAngular = other.mVelocityAngular;
    mAcceleration = other.mAcceleration;
    mAngularAcceleration = other.mAngularAcceleration;
    mMask = other.mMask;
    mMovingFrame = other.mMovingFrame;
    mReferenceFrame = other.mReferenceFrame;
    mBlockingFlag = other.mBlockingFlag;
    mBlendingFactor = other.mBlendingFactor;
    mIsPreemptable = other.mIsPreemptable;
    mIsGoalOnly = other.mIsGoalOnly;
    return *this;
}

prmPositionCartesianSet::~prmPositionCartesianSet(void){}


void prmPositionCartesianSet::SerializeRaw(std::ostream & outputStream__cdg) const
{
    mtsGenericObject::SerializeRaw(outputStream__cdg);
    cmnSerializeRaw(outputStream__cdg, this->mGoal);
    cmnSerializeRaw(outputStream__cdg, this->mVelocity);
    cmnSerializeRaw(outputStream__cdg, this->mVelocityAngular);
    cmnSerializeRaw(outputStream__cdg, this->mAcceleration);
    cmnSerializeRaw(outputStream__cdg, this->mAngularAcceleration);
    cmnSerializeRaw(outputStream__cdg, this->mMask);
    cmnSerializeRaw(outputStream__cdg, this->mMovingFrame);
    cmnSerializeRaw(outputStream__cdg, this->mReferenceFrame);
    cmnSerializeRaw(outputStream__cdg, this->mBlockingFlag);
    cmnSerializeRaw(outputStream__cdg, this->mBlendingFactor);
    cmnSerializeRaw(outputStream__cdg, this->mIsPreemptable);
    cmnSerializeRaw(outputStream__cdg, this->mIsGoalOnly);
}


void prmPositionCartesianSet::DeSerializeRaw(std::istream & inputStream__cdg)
{
    mtsGenericObject::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeRaw(inputStream__cdg, this->mGoal);
    cmnDeSerializeRaw(inputStream__cdg, this->mVelocity);
    cmnDeSerializeRaw(inputStream__cdg, this->mVelocityAngular);
    cmnDeSerializeRaw(inputStream__cdg, this->mAcceleration);
    cmnDeSerializeRaw(inputStream__cdg, this->mAngularAcceleration);
    cmnDeSerializeRaw(inputStream__cdg, this->mMask);
    cmnDeSerializeRaw(inputStream__cdg, this->mMovingFrame);
    cmnDeSerializeRaw(inputStream__cdg, this->mReferenceFrame);
    cmnDeSerializeRaw(inputStream__cdg, this->mBlockingFlag);
    cmnDeSerializeRaw(inputStream__cdg, this->mBlendingFactor);
    cmnDeSerializeRaw(inputStream__cdg, this->mIsPreemptable);
    cmnDeSerializeRaw(inputStream__cdg, this->mIsGoalOnly);
}


void prmPositionCartesianSet::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void prmPositionCartesianSet::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<prmPositionCartesianSet >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<prmPositionCartesianSet >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 23 */

/* accessors is set to: all */
void prmPositionCartesianSet::GetGoal(vctDoubleFrm3 & placeHolder) const
{
    placeHolder = this->mGoal;
}

void prmPositionCartesianSet::SetGoal(const vctDoubleFrm3 & newValue)
{
    this->mGoal = newValue;
}


/* accessors is set to: all */
const vctDoubleFrm3 & prmPositionCartesianSet::Goal(void) const
{
    return this->mGoal;
}

vctDoubleFrm3 & prmPositionCartesianSet::Goal(void)
{
    return this->mGoal;
}

/* source line: 29 */

/* accessors is set to: all */
void prmPositionCartesianSet::GetVelocity(vctDouble3 & placeHolder) const
{
    placeHolder = this->mVelocity;
}

void prmPositionCartesianSet::SetVelocity(const vctDouble3 & newValue)
{
    this->mVelocity = newValue;
}


/* accessors is set to: all */
const vctDouble3 & prmPositionCartesianSet::Velocity(void) const
{
    return this->mVelocity;
}

vctDouble3 & prmPositionCartesianSet::Velocity(void)
{
    return this->mVelocity;
}

/* source line: 36 */

/* accessors is set to: all */
void prmPositionCartesianSet::GetVelocityAngular(vctDouble3 & placeHolder) const
{
    placeHolder = this->mVelocityAngular;
}

void prmPositionCartesianSet::SetVelocityAngular(const vctDouble3 & newValue)
{
    this->mVelocityAngular = newValue;
}


/* accessors is set to: all */
const vctDouble3 & prmPositionCartesianSet::VelocityAngular(void) const
{
    return this->mVelocityAngular;
}

vctDouble3 & prmPositionCartesianSet::VelocityAngular(void)
{
    return this->mVelocityAngular;
}

/* source line: 43 */

/* accessors is set to: all */
void prmPositionCartesianSet::GetAcceleration(vctDouble3 & placeHolder) const
{
    placeHolder = this->mAcceleration;
}

void prmPositionCartesianSet::SetAcceleration(const vctDouble3 & newValue)
{
    this->mAcceleration = newValue;
}


/* accessors is set to: all */
const vctDouble3 & prmPositionCartesianSet::Acceleration(void) const
{
    return this->mAcceleration;
}

vctDouble3 & prmPositionCartesianSet::Acceleration(void)
{
    return this->mAcceleration;
}

/* source line: 50 */

/* accessors is set to: all */
void prmPositionCartesianSet::GetAngularAcceleration(vctDouble3 & placeHolder) const
{
    placeHolder = this->mAngularAcceleration;
}

void prmPositionCartesianSet::SetAngularAcceleration(const vctDouble3 & newValue)
{
    this->mAngularAcceleration = newValue;
}


/* accessors is set to: all */
const vctDouble3 & prmPositionCartesianSet::AngularAcceleration(void) const
{
    return this->mAngularAcceleration;
}

vctDouble3 & prmPositionCartesianSet::AngularAcceleration(void)
{
    return this->mAngularAcceleration;
}

/* source line: 57 */

/* accessors is set to: all */
void prmPositionCartesianSet::GetMask(vctBool2 & placeHolder) const
{
    placeHolder = this->mMask;
}

void prmPositionCartesianSet::SetMask(const vctBool2 & newValue)
{
    this->mMask = newValue;
}


/* accessors is set to: all */
const vctBool2 & prmPositionCartesianSet::Mask(void) const
{
    return this->mMask;
}

vctBool2 & prmPositionCartesianSet::Mask(void)
{
    return this->mMask;
}

/* source line: 64 */

/* accessors is set to: all */
void prmPositionCartesianSet::GetMovingFrame(std::string & placeHolder) const
{
    placeHolder = this->mMovingFrame;
}

void prmPositionCartesianSet::SetMovingFrame(const std::string & newValue)
{
    this->mMovingFrame = newValue;
}


/* accessors is set to: all */
const std::string & prmPositionCartesianSet::MovingFrame(void) const
{
    return this->mMovingFrame;
}

std::string & prmPositionCartesianSet::MovingFrame(void)
{
    return this->mMovingFrame;
}

/* source line: 71 */

/* accessors is set to: all */
void prmPositionCartesianSet::GetReferenceFrame(std::string & placeHolder) const
{
    placeHolder = this->mReferenceFrame;
}

void prmPositionCartesianSet::SetReferenceFrame(const std::string & newValue)
{
    this->mReferenceFrame = newValue;
}


/* accessors is set to: all */
const std::string & prmPositionCartesianSet::ReferenceFrame(void) const
{
    return this->mReferenceFrame;
}

std::string & prmPositionCartesianSet::ReferenceFrame(void)
{
    return this->mReferenceFrame;
}

/* source line: 79 */

/* accessors is set to: all */
void prmPositionCartesianSet::GetBlockingFlag(prmBlocking & placeHolder) const
{
    placeHolder = this->mBlockingFlag;
}

void prmPositionCartesianSet::SetBlockingFlag(const prmBlocking & newValue)
{
    this->mBlockingFlag = newValue;
}


/* accessors is set to: all */
const prmBlocking & prmPositionCartesianSet::BlockingFlag(void) const
{
    return this->mBlockingFlag;
}

prmBlocking & prmPositionCartesianSet::BlockingFlag(void)
{
    return this->mBlockingFlag;
}

/* source line: 85 */

/* accessors is set to: all */
void prmPositionCartesianSet::GetBlendingFactor(bool & placeHolder) const
{
    placeHolder = this->mBlendingFactor;
}

void prmPositionCartesianSet::SetBlendingFactor(const bool & newValue)
{
    this->mBlendingFactor = newValue;
}


/* accessors is set to: all */
const bool & prmPositionCartesianSet::BlendingFactor(void) const
{
    return this->mBlendingFactor;
}

bool & prmPositionCartesianSet::BlendingFactor(void)
{
    return this->mBlendingFactor;
}

/* source line: 91 */

/* accessors is set to: all */
void prmPositionCartesianSet::GetIsPreemptable(bool & placeHolder) const
{
    placeHolder = this->mIsPreemptable;
}

void prmPositionCartesianSet::SetIsPreemptable(const bool & newValue)
{
    this->mIsPreemptable = newValue;
}


/* accessors is set to: all */
const bool & prmPositionCartesianSet::IsPreemptable(void) const
{
    return this->mIsPreemptable;
}

bool & prmPositionCartesianSet::IsPreemptable(void)
{
    return this->mIsPreemptable;
}

/* source line: 97 */

/* accessors is set to: all */
void prmPositionCartesianSet::GetIsGoalOnly(bool & placeHolder) const
{
    placeHolder = this->mIsGoalOnly;
}

void prmPositionCartesianSet::SetIsGoalOnly(const bool & newValue)
{
    this->mIsGoalOnly = newValue;
}


/* accessors is set to: all */
const bool & prmPositionCartesianSet::IsGoalOnly(void) const
{
    return this->mIsGoalOnly;
}

bool & prmPositionCartesianSet::IsGoalOnly(void)
{
    return this->mIsGoalOnly;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmPositionCartesianSet & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmPositionCartesianSet & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmPositionCartesianSet::Copy(const prmPositionCartesianSet & source__cdg) {
    cmnData<mtsGenericObject >::Copy(*this, source__cdg);
    cmnData<vctDoubleFrm3 >::Copy(this->mGoal, source__cdg.mGoal);
    cmnData<vctDouble3 >::Copy(this->mVelocity, source__cdg.mVelocity);
    cmnData<vctDouble3 >::Copy(this->mVelocityAngular, source__cdg.mVelocityAngular);
    cmnData<vctDouble3 >::Copy(this->mAcceleration, source__cdg.mAcceleration);
    cmnData<vctDouble3 >::Copy(this->mAngularAcceleration, source__cdg.mAngularAcceleration);
    cmnData<vctBool2 >::Copy(this->mMask, source__cdg.mMask);
    cmnData<std::string >::Copy(this->mMovingFrame, source__cdg.mMovingFrame);
    cmnData<std::string >::Copy(this->mReferenceFrame, source__cdg.mReferenceFrame);
    cmnData<prmBlocking >::Copy(this->mBlockingFlag, source__cdg.mBlockingFlag);
    cmnData<bool >::Copy(this->mBlendingFactor, source__cdg.mBlendingFactor);
    cmnData<bool >::Copy(this->mIsPreemptable, source__cdg.mIsPreemptable);
    cmnData<bool >::Copy(this->mIsGoalOnly, source__cdg.mIsGoalOnly);
}
void prmPositionCartesianSet::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::SerializeBinary(*this, outputStream__cdg);
    cmnData<vctDoubleFrm3 >::SerializeBinary(this->mGoal, outputStream__cdg);
    cmnData<vctDouble3 >::SerializeBinary(this->mVelocity, outputStream__cdg);
    cmnData<vctDouble3 >::SerializeBinary(this->mVelocityAngular, outputStream__cdg);
    cmnData<vctDouble3 >::SerializeBinary(this->mAcceleration, outputStream__cdg);
    cmnData<vctDouble3 >::SerializeBinary(this->mAngularAcceleration, outputStream__cdg);
    cmnData<vctBool2 >::SerializeBinary(this->mMask, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->mMovingFrame, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->mReferenceFrame, outputStream__cdg);
    cmnData<prmBlocking >::SerializeBinary(this->mBlockingFlag, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->mBlendingFactor, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->mIsPreemptable, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->mIsGoalOnly, outputStream__cdg);
}
void prmPositionCartesianSet::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDoubleFrm3 >::DeSerializeBinary(this->mGoal, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDouble3 >::DeSerializeBinary(this->mVelocity, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDouble3 >::DeSerializeBinary(this->mVelocityAngular, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDouble3 >::DeSerializeBinary(this->mAcceleration, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDouble3 >::DeSerializeBinary(this->mAngularAcceleration, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctBool2 >::DeSerializeBinary(this->mMask, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->mMovingFrame, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->mReferenceFrame, inputStream__cdg, localFormat, remoteFormat);
    cmnData<prmBlocking >::DeSerializeBinary(this->mBlockingFlag, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->mBlendingFactor, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->mIsPreemptable, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->mIsGoalOnly, inputStream__cdg, localFormat, remoteFormat);
}
void prmPositionCartesianSet::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
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
    cmnData<vctDoubleFrm3 >::SerializeText(this->mGoal, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDouble3 >::SerializeText(this->mVelocity, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDouble3 >::SerializeText(this->mVelocityAngular, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDouble3 >::SerializeText(this->mAcceleration, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDouble3 >::SerializeText(this->mAngularAcceleration, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctBool2 >::SerializeText(this->mMask, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->mMovingFrame, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->mReferenceFrame, outputStream__cdg, delimiter__cdg);
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
std::string prmPositionCartesianSet::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
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
    description__cdg << cmnData<vctDoubleFrm3 >::SerializeDescription(this->mGoal, delimiter__cdg, prefix__cdg + "Goal");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDouble3 >::SerializeDescription(this->mVelocity, delimiter__cdg, prefix__cdg + "Velocity");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDouble3 >::SerializeDescription(this->mVelocityAngular, delimiter__cdg, prefix__cdg + "VelocityAngular");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDouble3 >::SerializeDescription(this->mAcceleration, delimiter__cdg, prefix__cdg + "Acceleration");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDouble3 >::SerializeDescription(this->mAngularAcceleration, delimiter__cdg, prefix__cdg + "AngularAcceleration");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctBool2 >::SerializeDescription(this->mMask, delimiter__cdg, prefix__cdg + "Mask");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->mMovingFrame, delimiter__cdg, prefix__cdg + "MovingFrame");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->mReferenceFrame, delimiter__cdg, prefix__cdg + "ReferenceFrame");
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
void prmPositionCartesianSet::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmPositionCartesianSet");
    }
    someData__cdg = true;
    cmnData<mtsGenericObject >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmPositionCartesianSet");
    }
    someData__cdg = true;
    cmnData<vctDoubleFrm3 >::DeSerializeText(this->mGoal, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmPositionCartesianSet");
    }
    someData__cdg = true;
    cmnData<vctDouble3 >::DeSerializeText(this->mVelocity, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmPositionCartesianSet");
    }
    someData__cdg = true;
    cmnData<vctDouble3 >::DeSerializeText(this->mVelocityAngular, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmPositionCartesianSet");
    }
    someData__cdg = true;
    cmnData<vctDouble3 >::DeSerializeText(this->mAcceleration, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmPositionCartesianSet");
    }
    someData__cdg = true;
    cmnData<vctDouble3 >::DeSerializeText(this->mAngularAcceleration, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmPositionCartesianSet");
    }
    someData__cdg = true;
    cmnData<vctBool2 >::DeSerializeText(this->mMask, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmPositionCartesianSet");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->mMovingFrame, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmPositionCartesianSet");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->mReferenceFrame, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmPositionCartesianSet");
    }
    someData__cdg = true;
    cmnData<prmBlocking >::DeSerializeText(this->mBlockingFlag, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmPositionCartesianSet");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->mBlendingFactor, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmPositionCartesianSet");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->mIsPreemptable, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmPositionCartesianSet");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->mIsGoalOnly, inputStream__cdg, delimiter__cdg);
}
std::string prmPositionCartesianSet::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "prmPositionCartesianSet" << std::endl;
    description__cdg << cmnData< mtsGenericObject >::HumanReadable(*this) << std::endl;
    description__cdg << "  Goal:" << cmnData<vctDoubleFrm3 >::HumanReadable(this->mGoal);
    description__cdg << "  Velocity:" << cmnData<vctDouble3 >::HumanReadable(this->mVelocity);
    description__cdg << "  VelocityAngular:" << cmnData<vctDouble3 >::HumanReadable(this->mVelocityAngular);
    description__cdg << "  Acceleration:" << cmnData<vctDouble3 >::HumanReadable(this->mAcceleration);
    description__cdg << "  AngularAcceleration:" << cmnData<vctDouble3 >::HumanReadable(this->mAngularAcceleration);
    description__cdg << "  Mask:" << cmnData<vctBool2 >::HumanReadable(this->mMask);
    description__cdg << "  MovingFrame:" << cmnData<std::string >::HumanReadable(this->mMovingFrame);
    description__cdg << "  ReferenceFrame:" << cmnData<std::string >::HumanReadable(this->mReferenceFrame);
    description__cdg << "  BlockingFlag:" << cmnData<prmBlocking >::HumanReadable(this->mBlockingFlag);
    description__cdg << "  BlendingFactor:" << cmnData<bool >::HumanReadable(this->mBlendingFactor);
    description__cdg << "  IsPreemptable:" << cmnData<bool >::HumanReadable(this->mIsPreemptable);
    description__cdg << "  IsGoalOnly:" << cmnData<bool >::HumanReadable(this->mIsGoalOnly);
    return description__cdg.str();
}
bool prmPositionCartesianSet::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsGenericObject >::ScalarNumberIsFixed(*this)
           && cmnData<vctDoubleFrm3 >::ScalarNumberIsFixed(this->mGoal)
           && cmnData<vctDouble3 >::ScalarNumberIsFixed(this->mVelocity)
           && cmnData<vctDouble3 >::ScalarNumberIsFixed(this->mVelocityAngular)
           && cmnData<vctDouble3 >::ScalarNumberIsFixed(this->mAcceleration)
           && cmnData<vctDouble3 >::ScalarNumberIsFixed(this->mAngularAcceleration)
           && cmnData<vctBool2 >::ScalarNumberIsFixed(this->mMask)
           && cmnData<std::string >::ScalarNumberIsFixed(this->mMovingFrame)
           && cmnData<std::string >::ScalarNumberIsFixed(this->mReferenceFrame)
           && cmnData<prmBlocking >::ScalarNumberIsFixed(this->mBlockingFlag)
           && cmnData<bool >::ScalarNumberIsFixed(this->mBlendingFactor)
           && cmnData<bool >::ScalarNumberIsFixed(this->mIsPreemptable)
           && cmnData<bool >::ScalarNumberIsFixed(this->mIsGoalOnly)
    ;
}
size_t prmPositionCartesianSet::ScalarNumber(void) const {
    return 0
           + cmnData< mtsGenericObject >::ScalarNumber(*this)
           + cmnData<vctDoubleFrm3 >::ScalarNumber(this->mGoal)
           + cmnData<vctDouble3 >::ScalarNumber(this->mVelocity)
           + cmnData<vctDouble3 >::ScalarNumber(this->mVelocityAngular)
           + cmnData<vctDouble3 >::ScalarNumber(this->mAcceleration)
           + cmnData<vctDouble3 >::ScalarNumber(this->mAngularAcceleration)
           + cmnData<vctBool2 >::ScalarNumber(this->mMask)
           + cmnData<std::string >::ScalarNumber(this->mMovingFrame)
           + cmnData<std::string >::ScalarNumber(this->mReferenceFrame)
           + cmnData<prmBlocking >::ScalarNumber(this->mBlockingFlag)
           + cmnData<bool >::ScalarNumber(this->mBlendingFactor)
           + cmnData<bool >::ScalarNumber(this->mIsPreemptable)
           + cmnData<bool >::ScalarNumber(this->mIsGoalOnly)
    ;
}
std::string prmPositionCartesianSet::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::ScalarDescription(*this, index_cdg - baseIndex__cdg, prefix__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleFrm3 >::ScalarNumber(this->mGoal);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleFrm3 >::ScalarDescription(this->mGoal, index_cdg - baseIndex__cdg, prefix__cdg + "Goal");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDouble3 >::ScalarNumber(this->mVelocity);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDouble3 >::ScalarDescription(this->mVelocity, index_cdg - baseIndex__cdg, prefix__cdg + "Velocity");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDouble3 >::ScalarNumber(this->mVelocityAngular);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDouble3 >::ScalarDescription(this->mVelocityAngular, index_cdg - baseIndex__cdg, prefix__cdg + "VelocityAngular");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDouble3 >::ScalarNumber(this->mAcceleration);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDouble3 >::ScalarDescription(this->mAcceleration, index_cdg - baseIndex__cdg, prefix__cdg + "Acceleration");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDouble3 >::ScalarNumber(this->mAngularAcceleration);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDouble3 >::ScalarDescription(this->mAngularAcceleration, index_cdg - baseIndex__cdg, prefix__cdg + "AngularAcceleration");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctBool2 >::ScalarNumber(this->mMask);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctBool2 >::ScalarDescription(this->mMask, index_cdg - baseIndex__cdg, prefix__cdg + "Mask");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->mMovingFrame);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->mMovingFrame, index_cdg - baseIndex__cdg, prefix__cdg + "MovingFrame");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->mReferenceFrame);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->mReferenceFrame, index_cdg - baseIndex__cdg, prefix__cdg + "ReferenceFrame");
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
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmPositionCartesianSet index out of range"));
    return "";
}
double prmPositionCartesianSet::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::Scalar(*this, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleFrm3 >::ScalarNumber(this->mGoal);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleFrm3 >::Scalar(this->mGoal, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDouble3 >::ScalarNumber(this->mVelocity);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDouble3 >::Scalar(this->mVelocity, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDouble3 >::ScalarNumber(this->mVelocityAngular);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDouble3 >::Scalar(this->mVelocityAngular, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDouble3 >::ScalarNumber(this->mAcceleration);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDouble3 >::Scalar(this->mAcceleration, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDouble3 >::ScalarNumber(this->mAngularAcceleration);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDouble3 >::Scalar(this->mAngularAcceleration, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctBool2 >::ScalarNumber(this->mMask);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctBool2 >::Scalar(this->mMask, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->mMovingFrame);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->mMovingFrame, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->mReferenceFrame);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->mReferenceFrame, index_cdg - baseIndex__cdg);
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
    cmnThrow(std::out_of_range("cmnDataScalar: prmPositionCartesianSet index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmPositionCartesianSet >::SerializeText(const prmPositionCartesianSet & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmPositionCartesianSet::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsGenericObject >::SerializeText(*(dynamic_cast<const mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<vctDoubleFrm3 >::SerializeText(this->mGoal, jsonValue["Goal"]);
    cmnDataJSON<vctDouble3 >::SerializeText(this->mVelocity, jsonValue["Velocity"]);
    cmnDataJSON<vctDouble3 >::SerializeText(this->mVelocityAngular, jsonValue["VelocityAngular"]);
    cmnDataJSON<vctDouble3 >::SerializeText(this->mAcceleration, jsonValue["Acceleration"]);
    cmnDataJSON<vctDouble3 >::SerializeText(this->mAngularAcceleration, jsonValue["AngularAcceleration"]);
    cmnDataJSON<vctBool2 >::SerializeText(this->mMask, jsonValue["Mask"]);
    cmnDataJSON<std::string >::SerializeText(this->mMovingFrame, jsonValue["MovingFrame"]);
    cmnDataJSON<std::string >::SerializeText(this->mReferenceFrame, jsonValue["ReferenceFrame"]);
    cmnDataJSON<prmBlocking >::SerializeText(this->mBlockingFlag, jsonValue["BlockingFlag"]);
    cmnDataJSON<bool >::SerializeText(this->mBlendingFactor, jsonValue["BlendingFactor"]);
    cmnDataJSON<bool >::SerializeText(this->mIsPreemptable, jsonValue["IsPreemptable"]);
    cmnDataJSON<bool >::SerializeText(this->mIsGoalOnly, jsonValue["IsGoalOnly"]);
}
template<>
void cmnDataJSON<prmPositionCartesianSet >::DeSerializeText(prmPositionCartesianSet & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmPositionCartesianSet::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    cmnDataJSON<mtsGenericObject >::DeSerializeText(*(dynamic_cast<mtsGenericObject*>(this)), jsonValue);
    Json::Value field__cdg;
    field__cdg = jsonValue["Goal"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDoubleFrm3 >::DeSerializeText(this->mGoal, field__cdg);
    } else {
        cmnThrow("cmnDataJson<vctDoubleFrm3>::DeSerializeText: empty JSON value for: mGoal");
    };
    field__cdg = jsonValue["Velocity"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDouble3 >::DeSerializeText(this->mVelocity, field__cdg);
    };
    field__cdg = jsonValue["VelocityAngular"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDouble3 >::DeSerializeText(this->mVelocityAngular, field__cdg);
    };
    field__cdg = jsonValue["Acceleration"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDouble3 >::DeSerializeText(this->mAcceleration, field__cdg);
    };
    field__cdg = jsonValue["AngularAcceleration"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctDouble3 >::DeSerializeText(this->mAngularAcceleration, field__cdg);
    };
    field__cdg = jsonValue["Mask"];
    if (!field__cdg.empty()) {
        cmnDataJSON<vctBool2 >::DeSerializeText(this->mMask, field__cdg);
    };
    field__cdg = jsonValue["MovingFrame"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->mMovingFrame, field__cdg);
    };
    field__cdg = jsonValue["ReferenceFrame"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->mReferenceFrame, field__cdg);
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


