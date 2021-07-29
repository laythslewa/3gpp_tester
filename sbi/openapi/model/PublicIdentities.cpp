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

#include "PublicIdentities.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

PublicIdentities::PublicIdentities() {}

PublicIdentities::~PublicIdentities() {}

void PublicIdentities::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const PublicIdentities &o) {
  j = nlohmann::json();
  j["publicIdentities"] = o.m_PublicIdentities;
}

void from_json(const nlohmann::json &j, PublicIdentities &o) {
  j.at("publicIdentities").get_to(o.m_PublicIdentities);
}

std::vector<PublicIdentity> &PublicIdentities::getPublicIdentities() {
  return m_PublicIdentities;
}
void PublicIdentities::setPublicIdentities(
    std::vector<PublicIdentity> const &value) {
  m_PublicIdentities = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org