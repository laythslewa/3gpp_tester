/**
 * Nudm_UECM
 * Nudm Context Management Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "PeiUpdateInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

PeiUpdateInfo::PeiUpdateInfo() { m_Pei = ""; }

PeiUpdateInfo::~PeiUpdateInfo() {}

void PeiUpdateInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const PeiUpdateInfo &o) {
  j = nlohmann::json();
  j["pei"] = o.m_Pei;
}

void from_json(const nlohmann::json &j, PeiUpdateInfo &o) {
  j.at("pei").get_to(o.m_Pei);
}

std::string PeiUpdateInfo::getPei() const { return m_Pei; }
void PeiUpdateInfo::setPei(std::string const &value) { m_Pei = value; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
