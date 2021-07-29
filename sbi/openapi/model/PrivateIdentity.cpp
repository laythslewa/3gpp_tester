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

#include "PrivateIdentity.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

PrivateIdentity::PrivateIdentity() { m_PrivateIdentity = ""; }

PrivateIdentity::~PrivateIdentity() {}

void PrivateIdentity::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const PrivateIdentity &o) {
  j = nlohmann::json();
  j["privateIdentity"] = o.m_PrivateIdentity;
  j["privateIdentityType"] = o.m_PrivateIdentityType;
}

void from_json(const nlohmann::json &j, PrivateIdentity &o) {
  j.at("privateIdentity").get_to(o.m_PrivateIdentity);
  j.at("privateIdentityType").get_to(o.m_PrivateIdentityType);
}

std::string PrivateIdentity::getPrivateIdentity() const {
  return m_PrivateIdentity;
}
void PrivateIdentity::setPrivateIdentity(std::string const &value) {
  m_PrivateIdentity = value;
}
PrivateIdentityType PrivateIdentity::getPrivateIdentityType() const {
  return m_PrivateIdentityType;
}
void PrivateIdentity::setPrivateIdentityType(PrivateIdentityType const &value) {
  m_PrivateIdentityType = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
