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

#include "TriggerRequest.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

TriggerRequest::TriggerRequest() { m_Supi = ""; }

TriggerRequest::~TriggerRequest() {}

void TriggerRequest::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const TriggerRequest &o) {
  j = nlohmann::json();
  j["supi"] = o.m_Supi;
}

void from_json(const nlohmann::json &j, TriggerRequest &o) {
  j.at("supi").get_to(o.m_Supi);
}

std::string TriggerRequest::getSupi() const { return m_Supi; }
void TriggerRequest::setSupi(std::string const &value) { m_Supi = value; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
