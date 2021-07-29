/**
 * AUSF API
 * AUSF UE Authentication Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "EapSession.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

EapSession::EapSession() {
  m_EapPayload = "";
  m_KSeaf = "";
  m_KSeafIsSet = false;
  m__linksIsSet = false;
  m_AuthResultIsSet = false;
  m_Supi = "";
  m_SupiIsSet = false;
  m_SupportedFeatures = "";
  m_SupportedFeaturesIsSet = false;
}

EapSession::~EapSession() {}

void EapSession::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const EapSession &o) {
  j = nlohmann::json();
  j["eapPayload"] = o.m_EapPayload;
  if (o.kSeafIsSet())
    j["kSeaf"] = o.m_KSeaf;
  if (o.linksIsSet() || !o.m__links.empty())
    j["_links"] = o.m__links;
  if (o.authResultIsSet())
    j["authResult"] = o.m_AuthResult;
  if (o.supiIsSet())
    j["supi"] = o.m_Supi;
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
}

void from_json(const nlohmann::json &j, EapSession &o) {
  j.at("eapPayload").get_to(o.m_EapPayload);
  if (j.find("kSeaf") != j.end()) {
    j.at("kSeaf").get_to(o.m_KSeaf);
    o.m_KSeafIsSet = true;
  }
  if (j.find("_links") != j.end()) {
    j.at("_links").get_to(o.m__links);
    o.m__linksIsSet = true;
  }
  if (j.find("authResult") != j.end()) {
    j.at("authResult").get_to(o.m_AuthResult);
    o.m_AuthResultIsSet = true;
  }
  if (j.find("supi") != j.end()) {
    j.at("supi").get_to(o.m_Supi);
    o.m_SupiIsSet = true;
  }
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
}

std::string EapSession::getEapPayload() const { return m_EapPayload; }
void EapSession::setEapPayload(std::string const &value) {
  m_EapPayload = value;
}
std::string EapSession::getKSeaf() const { return m_KSeaf; }
void EapSession::setKSeaf(std::string const &value) {
  m_KSeaf = value;
  m_KSeafIsSet = true;
}
bool EapSession::kSeafIsSet() const { return m_KSeafIsSet; }
void EapSession::unsetKSeaf() { m_KSeafIsSet = false; }
std::map<std::string, LinksValueSchema> &EapSession::getLinks() {
  return m__links;
}
void EapSession::setLinks(
    std::map<std::string, LinksValueSchema> const &value) {
  m__links = value;
  m__linksIsSet = true;
}
bool EapSession::linksIsSet() const { return m__linksIsSet; }
void EapSession::unset_links() { m__linksIsSet = false; }
AuthResult EapSession::getAuthResult() const { return m_AuthResult; }
void EapSession::setAuthResult(AuthResult const &value) {
  m_AuthResult = value;
  m_AuthResultIsSet = true;
}
bool EapSession::authResultIsSet() const { return m_AuthResultIsSet; }
void EapSession::unsetAuthResult() { m_AuthResultIsSet = false; }
std::string EapSession::getSupi() const { return m_Supi; }
void EapSession::setSupi(std::string const &value) {
  m_Supi = value;
  m_SupiIsSet = true;
}
bool EapSession::supiIsSet() const { return m_SupiIsSet; }
void EapSession::unsetSupi() { m_SupiIsSet = false; }
std::string EapSession::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void EapSession::setSupportedFeatures(std::string const &value) {
  m_SupportedFeatures = value;
  m_SupportedFeaturesIsSet = true;
}
bool EapSession::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void EapSession::unsetSupportedFeatures() { m_SupportedFeaturesIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
