/**
 * Nhss_imsUECM
 * Nhss UE Context Management Service for IMS. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ScscfCapabilityList.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ScscfCapabilityList::ScscfCapabilityList() {
  m_MandatoryCapabilityListIsSet = false;
  m_OptionalCapabilityListIsSet = false;
}

ScscfCapabilityList::~ScscfCapabilityList() {}

void ScscfCapabilityList::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const ScscfCapabilityList &o) {
  j = nlohmann::json();
  if (o.mandatoryCapabilityListIsSet() || !o.m_MandatoryCapabilityList.empty())
    j["mandatoryCapabilityList"] = o.m_MandatoryCapabilityList;
  if (o.optionalCapabilityListIsSet() || !o.m_OptionalCapabilityList.empty())
    j["optionalCapabilityList"] = o.m_OptionalCapabilityList;
}

void from_json(const nlohmann::json &j, ScscfCapabilityList &o) {
  if (j.find("mandatoryCapabilityList") != j.end()) {
    j.at("mandatoryCapabilityList").get_to(o.m_MandatoryCapabilityList);
    o.m_MandatoryCapabilityListIsSet = true;
  }
  if (j.find("optionalCapabilityList") != j.end()) {
    j.at("optionalCapabilityList").get_to(o.m_OptionalCapabilityList);
    o.m_OptionalCapabilityListIsSet = true;
  }
}

std::vector<int32_t> &ScscfCapabilityList::getMandatoryCapabilityList() {
  return m_MandatoryCapabilityList;
}
void ScscfCapabilityList::setMandatoryCapabilityList(
    std::vector<int32_t> const value) {
  m_MandatoryCapabilityList = value;
  m_MandatoryCapabilityListIsSet = true;
}
bool ScscfCapabilityList::mandatoryCapabilityListIsSet() const {
  return m_MandatoryCapabilityListIsSet;
}
void ScscfCapabilityList::unsetMandatoryCapabilityList() {
  m_MandatoryCapabilityListIsSet = false;
}
std::vector<int32_t> &ScscfCapabilityList::getOptionalCapabilityList() {
  return m_OptionalCapabilityList;
}
void ScscfCapabilityList::setOptionalCapabilityList(
    std::vector<int32_t> const value) {
  m_OptionalCapabilityList = value;
  m_OptionalCapabilityListIsSet = true;
}
bool ScscfCapabilityList::optionalCapabilityListIsSet() const {
  return m_OptionalCapabilityListIsSet;
}
void ScscfCapabilityList::unsetOptionalCapabilityList() {
  m_OptionalCapabilityListIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org