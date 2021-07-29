/**
 * VAE_DynamicGroup
 * VAE_Dynamic_Group Service © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "GroupConfigurationData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

GroupConfigurationData::GroupConfigurationData() {
  m_GroupId = "";
  m_Definition = "";
  m_LeaderId = "";
  m_NotifUri = "";
  m_Duration = "";
  m_DurationIsSet = false;
  m_RequestTestNotification = false;
  m_RequestTestNotificationIsSet = false;
  m_WebsockNotifConfigIsSet = false;
  m_SuppFeat = "";
  m_SuppFeatIsSet = false;
}

GroupConfigurationData::~GroupConfigurationData() {}

void GroupConfigurationData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const GroupConfigurationData &o) {
  j = nlohmann::json();
  j["groupId"] = o.m_GroupId;
  j["definition"] = o.m_Definition;
  j["leaderId"] = o.m_LeaderId;
  j["notifUri"] = o.m_NotifUri;
  if (o.durationIsSet())
    j["duration"] = o.m_Duration;
  if (o.requestTestNotificationIsSet())
    j["requestTestNotification"] = o.m_RequestTestNotification;
  if (o.websockNotifConfigIsSet())
    j["websockNotifConfig"] = o.m_WebsockNotifConfig;
  if (o.suppFeatIsSet())
    j["suppFeat"] = o.m_SuppFeat;
}

void from_json(const nlohmann::json &j, GroupConfigurationData &o) {
  j.at("groupId").get_to(o.m_GroupId);
  j.at("definition").get_to(o.m_Definition);
  j.at("leaderId").get_to(o.m_LeaderId);
  j.at("notifUri").get_to(o.m_NotifUri);
  if (j.find("duration") != j.end()) {
    j.at("duration").get_to(o.m_Duration);
    o.m_DurationIsSet = true;
  }
  if (j.find("requestTestNotification") != j.end()) {
    j.at("requestTestNotification").get_to(o.m_RequestTestNotification);
    o.m_RequestTestNotificationIsSet = true;
  }
  if (j.find("websockNotifConfig") != j.end()) {
    j.at("websockNotifConfig").get_to(o.m_WebsockNotifConfig);
    o.m_WebsockNotifConfigIsSet = true;
  }
  if (j.find("suppFeat") != j.end()) {
    j.at("suppFeat").get_to(o.m_SuppFeat);
    o.m_SuppFeatIsSet = true;
  }
}

std::string GroupConfigurationData::getGroupId() const { return m_GroupId; }
void GroupConfigurationData::setGroupId(std::string const &value) {
  m_GroupId = value;
}
std::string GroupConfigurationData::getDefinition() const {
  return m_Definition;
}
void GroupConfigurationData::setDefinition(std::string const &value) {
  m_Definition = value;
}
std::string GroupConfigurationData::getLeaderId() const { return m_LeaderId; }
void GroupConfigurationData::setLeaderId(std::string const &value) {
  m_LeaderId = value;
}
std::string GroupConfigurationData::getNotifUri() const { return m_NotifUri; }
void GroupConfigurationData::setNotifUri(std::string const &value) {
  m_NotifUri = value;
}
std::string GroupConfigurationData::getDuration() const { return m_Duration; }
void GroupConfigurationData::setDuration(std::string const &value) {
  m_Duration = value;
  m_DurationIsSet = true;
}
bool GroupConfigurationData::durationIsSet() const { return m_DurationIsSet; }
void GroupConfigurationData::unsetDuration() { m_DurationIsSet = false; }
bool GroupConfigurationData::isRequestTestNotification() const {
  return m_RequestTestNotification;
}
void GroupConfigurationData::setRequestTestNotification(bool const value) {
  m_RequestTestNotification = value;
  m_RequestTestNotificationIsSet = true;
}
bool GroupConfigurationData::requestTestNotificationIsSet() const {
  return m_RequestTestNotificationIsSet;
}
void GroupConfigurationData::unsetRequestTestNotification() {
  m_RequestTestNotificationIsSet = false;
}
WebsockNotifConfig GroupConfigurationData::getWebsockNotifConfig() const {
  return m_WebsockNotifConfig;
}
void GroupConfigurationData::setWebsockNotifConfig(
    WebsockNotifConfig const &value) {
  m_WebsockNotifConfig = value;
  m_WebsockNotifConfigIsSet = true;
}
bool GroupConfigurationData::websockNotifConfigIsSet() const {
  return m_WebsockNotifConfigIsSet;
}
void GroupConfigurationData::unsetWebsockNotifConfig() {
  m_WebsockNotifConfigIsSet = false;
}
std::string GroupConfigurationData::getSuppFeat() const { return m_SuppFeat; }
void GroupConfigurationData::setSuppFeat(std::string const &value) {
  m_SuppFeat = value;
  m_SuppFeatIsSet = true;
}
bool GroupConfigurationData::suppFeatIsSet() const { return m_SuppFeatIsSet; }
void GroupConfigurationData::unsetSuppFeat() { m_SuppFeatIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
