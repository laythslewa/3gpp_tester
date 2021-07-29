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

#include "RegistrationDataSets.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

RegistrationDataSets::RegistrationDataSets() {
  m_Amf3GppIsSet = false;
  m_AmfNon3GppIsSet = false;
  m_SmfRegistrationIsSet = false;
  m_Smsf3GppIsSet = false;
  m_SmsfNon3GppIsSet = false;
}

RegistrationDataSets::~RegistrationDataSets() {}

void RegistrationDataSets::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const RegistrationDataSets &o) {
  j = nlohmann::json();
  if (o.amf3GppIsSet())
    j["amf3Gpp"] = o.m_Amf3Gpp;
  if (o.amfNon3GppIsSet())
    j["amfNon3Gpp"] = o.m_AmfNon3Gpp;
  if (o.smfRegistrationIsSet())
    j["smfRegistration"] = o.m_SmfRegistration;
  if (o.smsf3GppIsSet())
    j["smsf3Gpp"] = o.m_Smsf3Gpp;
  if (o.smsfNon3GppIsSet())
    j["smsfNon3Gpp"] = o.m_SmsfNon3Gpp;
}

void from_json(const nlohmann::json &j, RegistrationDataSets &o) {
  if (j.find("amf3Gpp") != j.end()) {
    j.at("amf3Gpp").get_to(o.m_Amf3Gpp);
    o.m_Amf3GppIsSet = true;
  }
  if (j.find("amfNon3Gpp") != j.end()) {
    j.at("amfNon3Gpp").get_to(o.m_AmfNon3Gpp);
    o.m_AmfNon3GppIsSet = true;
  }
  if (j.find("smfRegistration") != j.end()) {
    j.at("smfRegistration").get_to(o.m_SmfRegistration);
    o.m_SmfRegistrationIsSet = true;
  }
  if (j.find("smsf3Gpp") != j.end()) {
    j.at("smsf3Gpp").get_to(o.m_Smsf3Gpp);
    o.m_Smsf3GppIsSet = true;
  }
  if (j.find("smsfNon3Gpp") != j.end()) {
    j.at("smsfNon3Gpp").get_to(o.m_SmsfNon3Gpp);
    o.m_SmsfNon3GppIsSet = true;
  }
}

Amf3GppAccessRegistration RegistrationDataSets::getAmf3Gpp() const {
  return m_Amf3Gpp;
}
void RegistrationDataSets::setAmf3Gpp(Amf3GppAccessRegistration const &value) {
  m_Amf3Gpp = value;
  m_Amf3GppIsSet = true;
}
bool RegistrationDataSets::amf3GppIsSet() const { return m_Amf3GppIsSet; }
void RegistrationDataSets::unsetAmf3Gpp() { m_Amf3GppIsSet = false; }
AmfNon3GppAccessRegistration RegistrationDataSets::getAmfNon3Gpp() const {
  return m_AmfNon3Gpp;
}
void RegistrationDataSets::setAmfNon3Gpp(
    AmfNon3GppAccessRegistration const &value) {
  m_AmfNon3Gpp = value;
  m_AmfNon3GppIsSet = true;
}
bool RegistrationDataSets::amfNon3GppIsSet() const { return m_AmfNon3GppIsSet; }
void RegistrationDataSets::unsetAmfNon3Gpp() { m_AmfNon3GppIsSet = false; }
SmfRegistrationInfo RegistrationDataSets::getSmfRegistration() const {
  return m_SmfRegistration;
}
void RegistrationDataSets::setSmfRegistration(
    SmfRegistrationInfo const &value) {
  m_SmfRegistration = value;
  m_SmfRegistrationIsSet = true;
}
bool RegistrationDataSets::smfRegistrationIsSet() const {
  return m_SmfRegistrationIsSet;
}
void RegistrationDataSets::unsetSmfRegistration() {
  m_SmfRegistrationIsSet = false;
}
SmsfRegistration RegistrationDataSets::getSmsf3Gpp() const {
  return m_Smsf3Gpp;
}
void RegistrationDataSets::setSmsf3Gpp(SmsfRegistration const &value) {
  m_Smsf3Gpp = value;
  m_Smsf3GppIsSet = true;
}
bool RegistrationDataSets::smsf3GppIsSet() const { return m_Smsf3GppIsSet; }
void RegistrationDataSets::unsetSmsf3Gpp() { m_Smsf3GppIsSet = false; }
SmsfRegistration RegistrationDataSets::getSmsfNon3Gpp() const {
  return m_SmsfNon3Gpp;
}
void RegistrationDataSets::setSmsfNon3Gpp(SmsfRegistration const &value) {
  m_SmsfNon3Gpp = value;
  m_SmsfNon3GppIsSet = true;
}
bool RegistrationDataSets::smsfNon3GppIsSet() const {
  return m_SmsfNon3GppIsSet;
}
void RegistrationDataSets::unsetSmsfNon3Gpp() { m_SmsfNon3GppIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
