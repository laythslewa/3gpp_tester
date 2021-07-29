/**
 * Nnwdaf_EventsSubscription
 * Nnwdaf_EventsSubscription Service API. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "NnwdafEventsSubscription.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

NnwdafEventsSubscription::NnwdafEventsSubscription() {
  m_EvtReqIsSet = false;
  m_NotificationURI = "";
  m_NotificationURIIsSet = false;
  m_SupportedFeatures = "";
  m_SupportedFeaturesIsSet = false;
  m_EventNotificationsIsSet = false;
  m_FailEventReportsIsSet = false;
}

NnwdafEventsSubscription::~NnwdafEventsSubscription() {}

void NnwdafEventsSubscription::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const NnwdafEventsSubscription &o) {
  j = nlohmann::json();
  j["eventSubscriptions"] = o.m_EventSubscriptions;
  if (o.evtReqIsSet())
    j["evtReq"] = o.m_EvtReq;
  if (o.notificationURIIsSet())
    j["notificationURI"] = o.m_NotificationURI;
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
  if (o.eventNotificationsIsSet() || !o.m_EventNotifications.empty())
    j["eventNotifications"] = o.m_EventNotifications;
  if (o.failEventReportsIsSet() || !o.m_FailEventReports.empty())
    j["failEventReports"] = o.m_FailEventReports;
}

void from_json(const nlohmann::json &j, NnwdafEventsSubscription &o) {
  j.at("eventSubscriptions").get_to(o.m_EventSubscriptions);
  if (j.find("evtReq") != j.end()) {
    j.at("evtReq").get_to(o.m_EvtReq);
    o.m_EvtReqIsSet = true;
  }
  if (j.find("notificationURI") != j.end()) {
    j.at("notificationURI").get_to(o.m_NotificationURI);
    o.m_NotificationURIIsSet = true;
  }
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
  if (j.find("eventNotifications") != j.end()) {
    j.at("eventNotifications").get_to(o.m_EventNotifications);
    o.m_EventNotificationsIsSet = true;
  }
  if (j.find("failEventReports") != j.end()) {
    j.at("failEventReports").get_to(o.m_FailEventReports);
    o.m_FailEventReportsIsSet = true;
  }
}

std::vector<EventSubscription> &
NnwdafEventsSubscription::getEventSubscriptions() {
  return m_EventSubscriptions;
}
void NnwdafEventsSubscription::setEventSubscriptions(
    std::vector<EventSubscription> const &value) {
  m_EventSubscriptions = value;
}
ReportingInformation NnwdafEventsSubscription::getEvtReq() const {
  return m_EvtReq;
}
void NnwdafEventsSubscription::setEvtReq(ReportingInformation const &value) {
  m_EvtReq = value;
  m_EvtReqIsSet = true;
}
bool NnwdafEventsSubscription::evtReqIsSet() const { return m_EvtReqIsSet; }
void NnwdafEventsSubscription::unsetEvtReq() { m_EvtReqIsSet = false; }
std::string NnwdafEventsSubscription::getNotificationURI() const {
  return m_NotificationURI;
}
void NnwdafEventsSubscription::setNotificationURI(std::string const &value) {
  m_NotificationURI = value;
  m_NotificationURIIsSet = true;
}
bool NnwdafEventsSubscription::notificationURIIsSet() const {
  return m_NotificationURIIsSet;
}
void NnwdafEventsSubscription::unsetNotificationURI() {
  m_NotificationURIIsSet = false;
}
std::string NnwdafEventsSubscription::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void NnwdafEventsSubscription::setSupportedFeatures(std::string const &value) {
  m_SupportedFeatures = value;
  m_SupportedFeaturesIsSet = true;
}
bool NnwdafEventsSubscription::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void NnwdafEventsSubscription::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}
std::vector<EventNotification> &
NnwdafEventsSubscription::getEventNotifications() {
  return m_EventNotifications;
}
void NnwdafEventsSubscription::setEventNotifications(
    std::vector<EventNotification> const &value) {
  m_EventNotifications = value;
  m_EventNotificationsIsSet = true;
}
bool NnwdafEventsSubscription::eventNotificationsIsSet() const {
  return m_EventNotificationsIsSet;
}
void NnwdafEventsSubscription::unsetEventNotifications() {
  m_EventNotificationsIsSet = false;
}
std::vector<FailureEventInfo> &NnwdafEventsSubscription::getFailEventReports() {
  return m_FailEventReports;
}
void NnwdafEventsSubscription::setFailEventReports(
    std::vector<FailureEventInfo> const &value) {
  m_FailEventReports = value;
  m_FailEventReportsIsSet = true;
}
bool NnwdafEventsSubscription::failEventReportsIsSet() const {
  return m_FailEventReportsIsSet;
}
void NnwdafEventsSubscription::unsetFailEventReports() {
  m_FailEventReportsIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
