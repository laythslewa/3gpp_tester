/**
 * Npcf_EventExposure
 * PCF Event Exposure Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ServiceIdentification.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ServiceIdentification::ServiceIdentification() {
  m_ServEthFlowsIsSet = false;
  m_ServIpFlowsIsSet = false;
  m_AfAppId = "";
  m_AfAppIdIsSet = false;
}

ServiceIdentification::~ServiceIdentification() {}

void ServiceIdentification::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const ServiceIdentification &o) {
  j = nlohmann::json();
  if (o.servEthFlowsIsSet() || !o.m_ServEthFlows.empty())
    j["servEthFlows"] = o.m_ServEthFlows;
  if (o.servIpFlowsIsSet() || !o.m_ServIpFlows.empty())
    j["servIpFlows"] = o.m_ServIpFlows;
  if (o.afAppIdIsSet())
    j["afAppId"] = o.m_AfAppId;
}

void from_json(const nlohmann::json &j, ServiceIdentification &o) {
  if (j.find("servEthFlows") != j.end()) {
    j.at("servEthFlows").get_to(o.m_ServEthFlows);
    o.m_ServEthFlowsIsSet = true;
  }
  if (j.find("servIpFlows") != j.end()) {
    j.at("servIpFlows").get_to(o.m_ServIpFlows);
    o.m_ServIpFlowsIsSet = true;
  }
  if (j.find("afAppId") != j.end()) {
    j.at("afAppId").get_to(o.m_AfAppId);
    o.m_AfAppIdIsSet = true;
  }
}

std::vector<EthernetFlowInfo> &ServiceIdentification::getServEthFlows() {
  return m_ServEthFlows;
}
void ServiceIdentification::setServEthFlows(
    std::vector<EthernetFlowInfo> const &value) {
  m_ServEthFlows = value;
  m_ServEthFlowsIsSet = true;
}
bool ServiceIdentification::servEthFlowsIsSet() const {
  return m_ServEthFlowsIsSet;
}
void ServiceIdentification::unsetServEthFlows() { m_ServEthFlowsIsSet = false; }
std::vector<IpFlowInfo> &ServiceIdentification::getServIpFlows() {
  return m_ServIpFlows;
}
void ServiceIdentification::setServIpFlows(
    std::vector<IpFlowInfo> const &value) {
  m_ServIpFlows = value;
  m_ServIpFlowsIsSet = true;
}
bool ServiceIdentification::servIpFlowsIsSet() const {
  return m_ServIpFlowsIsSet;
}
void ServiceIdentification::unsetServIpFlows() { m_ServIpFlowsIsSet = false; }
std::string ServiceIdentification::getAfAppId() const { return m_AfAppId; }
void ServiceIdentification::setAfAppId(std::string const &value) {
  m_AfAppId = value;
  m_AfAppIdIsSet = true;
}
bool ServiceIdentification::afAppIdIsSet() const { return m_AfAppIdIsSet; }
void ServiceIdentification::unsetAfAppId() { m_AfAppIdIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org