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

#include "ServiceExperienceInfoPerFlow.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ServiceExperienceInfoPerFlow::ServiceExperienceInfoPerFlow() {
  m_SvcExprcIsSet = false;
  m_TimeIntevIsSet = false;
  m_Dnai = "";
  m_DnaiIsSet = false;
  m_IpTrafficFilterIsSet = false;
  m_EthTrafficFilterIsSet = false;
}

ServiceExperienceInfoPerFlow::~ServiceExperienceInfoPerFlow() {}

void ServiceExperienceInfoPerFlow::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const ServiceExperienceInfoPerFlow &o) {
  j = nlohmann::json();
  if (o.svcExprcIsSet())
    j["svcExprc"] = o.m_SvcExprc;
  if (o.timeIntevIsSet())
    j["timeIntev"] = o.m_TimeIntev;
  if (o.dnaiIsSet())
    j["dnai"] = o.m_Dnai;
  if (o.ipTrafficFilterIsSet())
    j["ipTrafficFilter"] = o.m_IpTrafficFilter;
  if (o.ethTrafficFilterIsSet())
    j["ethTrafficFilter"] = o.m_EthTrafficFilter;
}

void from_json(const nlohmann::json &j, ServiceExperienceInfoPerFlow &o) {
  if (j.find("svcExprc") != j.end()) {
    j.at("svcExprc").get_to(o.m_SvcExprc);
    o.m_SvcExprcIsSet = true;
  }
  if (j.find("timeIntev") != j.end()) {
    j.at("timeIntev").get_to(o.m_TimeIntev);
    o.m_TimeIntevIsSet = true;
  }
  if (j.find("dnai") != j.end()) {
    j.at("dnai").get_to(o.m_Dnai);
    o.m_DnaiIsSet = true;
  }
  if (j.find("ipTrafficFilter") != j.end()) {
    j.at("ipTrafficFilter").get_to(o.m_IpTrafficFilter);
    o.m_IpTrafficFilterIsSet = true;
  }
  if (j.find("ethTrafficFilter") != j.end()) {
    j.at("ethTrafficFilter").get_to(o.m_EthTrafficFilter);
    o.m_EthTrafficFilterIsSet = true;
  }
}

SvcExperience ServiceExperienceInfoPerFlow::getSvcExprc() const {
  return m_SvcExprc;
}
void ServiceExperienceInfoPerFlow::setSvcExprc(SvcExperience const &value) {
  m_SvcExprc = value;
  m_SvcExprcIsSet = true;
}
bool ServiceExperienceInfoPerFlow::svcExprcIsSet() const {
  return m_SvcExprcIsSet;
}
void ServiceExperienceInfoPerFlow::unsetSvcExprc() { m_SvcExprcIsSet = false; }
TimeWindow ServiceExperienceInfoPerFlow::getTimeIntev() const {
  return m_TimeIntev;
}
void ServiceExperienceInfoPerFlow::setTimeIntev(TimeWindow const &value) {
  m_TimeIntev = value;
  m_TimeIntevIsSet = true;
}
bool ServiceExperienceInfoPerFlow::timeIntevIsSet() const {
  return m_TimeIntevIsSet;
}
void ServiceExperienceInfoPerFlow::unsetTimeIntev() {
  m_TimeIntevIsSet = false;
}
std::string ServiceExperienceInfoPerFlow::getDnai() const { return m_Dnai; }
void ServiceExperienceInfoPerFlow::setDnai(std::string const &value) {
  m_Dnai = value;
  m_DnaiIsSet = true;
}
bool ServiceExperienceInfoPerFlow::dnaiIsSet() const { return m_DnaiIsSet; }
void ServiceExperienceInfoPerFlow::unsetDnai() { m_DnaiIsSet = false; }
FlowInfo ServiceExperienceInfoPerFlow::getIpTrafficFilter() const {
  return m_IpTrafficFilter;
}
void ServiceExperienceInfoPerFlow::setIpTrafficFilter(FlowInfo const &value) {
  m_IpTrafficFilter = value;
  m_IpTrafficFilterIsSet = true;
}
bool ServiceExperienceInfoPerFlow::ipTrafficFilterIsSet() const {
  return m_IpTrafficFilterIsSet;
}
void ServiceExperienceInfoPerFlow::unsetIpTrafficFilter() {
  m_IpTrafficFilterIsSet = false;
}
EthFlowDescription ServiceExperienceInfoPerFlow::getEthTrafficFilter() const {
  return m_EthTrafficFilter;
}
void ServiceExperienceInfoPerFlow::setEthTrafficFilter(
    EthFlowDescription const &value) {
  m_EthTrafficFilter = value;
  m_EthTrafficFilterIsSet = true;
}
bool ServiceExperienceInfoPerFlow::ethTrafficFilterIsSet() const {
  return m_EthTrafficFilterIsSet;
}
void ServiceExperienceInfoPerFlow::unsetEthTrafficFilter() {
  m_EthTrafficFilterIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org