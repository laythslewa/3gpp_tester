/**
 * Unified Data Repository Service API file for subscription data
 * Unified Data Repository Service (subscription data). The API version is
 * defined in 3GPP TS 29.504. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "UeContextInSmsfData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

UeContextInSmsfData::UeContextInSmsfData() {
  m_SmsfInfo3GppAccessIsSet = false;
  m_SmsfInfoNon3GppAccessIsSet = false;
}

UeContextInSmsfData::~UeContextInSmsfData() {}

void UeContextInSmsfData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const UeContextInSmsfData &o) {
  j = nlohmann::json();
  if (o.smsfInfo3GppAccessIsSet())
    j["smsfInfo3GppAccess"] = o.m_SmsfInfo3GppAccess;
  if (o.smsfInfoNon3GppAccessIsSet())
    j["smsfInfoNon3GppAccess"] = o.m_SmsfInfoNon3GppAccess;
}

void from_json(const nlohmann::json &j, UeContextInSmsfData &o) {
  if (j.find("smsfInfo3GppAccess") != j.end()) {
    j.at("smsfInfo3GppAccess").get_to(o.m_SmsfInfo3GppAccess);
    o.m_SmsfInfo3GppAccessIsSet = true;
  }
  if (j.find("smsfInfoNon3GppAccess") != j.end()) {
    j.at("smsfInfoNon3GppAccess").get_to(o.m_SmsfInfoNon3GppAccess);
    o.m_SmsfInfoNon3GppAccessIsSet = true;
  }
}

SmsfInfo UeContextInSmsfData::getSmsfInfo3GppAccess() const {
  return m_SmsfInfo3GppAccess;
}
void UeContextInSmsfData::setSmsfInfo3GppAccess(SmsfInfo const &value) {
  m_SmsfInfo3GppAccess = value;
  m_SmsfInfo3GppAccessIsSet = true;
}
bool UeContextInSmsfData::smsfInfo3GppAccessIsSet() const {
  return m_SmsfInfo3GppAccessIsSet;
}
void UeContextInSmsfData::unsetSmsfInfo3GppAccess() {
  m_SmsfInfo3GppAccessIsSet = false;
}
SmsfInfo UeContextInSmsfData::getSmsfInfoNon3GppAccess() const {
  return m_SmsfInfoNon3GppAccess;
}
void UeContextInSmsfData::setSmsfInfoNon3GppAccess(SmsfInfo const &value) {
  m_SmsfInfoNon3GppAccess = value;
  m_SmsfInfoNon3GppAccessIsSet = true;
}
bool UeContextInSmsfData::smsfInfoNon3GppAccessIsSet() const {
  return m_SmsfInfoNon3GppAccessIsSet;
}
void UeContextInSmsfData::unsetSmsfInfoNon3GppAccess() {
  m_SmsfInfoNon3GppAccessIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org