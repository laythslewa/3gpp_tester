/**
 * Npcf_AMPolicyAuthorization Service API
 * PCF Access and Mobility Policy Authorization Service. © 2021, 3GPP
 * Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights
 * reserved.
 *
 * The version of the OpenAPI document: 1.0.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "AppAmContextRespData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

AppAmContextRespData::AppAmContextRespData() {
  m_Supi = "";
  m_TermNotifUri = "";
  m_EvSubscIsSet = false;
  m_SuppFeat = "";
  m_SuppFeatIsSet = false;
  m_EvSubsUri = "";
  m_EvSubsUriIsSet = false;
}

AppAmContextRespData::~AppAmContextRespData() {}

void AppAmContextRespData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const AppAmContextRespData &o) {
  j = nlohmann::json();
  j["supi"] = o.m_Supi;
  j["termNotifUri"] = o.m_TermNotifUri;
  if (o.evSubscIsSet())
    j["evSubsc"] = o.m_EvSubsc;
  if (o.suppFeatIsSet())
    j["suppFeat"] = o.m_SuppFeat;
  if (o.evSubsUriIsSet())
    j["evSubsUri"] = o.m_EvSubsUri;
  j["evNotifs"] = o.m_EvNotifs;
}

void from_json(const nlohmann::json &j, AppAmContextRespData &o) {
  j.at("supi").get_to(o.m_Supi);
  j.at("termNotifUri").get_to(o.m_TermNotifUri);
  if (j.find("evSubsc") != j.end()) {
    j.at("evSubsc").get_to(o.m_EvSubsc);
    o.m_EvSubscIsSet = true;
  }
  if (j.find("suppFeat") != j.end()) {
    j.at("suppFeat").get_to(o.m_SuppFeat);
    o.m_SuppFeatIsSet = true;
  }
  if (j.find("evSubsUri") != j.end()) {
    j.at("evSubsUri").get_to(o.m_EvSubsUri);
    o.m_EvSubsUriIsSet = true;
  }
  j.at("evNotifs").get_to(o.m_EvNotifs);
}

std::string AppAmContextRespData::getSupi() const { return m_Supi; }
void AppAmContextRespData::setSupi(std::string const &value) { m_Supi = value; }
std::string AppAmContextRespData::getTermNotifUri() const {
  return m_TermNotifUri;
}
void AppAmContextRespData::setTermNotifUri(std::string const &value) {
  m_TermNotifUri = value;
}
AmEventsSubscData AppAmContextRespData::getEvSubsc() const { return m_EvSubsc; }
void AppAmContextRespData::setEvSubsc(AmEventsSubscData const &value) {
  m_EvSubsc = value;
  m_EvSubscIsSet = true;
}
bool AppAmContextRespData::evSubscIsSet() const { return m_EvSubscIsSet; }
void AppAmContextRespData::unsetEvSubsc() { m_EvSubscIsSet = false; }
std::string AppAmContextRespData::getSuppFeat() const { return m_SuppFeat; }
void AppAmContextRespData::setSuppFeat(std::string const &value) {
  m_SuppFeat = value;
  m_SuppFeatIsSet = true;
}
bool AppAmContextRespData::suppFeatIsSet() const { return m_SuppFeatIsSet; }
void AppAmContextRespData::unsetSuppFeat() { m_SuppFeatIsSet = false; }
std::string AppAmContextRespData::getEvSubsUri() const { return m_EvSubsUri; }
void AppAmContextRespData::setEvSubsUri(std::string const &value) {
  m_EvSubsUri = value;
  m_EvSubsUriIsSet = true;
}
bool AppAmContextRespData::evSubsUriIsSet() const { return m_EvSubsUriIsSet; }
void AppAmContextRespData::unsetEvSubsUri() { m_EvSubsUriIsSet = false; }
std::vector<std::string> &AppAmContextRespData::getEvNotifs() {
  return m_EvNotifs;
}
void AppAmContextRespData::setEvNotifs(std::vector<std::string> const &value) {
  m_EvNotifs = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org