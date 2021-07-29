/**
 * Nnef_EventExposure
 * NEF Event Exposure Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "FlowInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

FlowInfo::FlowInfo() {
  m_FlowId = 0;
  m_FlowDescriptionsIsSet = false;
}

FlowInfo::~FlowInfo() {}

void FlowInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const FlowInfo &o) {
  j = nlohmann::json();
  j["flowId"] = o.m_FlowId;
  if (o.flowDescriptionsIsSet() || !o.m_FlowDescriptions.empty())
    j["flowDescriptions"] = o.m_FlowDescriptions;
}

void from_json(const nlohmann::json &j, FlowInfo &o) {
  j.at("flowId").get_to(o.m_FlowId);
  if (j.find("flowDescriptions") != j.end()) {
    j.at("flowDescriptions").get_to(o.m_FlowDescriptions);
    o.m_FlowDescriptionsIsSet = true;
  }
}

int32_t FlowInfo::getFlowId() const { return m_FlowId; }
void FlowInfo::setFlowId(int32_t const value) { m_FlowId = value; }
std::vector<std::string> &FlowInfo::getFlowDescriptions() {
  return m_FlowDescriptions;
}
void FlowInfo::setFlowDescriptions(std::vector<std::string> const &value) {
  m_FlowDescriptions = value;
  m_FlowDescriptionsIsSet = true;
}
bool FlowInfo::flowDescriptionsIsSet() const { return m_FlowDescriptionsIsSet; }
void FlowInfo::unsetFlowDescriptions() { m_FlowDescriptionsIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
