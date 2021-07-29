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

#include "ServiceAccessInformationResource_DynamicPolicyInvocationConfiguration.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ServiceAccessInformationResource_DynamicPolicyInvocationConfiguration::
    ServiceAccessInformationResource_DynamicPolicyInvocationConfiguration() {
  m_ExternalReferencesIsSet = false;
}

ServiceAccessInformationResource_DynamicPolicyInvocationConfiguration::
    ~ServiceAccessInformationResource_DynamicPolicyInvocationConfiguration() {}

void ServiceAccessInformationResource_DynamicPolicyInvocationConfiguration::
    validate() {
  // TODO: implement validation
}

void to_json(
    nlohmann::json &j,
    const ServiceAccessInformationResource_DynamicPolicyInvocationConfiguration
        &o) {
  j = nlohmann::json();
  j["serverAddresses"] = o.m_ServerAddresses;
  j["validPolicyTemplateIds"] = o.m_ValidPolicyTemplateIds;
  j["sdfMethods"] = o.m_SdfMethods;
  if (o.externalReferencesIsSet() || !o.m_ExternalReferences.empty())
    j["externalReferences"] = o.m_ExternalReferences;
}

void from_json(
    const nlohmann::json &j,
    ServiceAccessInformationResource_DynamicPolicyInvocationConfiguration &o) {
  j.at("serverAddresses").get_to(o.m_ServerAddresses);
  j.at("validPolicyTemplateIds").get_to(o.m_ValidPolicyTemplateIds);
  j.at("sdfMethods").get_to(o.m_SdfMethods);
  if (j.find("externalReferences") != j.end()) {
    j.at("externalReferences").get_to(o.m_ExternalReferences);
    o.m_ExternalReferencesIsSet = true;
  }
}

std::vector<std::string> &
ServiceAccessInformationResource_DynamicPolicyInvocationConfiguration::
    getServerAddresses() {
  return m_ServerAddresses;
}
void ServiceAccessInformationResource_DynamicPolicyInvocationConfiguration::
    setServerAddresses(std::vector<std::string> const &value) {
  m_ServerAddresses = value;
}
std::vector<std::string> &
ServiceAccessInformationResource_DynamicPolicyInvocationConfiguration::
    getValidPolicyTemplateIds() {
  return m_ValidPolicyTemplateIds;
}
void ServiceAccessInformationResource_DynamicPolicyInvocationConfiguration::
    setValidPolicyTemplateIds(std::vector<std::string> const &value) {
  m_ValidPolicyTemplateIds = value;
}
std::vector<SdfMethod> &
ServiceAccessInformationResource_DynamicPolicyInvocationConfiguration::
    getSdfMethods() {
  return m_SdfMethods;
}
void ServiceAccessInformationResource_DynamicPolicyInvocationConfiguration::
    setSdfMethods(std::vector<SdfMethod> const &value) {
  m_SdfMethods = value;
}
std::vector<std::string> &
ServiceAccessInformationResource_DynamicPolicyInvocationConfiguration::
    getExternalReferences() {
  return m_ExternalReferences;
}
void ServiceAccessInformationResource_DynamicPolicyInvocationConfiguration::
    setExternalReferences(std::vector<std::string> const &value) {
  m_ExternalReferences = value;
  m_ExternalReferencesIsSet = true;
}
bool ServiceAccessInformationResource_DynamicPolicyInvocationConfiguration::
    externalReferencesIsSet() const {
  return m_ExternalReferencesIsSet;
}
void ServiceAccessInformationResource_DynamicPolicyInvocationConfiguration::
    unsetExternalReferences() {
  m_ExternalReferencesIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org