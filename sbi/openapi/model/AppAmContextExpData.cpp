/**
 * 3gpp-am-policyauthorization
 * API for AM policy authorization. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "AppAmContextExpData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

AppAmContextExpData::AppAmContextExpData() {
  m_Self = "";
  m_SelfIsSet = false;
  m_EvSubscIsSet = false;
  m_Gpsi = "";
  m_AfAppId = "";
  m_AfAppIdIsSet = false;
}

AppAmContextExpData::~AppAmContextExpData() {}

void AppAmContextExpData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const AppAmContextExpData &o) {
  j = nlohmann::json();
  if (o.selfIsSet())
    j["self"] = o.m_Self;
  if (o.evSubscIsSet())
    j["evSubsc"] = o.m_EvSubsc;
  j["gpsi"] = o.m_Gpsi;
  if (o.afAppIdIsSet())
    j["afAppId"] = o.m_AfAppId;
}

void from_json(const nlohmann::json &j, AppAmContextExpData &o) {
  if (j.find("self") != j.end()) {
    j.at("self").get_to(o.m_Self);
    o.m_SelfIsSet = true;
  }
  if (j.find("evSubsc") != j.end()) {
    j.at("evSubsc").get_to(o.m_EvSubsc);
    o.m_EvSubscIsSet = true;
  }
  j.at("gpsi").get_to(o.m_Gpsi);
  if (j.find("afAppId") != j.end()) {
    j.at("afAppId").get_to(o.m_AfAppId);
    o.m_AfAppIdIsSet = true;
  }
}

std::string AppAmContextExpData::getSelf() const { return m_Self; }
void AppAmContextExpData::setSelf(std::string const &value) {
  m_Self = value;
  m_SelfIsSet = true;
}
bool AppAmContextExpData::selfIsSet() const { return m_SelfIsSet; }
void AppAmContextExpData::unsetSelf() { m_SelfIsSet = false; }
AmEventsSubscData AppAmContextExpData::getEvSubsc() const { return m_EvSubsc; }
void AppAmContextExpData::setEvSubsc(AmEventsSubscData const &value) {
  m_EvSubsc = value;
  m_EvSubscIsSet = true;
}
bool AppAmContextExpData::evSubscIsSet() const { return m_EvSubscIsSet; }
void AppAmContextExpData::unsetEvSubsc() { m_EvSubscIsSet = false; }
std::string AppAmContextExpData::getGpsi() const { return m_Gpsi; }
void AppAmContextExpData::setGpsi(std::string const &value) { m_Gpsi = value; }
std::string AppAmContextExpData::getAfAppId() const { return m_AfAppId; }
void AppAmContextExpData::setAfAppId(std::string const &value) {
  m_AfAppId = value;
  m_AfAppIdIsSet = true;
}
bool AppAmContextExpData::afAppIdIsSet() const { return m_AfAppIdIsSet; }
void AppAmContextExpData::unsetAfAppId() { m_AfAppIdIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org