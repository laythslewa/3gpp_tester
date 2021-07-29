/**
 * Nchf_SpendingLimitControl
 * Nchf Spending Limit Control Service. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SpendingLimitContext.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

SpendingLimitContext::SpendingLimitContext() {
  m_Supi = "";
  m_SupiIsSet = false;
  m_Gpsi = "";
  m_GpsiIsSet = false;
  m_PolicyCounterIdsIsSet = false;
  m_NotifUri = "";
  m_NotifUriIsSet = false;
  m_Expiry = "";
  m_ExpiryIsSet = false;
  m_SupportedFeatures = "";
  m_SupportedFeaturesIsSet = false;
  m_NotifId = "";
  m_NotifIdIsSet = false;
}

SpendingLimitContext::~SpendingLimitContext() {}

void SpendingLimitContext::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const SpendingLimitContext &o) {
  j = nlohmann::json();
  if (o.supiIsSet())
    j["supi"] = o.m_Supi;
  if (o.gpsiIsSet())
    j["gpsi"] = o.m_Gpsi;
  if (o.policyCounterIdsIsSet() || !o.m_PolicyCounterIds.empty())
    j["policyCounterIds"] = o.m_PolicyCounterIds;
  if (o.notifUriIsSet())
    j["notifUri"] = o.m_NotifUri;
  if (o.expiryIsSet())
    j["expiry"] = o.m_Expiry;
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
  if (o.notifIdIsSet())
    j["notifId"] = o.m_NotifId;
}

void from_json(const nlohmann::json &j, SpendingLimitContext &o) {
  if (j.find("supi") != j.end()) {
    j.at("supi").get_to(o.m_Supi);
    o.m_SupiIsSet = true;
  }
  if (j.find("gpsi") != j.end()) {
    j.at("gpsi").get_to(o.m_Gpsi);
    o.m_GpsiIsSet = true;
  }
  if (j.find("policyCounterIds") != j.end()) {
    j.at("policyCounterIds").get_to(o.m_PolicyCounterIds);
    o.m_PolicyCounterIdsIsSet = true;
  }
  if (j.find("notifUri") != j.end()) {
    j.at("notifUri").get_to(o.m_NotifUri);
    o.m_NotifUriIsSet = true;
  }
  if (j.find("expiry") != j.end()) {
    j.at("expiry").get_to(o.m_Expiry);
    o.m_ExpiryIsSet = true;
  }
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
  if (j.find("notifId") != j.end()) {
    j.at("notifId").get_to(o.m_NotifId);
    o.m_NotifIdIsSet = true;
  }
}

std::string SpendingLimitContext::getSupi() const { return m_Supi; }
void SpendingLimitContext::setSupi(std::string const &value) {
  m_Supi = value;
  m_SupiIsSet = true;
}
bool SpendingLimitContext::supiIsSet() const { return m_SupiIsSet; }
void SpendingLimitContext::unsetSupi() { m_SupiIsSet = false; }
std::string SpendingLimitContext::getGpsi() const { return m_Gpsi; }
void SpendingLimitContext::setGpsi(std::string const &value) {
  m_Gpsi = value;
  m_GpsiIsSet = true;
}
bool SpendingLimitContext::gpsiIsSet() const { return m_GpsiIsSet; }
void SpendingLimitContext::unsetGpsi() { m_GpsiIsSet = false; }
std::vector<std::string> &SpendingLimitContext::getPolicyCounterIds() {
  return m_PolicyCounterIds;
}
void SpendingLimitContext::setPolicyCounterIds(
    std::vector<std::string> const &value) {
  m_PolicyCounterIds = value;
  m_PolicyCounterIdsIsSet = true;
}
bool SpendingLimitContext::policyCounterIdsIsSet() const {
  return m_PolicyCounterIdsIsSet;
}
void SpendingLimitContext::unsetPolicyCounterIds() {
  m_PolicyCounterIdsIsSet = false;
}
std::string SpendingLimitContext::getNotifUri() const { return m_NotifUri; }
void SpendingLimitContext::setNotifUri(std::string const &value) {
  m_NotifUri = value;
  m_NotifUriIsSet = true;
}
bool SpendingLimitContext::notifUriIsSet() const { return m_NotifUriIsSet; }
void SpendingLimitContext::unsetNotifUri() { m_NotifUriIsSet = false; }
std::string SpendingLimitContext::getExpiry() const { return m_Expiry; }
void SpendingLimitContext::setExpiry(std::string const &value) {
  m_Expiry = value;
  m_ExpiryIsSet = true;
}
bool SpendingLimitContext::expiryIsSet() const { return m_ExpiryIsSet; }
void SpendingLimitContext::unsetExpiry() { m_ExpiryIsSet = false; }
std::string SpendingLimitContext::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void SpendingLimitContext::setSupportedFeatures(std::string const &value) {
  m_SupportedFeatures = value;
  m_SupportedFeaturesIsSet = true;
}
bool SpendingLimitContext::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void SpendingLimitContext::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}
std::string SpendingLimitContext::getNotifId() const { return m_NotifId; }
void SpendingLimitContext::setNotifId(std::string const &value) {
  m_NotifId = value;
  m_NotifIdIsSet = true;
}
bool SpendingLimitContext::notifIdIsSet() const { return m_NotifIdIsSet; }
void SpendingLimitContext::unsetNotifId() { m_NotifIdIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org