/**
 * N5g-ddnmf_Discovery API
 * N5g-ddnmf_Discovery Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "MonitorUpdateData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

MonitorUpdateData::MonitorUpdateData() {
  m_ProseAppIdName = "";
  m_Ttl = 0;
  m_MonitorUpdateResultCallbackRef = "";
  m_MonitorUpdateResultCallbackRefIsSet = false;
}

MonitorUpdateData::~MonitorUpdateData() {}

void MonitorUpdateData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const MonitorUpdateData &o) {
  j = nlohmann::json();
  j["discType"] = o.m_DiscType;
  j["proseAppIdName"] = o.m_ProseAppIdName;
  j["ttl"] = o.m_Ttl;
  if (o.monitorUpdateResultCallbackRefIsSet())
    j["monitorUpdateResultCallbackRef"] = o.m_MonitorUpdateResultCallbackRef;
}

void from_json(const nlohmann::json &j, MonitorUpdateData &o) {
  j.at("discType").get_to(o.m_DiscType);
  j.at("proseAppIdName").get_to(o.m_ProseAppIdName);
  j.at("ttl").get_to(o.m_Ttl);
  if (j.find("monitorUpdateResultCallbackRef") != j.end()) {
    j.at("monitorUpdateResultCallbackRef")
        .get_to(o.m_MonitorUpdateResultCallbackRef);
    o.m_MonitorUpdateResultCallbackRefIsSet = true;
  }
}

DiscoveryType MonitorUpdateData::getDiscType() const { return m_DiscType; }
void MonitorUpdateData::setDiscType(DiscoveryType const &value) {
  m_DiscType = value;
}
std::string MonitorUpdateData::getProseAppIdName() const {
  return m_ProseAppIdName;
}
void MonitorUpdateData::setProseAppIdName(std::string const &value) {
  m_ProseAppIdName = value;
}
int32_t MonitorUpdateData::getTtl() const { return m_Ttl; }
void MonitorUpdateData::setTtl(int32_t const value) { m_Ttl = value; }
std::string MonitorUpdateData::getMonitorUpdateResultCallbackRef() const {
  return m_MonitorUpdateResultCallbackRef;
}
void MonitorUpdateData::setMonitorUpdateResultCallbackRef(
    std::string const &value) {
  m_MonitorUpdateResultCallbackRef = value;
  m_MonitorUpdateResultCallbackRefIsSet = true;
}
bool MonitorUpdateData::monitorUpdateResultCallbackRefIsSet() const {
  return m_MonitorUpdateResultCallbackRefIsSet;
}
void MonitorUpdateData::unsetMonitorUpdateResultCallbackRef() {
  m_MonitorUpdateResultCallbackRefIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
