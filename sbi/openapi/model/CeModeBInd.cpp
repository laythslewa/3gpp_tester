/**
 * Namf_Communication
 * AMF Communication Service © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "CeModeBInd.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

CeModeBInd::CeModeBInd() { m_CeModeBSupportInd = false; }

CeModeBInd::~CeModeBInd() {}

void CeModeBInd::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const CeModeBInd &o) {
  j = nlohmann::json();
  j["ceModeBSupportInd"] = o.m_CeModeBSupportInd;
}

void from_json(const nlohmann::json &j, CeModeBInd &o) {
  j.at("ceModeBSupportInd").get_to(o.m_CeModeBSupportInd);
}

bool CeModeBInd::isCeModeBSupportInd() const { return m_CeModeBSupportInd; }
void CeModeBInd::setCeModeBSupportInd(bool const value) {
  m_CeModeBSupportInd = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
