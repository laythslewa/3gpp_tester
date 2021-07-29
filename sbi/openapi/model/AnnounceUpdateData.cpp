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

#include "AnnounceUpdateData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

AnnounceUpdateData::AnnounceUpdateData() {
  m_ValidityTime = "";
  m_ProseAppCode = "";
  m_ProseAppCodeIsSet = false;
}

AnnounceUpdateData::~AnnounceUpdateData() {}

void AnnounceUpdateData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const AnnounceUpdateData &o) {
  j = nlohmann::json();
  j["discType"] = o.m_DiscType;
  j["validityTime"] = o.m_ValidityTime;
  if (o.proseAppCodeIsSet())
    j["proseAppCode"] = o.m_ProseAppCode;
}

void from_json(const nlohmann::json &j, AnnounceUpdateData &o) {
  j.at("discType").get_to(o.m_DiscType);
  j.at("validityTime").get_to(o.m_ValidityTime);
  if (j.find("proseAppCode") != j.end()) {
    j.at("proseAppCode").get_to(o.m_ProseAppCode);
    o.m_ProseAppCodeIsSet = true;
  }
}

DiscoveryType AnnounceUpdateData::getDiscType() const { return m_DiscType; }
void AnnounceUpdateData::setDiscType(DiscoveryType const &value) {
  m_DiscType = value;
}
std::string AnnounceUpdateData::getValidityTime() const {
  return m_ValidityTime;
}
void AnnounceUpdateData::setValidityTime(std::string const &value) {
  m_ValidityTime = value;
}
std::string AnnounceUpdateData::getProseAppCode() const {
  return m_ProseAppCode;
}
void AnnounceUpdateData::setProseAppCode(std::string const &value) {
  m_ProseAppCode = value;
  m_ProseAppCodeIsSet = true;
}
bool AnnounceUpdateData::proseAppCodeIsSet() const {
  return m_ProseAppCodeIsSet;
}
void AnnounceUpdateData::unsetProseAppCode() { m_ProseAppCodeIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
