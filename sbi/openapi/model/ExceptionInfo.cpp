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

#include "ExceptionInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ExceptionInfo::ExceptionInfo() {
  m_IpTrafficFilterIsSet = false;
  m_EthTrafficFilterIsSet = false;
  m_ExcepsIsSet = false;
}

ExceptionInfo::~ExceptionInfo() {}

void ExceptionInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const ExceptionInfo &o) {
  j = nlohmann::json();
  if (o.ipTrafficFilterIsSet())
    j["ipTrafficFilter"] = o.m_IpTrafficFilter;
  if (o.ethTrafficFilterIsSet())
    j["ethTrafficFilter"] = o.m_EthTrafficFilter;
  if (o.excepsIsSet() || !o.m_Exceps.empty())
    j["exceps"] = o.m_Exceps;
}

void from_json(const nlohmann::json &j, ExceptionInfo &o) {
  if (j.find("ipTrafficFilter") != j.end()) {
    j.at("ipTrafficFilter").get_to(o.m_IpTrafficFilter);
    o.m_IpTrafficFilterIsSet = true;
  }
  if (j.find("ethTrafficFilter") != j.end()) {
    j.at("ethTrafficFilter").get_to(o.m_EthTrafficFilter);
    o.m_EthTrafficFilterIsSet = true;
  }
  if (j.find("exceps") != j.end()) {
    j.at("exceps").get_to(o.m_Exceps);
    o.m_ExcepsIsSet = true;
  }
}

FlowInfo ExceptionInfo::getIpTrafficFilter() const { return m_IpTrafficFilter; }
void ExceptionInfo::setIpTrafficFilter(FlowInfo const &value) {
  m_IpTrafficFilter = value;
  m_IpTrafficFilterIsSet = true;
}
bool ExceptionInfo::ipTrafficFilterIsSet() const {
  return m_IpTrafficFilterIsSet;
}
void ExceptionInfo::unsetIpTrafficFilter() { m_IpTrafficFilterIsSet = false; }
EthFlowDescription ExceptionInfo::getEthTrafficFilter() const {
  return m_EthTrafficFilter;
}
void ExceptionInfo::setEthTrafficFilter(EthFlowDescription const &value) {
  m_EthTrafficFilter = value;
  m_EthTrafficFilterIsSet = true;
}
bool ExceptionInfo::ethTrafficFilterIsSet() const {
  return m_EthTrafficFilterIsSet;
}
void ExceptionInfo::unsetEthTrafficFilter() { m_EthTrafficFilterIsSet = false; }
std::vector<Exception> &ExceptionInfo::getExceps() { return m_Exceps; }
void ExceptionInfo::setExceps(std::vector<Exception> const &value) {
  m_Exceps = value;
  m_ExcepsIsSet = true;
}
bool ExceptionInfo::excepsIsSet() const { return m_ExcepsIsSet; }
void ExceptionInfo::unsetExceps() { m_ExcepsIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org