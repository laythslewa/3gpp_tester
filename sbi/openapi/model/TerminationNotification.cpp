/**
 * Npcf_UEPolicyControl
 * UE Policy Control Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "TerminationNotification.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

TerminationNotification::TerminationNotification() { m_ResourceUri = ""; }

TerminationNotification::~TerminationNotification() {}

void TerminationNotification::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const TerminationNotification &o) {
  j = nlohmann::json();
  j["resourceUri"] = o.m_ResourceUri;
  j["cause"] = o.m_Cause;
}

void from_json(const nlohmann::json &j, TerminationNotification &o) {
  j.at("resourceUri").get_to(o.m_ResourceUri);
  j.at("cause").get_to(o.m_Cause);
}

std::string TerminationNotification::getResourceUri() const {
  return m_ResourceUri;
}
void TerminationNotification::setResourceUri(std::string const &value) {
  m_ResourceUri = value;
}
PolicyAssociationReleaseCause TerminationNotification::getCause() const {
  return m_Cause;
}
void TerminationNotification::setCause(
    PolicyAssociationReleaseCause const &value) {
  m_Cause = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
