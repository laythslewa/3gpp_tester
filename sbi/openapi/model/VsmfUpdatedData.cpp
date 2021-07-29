/**
 * Nsmf_PDUSession
 * SMF PDU Session Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "VsmfUpdatedData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

VsmfUpdatedData::VsmfUpdatedData() {
  m_QosFlowsAddModListIsSet = false;
  m_QosFlowsRelListIsSet = false;
  m_QosFlowsFailedtoAddModListIsSet = false;
  m_QosFlowsFailedtoRelListIsSet = false;
  m_N1SmInfoFromUeIsSet = false;
  m_UnknownN1SmInfoIsSet = false;
  m_UeLocationIsSet = false;
  m_UeTimeZone = "";
  m_UeTimeZoneIsSet = false;
  m_AddUeLocationIsSet = false;
  m_AssignedEbiListIsSet = false;
  m_FailedToAssignEbiListIsSet = false;
  m_ReleasedEbiListIsSet = false;
  m_SecondaryRatUsageReportIsSet = false;
  m_SecondaryRatUsageInfoIsSet = false;
  m_N4InfoIsSet = false;
  m_N4InfoExt1IsSet = false;
  m_N4InfoExt2IsSet = false;
  m_N4InfoExt3IsSet = false;
}

VsmfUpdatedData::~VsmfUpdatedData() {}

void VsmfUpdatedData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const VsmfUpdatedData &o) {
  j = nlohmann::json();
  if (o.qosFlowsAddModListIsSet() || !o.m_QosFlowsAddModList.empty())
    j["qosFlowsAddModList"] = o.m_QosFlowsAddModList;
  if (o.qosFlowsRelListIsSet() || !o.m_QosFlowsRelList.empty())
    j["qosFlowsRelList"] = o.m_QosFlowsRelList;
  if (o.qosFlowsFailedtoAddModListIsSet() ||
      !o.m_QosFlowsFailedtoAddModList.empty())
    j["qosFlowsFailedtoAddModList"] = o.m_QosFlowsFailedtoAddModList;
  if (o.qosFlowsFailedtoRelListIsSet() || !o.m_QosFlowsFailedtoRelList.empty())
    j["qosFlowsFailedtoRelList"] = o.m_QosFlowsFailedtoRelList;
  if (o.n1SmInfoFromUeIsSet())
    j["n1SmInfoFromUe"] = o.m_N1SmInfoFromUe;
  if (o.unknownN1SmInfoIsSet())
    j["unknownN1SmInfo"] = o.m_UnknownN1SmInfo;
  if (o.ueLocationIsSet())
    j["ueLocation"] = o.m_UeLocation;
  if (o.ueTimeZoneIsSet())
    j["ueTimeZone"] = o.m_UeTimeZone;
  if (o.addUeLocationIsSet())
    j["addUeLocation"] = o.m_AddUeLocation;
  if (o.assignedEbiListIsSet() || !o.m_AssignedEbiList.empty())
    j["assignedEbiList"] = o.m_AssignedEbiList;
  if (o.failedToAssignEbiListIsSet() || !o.m_FailedToAssignEbiList.empty())
    j["failedToAssignEbiList"] = o.m_FailedToAssignEbiList;
  if (o.releasedEbiListIsSet() || !o.m_ReleasedEbiList.empty())
    j["releasedEbiList"] = o.m_ReleasedEbiList;
  if (o.secondaryRatUsageReportIsSet() || !o.m_SecondaryRatUsageReport.empty())
    j["secondaryRatUsageReport"] = o.m_SecondaryRatUsageReport;
  if (o.secondaryRatUsageInfoIsSet() || !o.m_SecondaryRatUsageInfo.empty())
    j["secondaryRatUsageInfo"] = o.m_SecondaryRatUsageInfo;
  if (o.n4InfoIsSet())
    j["n4Info"] = o.m_N4Info;
  if (o.n4InfoExt1IsSet())
    j["n4InfoExt1"] = o.m_N4InfoExt1;
  if (o.n4InfoExt2IsSet())
    j["n4InfoExt2"] = o.m_N4InfoExt2;
  if (o.n4InfoExt3IsSet())
    j["n4InfoExt3"] = o.m_N4InfoExt3;
}

void from_json(const nlohmann::json &j, VsmfUpdatedData &o) {
  if (j.find("qosFlowsAddModList") != j.end()) {
    j.at("qosFlowsAddModList").get_to(o.m_QosFlowsAddModList);
    o.m_QosFlowsAddModListIsSet = true;
  }
  if (j.find("qosFlowsRelList") != j.end()) {
    j.at("qosFlowsRelList").get_to(o.m_QosFlowsRelList);
    o.m_QosFlowsRelListIsSet = true;
  }
  if (j.find("qosFlowsFailedtoAddModList") != j.end()) {
    j.at("qosFlowsFailedtoAddModList").get_to(o.m_QosFlowsFailedtoAddModList);
    o.m_QosFlowsFailedtoAddModListIsSet = true;
  }
  if (j.find("qosFlowsFailedtoRelList") != j.end()) {
    j.at("qosFlowsFailedtoRelList").get_to(o.m_QosFlowsFailedtoRelList);
    o.m_QosFlowsFailedtoRelListIsSet = true;
  }
  if (j.find("n1SmInfoFromUe") != j.end()) {
    j.at("n1SmInfoFromUe").get_to(o.m_N1SmInfoFromUe);
    o.m_N1SmInfoFromUeIsSet = true;
  }
  if (j.find("unknownN1SmInfo") != j.end()) {
    j.at("unknownN1SmInfo").get_to(o.m_UnknownN1SmInfo);
    o.m_UnknownN1SmInfoIsSet = true;
  }
  if (j.find("ueLocation") != j.end()) {
    j.at("ueLocation").get_to(o.m_UeLocation);
    o.m_UeLocationIsSet = true;
  }
  if (j.find("ueTimeZone") != j.end()) {
    j.at("ueTimeZone").get_to(o.m_UeTimeZone);
    o.m_UeTimeZoneIsSet = true;
  }
  if (j.find("addUeLocation") != j.end()) {
    j.at("addUeLocation").get_to(o.m_AddUeLocation);
    o.m_AddUeLocationIsSet = true;
  }
  if (j.find("assignedEbiList") != j.end()) {
    j.at("assignedEbiList").get_to(o.m_AssignedEbiList);
    o.m_AssignedEbiListIsSet = true;
  }
  if (j.find("failedToAssignEbiList") != j.end()) {
    j.at("failedToAssignEbiList").get_to(o.m_FailedToAssignEbiList);
    o.m_FailedToAssignEbiListIsSet = true;
  }
  if (j.find("releasedEbiList") != j.end()) {
    j.at("releasedEbiList").get_to(o.m_ReleasedEbiList);
    o.m_ReleasedEbiListIsSet = true;
  }
  if (j.find("secondaryRatUsageReport") != j.end()) {
    j.at("secondaryRatUsageReport").get_to(o.m_SecondaryRatUsageReport);
    o.m_SecondaryRatUsageReportIsSet = true;
  }
  if (j.find("secondaryRatUsageInfo") != j.end()) {
    j.at("secondaryRatUsageInfo").get_to(o.m_SecondaryRatUsageInfo);
    o.m_SecondaryRatUsageInfoIsSet = true;
  }
  if (j.find("n4Info") != j.end()) {
    j.at("n4Info").get_to(o.m_N4Info);
    o.m_N4InfoIsSet = true;
  }
  if (j.find("n4InfoExt1") != j.end()) {
    j.at("n4InfoExt1").get_to(o.m_N4InfoExt1);
    o.m_N4InfoExt1IsSet = true;
  }
  if (j.find("n4InfoExt2") != j.end()) {
    j.at("n4InfoExt2").get_to(o.m_N4InfoExt2);
    o.m_N4InfoExt2IsSet = true;
  }
  if (j.find("n4InfoExt3") != j.end()) {
    j.at("n4InfoExt3").get_to(o.m_N4InfoExt3);
    o.m_N4InfoExt3IsSet = true;
  }
}

std::vector<QosFlowItem> &VsmfUpdatedData::getQosFlowsAddModList() {
  return m_QosFlowsAddModList;
}
void VsmfUpdatedData::setQosFlowsAddModList(
    std::vector<QosFlowItem> const &value) {
  m_QosFlowsAddModList = value;
  m_QosFlowsAddModListIsSet = true;
}
bool VsmfUpdatedData::qosFlowsAddModListIsSet() const {
  return m_QosFlowsAddModListIsSet;
}
void VsmfUpdatedData::unsetQosFlowsAddModList() {
  m_QosFlowsAddModListIsSet = false;
}
std::vector<QosFlowItem> &VsmfUpdatedData::getQosFlowsRelList() {
  return m_QosFlowsRelList;
}
void VsmfUpdatedData::setQosFlowsRelList(
    std::vector<QosFlowItem> const &value) {
  m_QosFlowsRelList = value;
  m_QosFlowsRelListIsSet = true;
}
bool VsmfUpdatedData::qosFlowsRelListIsSet() const {
  return m_QosFlowsRelListIsSet;
}
void VsmfUpdatedData::unsetQosFlowsRelList() { m_QosFlowsRelListIsSet = false; }
std::vector<QosFlowItem> &VsmfUpdatedData::getQosFlowsFailedtoAddModList() {
  return m_QosFlowsFailedtoAddModList;
}
void VsmfUpdatedData::setQosFlowsFailedtoAddModList(
    std::vector<QosFlowItem> const &value) {
  m_QosFlowsFailedtoAddModList = value;
  m_QosFlowsFailedtoAddModListIsSet = true;
}
bool VsmfUpdatedData::qosFlowsFailedtoAddModListIsSet() const {
  return m_QosFlowsFailedtoAddModListIsSet;
}
void VsmfUpdatedData::unsetQosFlowsFailedtoAddModList() {
  m_QosFlowsFailedtoAddModListIsSet = false;
}
std::vector<QosFlowItem> &VsmfUpdatedData::getQosFlowsFailedtoRelList() {
  return m_QosFlowsFailedtoRelList;
}
void VsmfUpdatedData::setQosFlowsFailedtoRelList(
    std::vector<QosFlowItem> const &value) {
  m_QosFlowsFailedtoRelList = value;
  m_QosFlowsFailedtoRelListIsSet = true;
}
bool VsmfUpdatedData::qosFlowsFailedtoRelListIsSet() const {
  return m_QosFlowsFailedtoRelListIsSet;
}
void VsmfUpdatedData::unsetQosFlowsFailedtoRelList() {
  m_QosFlowsFailedtoRelListIsSet = false;
}
RefToBinaryData VsmfUpdatedData::getN1SmInfoFromUe() const {
  return m_N1SmInfoFromUe;
}
void VsmfUpdatedData::setN1SmInfoFromUe(RefToBinaryData const &value) {
  m_N1SmInfoFromUe = value;
  m_N1SmInfoFromUeIsSet = true;
}
bool VsmfUpdatedData::n1SmInfoFromUeIsSet() const {
  return m_N1SmInfoFromUeIsSet;
}
void VsmfUpdatedData::unsetN1SmInfoFromUe() { m_N1SmInfoFromUeIsSet = false; }
RefToBinaryData VsmfUpdatedData::getUnknownN1SmInfo() const {
  return m_UnknownN1SmInfo;
}
void VsmfUpdatedData::setUnknownN1SmInfo(RefToBinaryData const &value) {
  m_UnknownN1SmInfo = value;
  m_UnknownN1SmInfoIsSet = true;
}
bool VsmfUpdatedData::unknownN1SmInfoIsSet() const {
  return m_UnknownN1SmInfoIsSet;
}
void VsmfUpdatedData::unsetUnknownN1SmInfo() { m_UnknownN1SmInfoIsSet = false; }
UserLocation VsmfUpdatedData::getUeLocation() const { return m_UeLocation; }
void VsmfUpdatedData::setUeLocation(UserLocation const &value) {
  m_UeLocation = value;
  m_UeLocationIsSet = true;
}
bool VsmfUpdatedData::ueLocationIsSet() const { return m_UeLocationIsSet; }
void VsmfUpdatedData::unsetUeLocation() { m_UeLocationIsSet = false; }
std::string VsmfUpdatedData::getUeTimeZone() const { return m_UeTimeZone; }
void VsmfUpdatedData::setUeTimeZone(std::string const &value) {
  m_UeTimeZone = value;
  m_UeTimeZoneIsSet = true;
}
bool VsmfUpdatedData::ueTimeZoneIsSet() const { return m_UeTimeZoneIsSet; }
void VsmfUpdatedData::unsetUeTimeZone() { m_UeTimeZoneIsSet = false; }
UserLocation VsmfUpdatedData::getAddUeLocation() const {
  return m_AddUeLocation;
}
void VsmfUpdatedData::setAddUeLocation(UserLocation const &value) {
  m_AddUeLocation = value;
  m_AddUeLocationIsSet = true;
}
bool VsmfUpdatedData::addUeLocationIsSet() const {
  return m_AddUeLocationIsSet;
}
void VsmfUpdatedData::unsetAddUeLocation() { m_AddUeLocationIsSet = false; }
std::vector<EbiArpMapping> &VsmfUpdatedData::getAssignedEbiList() {
  return m_AssignedEbiList;
}
void VsmfUpdatedData::setAssignedEbiList(
    std::vector<EbiArpMapping> const &value) {
  m_AssignedEbiList = value;
  m_AssignedEbiListIsSet = true;
}
bool VsmfUpdatedData::assignedEbiListIsSet() const {
  return m_AssignedEbiListIsSet;
}
void VsmfUpdatedData::unsetAssignedEbiList() { m_AssignedEbiListIsSet = false; }
std::vector<Arp> &VsmfUpdatedData::getFailedToAssignEbiList() {
  return m_FailedToAssignEbiList;
}
void VsmfUpdatedData::setFailedToAssignEbiList(std::vector<Arp> const &value) {
  m_FailedToAssignEbiList = value;
  m_FailedToAssignEbiListIsSet = true;
}
bool VsmfUpdatedData::failedToAssignEbiListIsSet() const {
  return m_FailedToAssignEbiListIsSet;
}
void VsmfUpdatedData::unsetFailedToAssignEbiList() {
  m_FailedToAssignEbiListIsSet = false;
}
std::vector<int32_t> &VsmfUpdatedData::getReleasedEbiList() {
  return m_ReleasedEbiList;
}
void VsmfUpdatedData::setReleasedEbiList(std::vector<int32_t> const value) {
  m_ReleasedEbiList = value;
  m_ReleasedEbiListIsSet = true;
}
bool VsmfUpdatedData::releasedEbiListIsSet() const {
  return m_ReleasedEbiListIsSet;
}
void VsmfUpdatedData::unsetReleasedEbiList() { m_ReleasedEbiListIsSet = false; }
std::vector<SecondaryRatUsageReport> &
VsmfUpdatedData::getSecondaryRatUsageReport() {
  return m_SecondaryRatUsageReport;
}
void VsmfUpdatedData::setSecondaryRatUsageReport(
    std::vector<SecondaryRatUsageReport> const &value) {
  m_SecondaryRatUsageReport = value;
  m_SecondaryRatUsageReportIsSet = true;
}
bool VsmfUpdatedData::secondaryRatUsageReportIsSet() const {
  return m_SecondaryRatUsageReportIsSet;
}
void VsmfUpdatedData::unsetSecondaryRatUsageReport() {
  m_SecondaryRatUsageReportIsSet = false;
}
std::vector<SecondaryRatUsageInfo> &
VsmfUpdatedData::getSecondaryRatUsageInfo() {
  return m_SecondaryRatUsageInfo;
}
void VsmfUpdatedData::setSecondaryRatUsageInfo(
    std::vector<SecondaryRatUsageInfo> const &value) {
  m_SecondaryRatUsageInfo = value;
  m_SecondaryRatUsageInfoIsSet = true;
}
bool VsmfUpdatedData::secondaryRatUsageInfoIsSet() const {
  return m_SecondaryRatUsageInfoIsSet;
}
void VsmfUpdatedData::unsetSecondaryRatUsageInfo() {
  m_SecondaryRatUsageInfoIsSet = false;
}
N4Information VsmfUpdatedData::getN4Info() const { return m_N4Info; }
void VsmfUpdatedData::setN4Info(N4Information const &value) {
  m_N4Info = value;
  m_N4InfoIsSet = true;
}
bool VsmfUpdatedData::n4InfoIsSet() const { return m_N4InfoIsSet; }
void VsmfUpdatedData::unsetN4Info() { m_N4InfoIsSet = false; }
N4Information VsmfUpdatedData::getN4InfoExt1() const { return m_N4InfoExt1; }
void VsmfUpdatedData::setN4InfoExt1(N4Information const &value) {
  m_N4InfoExt1 = value;
  m_N4InfoExt1IsSet = true;
}
bool VsmfUpdatedData::n4InfoExt1IsSet() const { return m_N4InfoExt1IsSet; }
void VsmfUpdatedData::unsetN4InfoExt1() { m_N4InfoExt1IsSet = false; }
N4Information VsmfUpdatedData::getN4InfoExt2() const { return m_N4InfoExt2; }
void VsmfUpdatedData::setN4InfoExt2(N4Information const &value) {
  m_N4InfoExt2 = value;
  m_N4InfoExt2IsSet = true;
}
bool VsmfUpdatedData::n4InfoExt2IsSet() const { return m_N4InfoExt2IsSet; }
void VsmfUpdatedData::unsetN4InfoExt2() { m_N4InfoExt2IsSet = false; }
N4Information VsmfUpdatedData::getN4InfoExt3() const { return m_N4InfoExt3; }
void VsmfUpdatedData::setN4InfoExt3(N4Information const &value) {
  m_N4InfoExt3 = value;
  m_N4InfoExt3IsSet = true;
}
bool VsmfUpdatedData::n4InfoExt3IsSet() const { return m_N4InfoExt3IsSet; }
void VsmfUpdatedData::unsetN4InfoExt3() { m_N4InfoExt3IsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
