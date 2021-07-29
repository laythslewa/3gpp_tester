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

#include "PublicIdentity.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

PublicIdentity::PublicIdentity() {
  m_ImsPublicId = "";
  m_IrsIsDefault = false;
  m_IrsIsDefaultIsSet = false;
  m_AliasGroupId = "";
  m_AliasGroupIdIsSet = false;
}

PublicIdentity::~PublicIdentity() {}

void PublicIdentity::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const PublicIdentity &o) {
  j = nlohmann::json();
  j["imsPublicId"] = o.m_ImsPublicId;
  j["identityType"] = o.m_IdentityType;
  if (o.irsIsDefaultIsSet())
    j["irsIsDefault"] = o.m_IrsIsDefault;
  if (o.aliasGroupIdIsSet())
    j["aliasGroupId"] = o.m_AliasGroupId;
}

void from_json(const nlohmann::json &j, PublicIdentity &o) {
  j.at("imsPublicId").get_to(o.m_ImsPublicId);
  j.at("identityType").get_to(o.m_IdentityType);
  if (j.find("irsIsDefault") != j.end()) {
    j.at("irsIsDefault").get_to(o.m_IrsIsDefault);
    o.m_IrsIsDefaultIsSet = true;
  }
  if (j.find("aliasGroupId") != j.end()) {
    j.at("aliasGroupId").get_to(o.m_AliasGroupId);
    o.m_AliasGroupIdIsSet = true;
  }
}

std::string PublicIdentity::getImsPublicId() const { return m_ImsPublicId; }
void PublicIdentity::setImsPublicId(std::string const &value) {
  m_ImsPublicId = value;
}
IdentityType PublicIdentity::getIdentityType() const { return m_IdentityType; }
void PublicIdentity::setIdentityType(IdentityType const &value) {
  m_IdentityType = value;
}
bool PublicIdentity::isIrsIsDefault() const { return m_IrsIsDefault; }
void PublicIdentity::setIrsIsDefault(bool const value) {
  m_IrsIsDefault = value;
  m_IrsIsDefaultIsSet = true;
}
bool PublicIdentity::irsIsDefaultIsSet() const { return m_IrsIsDefaultIsSet; }
void PublicIdentity::unsetIrsIsDefault() { m_IrsIsDefaultIsSet = false; }
std::string PublicIdentity::getAliasGroupId() const { return m_AliasGroupId; }
void PublicIdentity::setAliasGroupId(std::string const &value) {
  m_AliasGroupId = value;
  m_AliasGroupIdIsSet = true;
}
bool PublicIdentity::aliasGroupIdIsSet() const { return m_AliasGroupIdIsSet; }
void PublicIdentity::unsetAliasGroupId() { m_AliasGroupIdIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org