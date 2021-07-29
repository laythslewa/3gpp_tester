/**
 * Nhss_imsSDM
 * Nhss Subscriber Data Management Service for IMS. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "UpdatedUeReachabilitySubscription.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

UpdatedUeReachabilitySubscription::UpdatedUeReachabilitySubscription() {
  m_Expiry = "";
}

UpdatedUeReachabilitySubscription::~UpdatedUeReachabilitySubscription() {}

void UpdatedUeReachabilitySubscription::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const UpdatedUeReachabilitySubscription &o) {
  j = nlohmann::json();
  j["expiry"] = o.m_Expiry;
}

void from_json(const nlohmann::json &j, UpdatedUeReachabilitySubscription &o) {
  j.at("expiry").get_to(o.m_Expiry);
}

std::string UpdatedUeReachabilitySubscription::getExpiry() const {
  return m_Expiry;
}
void UpdatedUeReachabilitySubscription::setExpiry(std::string const &value) {
  m_Expiry = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org