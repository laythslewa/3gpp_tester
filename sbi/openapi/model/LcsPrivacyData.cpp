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

#include "LcsPrivacyData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

LcsPrivacyData::LcsPrivacyData() {
  m_LpiIsSet = false;
  m_UnrelatedClassIsSet = false;
  m_PlmnOperatorClassesIsSet = false;
}

LcsPrivacyData::~LcsPrivacyData() {}

void LcsPrivacyData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const LcsPrivacyData &o) {
  j = nlohmann::json();
  if (o.lpiIsSet())
    j["lpi"] = o.m_Lpi;
  if (o.unrelatedClassIsSet())
    j["unrelatedClass"] = o.m_UnrelatedClass;
  if (o.plmnOperatorClassesIsSet() || !o.m_PlmnOperatorClasses.empty())
    j["plmnOperatorClasses"] = o.m_PlmnOperatorClasses;
}

void from_json(const nlohmann::json &j, LcsPrivacyData &o) {
  if (j.find("lpi") != j.end()) {
    j.at("lpi").get_to(o.m_Lpi);
    o.m_LpiIsSet = true;
  }
  if (j.find("unrelatedClass") != j.end()) {
    j.at("unrelatedClass").get_to(o.m_UnrelatedClass);
    o.m_UnrelatedClassIsSet = true;
  }
  if (j.find("plmnOperatorClasses") != j.end()) {
    j.at("plmnOperatorClasses").get_to(o.m_PlmnOperatorClasses);
    o.m_PlmnOperatorClassesIsSet = true;
  }
}

Lpi LcsPrivacyData::getLpi() const { return m_Lpi; }
void LcsPrivacyData::setLpi(Lpi const &value) {
  m_Lpi = value;
  m_LpiIsSet = true;
}
bool LcsPrivacyData::lpiIsSet() const { return m_LpiIsSet; }
void LcsPrivacyData::unsetLpi() { m_LpiIsSet = false; }
UnrelatedClass LcsPrivacyData::getUnrelatedClass() const {
  return m_UnrelatedClass;
}
void LcsPrivacyData::setUnrelatedClass(UnrelatedClass const &value) {
  m_UnrelatedClass = value;
  m_UnrelatedClassIsSet = true;
}
bool LcsPrivacyData::unrelatedClassIsSet() const {
  return m_UnrelatedClassIsSet;
}
void LcsPrivacyData::unsetUnrelatedClass() { m_UnrelatedClassIsSet = false; }
std::vector<PlmnOperatorClass> &LcsPrivacyData::getPlmnOperatorClasses() {
  return m_PlmnOperatorClasses;
}
void LcsPrivacyData::setPlmnOperatorClasses(
    std::vector<PlmnOperatorClass> const &value) {
  m_PlmnOperatorClasses = value;
  m_PlmnOperatorClassesIsSet = true;
}
bool LcsPrivacyData::plmnOperatorClassesIsSet() const {
  return m_PlmnOperatorClassesIsSet;
}
void LcsPrivacyData::unsetPlmnOperatorClasses() {
  m_PlmnOperatorClassesIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org