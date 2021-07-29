/**
 * Namf_EventExposure
 * AMF Event Exposure Service © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "AmfEventNotification.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

AmfEventNotification::AmfEventNotification() {
  m_NotifyCorrelationId = "";
  m_NotifyCorrelationIdIsSet = false;
  m_SubsChangeNotifyCorrelationId = "";
  m_SubsChangeNotifyCorrelationIdIsSet = false;
  m_ReportListIsSet = false;
  m_EventSubsSyncInfoIsSet = false;
}

AmfEventNotification::~AmfEventNotification() {}

void AmfEventNotification::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const AmfEventNotification &o) {
  j = nlohmann::json();
  if (o.notifyCorrelationIdIsSet())
    j["notifyCorrelationId"] = o.m_NotifyCorrelationId;
  if (o.subsChangeNotifyCorrelationIdIsSet())
    j["subsChangeNotifyCorrelationId"] = o.m_SubsChangeNotifyCorrelationId;
  if (o.reportListIsSet() || !o.m_ReportList.empty())
    j["reportList"] = o.m_ReportList;
  if (o.eventSubsSyncInfoIsSet())
    j["eventSubsSyncInfo"] = o.m_EventSubsSyncInfo;
}

void from_json(const nlohmann::json &j, AmfEventNotification &o) {
  if (j.find("notifyCorrelationId") != j.end()) {
    j.at("notifyCorrelationId").get_to(o.m_NotifyCorrelationId);
    o.m_NotifyCorrelationIdIsSet = true;
  }
  if (j.find("subsChangeNotifyCorrelationId") != j.end()) {
    j.at("subsChangeNotifyCorrelationId")
        .get_to(o.m_SubsChangeNotifyCorrelationId);
    o.m_SubsChangeNotifyCorrelationIdIsSet = true;
  }
  if (j.find("reportList") != j.end()) {
    j.at("reportList").get_to(o.m_ReportList);
    o.m_ReportListIsSet = true;
  }
  if (j.find("eventSubsSyncInfo") != j.end()) {
    j.at("eventSubsSyncInfo").get_to(o.m_EventSubsSyncInfo);
    o.m_EventSubsSyncInfoIsSet = true;
  }
}

std::string AmfEventNotification::getNotifyCorrelationId() const {
  return m_NotifyCorrelationId;
}
void AmfEventNotification::setNotifyCorrelationId(std::string const &value) {
  m_NotifyCorrelationId = value;
  m_NotifyCorrelationIdIsSet = true;
}
bool AmfEventNotification::notifyCorrelationIdIsSet() const {
  return m_NotifyCorrelationIdIsSet;
}
void AmfEventNotification::unsetNotifyCorrelationId() {
  m_NotifyCorrelationIdIsSet = false;
}
std::string AmfEventNotification::getSubsChangeNotifyCorrelationId() const {
  return m_SubsChangeNotifyCorrelationId;
}
void AmfEventNotification::setSubsChangeNotifyCorrelationId(
    std::string const &value) {
  m_SubsChangeNotifyCorrelationId = value;
  m_SubsChangeNotifyCorrelationIdIsSet = true;
}
bool AmfEventNotification::subsChangeNotifyCorrelationIdIsSet() const {
  return m_SubsChangeNotifyCorrelationIdIsSet;
}
void AmfEventNotification::unsetSubsChangeNotifyCorrelationId() {
  m_SubsChangeNotifyCorrelationIdIsSet = false;
}
std::vector<AmfEventReport> &AmfEventNotification::getReportList() {
  return m_ReportList;
}
void AmfEventNotification::setReportList(
    std::vector<AmfEventReport> const &value) {
  m_ReportList = value;
  m_ReportListIsSet = true;
}
bool AmfEventNotification::reportListIsSet() const { return m_ReportListIsSet; }
void AmfEventNotification::unsetReportList() { m_ReportListIsSet = false; }
AmfEventSubsSyncInfo AmfEventNotification::getEventSubsSyncInfo() const {
  return m_EventSubsSyncInfo;
}
void AmfEventNotification::setEventSubsSyncInfo(
    AmfEventSubsSyncInfo const &value) {
  m_EventSubsSyncInfo = value;
  m_EventSubsSyncInfoIsSet = true;
}
bool AmfEventNotification::eventSubsSyncInfoIsSet() const {
  return m_EventSubsSyncInfoIsSet;
}
void AmfEventNotification::unsetEventSubsSyncInfo() {
  m_EventSubsSyncInfoIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org