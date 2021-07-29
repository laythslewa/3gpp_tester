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

#include "PlmnEcInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

PlmnEcInfo::PlmnEcInfo() {
  m_EcRestrictionDataWbIsSet = false;
  m_EcRestrictionDataNb = false;
  m_EcRestrictionDataNbIsSet = false;
}

PlmnEcInfo::~PlmnEcInfo() {}

void PlmnEcInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const PlmnEcInfo &o) {
  j = nlohmann::json();
  j["plmnId"] = o.m_PlmnId;
  if (o.ecRestrictionDataWbIsSet())
    j["ecRestrictionDataWb"] = o.m_EcRestrictionDataWb;
  if (o.ecRestrictionDataNbIsSet())
    j["ecRestrictionDataNb"] = o.m_EcRestrictionDataNb;
}

void from_json(const nlohmann::json &j, PlmnEcInfo &o) {
  j.at("plmnId").get_to(o.m_PlmnId);
  if (j.find("ecRestrictionDataWb") != j.end()) {
    j.at("ecRestrictionDataWb").get_to(o.m_EcRestrictionDataWb);
    o.m_EcRestrictionDataWbIsSet = true;
  }
  if (j.find("ecRestrictionDataNb") != j.end()) {
    j.at("ecRestrictionDataNb").get_to(o.m_EcRestrictionDataNb);
    o.m_EcRestrictionDataNbIsSet = true;
  }
}

PlmnId PlmnEcInfo::getPlmnId() const { return m_PlmnId; }
void PlmnEcInfo::setPlmnId(PlmnId const &value) { m_PlmnId = value; }
EcRestrictionDataWb PlmnEcInfo::getEcRestrictionDataWb() const {
  return m_EcRestrictionDataWb;
}
void PlmnEcInfo::setEcRestrictionDataWb(EcRestrictionDataWb const &value) {
  m_EcRestrictionDataWb = value;
  m_EcRestrictionDataWbIsSet = true;
}
bool PlmnEcInfo::ecRestrictionDataWbIsSet() const {
  return m_EcRestrictionDataWbIsSet;
}
void PlmnEcInfo::unsetEcRestrictionDataWb() {
  m_EcRestrictionDataWbIsSet = false;
}
bool PlmnEcInfo::isEcRestrictionDataNb() const { return m_EcRestrictionDataNb; }
void PlmnEcInfo::setEcRestrictionDataNb(bool const value) {
  m_EcRestrictionDataNb = value;
  m_EcRestrictionDataNbIsSet = true;
}
bool PlmnEcInfo::ecRestrictionDataNbIsSet() const {
  return m_EcRestrictionDataNbIsSet;
}
void PlmnEcInfo::unsetEcRestrictionDataNb() {
  m_EcRestrictionDataNbIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org