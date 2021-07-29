/**
 * Unified Data Repository Service API file for subscription data
 * Unified Data Repository Service (subscription data). The API version is
 * defined in 3GPP TS 29.504. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "VnGroupData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

VnGroupData::VnGroupData() {
  m_PduSessionTypesIsSet = false;
  m_Dnn = "";
  m_DnnIsSet = false;
  m_SingleNssaiIsSet = false;
  m_AppDescriptorsIsSet = false;
}

VnGroupData::~VnGroupData() {}

void VnGroupData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const VnGroupData &o) {
  j = nlohmann::json();
  if (o.pduSessionTypesIsSet())
    j["pduSessionTypes"] = o.m_PduSessionTypes;
  if (o.dnnIsSet())
    j["dnn"] = o.m_Dnn;
  if (o.singleNssaiIsSet())
    j["singleNssai"] = o.m_SingleNssai;
  if (o.appDescriptorsIsSet() || !o.m_AppDescriptors.empty())
    j["appDescriptors"] = o.m_AppDescriptors;
}

void from_json(const nlohmann::json &j, VnGroupData &o) {
  if (j.find("pduSessionTypes") != j.end()) {
    j.at("pduSessionTypes").get_to(o.m_PduSessionTypes);
    o.m_PduSessionTypesIsSet = true;
  }
  if (j.find("dnn") != j.end()) {
    j.at("dnn").get_to(o.m_Dnn);
    o.m_DnnIsSet = true;
  }
  if (j.find("singleNssai") != j.end()) {
    j.at("singleNssai").get_to(o.m_SingleNssai);
    o.m_SingleNssaiIsSet = true;
  }
  if (j.find("appDescriptors") != j.end()) {
    j.at("appDescriptors").get_to(o.m_AppDescriptors);
    o.m_AppDescriptorsIsSet = true;
  }
}

PduSessionTypes VnGroupData::getPduSessionTypes() const {
  return m_PduSessionTypes;
}
void VnGroupData::setPduSessionTypes(PduSessionTypes const &value) {
  m_PduSessionTypes = value;
  m_PduSessionTypesIsSet = true;
}
bool VnGroupData::pduSessionTypesIsSet() const {
  return m_PduSessionTypesIsSet;
}
void VnGroupData::unsetPduSessionTypes() { m_PduSessionTypesIsSet = false; }
std::string VnGroupData::getDnn() const { return m_Dnn; }
void VnGroupData::setDnn(std::string const &value) {
  m_Dnn = value;
  m_DnnIsSet = true;
}
bool VnGroupData::dnnIsSet() const { return m_DnnIsSet; }
void VnGroupData::unsetDnn() { m_DnnIsSet = false; }
Snssai VnGroupData::getSingleNssai() const { return m_SingleNssai; }
void VnGroupData::setSingleNssai(Snssai const &value) {
  m_SingleNssai = value;
  m_SingleNssaiIsSet = true;
}
bool VnGroupData::singleNssaiIsSet() const { return m_SingleNssaiIsSet; }
void VnGroupData::unsetSingleNssai() { m_SingleNssaiIsSet = false; }
std::vector<AppDescriptor> &VnGroupData::getAppDescriptors() {
  return m_AppDescriptors;
}
void VnGroupData::setAppDescriptors(std::vector<AppDescriptor> const &value) {
  m_AppDescriptors = value;
  m_AppDescriptorsIsSet = true;
}
bool VnGroupData::appDescriptorsIsSet() const { return m_AppDescriptorsIsSet; }
void VnGroupData::unsetAppDescriptors() { m_AppDescriptorsIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
