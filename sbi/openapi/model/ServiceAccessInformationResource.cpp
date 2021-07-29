/**
 * M5_ServiceAccessInformation
 * 5GMS AF M5 Service Access Information API © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ServiceAccessInformationResource.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ServiceAccessInformationResource::ServiceAccessInformationResource() {
  m_ProvisioningSessionId = "";
  m_StreamingAccessIsSet = false;
  m_ClientConsumptionReportingConfigurationIsSet = false;
  m_DynamicPolicyInvocationConfigurationIsSet = false;
  m_ClientMetricsReportingConfigurationIsSet = false;
  m_NetworkAssistanceConfigurationIsSet = false;
}

ServiceAccessInformationResource::~ServiceAccessInformationResource() {}

void ServiceAccessInformationResource::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const ServiceAccessInformationResource &o) {
  j = nlohmann::json();
  j["provisioningSessionId"] = o.m_ProvisioningSessionId;
  j["provisioningSessionType"] = o.m_ProvisioningSessionType;
  if (o.streamingAccessIsSet())
    j["StreamingAccess"] = o.m_StreamingAccess;
  if (o.clientConsumptionReportingConfigurationIsSet())
    j["ClientConsumptionReportingConfiguration"] =
        o.m_ClientConsumptionReportingConfiguration;
  if (o.dynamicPolicyInvocationConfigurationIsSet())
    j["DynamicPolicyInvocationConfiguration"] =
        o.m_DynamicPolicyInvocationConfiguration;
  if (o.clientMetricsReportingConfigurationIsSet() ||
      !o.m_ClientMetricsReportingConfiguration.empty())
    j["ClientMetricsReportingConfiguration"] =
        o.m_ClientMetricsReportingConfiguration;
  if (o.networkAssistanceConfigurationIsSet())
    j["NetworkAssistanceConfiguration"] = o.m_NetworkAssistanceConfiguration;
}

void from_json(const nlohmann::json &j, ServiceAccessInformationResource &o) {
  j.at("provisioningSessionId").get_to(o.m_ProvisioningSessionId);
  j.at("provisioningSessionType").get_to(o.m_ProvisioningSessionType);
  if (j.find("StreamingAccess") != j.end()) {
    j.at("StreamingAccess").get_to(o.m_StreamingAccess);
    o.m_StreamingAccessIsSet = true;
  }
  if (j.find("ClientConsumptionReportingConfiguration") != j.end()) {
    j.at("ClientConsumptionReportingConfiguration")
        .get_to(o.m_ClientConsumptionReportingConfiguration);
    o.m_ClientConsumptionReportingConfigurationIsSet = true;
  }
  if (j.find("DynamicPolicyInvocationConfiguration") != j.end()) {
    j.at("DynamicPolicyInvocationConfiguration")
        .get_to(o.m_DynamicPolicyInvocationConfiguration);
    o.m_DynamicPolicyInvocationConfigurationIsSet = true;
  }
  if (j.find("ClientMetricsReportingConfiguration") != j.end()) {
    j.at("ClientMetricsReportingConfiguration")
        .get_to(o.m_ClientMetricsReportingConfiguration);
    o.m_ClientMetricsReportingConfigurationIsSet = true;
  }
  if (j.find("NetworkAssistanceConfiguration") != j.end()) {
    j.at("NetworkAssistanceConfiguration")
        .get_to(o.m_NetworkAssistanceConfiguration);
    o.m_NetworkAssistanceConfigurationIsSet = true;
  }
}

std::string ServiceAccessInformationResource::getProvisioningSessionId() const {
  return m_ProvisioningSessionId;
}
void ServiceAccessInformationResource::setProvisioningSessionId(
    std::string const &value) {
  m_ProvisioningSessionId = value;
}
ProvisioningSessionType
ServiceAccessInformationResource::getProvisioningSessionType() const {
  return m_ProvisioningSessionType;
}
void ServiceAccessInformationResource::setProvisioningSessionType(
    ProvisioningSessionType const &value) {
  m_ProvisioningSessionType = value;
}
ServiceAccessInformationResource_StreamingAccess
ServiceAccessInformationResource::getStreamingAccess() const {
  return m_StreamingAccess;
}
void ServiceAccessInformationResource::setStreamingAccess(
    ServiceAccessInformationResource_StreamingAccess const &value) {
  m_StreamingAccess = value;
  m_StreamingAccessIsSet = true;
}
bool ServiceAccessInformationResource::streamingAccessIsSet() const {
  return m_StreamingAccessIsSet;
}
void ServiceAccessInformationResource::unsetStreamingAccess() {
  m_StreamingAccessIsSet = false;
}
ServiceAccessInformationResource_ClientConsumptionReportingConfiguration
ServiceAccessInformationResource::getClientConsumptionReportingConfiguration()
    const {
  return m_ClientConsumptionReportingConfiguration;
}
void ServiceAccessInformationResource::setClientConsumptionReportingConfiguration(
    ServiceAccessInformationResource_ClientConsumptionReportingConfiguration const
        &value) {
  m_ClientConsumptionReportingConfiguration = value;
  m_ClientConsumptionReportingConfigurationIsSet = true;
}
bool ServiceAccessInformationResource::
    clientConsumptionReportingConfigurationIsSet() const {
  return m_ClientConsumptionReportingConfigurationIsSet;
}
void ServiceAccessInformationResource::
    unsetClientConsumptionReportingConfiguration() {
  m_ClientConsumptionReportingConfigurationIsSet = false;
}
ServiceAccessInformationResource_DynamicPolicyInvocationConfiguration
ServiceAccessInformationResource::getDynamicPolicyInvocationConfiguration()
    const {
  return m_DynamicPolicyInvocationConfiguration;
}
void ServiceAccessInformationResource::setDynamicPolicyInvocationConfiguration(
    ServiceAccessInformationResource_DynamicPolicyInvocationConfiguration const
        &value) {
  m_DynamicPolicyInvocationConfiguration = value;
  m_DynamicPolicyInvocationConfigurationIsSet = true;
}
bool ServiceAccessInformationResource::
    dynamicPolicyInvocationConfigurationIsSet() const {
  return m_DynamicPolicyInvocationConfigurationIsSet;
}
void ServiceAccessInformationResource::
    unsetDynamicPolicyInvocationConfiguration() {
  m_DynamicPolicyInvocationConfigurationIsSet = false;
}
std::vector<
    ServiceAccessInformationResource_ClientMetricsReportingConfiguration> &
ServiceAccessInformationResource::getClientMetricsReportingConfiguration() {
  return m_ClientMetricsReportingConfiguration;
}
void ServiceAccessInformationResource::setClientMetricsReportingConfiguration(
    std::vector<
        ServiceAccessInformationResource_ClientMetricsReportingConfiguration> const
        &value) {
  m_ClientMetricsReportingConfiguration = value;
  m_ClientMetricsReportingConfigurationIsSet = true;
}
bool ServiceAccessInformationResource::
    clientMetricsReportingConfigurationIsSet() const {
  return m_ClientMetricsReportingConfigurationIsSet;
}
void ServiceAccessInformationResource::
    unsetClientMetricsReportingConfiguration() {
  m_ClientMetricsReportingConfigurationIsSet = false;
}
ServiceAccessInformationResource_NetworkAssistanceConfiguration
ServiceAccessInformationResource::getNetworkAssistanceConfiguration() const {
  return m_NetworkAssistanceConfiguration;
}
void ServiceAccessInformationResource::setNetworkAssistanceConfiguration(
    ServiceAccessInformationResource_NetworkAssistanceConfiguration const
        &value) {
  m_NetworkAssistanceConfiguration = value;
  m_NetworkAssistanceConfigurationIsSet = true;
}
bool ServiceAccessInformationResource::networkAssistanceConfigurationIsSet()
    const {
  return m_NetworkAssistanceConfigurationIsSet;
}
void ServiceAccessInformationResource::unsetNetworkAssistanceConfiguration() {
  m_NetworkAssistanceConfigurationIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
