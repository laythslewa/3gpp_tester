/**
 * Npcf_BDTPolicyControl Service API
 * PCF BDT Policy Control Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "Notification.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

Notification::Notification() {
  m_BdtRefId = "";
  m_CandPoliciesIsSet = false;
  m_NwAreaInfoIsSet = false;
  m_TimeWindowIsSet = false;
}

Notification::~Notification() {}

void Notification::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const Notification &o) {
  j = nlohmann::json();
  j["bdtRefId"] = o.m_BdtRefId;
  if (o.candPoliciesIsSet() || !o.m_CandPolicies.empty())
    j["candPolicies"] = o.m_CandPolicies;
  if (o.nwAreaInfoIsSet())
    j["nwAreaInfo"] = o.m_NwAreaInfo;
  if (o.timeWindowIsSet())
    j["timeWindow"] = o.m_TimeWindow;
}

void from_json(const nlohmann::json &j, Notification &o) {
  j.at("bdtRefId").get_to(o.m_BdtRefId);
  if (j.find("candPolicies") != j.end()) {
    j.at("candPolicies").get_to(o.m_CandPolicies);
    o.m_CandPoliciesIsSet = true;
  }
  if (j.find("nwAreaInfo") != j.end()) {
    j.at("nwAreaInfo").get_to(o.m_NwAreaInfo);
    o.m_NwAreaInfoIsSet = true;
  }
  if (j.find("timeWindow") != j.end()) {
    j.at("timeWindow").get_to(o.m_TimeWindow);
    o.m_TimeWindowIsSet = true;
  }
}

std::string Notification::getBdtRefId() const { return m_BdtRefId; }
void Notification::setBdtRefId(std::string const &value) { m_BdtRefId = value; }
std::vector<TransferPolicy> &Notification::getCandPolicies() {
  return m_CandPolicies;
}
void Notification::setCandPolicies(std::vector<TransferPolicy> const &value) {
  m_CandPolicies = value;
  m_CandPoliciesIsSet = true;
}
bool Notification::candPoliciesIsSet() const { return m_CandPoliciesIsSet; }
void Notification::unsetCandPolicies() { m_CandPoliciesIsSet = false; }
NetworkAreaInfo Notification::getNwAreaInfo() const { return m_NwAreaInfo; }
void Notification::setNwAreaInfo(NetworkAreaInfo const &value) {
  m_NwAreaInfo = value;
  m_NwAreaInfoIsSet = true;
}
bool Notification::nwAreaInfoIsSet() const { return m_NwAreaInfoIsSet; }
void Notification::unsetNwAreaInfo() { m_NwAreaInfoIsSet = false; }
TimeWindow Notification::getTimeWindow() const { return m_TimeWindow; }
void Notification::setTimeWindow(TimeWindow const &value) {
  m_TimeWindow = value;
  m_TimeWindowIsSet = true;
}
bool Notification::timeWindowIsSet() const { return m_TimeWindowIsSet; }
void Notification::unsetTimeWindow() { m_TimeWindowIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org