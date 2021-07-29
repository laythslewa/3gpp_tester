/**
 * N5g-ddnmf_Discovery API
 * N5g-ddnmf_Discovery Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "MonitorAuthDataForRestricted.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

MonitorAuthDataForRestricted::MonitorAuthDataForRestricted() {
  m_ProseRestrictedCode = "";
  m_ValidityTime = "";
}

MonitorAuthDataForRestricted::~MonitorAuthDataForRestricted() {}

void MonitorAuthDataForRestricted::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const MonitorAuthDataForRestricted &o) {
  j = nlohmann::json();
  j["proseRestrictedCode"] = o.m_ProseRestrictedCode;
  j["validityTime"] = o.m_ValidityTime;
}

void from_json(const nlohmann::json &j, MonitorAuthDataForRestricted &o) {
  j.at("proseRestrictedCode").get_to(o.m_ProseRestrictedCode);
  j.at("validityTime").get_to(o.m_ValidityTime);
}

std::string MonitorAuthDataForRestricted::getProseRestrictedCode() const {
  return m_ProseRestrictedCode;
}
void MonitorAuthDataForRestricted::setProseRestrictedCode(
    std::string const &value) {
  m_ProseRestrictedCode = value;
}
std::string MonitorAuthDataForRestricted::getValidityTime() const {
  return m_ValidityTime;
}
void MonitorAuthDataForRestricted::setValidityTime(std::string const &value) {
  m_ValidityTime = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
