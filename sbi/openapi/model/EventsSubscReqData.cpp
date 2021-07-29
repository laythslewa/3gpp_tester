/**
 * Npcf_PolicyAuthorization Service API
 * PCF Policy Authorization Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "EventsSubscReqData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

EventsSubscReqData::EventsSubscReqData() {
  m_NotifUri = "";
  m_NotifUriIsSet = false;
  m_ReqQosMonParamsIsSet = false;
  m_QosMonIsSet = false;
  m_ReqAnisIsSet = false;
  m_UsgThresIsSet = false;
  m_NotifCorreId = "";
  m_NotifCorreIdIsSet = false;
  m_AfAppIdsIsSet = false;
  m_DirectNotifInd = false;
  m_DirectNotifIndIsSet = false;
}

EventsSubscReqData::~EventsSubscReqData() {}

void EventsSubscReqData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const EventsSubscReqData &o) {
  j = nlohmann::json();
  j["events"] = o.m_Events;
  if (o.notifUriIsSet())
    j["notifUri"] = o.m_NotifUri;
  if (o.reqQosMonParamsIsSet() || !o.m_ReqQosMonParams.empty())
    j["reqQosMonParams"] = o.m_ReqQosMonParams;
  if (o.qosMonIsSet())
    j["qosMon"] = o.m_QosMon;
  if (o.reqAnisIsSet() || !o.m_ReqAnis.empty())
    j["reqAnis"] = o.m_ReqAnis;
  if (o.usgThresIsSet())
    j["usgThres"] = o.m_UsgThres;
  if (o.notifCorreIdIsSet())
    j["notifCorreId"] = o.m_NotifCorreId;
  if (o.afAppIdsIsSet() || !o.m_AfAppIds.empty())
    j["afAppIds"] = o.m_AfAppIds;
  if (o.directNotifIndIsSet())
    j["directNotifInd"] = o.m_DirectNotifInd;
}

void from_json(const nlohmann::json &j, EventsSubscReqData &o) {
  j.at("events").get_to(o.m_Events);
  if (j.find("notifUri") != j.end()) {
    j.at("notifUri").get_to(o.m_NotifUri);
    o.m_NotifUriIsSet = true;
  }
  if (j.find("reqQosMonParams") != j.end()) {
    j.at("reqQosMonParams").get_to(o.m_ReqQosMonParams);
    o.m_ReqQosMonParamsIsSet = true;
  }
  if (j.find("qosMon") != j.end()) {
    j.at("qosMon").get_to(o.m_QosMon);
    o.m_QosMonIsSet = true;
  }
  if (j.find("reqAnis") != j.end()) {
    j.at("reqAnis").get_to(o.m_ReqAnis);
    o.m_ReqAnisIsSet = true;
  }
  if (j.find("usgThres") != j.end()) {
    j.at("usgThres").get_to(o.m_UsgThres);
    o.m_UsgThresIsSet = true;
  }
  if (j.find("notifCorreId") != j.end()) {
    j.at("notifCorreId").get_to(o.m_NotifCorreId);
    o.m_NotifCorreIdIsSet = true;
  }
  if (j.find("afAppIds") != j.end()) {
    j.at("afAppIds").get_to(o.m_AfAppIds);
    o.m_AfAppIdsIsSet = true;
  }
  if (j.find("directNotifInd") != j.end()) {
    j.at("directNotifInd").get_to(o.m_DirectNotifInd);
    o.m_DirectNotifIndIsSet = true;
  }
}

std::vector<AfEventSubscription> &EventsSubscReqData::getEvents() {
  return m_Events;
}
void EventsSubscReqData::setEvents(
    std::vector<AfEventSubscription> const &value) {
  m_Events = value;
}
std::string EventsSubscReqData::getNotifUri() const { return m_NotifUri; }
void EventsSubscReqData::setNotifUri(std::string const &value) {
  m_NotifUri = value;
  m_NotifUriIsSet = true;
}
bool EventsSubscReqData::notifUriIsSet() const { return m_NotifUriIsSet; }
void EventsSubscReqData::unsetNotifUri() { m_NotifUriIsSet = false; }
std::vector<RequestedQosMonitoringParameter> &
EventsSubscReqData::getReqQosMonParams() {
  return m_ReqQosMonParams;
}
void EventsSubscReqData::setReqQosMonParams(
    std::vector<RequestedQosMonitoringParameter> const &value) {
  m_ReqQosMonParams = value;
  m_ReqQosMonParamsIsSet = true;
}
bool EventsSubscReqData::reqQosMonParamsIsSet() const {
  return m_ReqQosMonParamsIsSet;
}
void EventsSubscReqData::unsetReqQosMonParams() {
  m_ReqQosMonParamsIsSet = false;
}
QosMonitoringInformation EventsSubscReqData::getQosMon() const {
  return m_QosMon;
}
void EventsSubscReqData::setQosMon(QosMonitoringInformation const &value) {
  m_QosMon = value;
  m_QosMonIsSet = true;
}
bool EventsSubscReqData::qosMonIsSet() const { return m_QosMonIsSet; }
void EventsSubscReqData::unsetQosMon() { m_QosMonIsSet = false; }
std::vector<RequiredAccessInfo> &EventsSubscReqData::getReqAnis() {
  return m_ReqAnis;
}
void EventsSubscReqData::setReqAnis(
    std::vector<RequiredAccessInfo> const &value) {
  m_ReqAnis = value;
  m_ReqAnisIsSet = true;
}
bool EventsSubscReqData::reqAnisIsSet() const { return m_ReqAnisIsSet; }
void EventsSubscReqData::unsetReqAnis() { m_ReqAnisIsSet = false; }
UsageThreshold EventsSubscReqData::getUsgThres() const { return m_UsgThres; }
void EventsSubscReqData::setUsgThres(UsageThreshold const &value) {
  m_UsgThres = value;
  m_UsgThresIsSet = true;
}
bool EventsSubscReqData::usgThresIsSet() const { return m_UsgThresIsSet; }
void EventsSubscReqData::unsetUsgThres() { m_UsgThresIsSet = false; }
std::string EventsSubscReqData::getNotifCorreId() const {
  return m_NotifCorreId;
}
void EventsSubscReqData::setNotifCorreId(std::string const &value) {
  m_NotifCorreId = value;
  m_NotifCorreIdIsSet = true;
}
bool EventsSubscReqData::notifCorreIdIsSet() const {
  return m_NotifCorreIdIsSet;
}
void EventsSubscReqData::unsetNotifCorreId() { m_NotifCorreIdIsSet = false; }
std::vector<std::string> &EventsSubscReqData::getAfAppIds() {
  return m_AfAppIds;
}
void EventsSubscReqData::setAfAppIds(std::vector<std::string> const &value) {
  m_AfAppIds = value;
  m_AfAppIdsIsSet = true;
}
bool EventsSubscReqData::afAppIdsIsSet() const { return m_AfAppIdsIsSet; }
void EventsSubscReqData::unsetAfAppIds() { m_AfAppIdsIsSet = false; }
bool EventsSubscReqData::isDirectNotifInd() const { return m_DirectNotifInd; }
void EventsSubscReqData::setDirectNotifInd(bool const value) {
  m_DirectNotifInd = value;
  m_DirectNotifIndIsSet = true;
}
bool EventsSubscReqData::directNotifIndIsSet() const {
  return m_DirectNotifIndIsSet;
}
void EventsSubscReqData::unsetDirectNotifInd() {
  m_DirectNotifIndIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org