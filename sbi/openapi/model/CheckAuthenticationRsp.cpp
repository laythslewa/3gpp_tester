/**
 * AEF_Security_API
 * API for AEF security management. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "CheckAuthenticationRsp.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

CheckAuthenticationRsp::CheckAuthenticationRsp() { m_SupportedFeatures = ""; }

CheckAuthenticationRsp::~CheckAuthenticationRsp() {}

void CheckAuthenticationRsp::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const CheckAuthenticationRsp &o) {
  j = nlohmann::json();
  j["supportedFeatures"] = o.m_SupportedFeatures;
}

void from_json(const nlohmann::json &j, CheckAuthenticationRsp &o) {
  j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
}

std::string CheckAuthenticationRsp::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void CheckAuthenticationRsp::setSupportedFeatures(std::string const &value) {
  m_SupportedFeatures = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org