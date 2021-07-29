/**
 * M1_ProvisioningSessions
 * 5GMS AF M1 Provisioning Sessions API © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ProvisioningSession.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ProvisioningSession::ProvisioningSession() {
  m_ProvisioningSessionId = "";
  m_AspId = "";
  m_AspIdIsSet = false;
  m_ServerCertificateIdsIsSet = false;
  m_ContentPreparationTemplateIdsIsSet = false;
  m_MetricsReportingConfigurationIdsIsSet = false;
  m_PolicyTemplateIdsIsSet = false;
}

ProvisioningSession::~ProvisioningSession() {}

void ProvisioningSession::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const ProvisioningSession &o) {
  j = nlohmann::json();
  j["provisioningSessionId"] = o.m_ProvisioningSessionId;
  j["provisioningSessionType"] = o.m_ProvisioningSessionType;
  if (o.aspIdIsSet())
    j["aspId"] = o.m_AspId;
  if (o.serverCertificateIdsIsSet() || !o.m_ServerCertificateIds.empty())
    j["serverCertificateIds"] = o.m_ServerCertificateIds;
  if (o.contentPreparationTemplateIdsIsSet() ||
      !o.m_ContentPreparationTemplateIds.empty())
    j["contentPreparationTemplateIds"] = o.m_ContentPreparationTemplateIds;
  if (o.metricsReportingConfigurationIdsIsSet() ||
      !o.m_MetricsReportingConfigurationIds.empty())
    j["metricsReportingConfigurationIds"] =
        o.m_MetricsReportingConfigurationIds;
  if (o.policyTemplateIdsIsSet() || !o.m_PolicyTemplateIds.empty())
    j["policyTemplateIds"] = o.m_PolicyTemplateIds;
}

void from_json(const nlohmann::json &j, ProvisioningSession &o) {
  j.at("provisioningSessionId").get_to(o.m_ProvisioningSessionId);
  j.at("provisioningSessionType").get_to(o.m_ProvisioningSessionType);
  if (j.find("aspId") != j.end()) {
    j.at("aspId").get_to(o.m_AspId);
    o.m_AspIdIsSet = true;
  }
  if (j.find("serverCertificateIds") != j.end()) {
    j.at("serverCertificateIds").get_to(o.m_ServerCertificateIds);
    o.m_ServerCertificateIdsIsSet = true;
  }
  if (j.find("contentPreparationTemplateIds") != j.end()) {
    j.at("contentPreparationTemplateIds")
        .get_to(o.m_ContentPreparationTemplateIds);
    o.m_ContentPreparationTemplateIdsIsSet = true;
  }
  if (j.find("metricsReportingConfigurationIds") != j.end()) {
    j.at("metricsReportingConfigurationIds")
        .get_to(o.m_MetricsReportingConfigurationIds);
    o.m_MetricsReportingConfigurationIdsIsSet = true;
  }
  if (j.find("policyTemplateIds") != j.end()) {
    j.at("policyTemplateIds").get_to(o.m_PolicyTemplateIds);
    o.m_PolicyTemplateIdsIsSet = true;
  }
}

std::string ProvisioningSession::getProvisioningSessionId() const {
  return m_ProvisioningSessionId;
}
void ProvisioningSession::setProvisioningSessionId(std::string const &value) {
  m_ProvisioningSessionId = value;
}
ProvisioningSessionType
ProvisioningSession::getProvisioningSessionType() const {
  return m_ProvisioningSessionType;
}
void ProvisioningSession::setProvisioningSessionType(
    ProvisioningSessionType const &value) {
  m_ProvisioningSessionType = value;
}
std::string ProvisioningSession::getAspId() const { return m_AspId; }
void ProvisioningSession::setAspId(std::string const &value) {
  m_AspId = value;
  m_AspIdIsSet = true;
}
bool ProvisioningSession::aspIdIsSet() const { return m_AspIdIsSet; }
void ProvisioningSession::unsetAspId() { m_AspIdIsSet = false; }
std::vector<std::string> &ProvisioningSession::getServerCertificateIds() {
  return m_ServerCertificateIds;
}
void ProvisioningSession::setServerCertificateIds(
    std::vector<std::string> const &value) {
  m_ServerCertificateIds = value;
  m_ServerCertificateIdsIsSet = true;
}
bool ProvisioningSession::serverCertificateIdsIsSet() const {
  return m_ServerCertificateIdsIsSet;
}
void ProvisioningSession::unsetServerCertificateIds() {
  m_ServerCertificateIdsIsSet = false;
}
std::vector<std::string> &
ProvisioningSession::getContentPreparationTemplateIds() {
  return m_ContentPreparationTemplateIds;
}
void ProvisioningSession::setContentPreparationTemplateIds(
    std::vector<std::string> const &value) {
  m_ContentPreparationTemplateIds = value;
  m_ContentPreparationTemplateIdsIsSet = true;
}
bool ProvisioningSession::contentPreparationTemplateIdsIsSet() const {
  return m_ContentPreparationTemplateIdsIsSet;
}
void ProvisioningSession::unsetContentPreparationTemplateIds() {
  m_ContentPreparationTemplateIdsIsSet = false;
}
std::vector<std::string> &
ProvisioningSession::getMetricsReportingConfigurationIds() {
  return m_MetricsReportingConfigurationIds;
}
void ProvisioningSession::setMetricsReportingConfigurationIds(
    std::vector<std::string> const &value) {
  m_MetricsReportingConfigurationIds = value;
  m_MetricsReportingConfigurationIdsIsSet = true;
}
bool ProvisioningSession::metricsReportingConfigurationIdsIsSet() const {
  return m_MetricsReportingConfigurationIdsIsSet;
}
void ProvisioningSession::unsetMetricsReportingConfigurationIds() {
  m_MetricsReportingConfigurationIdsIsSet = false;
}
std::vector<std::string> &ProvisioningSession::getPolicyTemplateIds() {
  return m_PolicyTemplateIds;
}
void ProvisioningSession::setPolicyTemplateIds(
    std::vector<std::string> const &value) {
  m_PolicyTemplateIds = value;
  m_PolicyTemplateIdsIsSet = true;
}
bool ProvisioningSession::policyTemplateIdsIsSet() const {
  return m_PolicyTemplateIdsIsSet;
}
void ProvisioningSession::unsetPolicyTemplateIds() {
  m_PolicyTemplateIdsIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org