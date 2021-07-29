/**
 * CAPIF_Security_API
 * API for CAPIF security management. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ServiceSecurity.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ServiceSecurity::ServiceSecurity() {
  m_NotificationDestination = "";
  m_RequestTestNotification = false;
  m_RequestTestNotificationIsSet = false;
  m_WebsockNotifConfigIsSet = false;
  m_SupportedFeatures = "";
  m_SupportedFeaturesIsSet = false;
}

ServiceSecurity::~ServiceSecurity() {}

void ServiceSecurity::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const ServiceSecurity &o) {
  j = nlohmann::json();
  j["securityInfo"] = o.m_SecurityInfo;
  j["notificationDestination"] = o.m_NotificationDestination;
  if (o.requestTestNotificationIsSet())
    j["requestTestNotification"] = o.m_RequestTestNotification;
  if (o.websockNotifConfigIsSet())
    j["websockNotifConfig"] = o.m_WebsockNotifConfig;
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
}

void from_json(const nlohmann::json &j, ServiceSecurity &o) {
  j.at("securityInfo").get_to(o.m_SecurityInfo);
  j.at("notificationDestination").get_to(o.m_NotificationDestination);
  if (j.find("requestTestNotification") != j.end()) {
    j.at("requestTestNotification").get_to(o.m_RequestTestNotification);
    o.m_RequestTestNotificationIsSet = true;
  }
  if (j.find("websockNotifConfig") != j.end()) {
    j.at("websockNotifConfig").get_to(o.m_WebsockNotifConfig);
    o.m_WebsockNotifConfigIsSet = true;
  }
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
}

std::vector<SecurityInformation> &ServiceSecurity::getSecurityInfo() {
  return m_SecurityInfo;
}
void ServiceSecurity::setSecurityInfo(
    std::vector<SecurityInformation> const &value) {
  m_SecurityInfo = value;
}
std::string ServiceSecurity::getNotificationDestination() const {
  return m_NotificationDestination;
}
void ServiceSecurity::setNotificationDestination(std::string const &value) {
  m_NotificationDestination = value;
}
bool ServiceSecurity::isRequestTestNotification() const {
  return m_RequestTestNotification;
}
void ServiceSecurity::setRequestTestNotification(bool const value) {
  m_RequestTestNotification = value;
  m_RequestTestNotificationIsSet = true;
}
bool ServiceSecurity::requestTestNotificationIsSet() const {
  return m_RequestTestNotificationIsSet;
}
void ServiceSecurity::unsetRequestTestNotification() {
  m_RequestTestNotificationIsSet = false;
}
WebsockNotifConfig ServiceSecurity::getWebsockNotifConfig() const {
  return m_WebsockNotifConfig;
}
void ServiceSecurity::setWebsockNotifConfig(WebsockNotifConfig const &value) {
  m_WebsockNotifConfig = value;
  m_WebsockNotifConfigIsSet = true;
}
bool ServiceSecurity::websockNotifConfigIsSet() const {
  return m_WebsockNotifConfigIsSet;
}
void ServiceSecurity::unsetWebsockNotifConfig() {
  m_WebsockNotifConfigIsSet = false;
}
std::string ServiceSecurity::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void ServiceSecurity::setSupportedFeatures(std::string const &value) {
  m_SupportedFeatures = value;
  m_SupportedFeaturesIsSet = true;
}
bool ServiceSecurity::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void ServiceSecurity::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org