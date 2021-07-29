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

#include "VsmfUpdateData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

VsmfUpdateData::VsmfUpdateData() {
  m_SessionAmbrIsSet = false;
  m_QosFlowsAddModRequestListIsSet = false;
  m_QosFlowsRelRequestListIsSet = false;
  m_EpsBearerInfoIsSet = false;
  m_AssignEbiListIsSet = false;
  m_RevokeEbiListIsSet = false;
  m_ModifiedEbiListIsSet = false;
  m_Pti = 0;
  m_PtiIsSet = false;
  m_N1SmInfoToUeIsSet = false;
  m_AlwaysOnGranted = false;
  m_AlwaysOnGrantedIsSet = false;
  m_HsmfPduSessionUri = "";
  m_HsmfPduSessionUriIsSet = false;
  m_SupportedFeatures = "";
  m_SupportedFeaturesIsSet = false;
  m_CauseIsSet = false;
  m_N1smCause = "";
  m_N1smCauseIsSet = false;
  m_BackOffTimer = 0;
  m_BackOffTimerIsSet = false;
  m_MaReleaseIndIsSet = false;
  m_MaAcceptedInd = false;
  m_MaAcceptedIndIsSet = false;
  m_AdditionalCnTunnelInfoIsSet = false;
  m_DnaiListIsSet = false;
  m_N4InfoIsSet = false;
  m_N4InfoExt1IsSet = false;
  m_N4InfoExt2IsSet = false;
  m_N4InfoExt3IsSet = false;
  m_SmallDataRateControlEnabled = false;
  m_SmallDataRateControlEnabledIsSet = false;
  m_QosMonitoringInfoIsSet = false;
  m_EpsPdnCnxInfoIsSet = false;
}

VsmfUpdateData::~VsmfUpdateData() {}

void VsmfUpdateData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const VsmfUpdateData &o) {
  j = nlohmann::json();
  j["requestIndication"] = o.m_RequestIndication;
  if (o.sessionAmbrIsSet())
    j["sessionAmbr"] = o.m_SessionAmbr;
  if (o.qosFlowsAddModRequestListIsSet() ||
      !o.m_QosFlowsAddModRequestList.empty())
    j["qosFlowsAddModRequestList"] = o.m_QosFlowsAddModRequestList;
  if (o.qosFlowsRelRequestListIsSet() || !o.m_QosFlowsRelRequestList.empty())
    j["qosFlowsRelRequestList"] = o.m_QosFlowsRelRequestList;
  if (o.epsBearerInfoIsSet() || !o.m_EpsBearerInfo.empty())
    j["epsBearerInfo"] = o.m_EpsBearerInfo;
  if (o.assignEbiListIsSet() || !o.m_AssignEbiList.empty())
    j["assignEbiList"] = o.m_AssignEbiList;
  if (o.revokeEbiListIsSet() || !o.m_RevokeEbiList.empty())
    j["revokeEbiList"] = o.m_RevokeEbiList;
  if (o.modifiedEbiListIsSet() || !o.m_ModifiedEbiList.empty())
    j["modifiedEbiList"] = o.m_ModifiedEbiList;
  if (o.ptiIsSet())
    j["pti"] = o.m_Pti;
  if (o.n1SmInfoToUeIsSet())
    j["n1SmInfoToUe"] = o.m_N1SmInfoToUe;
  if (o.alwaysOnGrantedIsSet())
    j["alwaysOnGranted"] = o.m_AlwaysOnGranted;
  if (o.hsmfPduSessionUriIsSet())
    j["hsmfPduSessionUri"] = o.m_HsmfPduSessionUri;
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
  if (o.causeIsSet())
    j["cause"] = o.m_Cause;
  if (o.n1smCauseIsSet())
    j["n1smCause"] = o.m_N1smCause;
  if (o.backOffTimerIsSet())
    j["backOffTimer"] = o.m_BackOffTimer;
  if (o.maReleaseIndIsSet())
    j["maReleaseInd"] = o.m_MaReleaseInd;
  if (o.maAcceptedIndIsSet())
    j["maAcceptedInd"] = o.m_MaAcceptedInd;
  if (o.additionalCnTunnelInfoIsSet())
    j["additionalCnTunnelInfo"] = o.m_AdditionalCnTunnelInfo;
  if (o.dnaiListIsSet() || !o.m_DnaiList.empty())
    j["dnaiList"] = o.m_DnaiList;
  if (o.n4InfoIsSet())
    j["n4Info"] = o.m_N4Info;
  if (o.n4InfoExt1IsSet())
    j["n4InfoExt1"] = o.m_N4InfoExt1;
  if (o.n4InfoExt2IsSet())
    j["n4InfoExt2"] = o.m_N4InfoExt2;
  if (o.n4InfoExt3IsSet())
    j["n4InfoExt3"] = o.m_N4InfoExt3;
  if (o.smallDataRateControlEnabledIsSet())
    j["smallDataRateControlEnabled"] = o.m_SmallDataRateControlEnabled;
  if (o.qosMonitoringInfoIsSet())
    j["qosMonitoringInfo"] = o.m_QosMonitoringInfo;
  if (o.epsPdnCnxInfoIsSet())
    j["epsPdnCnxInfo"] = o.m_EpsPdnCnxInfo;
}

void from_json(const nlohmann::json &j, VsmfUpdateData &o) {
  j.at("requestIndication").get_to(o.m_RequestIndication);
  if (j.find("sessionAmbr") != j.end()) {
    j.at("sessionAmbr").get_to(o.m_SessionAmbr);
    o.m_SessionAmbrIsSet = true;
  }
  if (j.find("qosFlowsAddModRequestList") != j.end()) {
    j.at("qosFlowsAddModRequestList").get_to(o.m_QosFlowsAddModRequestList);
    o.m_QosFlowsAddModRequestListIsSet = true;
  }
  if (j.find("qosFlowsRelRequestList") != j.end()) {
    j.at("qosFlowsRelRequestList").get_to(o.m_QosFlowsRelRequestList);
    o.m_QosFlowsRelRequestListIsSet = true;
  }
  if (j.find("epsBearerInfo") != j.end()) {
    j.at("epsBearerInfo").get_to(o.m_EpsBearerInfo);
    o.m_EpsBearerInfoIsSet = true;
  }
  if (j.find("assignEbiList") != j.end()) {
    j.at("assignEbiList").get_to(o.m_AssignEbiList);
    o.m_AssignEbiListIsSet = true;
  }
  if (j.find("revokeEbiList") != j.end()) {
    j.at("revokeEbiList").get_to(o.m_RevokeEbiList);
    o.m_RevokeEbiListIsSet = true;
  }
  if (j.find("modifiedEbiList") != j.end()) {
    j.at("modifiedEbiList").get_to(o.m_ModifiedEbiList);
    o.m_ModifiedEbiListIsSet = true;
  }
  if (j.find("pti") != j.end()) {
    j.at("pti").get_to(o.m_Pti);
    o.m_PtiIsSet = true;
  }
  if (j.find("n1SmInfoToUe") != j.end()) {
    j.at("n1SmInfoToUe").get_to(o.m_N1SmInfoToUe);
    o.m_N1SmInfoToUeIsSet = true;
  }
  if (j.find("alwaysOnGranted") != j.end()) {
    j.at("alwaysOnGranted").get_to(o.m_AlwaysOnGranted);
    o.m_AlwaysOnGrantedIsSet = true;
  }
  if (j.find("hsmfPduSessionUri") != j.end()) {
    j.at("hsmfPduSessionUri").get_to(o.m_HsmfPduSessionUri);
    o.m_HsmfPduSessionUriIsSet = true;
  }
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
  if (j.find("cause") != j.end()) {
    j.at("cause").get_to(o.m_Cause);
    o.m_CauseIsSet = true;
  }
  if (j.find("n1smCause") != j.end()) {
    j.at("n1smCause").get_to(o.m_N1smCause);
    o.m_N1smCauseIsSet = true;
  }
  if (j.find("backOffTimer") != j.end()) {
    j.at("backOffTimer").get_to(o.m_BackOffTimer);
    o.m_BackOffTimerIsSet = true;
  }
  if (j.find("maReleaseInd") != j.end()) {
    j.at("maReleaseInd").get_to(o.m_MaReleaseInd);
    o.m_MaReleaseIndIsSet = true;
  }
  if (j.find("maAcceptedInd") != j.end()) {
    j.at("maAcceptedInd").get_to(o.m_MaAcceptedInd);
    o.m_MaAcceptedIndIsSet = true;
  }
  if (j.find("additionalCnTunnelInfo") != j.end()) {
    j.at("additionalCnTunnelInfo").get_to(o.m_AdditionalCnTunnelInfo);
    o.m_AdditionalCnTunnelInfoIsSet = true;
  }
  if (j.find("dnaiList") != j.end()) {
    j.at("dnaiList").get_to(o.m_DnaiList);
    o.m_DnaiListIsSet = true;
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
  if (j.find("smallDataRateControlEnabled") != j.end()) {
    j.at("smallDataRateControlEnabled").get_to(o.m_SmallDataRateControlEnabled);
    o.m_SmallDataRateControlEnabledIsSet = true;
  }
  if (j.find("qosMonitoringInfo") != j.end()) {
    j.at("qosMonitoringInfo").get_to(o.m_QosMonitoringInfo);
    o.m_QosMonitoringInfoIsSet = true;
  }
  if (j.find("epsPdnCnxInfo") != j.end()) {
    j.at("epsPdnCnxInfo").get_to(o.m_EpsPdnCnxInfo);
    o.m_EpsPdnCnxInfoIsSet = true;
  }
}

RequestIndication VsmfUpdateData::getRequestIndication() const {
  return m_RequestIndication;
}
void VsmfUpdateData::setRequestIndication(RequestIndication const &value) {
  m_RequestIndication = value;
}
Ambr VsmfUpdateData::getSessionAmbr() const { return m_SessionAmbr; }
void VsmfUpdateData::setSessionAmbr(Ambr const &value) {
  m_SessionAmbr = value;
  m_SessionAmbrIsSet = true;
}
bool VsmfUpdateData::sessionAmbrIsSet() const { return m_SessionAmbrIsSet; }
void VsmfUpdateData::unsetSessionAmbr() { m_SessionAmbrIsSet = false; }
std::vector<QosFlowAddModifyRequestItem> &
VsmfUpdateData::getQosFlowsAddModRequestList() {
  return m_QosFlowsAddModRequestList;
}
void VsmfUpdateData::setQosFlowsAddModRequestList(
    std::vector<QosFlowAddModifyRequestItem> const &value) {
  m_QosFlowsAddModRequestList = value;
  m_QosFlowsAddModRequestListIsSet = true;
}
bool VsmfUpdateData::qosFlowsAddModRequestListIsSet() const {
  return m_QosFlowsAddModRequestListIsSet;
}
void VsmfUpdateData::unsetQosFlowsAddModRequestList() {
  m_QosFlowsAddModRequestListIsSet = false;
}
std::vector<QosFlowReleaseRequestItem> &
VsmfUpdateData::getQosFlowsRelRequestList() {
  return m_QosFlowsRelRequestList;
}
void VsmfUpdateData::setQosFlowsRelRequestList(
    std::vector<QosFlowReleaseRequestItem> const &value) {
  m_QosFlowsRelRequestList = value;
  m_QosFlowsRelRequestListIsSet = true;
}
bool VsmfUpdateData::qosFlowsRelRequestListIsSet() const {
  return m_QosFlowsRelRequestListIsSet;
}
void VsmfUpdateData::unsetQosFlowsRelRequestList() {
  m_QosFlowsRelRequestListIsSet = false;
}
std::vector<EpsBearerInfo> &VsmfUpdateData::getEpsBearerInfo() {
  return m_EpsBearerInfo;
}
void VsmfUpdateData::setEpsBearerInfo(std::vector<EpsBearerInfo> const &value) {
  m_EpsBearerInfo = value;
  m_EpsBearerInfoIsSet = true;
}
bool VsmfUpdateData::epsBearerInfoIsSet() const { return m_EpsBearerInfoIsSet; }
void VsmfUpdateData::unsetEpsBearerInfo() { m_EpsBearerInfoIsSet = false; }
std::vector<Arp> &VsmfUpdateData::getAssignEbiList() { return m_AssignEbiList; }
void VsmfUpdateData::setAssignEbiList(std::vector<Arp> const &value) {
  m_AssignEbiList = value;
  m_AssignEbiListIsSet = true;
}
bool VsmfUpdateData::assignEbiListIsSet() const { return m_AssignEbiListIsSet; }
void VsmfUpdateData::unsetAssignEbiList() { m_AssignEbiListIsSet = false; }
std::vector<int32_t> &VsmfUpdateData::getRevokeEbiList() {
  return m_RevokeEbiList;
}
void VsmfUpdateData::setRevokeEbiList(std::vector<int32_t> const value) {
  m_RevokeEbiList = value;
  m_RevokeEbiListIsSet = true;
}
bool VsmfUpdateData::revokeEbiListIsSet() const { return m_RevokeEbiListIsSet; }
void VsmfUpdateData::unsetRevokeEbiList() { m_RevokeEbiListIsSet = false; }
std::vector<EbiArpMapping> &VsmfUpdateData::getModifiedEbiList() {
  return m_ModifiedEbiList;
}
void VsmfUpdateData::setModifiedEbiList(
    std::vector<EbiArpMapping> const &value) {
  m_ModifiedEbiList = value;
  m_ModifiedEbiListIsSet = true;
}
bool VsmfUpdateData::modifiedEbiListIsSet() const {
  return m_ModifiedEbiListIsSet;
}
void VsmfUpdateData::unsetModifiedEbiList() { m_ModifiedEbiListIsSet = false; }
int32_t VsmfUpdateData::getPti() const { return m_Pti; }
void VsmfUpdateData::setPti(int32_t const value) {
  m_Pti = value;
  m_PtiIsSet = true;
}
bool VsmfUpdateData::ptiIsSet() const { return m_PtiIsSet; }
void VsmfUpdateData::unsetPti() { m_PtiIsSet = false; }
RefToBinaryData VsmfUpdateData::getN1SmInfoToUe() const {
  return m_N1SmInfoToUe;
}
void VsmfUpdateData::setN1SmInfoToUe(RefToBinaryData const &value) {
  m_N1SmInfoToUe = value;
  m_N1SmInfoToUeIsSet = true;
}
bool VsmfUpdateData::n1SmInfoToUeIsSet() const { return m_N1SmInfoToUeIsSet; }
void VsmfUpdateData::unsetN1SmInfoToUe() { m_N1SmInfoToUeIsSet = false; }
bool VsmfUpdateData::isAlwaysOnGranted() const { return m_AlwaysOnGranted; }
void VsmfUpdateData::setAlwaysOnGranted(bool const value) {
  m_AlwaysOnGranted = value;
  m_AlwaysOnGrantedIsSet = true;
}
bool VsmfUpdateData::alwaysOnGrantedIsSet() const {
  return m_AlwaysOnGrantedIsSet;
}
void VsmfUpdateData::unsetAlwaysOnGranted() { m_AlwaysOnGrantedIsSet = false; }
std::string VsmfUpdateData::getHsmfPduSessionUri() const {
  return m_HsmfPduSessionUri;
}
void VsmfUpdateData::setHsmfPduSessionUri(std::string const &value) {
  m_HsmfPduSessionUri = value;
  m_HsmfPduSessionUriIsSet = true;
}
bool VsmfUpdateData::hsmfPduSessionUriIsSet() const {
  return m_HsmfPduSessionUriIsSet;
}
void VsmfUpdateData::unsetHsmfPduSessionUri() {
  m_HsmfPduSessionUriIsSet = false;
}
std::string VsmfUpdateData::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void VsmfUpdateData::setSupportedFeatures(std::string const &value) {
  m_SupportedFeatures = value;
  m_SupportedFeaturesIsSet = true;
}
bool VsmfUpdateData::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void VsmfUpdateData::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}
Cause VsmfUpdateData::getCause() const { return m_Cause; }
void VsmfUpdateData::setCause(Cause const &value) {
  m_Cause = value;
  m_CauseIsSet = true;
}
bool VsmfUpdateData::causeIsSet() const { return m_CauseIsSet; }
void VsmfUpdateData::unsetCause() { m_CauseIsSet = false; }
std::string VsmfUpdateData::getN1smCause() const { return m_N1smCause; }
void VsmfUpdateData::setN1smCause(std::string const &value) {
  m_N1smCause = value;
  m_N1smCauseIsSet = true;
}
bool VsmfUpdateData::n1smCauseIsSet() const { return m_N1smCauseIsSet; }
void VsmfUpdateData::unsetN1smCause() { m_N1smCauseIsSet = false; }
int32_t VsmfUpdateData::getBackOffTimer() const { return m_BackOffTimer; }
void VsmfUpdateData::setBackOffTimer(int32_t const value) {
  m_BackOffTimer = value;
  m_BackOffTimerIsSet = true;
}
bool VsmfUpdateData::backOffTimerIsSet() const { return m_BackOffTimerIsSet; }
void VsmfUpdateData::unsetBackOffTimer() { m_BackOffTimerIsSet = false; }
MaReleaseIndication VsmfUpdateData::getMaReleaseInd() const {
  return m_MaReleaseInd;
}
void VsmfUpdateData::setMaReleaseInd(MaReleaseIndication const &value) {
  m_MaReleaseInd = value;
  m_MaReleaseIndIsSet = true;
}
bool VsmfUpdateData::maReleaseIndIsSet() const { return m_MaReleaseIndIsSet; }
void VsmfUpdateData::unsetMaReleaseInd() { m_MaReleaseIndIsSet = false; }
bool VsmfUpdateData::isMaAcceptedInd() const { return m_MaAcceptedInd; }
void VsmfUpdateData::setMaAcceptedInd(bool const value) {
  m_MaAcceptedInd = value;
  m_MaAcceptedIndIsSet = true;
}
bool VsmfUpdateData::maAcceptedIndIsSet() const { return m_MaAcceptedIndIsSet; }
void VsmfUpdateData::unsetMaAcceptedInd() { m_MaAcceptedIndIsSet = false; }
TunnelInfo VsmfUpdateData::getAdditionalCnTunnelInfo() const {
  return m_AdditionalCnTunnelInfo;
}
void VsmfUpdateData::setAdditionalCnTunnelInfo(TunnelInfo const &value) {
  m_AdditionalCnTunnelInfo = value;
  m_AdditionalCnTunnelInfoIsSet = true;
}
bool VsmfUpdateData::additionalCnTunnelInfoIsSet() const {
  return m_AdditionalCnTunnelInfoIsSet;
}
void VsmfUpdateData::unsetAdditionalCnTunnelInfo() {
  m_AdditionalCnTunnelInfoIsSet = false;
}
std::vector<std::string> &VsmfUpdateData::getDnaiList() { return m_DnaiList; }
void VsmfUpdateData::setDnaiList(std::vector<std::string> const &value) {
  m_DnaiList = value;
  m_DnaiListIsSet = true;
}
bool VsmfUpdateData::dnaiListIsSet() const { return m_DnaiListIsSet; }
void VsmfUpdateData::unsetDnaiList() { m_DnaiListIsSet = false; }
N4Information VsmfUpdateData::getN4Info() const { return m_N4Info; }
void VsmfUpdateData::setN4Info(N4Information const &value) {
  m_N4Info = value;
  m_N4InfoIsSet = true;
}
bool VsmfUpdateData::n4InfoIsSet() const { return m_N4InfoIsSet; }
void VsmfUpdateData::unsetN4Info() { m_N4InfoIsSet = false; }
N4Information VsmfUpdateData::getN4InfoExt1() const { return m_N4InfoExt1; }
void VsmfUpdateData::setN4InfoExt1(N4Information const &value) {
  m_N4InfoExt1 = value;
  m_N4InfoExt1IsSet = true;
}
bool VsmfUpdateData::n4InfoExt1IsSet() const { return m_N4InfoExt1IsSet; }
void VsmfUpdateData::unsetN4InfoExt1() { m_N4InfoExt1IsSet = false; }
N4Information VsmfUpdateData::getN4InfoExt2() const { return m_N4InfoExt2; }
void VsmfUpdateData::setN4InfoExt2(N4Information const &value) {
  m_N4InfoExt2 = value;
  m_N4InfoExt2IsSet = true;
}
bool VsmfUpdateData::n4InfoExt2IsSet() const { return m_N4InfoExt2IsSet; }
void VsmfUpdateData::unsetN4InfoExt2() { m_N4InfoExt2IsSet = false; }
N4Information VsmfUpdateData::getN4InfoExt3() const { return m_N4InfoExt3; }
void VsmfUpdateData::setN4InfoExt3(N4Information const &value) {
  m_N4InfoExt3 = value;
  m_N4InfoExt3IsSet = true;
}
bool VsmfUpdateData::n4InfoExt3IsSet() const { return m_N4InfoExt3IsSet; }
void VsmfUpdateData::unsetN4InfoExt3() { m_N4InfoExt3IsSet = false; }
bool VsmfUpdateData::isSmallDataRateControlEnabled() const {
  return m_SmallDataRateControlEnabled;
}
void VsmfUpdateData::setSmallDataRateControlEnabled(bool const value) {
  m_SmallDataRateControlEnabled = value;
  m_SmallDataRateControlEnabledIsSet = true;
}
bool VsmfUpdateData::smallDataRateControlEnabledIsSet() const {
  return m_SmallDataRateControlEnabledIsSet;
}
void VsmfUpdateData::unsetSmallDataRateControlEnabled() {
  m_SmallDataRateControlEnabledIsSet = false;
}
QosMonitoringInfo VsmfUpdateData::getQosMonitoringInfo() const {
  return m_QosMonitoringInfo;
}
void VsmfUpdateData::setQosMonitoringInfo(QosMonitoringInfo const &value) {
  m_QosMonitoringInfo = value;
  m_QosMonitoringInfoIsSet = true;
}
bool VsmfUpdateData::qosMonitoringInfoIsSet() const {
  return m_QosMonitoringInfoIsSet;
}
void VsmfUpdateData::unsetQosMonitoringInfo() {
  m_QosMonitoringInfoIsSet = false;
}
EpsPdnCnxInfo VsmfUpdateData::getEpsPdnCnxInfo() const {
  return m_EpsPdnCnxInfo;
}
void VsmfUpdateData::setEpsPdnCnxInfo(EpsPdnCnxInfo const &value) {
  m_EpsPdnCnxInfo = value;
  m_EpsPdnCnxInfoIsSet = true;
}
bool VsmfUpdateData::epsPdnCnxInfoIsSet() const { return m_EpsPdnCnxInfoIsSet; }
void VsmfUpdateData::unsetEpsPdnCnxInfo() { m_EpsPdnCnxInfoIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
