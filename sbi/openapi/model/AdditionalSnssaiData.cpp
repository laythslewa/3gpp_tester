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

#include "AdditionalSnssaiData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

AdditionalSnssaiData::AdditionalSnssaiData() {
  m_RequiredAuthnAuthz = false;
  m_RequiredAuthnAuthzIsSet = false;
  m_SubscribedUeSliceMbrIsSet = false;
}

AdditionalSnssaiData::~AdditionalSnssaiData() {}

void AdditionalSnssaiData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const AdditionalSnssaiData &o) {
  j = nlohmann::json();
  if (o.requiredAuthnAuthzIsSet())
    j["requiredAuthnAuthz"] = o.m_RequiredAuthnAuthz;
  if (o.subscribedUeSliceMbrIsSet())
    j["subscribedUeSliceMbr"] = o.m_SubscribedUeSliceMbr;
}

void from_json(const nlohmann::json &j, AdditionalSnssaiData &o) {
  if (j.find("requiredAuthnAuthz") != j.end()) {
    j.at("requiredAuthnAuthz").get_to(o.m_RequiredAuthnAuthz);
    o.m_RequiredAuthnAuthzIsSet = true;
  }
  if (j.find("subscribedUeSliceMbr") != j.end()) {
    j.at("subscribedUeSliceMbr").get_to(o.m_SubscribedUeSliceMbr);
    o.m_SubscribedUeSliceMbrIsSet = true;
  }
}

bool AdditionalSnssaiData::isRequiredAuthnAuthz() const {
  return m_RequiredAuthnAuthz;
}
void AdditionalSnssaiData::setRequiredAuthnAuthz(bool const value) {
  m_RequiredAuthnAuthz = value;
  m_RequiredAuthnAuthzIsSet = true;
}
bool AdditionalSnssaiData::requiredAuthnAuthzIsSet() const {
  return m_RequiredAuthnAuthzIsSet;
}
void AdditionalSnssaiData::unsetRequiredAuthnAuthz() {
  m_RequiredAuthnAuthzIsSet = false;
}
SliceMbrRm AdditionalSnssaiData::getSubscribedUeSliceMbr() const {
  return m_SubscribedUeSliceMbr;
}
void AdditionalSnssaiData::setSubscribedUeSliceMbr(SliceMbrRm const &value) {
  m_SubscribedUeSliceMbr = value;
  m_SubscribedUeSliceMbrIsSet = true;
}
bool AdditionalSnssaiData::subscribedUeSliceMbrIsSet() const {
  return m_SubscribedUeSliceMbrIsSet;
}
void AdditionalSnssaiData::unsetSubscribedUeSliceMbr() {
  m_SubscribedUeSliceMbrIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org