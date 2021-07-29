/**
 * 3gpp-network-parameter-configuration
 * API for network parameter configuration. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "NpConfigurationPatch.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

NpConfigurationPatch::NpConfigurationPatch() {
  m_MaximumLatency = 0;
  m_MaximumLatencyIsSet = false;
  m_MaximumResponseTime = 0;
  m_MaximumResponseTimeIsSet = false;
  m_SuggestedNumberOfDlPackets = 0;
  m_SuggestedNumberOfDlPacketsIsSet = false;
  m_GroupReportGuardTime = 0;
  m_GroupReportGuardTimeIsSet = false;
  m_ValidityTime = "";
  m_ValidityTimeIsSet = false;
  m_NotificationDestination = "";
  m_NotificationDestinationIsSet = false;
}

NpConfigurationPatch::~NpConfigurationPatch() {}

void NpConfigurationPatch::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const NpConfigurationPatch &o) {
  j = nlohmann::json();
  if (o.maximumLatencyIsSet())
    j["maximumLatency"] = o.m_MaximumLatency;
  if (o.maximumResponseTimeIsSet())
    j["maximumResponseTime"] = o.m_MaximumResponseTime;
  if (o.suggestedNumberOfDlPacketsIsSet())
    j["suggestedNumberOfDlPackets"] = o.m_SuggestedNumberOfDlPackets;
  if (o.groupReportGuardTimeIsSet())
    j["groupReportGuardTime"] = o.m_GroupReportGuardTime;
  if (o.validityTimeIsSet())
    j["validityTime"] = o.m_ValidityTime;
  if (o.notificationDestinationIsSet())
    j["notificationDestination"] = o.m_NotificationDestination;
}

void from_json(const nlohmann::json &j, NpConfigurationPatch &o) {
  if (j.find("maximumLatency") != j.end()) {
    j.at("maximumLatency").get_to(o.m_MaximumLatency);
    o.m_MaximumLatencyIsSet = true;
  }
  if (j.find("maximumResponseTime") != j.end()) {
    j.at("maximumResponseTime").get_to(o.m_MaximumResponseTime);
    o.m_MaximumResponseTimeIsSet = true;
  }
  if (j.find("suggestedNumberOfDlPackets") != j.end()) {
    j.at("suggestedNumberOfDlPackets").get_to(o.m_SuggestedNumberOfDlPackets);
    o.m_SuggestedNumberOfDlPacketsIsSet = true;
  }
  if (j.find("groupReportGuardTime") != j.end()) {
    j.at("groupReportGuardTime").get_to(o.m_GroupReportGuardTime);
    o.m_GroupReportGuardTimeIsSet = true;
  }
  if (j.find("validityTime") != j.end()) {
    j.at("validityTime").get_to(o.m_ValidityTime);
    o.m_ValidityTimeIsSet = true;
  }
  if (j.find("notificationDestination") != j.end()) {
    j.at("notificationDestination").get_to(o.m_NotificationDestination);
    o.m_NotificationDestinationIsSet = true;
  }
}

int32_t NpConfigurationPatch::getMaximumLatency() const {
  return m_MaximumLatency;
}
void NpConfigurationPatch::setMaximumLatency(int32_t const value) {
  m_MaximumLatency = value;
  m_MaximumLatencyIsSet = true;
}
bool NpConfigurationPatch::maximumLatencyIsSet() const {
  return m_MaximumLatencyIsSet;
}
void NpConfigurationPatch::unsetMaximumLatency() {
  m_MaximumLatencyIsSet = false;
}
int32_t NpConfigurationPatch::getMaximumResponseTime() const {
  return m_MaximumResponseTime;
}
void NpConfigurationPatch::setMaximumResponseTime(int32_t const value) {
  m_MaximumResponseTime = value;
  m_MaximumResponseTimeIsSet = true;
}
bool NpConfigurationPatch::maximumResponseTimeIsSet() const {
  return m_MaximumResponseTimeIsSet;
}
void NpConfigurationPatch::unsetMaximumResponseTime() {
  m_MaximumResponseTimeIsSet = false;
}
int32_t NpConfigurationPatch::getSuggestedNumberOfDlPackets() const {
  return m_SuggestedNumberOfDlPackets;
}
void NpConfigurationPatch::setSuggestedNumberOfDlPackets(int32_t const value) {
  m_SuggestedNumberOfDlPackets = value;
  m_SuggestedNumberOfDlPacketsIsSet = true;
}
bool NpConfigurationPatch::suggestedNumberOfDlPacketsIsSet() const {
  return m_SuggestedNumberOfDlPacketsIsSet;
}
void NpConfigurationPatch::unsetSuggestedNumberOfDlPackets() {
  m_SuggestedNumberOfDlPacketsIsSet = false;
}
int32_t NpConfigurationPatch::getGroupReportGuardTime() const {
  return m_GroupReportGuardTime;
}
void NpConfigurationPatch::setGroupReportGuardTime(int32_t const value) {
  m_GroupReportGuardTime = value;
  m_GroupReportGuardTimeIsSet = true;
}
bool NpConfigurationPatch::groupReportGuardTimeIsSet() const {
  return m_GroupReportGuardTimeIsSet;
}
void NpConfigurationPatch::unsetGroupReportGuardTime() {
  m_GroupReportGuardTimeIsSet = false;
}
std::string NpConfigurationPatch::getValidityTime() const {
  return m_ValidityTime;
}
void NpConfigurationPatch::setValidityTime(std::string const &value) {
  m_ValidityTime = value;
  m_ValidityTimeIsSet = true;
}
bool NpConfigurationPatch::validityTimeIsSet() const {
  return m_ValidityTimeIsSet;
}
void NpConfigurationPatch::unsetValidityTime() { m_ValidityTimeIsSet = false; }
std::string NpConfigurationPatch::getNotificationDestination() const {
  return m_NotificationDestination;
}
void NpConfigurationPatch::setNotificationDestination(
    std::string const &value) {
  m_NotificationDestination = value;
  m_NotificationDestinationIsSet = true;
}
bool NpConfigurationPatch::notificationDestinationIsSet() const {
  return m_NotificationDestinationIsSet;
}
void NpConfigurationPatch::unsetNotificationDestination() {
  m_NotificationDestinationIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org