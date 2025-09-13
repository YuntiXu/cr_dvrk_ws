// file automatically generated, do not modify
// cisst version: 1.3.1
// source file: /home/ytxu/cr_dvrk_ws/src/cisst-saw/sawControllers/components/code/mtsPIDConfiguration.cdg

#include <sawControllers/mtsPIDConfiguration.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 9 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(mtsPIDAxisConfigurationProxy);

mtsPIDAxisConfiguration::mtsPIDAxisConfiguration(void):
    index()
    , name()
    , type()
    , p_gain()
    , d_gain()
    , i_gain()
    , i_forget_rate(1.0)
    , i_limit(0.0)
    , p_deadband(0.0)
    , offset(0.0)
    , error_limit(cmnTypeTraits<double>::MaxPositiveValue())
    , v_low_pass_cutoff(1.0)
    , use_disturbance_observer(false)
    , nominal_mass(0.0)
    , disturbance_cutoff(0.0)
{}

mtsPIDAxisConfiguration::mtsPIDAxisConfiguration(const mtsPIDAxisConfiguration & other):
    index(other.index)
    , name(other.name)
    , type(other.type)
    , p_gain(other.p_gain)
    , d_gain(other.d_gain)
    , i_gain(other.i_gain)
    , i_forget_rate(other.i_forget_rate)
    , i_limit(other.i_limit)
    , p_deadband(other.p_deadband)
    , offset(other.offset)
    , error_limit(other.error_limit)
    , v_low_pass_cutoff(other.v_low_pass_cutoff)
    , use_disturbance_observer(other.use_disturbance_observer)
    , nominal_mass(other.nominal_mass)
    , disturbance_cutoff(other.disturbance_cutoff)
{}

mtsPIDAxisConfiguration & mtsPIDAxisConfiguration::operator = (const mtsPIDAxisConfiguration & other)
{
    index = other.index;
    name = other.name;
    type = other.type;
    p_gain = other.p_gain;
    d_gain = other.d_gain;
    i_gain = other.i_gain;
    i_forget_rate = other.i_forget_rate;
    i_limit = other.i_limit;
    p_deadband = other.p_deadband;
    offset = other.offset;
    error_limit = other.error_limit;
    v_low_pass_cutoff = other.v_low_pass_cutoff;
    use_disturbance_observer = other.use_disturbance_observer;
    nominal_mass = other.nominal_mass;
    disturbance_cutoff = other.disturbance_cutoff;
    return *this;
}

mtsPIDAxisConfiguration::~mtsPIDAxisConfiguration(void){}


void mtsPIDAxisConfiguration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeSizeRaw(outputStream__cdg, this->index);
    cmnSerializeRaw(outputStream__cdg, this->name);
    cmnSerializeRaw(outputStream__cdg, this->type);
    cmnSerializeRaw(outputStream__cdg, this->p_gain);
    cmnSerializeRaw(outputStream__cdg, this->d_gain);
    cmnSerializeRaw(outputStream__cdg, this->i_gain);
    cmnSerializeRaw(outputStream__cdg, this->i_forget_rate);
    cmnSerializeRaw(outputStream__cdg, this->i_limit);
    cmnSerializeRaw(outputStream__cdg, this->p_deadband);
    cmnSerializeRaw(outputStream__cdg, this->offset);
    cmnSerializeRaw(outputStream__cdg, this->error_limit);
    cmnSerializeRaw(outputStream__cdg, this->v_low_pass_cutoff);
    cmnSerializeRaw(outputStream__cdg, this->use_disturbance_observer);
    cmnSerializeRaw(outputStream__cdg, this->nominal_mass);
    cmnSerializeRaw(outputStream__cdg, this->disturbance_cutoff);
}


void mtsPIDAxisConfiguration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeSizeRaw(inputStream__cdg, this->index);
    cmnDeSerializeRaw(inputStream__cdg, this->name);
    cmnDeSerializeRaw(inputStream__cdg, this->type);
    cmnDeSerializeRaw(inputStream__cdg, this->p_gain);
    cmnDeSerializeRaw(inputStream__cdg, this->d_gain);
    cmnDeSerializeRaw(inputStream__cdg, this->i_gain);
    cmnDeSerializeRaw(inputStream__cdg, this->i_forget_rate);
    cmnDeSerializeRaw(inputStream__cdg, this->i_limit);
    cmnDeSerializeRaw(inputStream__cdg, this->p_deadband);
    cmnDeSerializeRaw(inputStream__cdg, this->offset);
    cmnDeSerializeRaw(inputStream__cdg, this->error_limit);
    cmnDeSerializeRaw(inputStream__cdg, this->v_low_pass_cutoff);
    cmnDeSerializeRaw(inputStream__cdg, this->use_disturbance_observer);
    cmnDeSerializeRaw(inputStream__cdg, this->nominal_mass);
    cmnDeSerializeRaw(inputStream__cdg, this->disturbance_cutoff);
}


void mtsPIDAxisConfiguration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsPIDAxisConfiguration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsPIDAxisConfiguration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsPIDAxisConfiguration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 12 */
/* source line: 18 */
/* source line: 23 */
/* source line: 29 */
/* source line: 35 */
/* source line: 41 */
/* source line: 47 */
/* source line: 54 */
/* source line: 61 */
/* source line: 68 */
/* source line: 75 */
/* source line: 82 */
/* source line: 88 */
/* source line: 94 */
/* source line: 100 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsPIDAxisConfiguration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsPIDAxisConfiguration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsPIDAxisConfiguration::Copy(const mtsPIDAxisConfiguration & source__cdg) {
    cmnData<size_t >::Copy(this->index, source__cdg.index);
    cmnData<std::string >::Copy(this->name, source__cdg.name);
    cmnData<cmnJointType >::Copy(this->type, source__cdg.type);
    cmnData<double >::Copy(this->p_gain, source__cdg.p_gain);
    cmnData<double >::Copy(this->d_gain, source__cdg.d_gain);
    cmnData<double >::Copy(this->i_gain, source__cdg.i_gain);
    cmnData<double >::Copy(this->i_forget_rate, source__cdg.i_forget_rate);
    cmnData<double >::Copy(this->i_limit, source__cdg.i_limit);
    cmnData<double >::Copy(this->p_deadband, source__cdg.p_deadband);
    cmnData<double >::Copy(this->offset, source__cdg.offset);
    cmnData<double >::Copy(this->error_limit, source__cdg.error_limit);
    cmnData<double >::Copy(this->v_low_pass_cutoff, source__cdg.v_low_pass_cutoff);
    cmnData<bool >::Copy(this->use_disturbance_observer, source__cdg.use_disturbance_observer);
    cmnData<double >::Copy(this->nominal_mass, source__cdg.nominal_mass);
    cmnData<double >::Copy(this->disturbance_cutoff, source__cdg.disturbance_cutoff);
}
void mtsPIDAxisConfiguration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<size_t >::SerializeBinary(this->index, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->name, outputStream__cdg);
    cmnData<cmnJointType >::SerializeBinary(this->type, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->p_gain, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->d_gain, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->i_gain, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->i_forget_rate, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->i_limit, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->p_deadband, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->offset, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->error_limit, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->v_low_pass_cutoff, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->use_disturbance_observer, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->nominal_mass, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->disturbance_cutoff, outputStream__cdg);
}
void mtsPIDAxisConfiguration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnDataDeSerializeBinary_size_t(this->index, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->name, inputStream__cdg, localFormat, remoteFormat);
    cmnData<cmnJointType >::DeSerializeBinary(this->type, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->p_gain, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->d_gain, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->i_gain, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->i_forget_rate, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->i_limit, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->p_deadband, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->offset, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->error_limit, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->v_low_pass_cutoff, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->use_disturbance_observer, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->nominal_mass, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->disturbance_cutoff, inputStream__cdg, localFormat, remoteFormat);
}
void mtsPIDAxisConfiguration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<size_t >::SerializeText(this->index, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->name, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<cmnJointType >::SerializeText(this->type, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->p_gain, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->d_gain, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->i_gain, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->i_forget_rate, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->i_limit, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->p_deadband, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->offset, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->error_limit, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->v_low_pass_cutoff, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->use_disturbance_observer, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->nominal_mass, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->disturbance_cutoff, outputStream__cdg, delimiter__cdg);
}
std::string mtsPIDAxisConfiguration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<size_t >::SerializeDescription(this->index, delimiter__cdg, prefix__cdg + "index");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->name, delimiter__cdg, prefix__cdg + "name");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<cmnJointType >::SerializeDescription(this->type, delimiter__cdg, prefix__cdg + "type");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->p_gain, delimiter__cdg, prefix__cdg + "p_gain");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->d_gain, delimiter__cdg, prefix__cdg + "d_gain");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->i_gain, delimiter__cdg, prefix__cdg + "i_gain");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->i_forget_rate, delimiter__cdg, prefix__cdg + "i_forget_rate");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->i_limit, delimiter__cdg, prefix__cdg + "i_limit");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->p_deadband, delimiter__cdg, prefix__cdg + "p_deadband");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->offset, delimiter__cdg, prefix__cdg + "offset");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->error_limit, delimiter__cdg, prefix__cdg + "error_limit");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->v_low_pass_cutoff, delimiter__cdg, prefix__cdg + "v_low_pass_cutoff");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->use_disturbance_observer, delimiter__cdg, prefix__cdg + "use_disturbance_observer");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->nominal_mass, delimiter__cdg, prefix__cdg + "nominal_mass");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->disturbance_cutoff, delimiter__cdg, prefix__cdg + "disturbance_cutoff");
    return description__cdg.str();
}
void mtsPIDAxisConfiguration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsPIDAxisConfiguration");
    }
    someData__cdg = true;
    cmnData<size_t >::DeSerializeText(this->index, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsPIDAxisConfiguration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->name, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsPIDAxisConfiguration");
    }
    someData__cdg = true;
    cmnData<cmnJointType >::DeSerializeText(this->type, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsPIDAxisConfiguration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->p_gain, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsPIDAxisConfiguration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->d_gain, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsPIDAxisConfiguration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->i_gain, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsPIDAxisConfiguration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->i_forget_rate, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsPIDAxisConfiguration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->i_limit, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsPIDAxisConfiguration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->p_deadband, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsPIDAxisConfiguration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->offset, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsPIDAxisConfiguration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->error_limit, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsPIDAxisConfiguration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->v_low_pass_cutoff, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsPIDAxisConfiguration");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->use_disturbance_observer, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsPIDAxisConfiguration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->nominal_mass, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "mtsPIDAxisConfiguration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->disturbance_cutoff, inputStream__cdg, delimiter__cdg);
}
std::string mtsPIDAxisConfiguration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsPIDAxisConfiguration" << std::endl;
    description__cdg << "  index:" << cmnData<size_t >::HumanReadable(this->index);
    description__cdg << "  name:" << cmnData<std::string >::HumanReadable(this->name);
    description__cdg << "  type:" << cmnData<cmnJointType >::HumanReadable(this->type);
    description__cdg << "  p_gain:" << cmnData<double >::HumanReadable(this->p_gain);
    description__cdg << "  d_gain:" << cmnData<double >::HumanReadable(this->d_gain);
    description__cdg << "  i_gain:" << cmnData<double >::HumanReadable(this->i_gain);
    description__cdg << "  i_forget_rate:" << cmnData<double >::HumanReadable(this->i_forget_rate);
    description__cdg << "  i_limit:" << cmnData<double >::HumanReadable(this->i_limit);
    description__cdg << "  p_deadband:" << cmnData<double >::HumanReadable(this->p_deadband);
    description__cdg << "  offset:" << cmnData<double >::HumanReadable(this->offset);
    description__cdg << "  error_limit:" << cmnData<double >::HumanReadable(this->error_limit);
    description__cdg << "  v_low_pass_cutoff:" << cmnData<double >::HumanReadable(this->v_low_pass_cutoff);
    description__cdg << "  use_disturbance_observer:" << cmnData<bool >::HumanReadable(this->use_disturbance_observer);
    description__cdg << "  nominal_mass:" << cmnData<double >::HumanReadable(this->nominal_mass);
    description__cdg << "  disturbance_cutoff:" << cmnData<double >::HumanReadable(this->disturbance_cutoff);
    return description__cdg.str();
}
bool mtsPIDAxisConfiguration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<size_t >::ScalarNumberIsFixed(this->index)
           && cmnData<std::string >::ScalarNumberIsFixed(this->name)
           && cmnData<cmnJointType >::ScalarNumberIsFixed(this->type)
           && cmnData<double >::ScalarNumberIsFixed(this->p_gain)
           && cmnData<double >::ScalarNumberIsFixed(this->d_gain)
           && cmnData<double >::ScalarNumberIsFixed(this->i_gain)
           && cmnData<double >::ScalarNumberIsFixed(this->i_forget_rate)
           && cmnData<double >::ScalarNumberIsFixed(this->i_limit)
           && cmnData<double >::ScalarNumberIsFixed(this->p_deadband)
           && cmnData<double >::ScalarNumberIsFixed(this->offset)
           && cmnData<double >::ScalarNumberIsFixed(this->error_limit)
           && cmnData<double >::ScalarNumberIsFixed(this->v_low_pass_cutoff)
           && cmnData<bool >::ScalarNumberIsFixed(this->use_disturbance_observer)
           && cmnData<double >::ScalarNumberIsFixed(this->nominal_mass)
           && cmnData<double >::ScalarNumberIsFixed(this->disturbance_cutoff)
    ;
}
size_t mtsPIDAxisConfiguration::ScalarNumber(void) const {
    return 0
           + cmnData<size_t >::ScalarNumber(this->index)
           + cmnData<std::string >::ScalarNumber(this->name)
           + cmnData<cmnJointType >::ScalarNumber(this->type)
           + cmnData<double >::ScalarNumber(this->p_gain)
           + cmnData<double >::ScalarNumber(this->d_gain)
           + cmnData<double >::ScalarNumber(this->i_gain)
           + cmnData<double >::ScalarNumber(this->i_forget_rate)
           + cmnData<double >::ScalarNumber(this->i_limit)
           + cmnData<double >::ScalarNumber(this->p_deadband)
           + cmnData<double >::ScalarNumber(this->offset)
           + cmnData<double >::ScalarNumber(this->error_limit)
           + cmnData<double >::ScalarNumber(this->v_low_pass_cutoff)
           + cmnData<bool >::ScalarNumber(this->use_disturbance_observer)
           + cmnData<double >::ScalarNumber(this->nominal_mass)
           + cmnData<double >::ScalarNumber(this->disturbance_cutoff)
    ;
}
std::string mtsPIDAxisConfiguration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<size_t >::ScalarNumber(this->index);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<size_t >::ScalarDescription(this->index, index_cdg - baseIndex__cdg, prefix__cdg + "index");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->name, index_cdg - baseIndex__cdg, prefix__cdg + "name");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<cmnJointType >::ScalarNumber(this->type);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<cmnJointType >::ScalarDescription(this->type, index_cdg - baseIndex__cdg, prefix__cdg + "type");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->p_gain);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->p_gain, index_cdg - baseIndex__cdg, prefix__cdg + "p_gain");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->d_gain);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->d_gain, index_cdg - baseIndex__cdg, prefix__cdg + "d_gain");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->i_gain);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->i_gain, index_cdg - baseIndex__cdg, prefix__cdg + "i_gain");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->i_forget_rate);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->i_forget_rate, index_cdg - baseIndex__cdg, prefix__cdg + "i_forget_rate");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->i_limit);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->i_limit, index_cdg - baseIndex__cdg, prefix__cdg + "i_limit");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->p_deadband);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->p_deadband, index_cdg - baseIndex__cdg, prefix__cdg + "p_deadband");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->offset);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->offset, index_cdg - baseIndex__cdg, prefix__cdg + "offset");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->error_limit);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->error_limit, index_cdg - baseIndex__cdg, prefix__cdg + "error_limit");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->v_low_pass_cutoff);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->v_low_pass_cutoff, index_cdg - baseIndex__cdg, prefix__cdg + "v_low_pass_cutoff");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->use_disturbance_observer);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->use_disturbance_observer, index_cdg - baseIndex__cdg, prefix__cdg + "use_disturbance_observer");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->nominal_mass);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->nominal_mass, index_cdg - baseIndex__cdg, prefix__cdg + "nominal_mass");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->disturbance_cutoff);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->disturbance_cutoff, index_cdg - baseIndex__cdg, prefix__cdg + "disturbance_cutoff");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsPIDAxisConfiguration index out of range"));
    return "";
}
double mtsPIDAxisConfiguration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<size_t >::ScalarNumber(this->index);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<size_t >::Scalar(this->index, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->name, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<cmnJointType >::ScalarNumber(this->type);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<cmnJointType >::Scalar(this->type, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->p_gain);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->p_gain, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->d_gain);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->d_gain, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->i_gain);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->i_gain, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->i_forget_rate);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->i_forget_rate, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->i_limit);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->i_limit, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->p_deadband);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->p_deadband, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->offset);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->offset, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->error_limit);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->error_limit, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->v_low_pass_cutoff);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->v_low_pass_cutoff, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->use_disturbance_observer);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->use_disturbance_observer, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->nominal_mass);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->nominal_mass, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->disturbance_cutoff);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->disturbance_cutoff, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: mtsPIDAxisConfiguration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsPIDAxisConfiguration >::SerializeText(const mtsPIDAxisConfiguration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsPIDAxisConfiguration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<size_t >::SerializeText(this->index, jsonValue["index"]);
    cmnDataJSON<std::string >::SerializeText(this->name, jsonValue["name"]);
    cmnDataJSON<cmnJointType >::SerializeText(this->type, jsonValue["type"]);
    cmnDataJSON<double >::SerializeText(this->p_gain, jsonValue["p_gain"]);
    cmnDataJSON<double >::SerializeText(this->d_gain, jsonValue["d_gain"]);
    cmnDataJSON<double >::SerializeText(this->i_gain, jsonValue["i_gain"]);
    cmnDataJSON<double >::SerializeText(this->i_forget_rate, jsonValue["i_forget_rate"]);
    cmnDataJSON<double >::SerializeText(this->i_limit, jsonValue["i_limit"]);
    cmnDataJSON<double >::SerializeText(this->p_deadband, jsonValue["p_deadband"]);
    cmnDataJSON<double >::SerializeText(this->offset, jsonValue["offset"]);
    cmnDataJSON<double >::SerializeText(this->error_limit, jsonValue["error_limit"]);
    cmnDataJSON<double >::SerializeText(this->v_low_pass_cutoff, jsonValue["v_low_pass_cutoff"]);
    cmnDataJSON<bool >::SerializeText(this->use_disturbance_observer, jsonValue["use_disturbance_observer"]);
    cmnDataJSON<double >::SerializeText(this->nominal_mass, jsonValue["nominal_mass"]);
    cmnDataJSON<double >::SerializeText(this->disturbance_cutoff, jsonValue["disturbance_cutoff"]);
}
template<>
void cmnDataJSON<mtsPIDAxisConfiguration >::DeSerializeText(mtsPIDAxisConfiguration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsPIDAxisConfiguration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["index"];
    if (!field__cdg.empty()) {
        cmnDataJSON<size_t >::DeSerializeText(this->index, field__cdg);
    } else {
        cmnThrow("cmnDataJson<size_t>::DeSerializeText: empty JSON value for: index");
    };
    field__cdg = jsonValue["name"];
    if (!field__cdg.empty()) {
        cmnDataJSON<std::string >::DeSerializeText(this->name, field__cdg);
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: name");
    };
    field__cdg = jsonValue["type"];
    if (!field__cdg.empty()) {
        cmnDataJSON<cmnJointType >::DeSerializeText(this->type, field__cdg);
    } else {
        cmnThrow("cmnDataJson<cmnJointType>::DeSerializeText: empty JSON value for: type");
    };
    field__cdg = jsonValue["p_gain"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->p_gain, field__cdg);
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: p_gain");
    };
    field__cdg = jsonValue["d_gain"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->d_gain, field__cdg);
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: d_gain");
    };
    field__cdg = jsonValue["i_gain"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->i_gain, field__cdg);
    } else {
        cmnThrow("cmnDataJson<double>::DeSerializeText: empty JSON value for: i_gain");
    };
    field__cdg = jsonValue["i_forget_rate"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->i_forget_rate, field__cdg);
    };
    field__cdg = jsonValue["i_limit"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->i_limit, field__cdg);
    };
    field__cdg = jsonValue["p_deadband"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->p_deadband, field__cdg);
    };
    field__cdg = jsonValue["offset"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->offset, field__cdg);
    };
    field__cdg = jsonValue["error_limit"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->error_limit, field__cdg);
    };
    field__cdg = jsonValue["v_low_pass_cutoff"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->v_low_pass_cutoff, field__cdg);
    };
    field__cdg = jsonValue["use_disturbance_observer"];
    if (!field__cdg.empty()) {
        cmnDataJSON<bool >::DeSerializeText(this->use_disturbance_observer, field__cdg);
    };
    field__cdg = jsonValue["nominal_mass"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->nominal_mass, field__cdg);
    };
    field__cdg = jsonValue["disturbance_cutoff"];
    if (!field__cdg.empty()) {
        cmnDataJSON<double >::DeSerializeText(this->disturbance_cutoff, field__cdg);
    };
}
#endif // CISST_HAS_JSON


/* source line: 114 */

    CMN_IMPLEMENT_SERVICES_TEMPLATED(mtsPIDConfigurationProxy);

