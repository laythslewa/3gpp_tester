/**
 * 3gpp-cp-parameter-provisioning
 * API for provisioning communication pattern parameters. © 2021, 3GPP
 * Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights
 * reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "CpInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

CpInfo::CpInfo() {
  m_Self = "";
  m_SelfIsSet = false;
  m_SupportedFeatures = "";
  m_SupportedFeaturesIsSet = false;
  m_MtcProviderId = "";
  m_MtcProviderIdIsSet = false;
  m_ExternalId = "";
  m_ExternalIdIsSet = false;
  m_Msisdn = "";
  m_MsisdnIsSet = false;
  m_ExternalGroupId = "";
  m_ExternalGroupIdIsSet = false;
  m_CpReportsIsSet = false;
}

CpInfo::~CpInfo() {}

void CpInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const CpInfo &o) {
  j = nlohmann::json();
  if (o.selfIsSet())
    j["self"] = o.m_Self;
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
  if (o.mtcProviderIdIsSet())
    j["mtcProviderId"] = o.m_MtcProviderId;
  if (o.externalIdIsSet())
    j["externalId"] = o.m_ExternalId;
  if (o.msisdnIsSet())
    j["msisdn"] = o.m_Msisdn;
  if (o.externalGroupIdIsSet())
    j["externalGroupId"] = o.m_ExternalGroupId;
  j["cpParameterSets"] = o.m_CpParameterSets;
  if (o.cpReportsIsSet() || !o.m_CpReports.empty())
    j["cpReports"] = o.m_CpReports;
}

void from_json(const nlohmann::json &j, CpInfo &o) {
  if (j.find("self") != j.end()) {
    j.at("self").get_to(o.m_Self);
    o.m_SelfIsSet = true;
  }
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
  if (j.find("mtcProviderId") != j.end()) {
    j.at("mtcProviderId").get_to(o.m_MtcProviderId);
    o.m_MtcProviderIdIsSet = true;
  }
  if (j.find("externalId") != j.end()) {
    j.at("externalId").get_to(o.m_ExternalId);
    o.m_ExternalIdIsSet = true;
  }
  if (j.find("msisdn") != j.end()) {
    j.at("msisdn").get_to(o.m_Msisdn);
    o.m_MsisdnIsSet = true;
  }
  if (j.find("externalGroupId") != j.end()) {
    j.at("externalGroupId").get_to(o.m_ExternalGroupId);
    o.m_ExternalGroupIdIsSet = true;
  }
  j.at("cpParameterSets").get_to(o.m_CpParameterSets);
  if (j.find("cpReports") != j.end()) {
    j.at("cpReports").get_to(o.m_CpReports);
    o.m_CpReportsIsSet = true;
  }
}

std::string CpInfo::getSelf() const { return m_Self; }
void CpInfo::setSelf(std::string const &value) {
  m_Self = value;
  m_SelfIsSet = true;
}
bool CpInfo::selfIsSet() const { return m_SelfIsSet; }
void CpInfo::unsetSelf() { m_SelfIsSet = false; }
std::string CpInfo::getSupportedFeatures() const { return m_SupportedFeatures; }
void CpInfo::setSupportedFeatures(std::string const &value) {
  m_SupportedFeatures = value;
  m_SupportedFeaturesIsSet = true;
}
bool CpInfo::supportedFeaturesIsSet() const { return m_SupportedFeaturesIsSet; }
void CpInfo::unsetSupportedFeatures() { m_SupportedFeaturesIsSet = false; }
std::string CpInfo::getMtcProviderId() const { return m_MtcProviderId; }
void CpInfo::setMtcProviderId(std::string const &value) {
  m_MtcProviderId = value;
  m_MtcProviderIdIsSet = true;
}
bool CpInfo::mtcProviderIdIsSet() const { return m_MtcProviderIdIsSet; }
void CpInfo::unsetMtcProviderId() { m_MtcProviderIdIsSet = false; }
std::string CpInfo::getExternalId() const { return m_ExternalId; }
void CpInfo::setExternalId(std::string const &value) {
  m_ExternalId = value;
  m_ExternalIdIsSet = true;
}
bool CpInfo::externalIdIsSet() const { return m_ExternalIdIsSet; }
void CpInfo::unsetExternalId() { m_ExternalIdIsSet = false; }
std::string CpInfo::getMsisdn() const { return m_Msisdn; }
void CpInfo::setMsisdn(std::string const &value) {
  m_Msisdn = value;
  m_MsisdnIsSet = true;
}
bool CpInfo::msisdnIsSet() const { return m_MsisdnIsSet; }
void CpInfo::unsetMsisdn() { m_MsisdnIsSet = false; }
std::string CpInfo::getExternalGroupId() const { return m_ExternalGroupId; }
void CpInfo::setExternalGroupId(std::string const &value) {
  m_ExternalGroupId = value;
  m_ExternalGroupIdIsSet = true;
}
bool CpInfo::externalGroupIdIsSet() const { return m_ExternalGroupIdIsSet; }
void CpInfo::unsetExternalGroupId() { m_ExternalGroupIdIsSet = false; }
std::map<std::string, CpParameterSet> &CpInfo::getCpParameterSets() {
  return m_CpParameterSets;
}
void CpInfo::setCpParameterSets(
    std::map<std::string, CpParameterSet> const &value) {
  m_CpParameterSets = value;
}
std::map<std::string, CpReport> &CpInfo::getCpReports() { return m_CpReports; }
void CpInfo::setCpReports(std::map<std::string, CpReport> const &value) {
  m_CpReports = value;
  m_CpReportsIsSet = true;
}
bool CpInfo::cpReportsIsSet() const { return m_CpReportsIsSet; }
void CpInfo::unsetCpReports() { m_CpReportsIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
