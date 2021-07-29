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

#include "AmfDeregInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

AmfDeregInfo::AmfDeregInfo() {}

AmfDeregInfo::~AmfDeregInfo() {}

void AmfDeregInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const AmfDeregInfo &o) {
  j = nlohmann::json();
  j["deregReason"] = o.m_DeregReason;
}

void from_json(const nlohmann::json &j, AmfDeregInfo &o) {
  j.at("deregReason").get_to(o.m_DeregReason);
}

DeregistrationReason AmfDeregInfo::getDeregReason() const {
  return m_DeregReason;
}
void AmfDeregInfo::setDeregReason(DeregistrationReason const &value) {
  m_DeregReason = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org