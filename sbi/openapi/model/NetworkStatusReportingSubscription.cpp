/**
 * 3gpp-network-status-reporting
 * API for reporting network status. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "NetworkStatusReportingSubscription.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

NetworkStatusReportingSubscription::NetworkStatusReportingSubscription() {
  m_Self = "";
  m_SelfIsSet = false;
  m_SupportedFeatures = "";
  m_SupportedFeaturesIsSet = false;
  m_NotificationDestination = "";
  m_RequestTestNotification = false;
  m_RequestTestNotificationIsSet = false;
  m_WebsockNotifConfigIsSet = false;
  m_TimeDuration = "";
  m_TimeDurationIsSet = false;
  m_ThresholdValuesIsSet = false;
  m_ThresholdTypesIsSet = false;
}

NetworkStatusReportingSubscription::~NetworkStatusReportingSubscription() {}

void NetworkStatusReportingSubscription::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const NetworkStatusReportingSubscription &o) {
  j = nlohmann::json();
  if (o.selfIsSet())
    j["self"] = o.m_Self;
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
  j["notificationDestination"] = o.m_NotificationDestination;
  if (o.requestTestNotificationIsSet())
    j["requestTestNotification"] = o.m_RequestTestNotification;
  if (o.websockNotifConfigIsSet())
    j["websockNotifConfig"] = o.m_WebsockNotifConfig;
  j["locationArea"] = o.m_LocationArea;
  if (o.timeDurationIsSet())
    j["timeDuration"] = o.m_TimeDuration;
  if (o.thresholdValuesIsSet() || !o.m_ThresholdValues.empty())
    j["thresholdValues"] = o.m_ThresholdValues;
  if (o.thresholdTypesIsSet() || !o.m_ThresholdTypes.empty())
    j["thresholdTypes"] = o.m_ThresholdTypes;
}

void from_json(const nlohmann::json &j, NetworkStatusReportingSubscription &o) {
  if (j.find("self") != j.end()) {
    j.at("self").get_to(o.m_Self);
    o.m_SelfIsSet = true;
  }
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
  j.at("notificationDestination").get_to(o.m_NotificationDestination);
  if (j.find("requestTestNotification") != j.end()) {
    j.at("requestTestNotification").get_to(o.m_RequestTestNotification);
    o.m_RequestTestNotificationIsSet = true;
  }
  if (j.find("websockNotifConfig") != j.end()) {
    j.at("websockNotifConfig").get_to(o.m_WebsockNotifConfig);
    o.m_WebsockNotifConfigIsSet = true;
  }
  j.at("locationArea").get_to(o.m_LocationArea);
  if (j.find("timeDuration") != j.end()) {
    j.at("timeDuration").get_to(o.m_TimeDuration);
    o.m_TimeDurationIsSet = true;
  }
  if (j.find("thresholdValues") != j.end()) {
    j.at("thresholdValues").get_to(o.m_ThresholdValues);
    o.m_ThresholdValuesIsSet = true;
  }
  if (j.find("thresholdTypes") != j.end()) {
    j.at("thresholdTypes").get_to(o.m_ThresholdTypes);
    o.m_ThresholdTypesIsSet = true;
  }
}

std::string NetworkStatusReportingSubscription::getSelf() const {
  return m_Self;
}
void NetworkStatusReportingSubscription::setSelf(std::string const &value) {
  m_Self = value;
  m_SelfIsSet = true;
}
bool NetworkStatusReportingSubscription::selfIsSet() const {
  return m_SelfIsSet;
}
void NetworkStatusReportingSubscription::unsetSelf() { m_SelfIsSet = false; }
std::string NetworkStatusReportingSubscription::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void NetworkStatusReportingSubscription::setSupportedFeatures(
    std::string const &value) {
  m_SupportedFeatures = value;
  m_SupportedFeaturesIsSet = true;
}
bool NetworkStatusReportingSubscription::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void NetworkStatusReportingSubscription::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}
std::string
NetworkStatusReportingSubscription::getNotificationDestination() const {
  return m_NotificationDestination;
}
void NetworkStatusReportingSubscription::setNotificationDestination(
    std::string const &value) {
  m_NotificationDestination = value;
}
bool NetworkStatusReportingSubscription::isRequestTestNotification() const {
  return m_RequestTestNotification;
}
void NetworkStatusReportingSubscription::setRequestTestNotification(
    bool const value) {
  m_RequestTestNotification = value;
  m_RequestTestNotificationIsSet = true;
}
bool NetworkStatusReportingSubscription::requestTestNotificationIsSet() const {
  return m_RequestTestNotificationIsSet;
}
void NetworkStatusReportingSubscription::unsetRequestTestNotification() {
  m_RequestTestNotificationIsSet = false;
}
WebsockNotifConfig
NetworkStatusReportingSubscription::getWebsockNotifConfig() const {
  return m_WebsockNotifConfig;
}
void NetworkStatusReportingSubscription::setWebsockNotifConfig(
    WebsockNotifConfig const &value) {
  m_WebsockNotifConfig = value;
  m_WebsockNotifConfigIsSet = true;
}
bool NetworkStatusReportingSubscription::websockNotifConfigIsSet() const {
  return m_WebsockNotifConfigIsSet;
}
void NetworkStatusReportingSubscription::unsetWebsockNotifConfig() {
  m_WebsockNotifConfigIsSet = false;
}
LocationArea NetworkStatusReportingSubscription::getLocationArea() const {
  return m_LocationArea;
}
void NetworkStatusReportingSubscription::setLocationArea(
    LocationArea const &value) {
  m_LocationArea = value;
}
std::string NetworkStatusReportingSubscription::getTimeDuration() const {
  return m_TimeDuration;
}
void NetworkStatusReportingSubscription::setTimeDuration(
    std::string const &value) {
  m_TimeDuration = value;
  m_TimeDurationIsSet = true;
}
bool NetworkStatusReportingSubscription::timeDurationIsSet() const {
  return m_TimeDurationIsSet;
}
void NetworkStatusReportingSubscription::unsetTimeDuration() {
  m_TimeDurationIsSet = false;
}
std::vector<int32_t> &NetworkStatusReportingSubscription::getThresholdValues() {
  return m_ThresholdValues;
}
void NetworkStatusReportingSubscription::setThresholdValues(
    std::vector<int32_t> const value) {
  m_ThresholdValues = value;
  m_ThresholdValuesIsSet = true;
}
bool NetworkStatusReportingSubscription::thresholdValuesIsSet() const {
  return m_ThresholdValuesIsSet;
}
void NetworkStatusReportingSubscription::unsetThresholdValues() {
  m_ThresholdValuesIsSet = false;
}
std::vector<CongestionType> &
NetworkStatusReportingSubscription::getThresholdTypes() {
  return m_ThresholdTypes;
}
void NetworkStatusReportingSubscription::setThresholdTypes(
    std::vector<CongestionType> const &value) {
  m_ThresholdTypes = value;
  m_ThresholdTypesIsSet = true;
}
bool NetworkStatusReportingSubscription::thresholdTypesIsSet() const {
  return m_ThresholdTypesIsSet;
}
void NetworkStatusReportingSubscription::unsetThresholdTypes() {
  m_ThresholdTypesIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
