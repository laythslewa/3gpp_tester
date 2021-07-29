/**
 * 3gpp-monitoring-event
 * API for Monitoring Event. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "MonitoringNotification.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

MonitoringNotification::MonitoringNotification() {
  m_Subscription = "";
  m_ConfigResultsIsSet = false;
  m_MonitoringEventReportsIsSet = false;
  m_CancelInd = false;
  m_CancelIndIsSet = false;
  m_CancelExternalIdsIsSet = false;
  m_CancelMsisdnsIsSet = false;
  m_AppliedParamIsSet = false;
}

MonitoringNotification::~MonitoringNotification() {}

void MonitoringNotification::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const MonitoringNotification &o) {
  j = nlohmann::json();
  j["subscription"] = o.m_Subscription;
  if (o.configResultsIsSet() || !o.m_ConfigResults.empty())
    j["configResults"] = o.m_ConfigResults;
  if (o.monitoringEventReportsIsSet() || !o.m_MonitoringEventReports.empty())
    j["monitoringEventReports"] = o.m_MonitoringEventReports;
  if (o.cancelIndIsSet())
    j["cancelInd"] = o.m_CancelInd;
  if (o.cancelExternalIdsIsSet() || !o.m_CancelExternalIds.empty())
    j["cancelExternalIds"] = o.m_CancelExternalIds;
  if (o.cancelMsisdnsIsSet() || !o.m_CancelMsisdns.empty())
    j["cancelMsisdns"] = o.m_CancelMsisdns;
  if (o.appliedParamIsSet())
    j["appliedParam"] = o.m_AppliedParam;
}

void from_json(const nlohmann::json &j, MonitoringNotification &o) {
  j.at("subscription").get_to(o.m_Subscription);
  if (j.find("configResults") != j.end()) {
    j.at("configResults").get_to(o.m_ConfigResults);
    o.m_ConfigResultsIsSet = true;
  }
  if (j.find("monitoringEventReports") != j.end()) {
    j.at("monitoringEventReports").get_to(o.m_MonitoringEventReports);
    o.m_MonitoringEventReportsIsSet = true;
  }
  if (j.find("cancelInd") != j.end()) {
    j.at("cancelInd").get_to(o.m_CancelInd);
    o.m_CancelIndIsSet = true;
  }
  if (j.find("cancelExternalIds") != j.end()) {
    j.at("cancelExternalIds").get_to(o.m_CancelExternalIds);
    o.m_CancelExternalIdsIsSet = true;
  }
  if (j.find("cancelMsisdns") != j.end()) {
    j.at("cancelMsisdns").get_to(o.m_CancelMsisdns);
    o.m_CancelMsisdnsIsSet = true;
  }
  if (j.find("appliedParam") != j.end()) {
    j.at("appliedParam").get_to(o.m_AppliedParam);
    o.m_AppliedParamIsSet = true;
  }
}

std::string MonitoringNotification::getSubscription() const {
  return m_Subscription;
}
void MonitoringNotification::setSubscription(std::string const &value) {
  m_Subscription = value;
}
std::vector<ConfigResult> &MonitoringNotification::getConfigResults() {
  return m_ConfigResults;
}
void MonitoringNotification::setConfigResults(
    std::vector<ConfigResult> const &value) {
  m_ConfigResults = value;
  m_ConfigResultsIsSet = true;
}
bool MonitoringNotification::configResultsIsSet() const {
  return m_ConfigResultsIsSet;
}
void MonitoringNotification::unsetConfigResults() {
  m_ConfigResultsIsSet = false;
}
std::vector<MonitoringEventReport> &
MonitoringNotification::getMonitoringEventReports() {
  return m_MonitoringEventReports;
}
void MonitoringNotification::setMonitoringEventReports(
    std::vector<MonitoringEventReport> const &value) {
  m_MonitoringEventReports = value;
  m_MonitoringEventReportsIsSet = true;
}
bool MonitoringNotification::monitoringEventReportsIsSet() const {
  return m_MonitoringEventReportsIsSet;
}
void MonitoringNotification::unsetMonitoringEventReports() {
  m_MonitoringEventReportsIsSet = false;
}
bool MonitoringNotification::isCancelInd() const { return m_CancelInd; }
void MonitoringNotification::setCancelInd(bool const value) {
  m_CancelInd = value;
  m_CancelIndIsSet = true;
}
bool MonitoringNotification::cancelIndIsSet() const { return m_CancelIndIsSet; }
void MonitoringNotification::unsetCancelInd() { m_CancelIndIsSet = false; }
std::vector<std::string> &MonitoringNotification::getCancelExternalIds() {
  return m_CancelExternalIds;
}
void MonitoringNotification::setCancelExternalIds(
    std::vector<std::string> const &value) {
  m_CancelExternalIds = value;
  m_CancelExternalIdsIsSet = true;
}
bool MonitoringNotification::cancelExternalIdsIsSet() const {
  return m_CancelExternalIdsIsSet;
}
void MonitoringNotification::unsetCancelExternalIds() {
  m_CancelExternalIdsIsSet = false;
}
std::vector<std::string> &MonitoringNotification::getCancelMsisdns() {
  return m_CancelMsisdns;
}
void MonitoringNotification::setCancelMsisdns(
    std::vector<std::string> const &value) {
  m_CancelMsisdns = value;
  m_CancelMsisdnsIsSet = true;
}
bool MonitoringNotification::cancelMsisdnsIsSet() const {
  return m_CancelMsisdnsIsSet;
}
void MonitoringNotification::unsetCancelMsisdns() {
  m_CancelMsisdnsIsSet = false;
}
AppliedParameterConfiguration MonitoringNotification::getAppliedParam() const {
  return m_AppliedParam;
}
void MonitoringNotification::setAppliedParam(
    AppliedParameterConfiguration const &value) {
  m_AppliedParam = value;
  m_AppliedParamIsSet = true;
}
bool MonitoringNotification::appliedParamIsSet() const {
  return m_AppliedParamIsSet;
}
void MonitoringNotification::unsetAppliedParam() {
  m_AppliedParamIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
