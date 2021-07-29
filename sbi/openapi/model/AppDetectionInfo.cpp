/**
 * Npcf_SMPolicyControl API
 * Session Management Policy Control Service © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "AppDetectionInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

AppDetectionInfo::AppDetectionInfo() {
  m_AppId = "";
  m_InstanceId = "";
  m_InstanceIdIsSet = false;
  m_SdfDescriptionsIsSet = false;
}

AppDetectionInfo::~AppDetectionInfo() {}

void AppDetectionInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const AppDetectionInfo &o) {
  j = nlohmann::json();
  j["appId"] = o.m_AppId;
  if (o.instanceIdIsSet())
    j["instanceId"] = o.m_InstanceId;
  if (o.sdfDescriptionsIsSet() || !o.m_SdfDescriptions.empty())
    j["sdfDescriptions"] = o.m_SdfDescriptions;
}

void from_json(const nlohmann::json &j, AppDetectionInfo &o) {
  j.at("appId").get_to(o.m_AppId);
  if (j.find("instanceId") != j.end()) {
    j.at("instanceId").get_to(o.m_InstanceId);
    o.m_InstanceIdIsSet = true;
  }
  if (j.find("sdfDescriptions") != j.end()) {
    j.at("sdfDescriptions").get_to(o.m_SdfDescriptions);
    o.m_SdfDescriptionsIsSet = true;
  }
}

std::string AppDetectionInfo::getAppId() const { return m_AppId; }
void AppDetectionInfo::setAppId(std::string const &value) { m_AppId = value; }
std::string AppDetectionInfo::getInstanceId() const { return m_InstanceId; }
void AppDetectionInfo::setInstanceId(std::string const &value) {
  m_InstanceId = value;
  m_InstanceIdIsSet = true;
}
bool AppDetectionInfo::instanceIdIsSet() const { return m_InstanceIdIsSet; }
void AppDetectionInfo::unsetInstanceId() { m_InstanceIdIsSet = false; }
std::vector<FlowInformation> &AppDetectionInfo::getSdfDescriptions() {
  return m_SdfDescriptions;
}
void AppDetectionInfo::setSdfDescriptions(
    std::vector<FlowInformation> const &value) {
  m_SdfDescriptions = value;
  m_SdfDescriptionsIsSet = true;
}
bool AppDetectionInfo::sdfDescriptionsIsSet() const {
  return m_SdfDescriptionsIsSet;
}
void AppDetectionInfo::unsetSdfDescriptions() {
  m_SdfDescriptionsIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
