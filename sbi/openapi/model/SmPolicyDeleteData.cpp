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

#include "SmPolicyDeleteData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

SmPolicyDeleteData::SmPolicyDeleteData() {
  m_UserLocationInfoIsSet = false;
  m_UeTimeZone = "";
  m_UeTimeZoneIsSet = false;
  m_ServingNetworkIsSet = false;
  m_UserLocationInfoTime = "";
  m_UserLocationInfoTimeIsSet = false;
  m_RanNasRelCausesIsSet = false;
  m_AccuUsageReportsIsSet = false;
  m_PduSessRelCauseIsSet = false;
  m_QosMonReportsIsSet = false;
}

SmPolicyDeleteData::~SmPolicyDeleteData() {}

void SmPolicyDeleteData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const SmPolicyDeleteData &o) {
  j = nlohmann::json();
  if (o.userLocationInfoIsSet())
    j["userLocationInfo"] = o.m_UserLocationInfo;
  if (o.ueTimeZoneIsSet())
    j["ueTimeZone"] = o.m_UeTimeZone;
  if (o.servingNetworkIsSet())
    j["servingNetwork"] = o.m_ServingNetwork;
  if (o.userLocationInfoTimeIsSet())
    j["userLocationInfoTime"] = o.m_UserLocationInfoTime;
  if (o.ranNasRelCausesIsSet() || !o.m_RanNasRelCauses.empty())
    j["ranNasRelCauses"] = o.m_RanNasRelCauses;
  if (o.accuUsageReportsIsSet() || !o.m_AccuUsageReports.empty())
    j["accuUsageReports"] = o.m_AccuUsageReports;
  if (o.pduSessRelCauseIsSet())
    j["pduSessRelCause"] = o.m_PduSessRelCause;
  if (o.qosMonReportsIsSet() || !o.m_QosMonReports.empty())
    j["qosMonReports"] = o.m_QosMonReports;
}

void from_json(const nlohmann::json &j, SmPolicyDeleteData &o) {
  if (j.find("userLocationInfo") != j.end()) {
    j.at("userLocationInfo").get_to(o.m_UserLocationInfo);
    o.m_UserLocationInfoIsSet = true;
  }
  if (j.find("ueTimeZone") != j.end()) {
    j.at("ueTimeZone").get_to(o.m_UeTimeZone);
    o.m_UeTimeZoneIsSet = true;
  }
  if (j.find("servingNetwork") != j.end()) {
    j.at("servingNetwork").get_to(o.m_ServingNetwork);
    o.m_ServingNetworkIsSet = true;
  }
  if (j.find("userLocationInfoTime") != j.end()) {
    j.at("userLocationInfoTime").get_to(o.m_UserLocationInfoTime);
    o.m_UserLocationInfoTimeIsSet = true;
  }
  if (j.find("ranNasRelCauses") != j.end()) {
    j.at("ranNasRelCauses").get_to(o.m_RanNasRelCauses);
    o.m_RanNasRelCausesIsSet = true;
  }
  if (j.find("accuUsageReports") != j.end()) {
    j.at("accuUsageReports").get_to(o.m_AccuUsageReports);
    o.m_AccuUsageReportsIsSet = true;
  }
  if (j.find("pduSessRelCause") != j.end()) {
    j.at("pduSessRelCause").get_to(o.m_PduSessRelCause);
    o.m_PduSessRelCauseIsSet = true;
  }
  if (j.find("qosMonReports") != j.end()) {
    j.at("qosMonReports").get_to(o.m_QosMonReports);
    o.m_QosMonReportsIsSet = true;
  }
}

UserLocation SmPolicyDeleteData::getUserLocationInfo() const {
  return m_UserLocationInfo;
}
void SmPolicyDeleteData::setUserLocationInfo(UserLocation const &value) {
  m_UserLocationInfo = value;
  m_UserLocationInfoIsSet = true;
}
bool SmPolicyDeleteData::userLocationInfoIsSet() const {
  return m_UserLocationInfoIsSet;
}
void SmPolicyDeleteData::unsetUserLocationInfo() {
  m_UserLocationInfoIsSet = false;
}
std::string SmPolicyDeleteData::getUeTimeZone() const { return m_UeTimeZone; }
void SmPolicyDeleteData::setUeTimeZone(std::string const &value) {
  m_UeTimeZone = value;
  m_UeTimeZoneIsSet = true;
}
bool SmPolicyDeleteData::ueTimeZoneIsSet() const { return m_UeTimeZoneIsSet; }
void SmPolicyDeleteData::unsetUeTimeZone() { m_UeTimeZoneIsSet = false; }
PlmnIdNid SmPolicyDeleteData::getServingNetwork() const {
  return m_ServingNetwork;
}
void SmPolicyDeleteData::setServingNetwork(PlmnIdNid const &value) {
  m_ServingNetwork = value;
  m_ServingNetworkIsSet = true;
}
bool SmPolicyDeleteData::servingNetworkIsSet() const {
  return m_ServingNetworkIsSet;
}
void SmPolicyDeleteData::unsetServingNetwork() {
  m_ServingNetworkIsSet = false;
}
std::string SmPolicyDeleteData::getUserLocationInfoTime() const {
  return m_UserLocationInfoTime;
}
void SmPolicyDeleteData::setUserLocationInfoTime(std::string const &value) {
  m_UserLocationInfoTime = value;
  m_UserLocationInfoTimeIsSet = true;
}
bool SmPolicyDeleteData::userLocationInfoTimeIsSet() const {
  return m_UserLocationInfoTimeIsSet;
}
void SmPolicyDeleteData::unsetUserLocationInfoTime() {
  m_UserLocationInfoTimeIsSet = false;
}
std::vector<RanNasRelCause> &SmPolicyDeleteData::getRanNasRelCauses() {
  return m_RanNasRelCauses;
}
void SmPolicyDeleteData::setRanNasRelCauses(
    std::vector<RanNasRelCause> const &value) {
  m_RanNasRelCauses = value;
  m_RanNasRelCausesIsSet = true;
}
bool SmPolicyDeleteData::ranNasRelCausesIsSet() const {
  return m_RanNasRelCausesIsSet;
}
void SmPolicyDeleteData::unsetRanNasRelCauses() {
  m_RanNasRelCausesIsSet = false;
}
std::vector<AccuUsageReport> &SmPolicyDeleteData::getAccuUsageReports() {
  return m_AccuUsageReports;
}
void SmPolicyDeleteData::setAccuUsageReports(
    std::vector<AccuUsageReport> const &value) {
  m_AccuUsageReports = value;
  m_AccuUsageReportsIsSet = true;
}
bool SmPolicyDeleteData::accuUsageReportsIsSet() const {
  return m_AccuUsageReportsIsSet;
}
void SmPolicyDeleteData::unsetAccuUsageReports() {
  m_AccuUsageReportsIsSet = false;
}
PduSessionRelCause SmPolicyDeleteData::getPduSessRelCause() const {
  return m_PduSessRelCause;
}
void SmPolicyDeleteData::setPduSessRelCause(PduSessionRelCause const &value) {
  m_PduSessRelCause = value;
  m_PduSessRelCauseIsSet = true;
}
bool SmPolicyDeleteData::pduSessRelCauseIsSet() const {
  return m_PduSessRelCauseIsSet;
}
void SmPolicyDeleteData::unsetPduSessRelCause() {
  m_PduSessRelCauseIsSet = false;
}
std::vector<QosMonitoringReport> &SmPolicyDeleteData::getQosMonReports() {
  return m_QosMonReports;
}
void SmPolicyDeleteData::setQosMonReports(
    std::vector<QosMonitoringReport> const &value) {
  m_QosMonReports = value;
  m_QosMonReportsIsSet = true;
}
bool SmPolicyDeleteData::qosMonReportsIsSet() const {
  return m_QosMonReportsIsSet;
}
void SmPolicyDeleteData::unsetQosMonReports() { m_QosMonReportsIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org