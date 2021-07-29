/**
 * M5_DynamicPolicies
 * 5GMS AF M5 Dynamic Policy API © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "DynamicPolicy.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

DynamicPolicy::DynamicPolicy() {
  m_DynamicPolicyId = "";
  m_PolicyTemplateId = "";
  m_ServiceDataFlowDescriptionsIsSet = false;
  m_ProvisioningSessionId = "";
  m_QosSpecificationIsSet = false;
  m_EnforcementMethod = "";
  m_EnforcementMethodIsSet = false;
  m_EnforcementBitRate = 0;
  m_EnforcementBitRateIsSet = false;
}

DynamicPolicy::~DynamicPolicy() {}

void DynamicPolicy::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const DynamicPolicy &o) {
  j = nlohmann::json();
  j["dynamicPolicyId"] = o.m_DynamicPolicyId;
  j["policyTemplateId"] = o.m_PolicyTemplateId;
  if (o.serviceDataFlowDescriptionsIsSet() ||
      !o.m_ServiceDataFlowDescriptions.empty())
    j["serviceDataFlowDescriptions"] = o.m_ServiceDataFlowDescriptions;
  j["provisioningSessionId"] = o.m_ProvisioningSessionId;
  if (o.qosSpecificationIsSet())
    j["qosSpecification"] = o.m_QosSpecification;
  if (o.enforcementMethodIsSet())
    j["enforcementMethod"] = o.m_EnforcementMethod;
  if (o.enforcementBitRateIsSet())
    j["enforcementBitRate"] = o.m_EnforcementBitRate;
}

void from_json(const nlohmann::json &j, DynamicPolicy &o) {
  j.at("dynamicPolicyId").get_to(o.m_DynamicPolicyId);
  j.at("policyTemplateId").get_to(o.m_PolicyTemplateId);
  if (j.find("serviceDataFlowDescriptions") != j.end()) {
    j.at("serviceDataFlowDescriptions").get_to(o.m_ServiceDataFlowDescriptions);
    o.m_ServiceDataFlowDescriptionsIsSet = true;
  }
  j.at("provisioningSessionId").get_to(o.m_ProvisioningSessionId);
  if (j.find("qosSpecification") != j.end()) {
    j.at("qosSpecification").get_to(o.m_QosSpecification);
    o.m_QosSpecificationIsSet = true;
  }
  if (j.find("enforcementMethod") != j.end()) {
    j.at("enforcementMethod").get_to(o.m_EnforcementMethod);
    o.m_EnforcementMethodIsSet = true;
  }
  if (j.find("enforcementBitRate") != j.end()) {
    j.at("enforcementBitRate").get_to(o.m_EnforcementBitRate);
    o.m_EnforcementBitRateIsSet = true;
  }
}

std::string DynamicPolicy::getDynamicPolicyId() const {
  return m_DynamicPolicyId;
}
void DynamicPolicy::setDynamicPolicyId(std::string const &value) {
  m_DynamicPolicyId = value;
}
std::string DynamicPolicy::getPolicyTemplateId() const {
  return m_PolicyTemplateId;
}
void DynamicPolicy::setPolicyTemplateId(std::string const &value) {
  m_PolicyTemplateId = value;
}
std::vector<ServiceDataFlowDescription> &
DynamicPolicy::getServiceDataFlowDescriptions() {
  return m_ServiceDataFlowDescriptions;
}
void DynamicPolicy::setServiceDataFlowDescriptions(
    std::vector<ServiceDataFlowDescription> const &value) {
  m_ServiceDataFlowDescriptions = value;
  m_ServiceDataFlowDescriptionsIsSet = true;
}
bool DynamicPolicy::serviceDataFlowDescriptionsIsSet() const {
  return m_ServiceDataFlowDescriptionsIsSet;
}
void DynamicPolicy::unsetServiceDataFlowDescriptions() {
  m_ServiceDataFlowDescriptionsIsSet = false;
}
std::string DynamicPolicy::getProvisioningSessionId() const {
  return m_ProvisioningSessionId;
}
void DynamicPolicy::setProvisioningSessionId(std::string const &value) {
  m_ProvisioningSessionId = value;
}
M5QoSSpecification DynamicPolicy::getQosSpecification() const {
  return m_QosSpecification;
}
void DynamicPolicy::setQosSpecification(M5QoSSpecification const &value) {
  m_QosSpecification = value;
  m_QosSpecificationIsSet = true;
}
bool DynamicPolicy::qosSpecificationIsSet() const {
  return m_QosSpecificationIsSet;
}
void DynamicPolicy::unsetQosSpecification() { m_QosSpecificationIsSet = false; }
std::string DynamicPolicy::getEnforcementMethod() const {
  return m_EnforcementMethod;
}
void DynamicPolicy::setEnforcementMethod(std::string const &value) {
  m_EnforcementMethod = value;
  m_EnforcementMethodIsSet = true;
}
bool DynamicPolicy::enforcementMethodIsSet() const {
  return m_EnforcementMethodIsSet;
}
void DynamicPolicy::unsetEnforcementMethod() {
  m_EnforcementMethodIsSet = false;
}
int32_t DynamicPolicy::getEnforcementBitRate() const {
  return m_EnforcementBitRate;
}
void DynamicPolicy::setEnforcementBitRate(int32_t const value) {
  m_EnforcementBitRate = value;
  m_EnforcementBitRateIsSet = true;
}
bool DynamicPolicy::enforcementBitRateIsSet() const {
  return m_EnforcementBitRateIsSet;
}
void DynamicPolicy::unsetEnforcementBitRate() {
  m_EnforcementBitRateIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
