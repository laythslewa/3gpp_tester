/**
 * Unified Data Repository Service API file for policy data
 * The API version is defined in 3GPP TS 29.504 © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "UePolicySection.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

UePolicySection::UePolicySection() { m_Upsi = ""; }

UePolicySection::~UePolicySection() {}

void UePolicySection::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const UePolicySection &o) {
  j = nlohmann::json();
  j["uePolicySectionInfo"] = o.m_UePolicySectionInfo;
  j["upsi"] = o.m_Upsi;
}

void from_json(const nlohmann::json &j, UePolicySection &o) {
  j.at("uePolicySectionInfo").get_to(o.m_UePolicySectionInfo);
  j.at("upsi").get_to(o.m_Upsi);
}

std::string UePolicySection::getUePolicySectionInfo() const {
  return m_UePolicySectionInfo;
}
void UePolicySection::setUePolicySectionInfo(std::string const &value) {
  m_UePolicySectionInfo = value;
}
std::string UePolicySection::getUpsi() const { return m_Upsi; }
void UePolicySection::setUpsi(std::string const &value) { m_Upsi = value; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
