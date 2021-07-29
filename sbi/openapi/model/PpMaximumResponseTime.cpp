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

#include "PpMaximumResponseTime.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

PpMaximumResponseTime::PpMaximumResponseTime() {
  m_MaximumResponseTime = 0;
  m_AfInstanceId = "";
  m_ReferenceId = 0;
  m_ValidityTime = "";
  m_ValidityTimeIsSet = false;
  m_MtcProviderInformation = "";
  m_MtcProviderInformationIsSet = false;
}

PpMaximumResponseTime::~PpMaximumResponseTime() {}

void PpMaximumResponseTime::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const PpMaximumResponseTime &o) {
  j = nlohmann::json();
  j["maximumResponseTime"] = o.m_MaximumResponseTime;
  j["afInstanceId"] = o.m_AfInstanceId;
  j["referenceId"] = o.m_ReferenceId;
  if (o.validityTimeIsSet())
    j["validityTime"] = o.m_ValidityTime;
  if (o.mtcProviderInformationIsSet())
    j["mtcProviderInformation"] = o.m_MtcProviderInformation;
}

void from_json(const nlohmann::json &j, PpMaximumResponseTime &o) {
  j.at("maximumResponseTime").get_to(o.m_MaximumResponseTime);
  j.at("afInstanceId").get_to(o.m_AfInstanceId);
  j.at("referenceId").get_to(o.m_ReferenceId);
  if (j.find("validityTime") != j.end()) {
    j.at("validityTime").get_to(o.m_ValidityTime);
    o.m_ValidityTimeIsSet = true;
  }
  if (j.find("mtcProviderInformation") != j.end()) {
    j.at("mtcProviderInformation").get_to(o.m_MtcProviderInformation);
    o.m_MtcProviderInformationIsSet = true;
  }
}

int32_t PpMaximumResponseTime::getMaximumResponseTime() const {
  return m_MaximumResponseTime;
}
void PpMaximumResponseTime::setMaximumResponseTime(int32_t const value) {
  m_MaximumResponseTime = value;
}
std::string PpMaximumResponseTime::getAfInstanceId() const {
  return m_AfInstanceId;
}
void PpMaximumResponseTime::setAfInstanceId(std::string const &value) {
  m_AfInstanceId = value;
}
int32_t PpMaximumResponseTime::getReferenceId() const { return m_ReferenceId; }
void PpMaximumResponseTime::setReferenceId(int32_t const value) {
  m_ReferenceId = value;
}
std::string PpMaximumResponseTime::getValidityTime() const {
  return m_ValidityTime;
}
void PpMaximumResponseTime::setValidityTime(std::string const &value) {
  m_ValidityTime = value;
  m_ValidityTimeIsSet = true;
}
bool PpMaximumResponseTime::validityTimeIsSet() const {
  return m_ValidityTimeIsSet;
}
void PpMaximumResponseTime::unsetValidityTime() { m_ValidityTimeIsSet = false; }
std::string PpMaximumResponseTime::getMtcProviderInformation() const {
  return m_MtcProviderInformation;
}
void PpMaximumResponseTime::setMtcProviderInformation(
    std::string const &value) {
  m_MtcProviderInformation = value;
  m_MtcProviderInformationIsSet = true;
}
bool PpMaximumResponseTime::mtcProviderInformationIsSet() const {
  return m_MtcProviderInformationIsSet;
}
void PpMaximumResponseTime::unsetMtcProviderInformation() {
  m_MtcProviderInformationIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org