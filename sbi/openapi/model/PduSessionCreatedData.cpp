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

#include "PduSessionCreatedData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

PduSessionCreatedData::PduSessionCreatedData() {
  m_SscMode = "";
  m_HcnTunnelInfoIsSet = false;
  m_CnTunnelInfoIsSet = false;
  m_AdditionalCnTunnelInfoIsSet = false;
  m_SessionAmbrIsSet = false;
  m_QosFlowsSetupListIsSet = false;
  m_HSmfInstanceId = "";
  m_HSmfInstanceIdIsSet = false;
  m_SmfInstanceId = "";
  m_SmfInstanceIdIsSet = false;
  m_PduSessionId = 0;
  m_PduSessionIdIsSet = false;
  m_SNssaiIsSet = false;
  m_EnablePauseCharging = false;
  m_EnablePauseChargingIsSet = false;
  m_UeIpv4Address = "";
  m_UeIpv4AddressIsSet = false;
  m_UeIpv6PrefixIsSet = false;
  m_N1SmInfoToUeIsSet = false;
  m_EpsPdnCnxInfoIsSet = false;
  m_EpsBearerInfoIsSet = false;
  m_SupportedFeatures = "";
  m_SupportedFeaturesIsSet = false;
  m_MaxIntegrityProtectedDataRateIsSet = false;
  m_MaxIntegrityProtectedDataRateDlIsSet = false;
  m_AlwaysOnGranted = false;
  m_AlwaysOnGrantedIsSet = false;
  m_Gpsi = "";
  m_GpsiIsSet = false;
  m_UpSecurityIsSet = false;
  m_RoamingChargingProfileIsSet = false;
  m_HSmfServiceInstanceId = "";
  m_HSmfServiceInstanceIdIsSet = false;
  m_SmfServiceInstanceId = "";
  m_SmfServiceInstanceIdIsSet = false;
  m_RecoveryTime = "";
  m_RecoveryTimeIsSet = false;
  m_DnaiListIsSet = false;
  m_Ipv6MultiHomingInd = false;
  m_Ipv6MultiHomingIndIsSet = false;
  m_MaAcceptedInd = false;
  m_MaAcceptedIndIsSet = false;
  m_HomeProvidedChargingId = "";
  m_HomeProvidedChargingIdIsSet = false;
  m_NefExtBufSupportInd = false;
  m_NefExtBufSupportIndIsSet = false;
  m_SmallDataRateControlEnabled = false;
  m_SmallDataRateControlEnabledIsSet = false;
  m_UeIpv6InterfaceId = "";
  m_UeIpv6InterfaceIdIsSet = false;
  m_Ipv6Index = 0;
  m_Ipv6IndexIsSet = false;
  m_DnAaaAddressIsSet = false;
  m_RedundantPduSessionInfoIsSet = false;
  m_NspuSupportInd = false;
  m_NspuSupportIndIsSet = false;
}

PduSessionCreatedData::~PduSessionCreatedData() {}

void PduSessionCreatedData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const PduSessionCreatedData &o) {
  j = nlohmann::json();
  j["pduSessionType"] = o.m_PduSessionType;
  j["sscMode"] = o.m_SscMode;
  if (o.hcnTunnelInfoIsSet())
    j["hcnTunnelInfo"] = o.m_HcnTunnelInfo;
  if (o.cnTunnelInfoIsSet())
    j["cnTunnelInfo"] = o.m_CnTunnelInfo;
  if (o.additionalCnTunnelInfoIsSet())
    j["additionalCnTunnelInfo"] = o.m_AdditionalCnTunnelInfo;
  if (o.sessionAmbrIsSet())
    j["sessionAmbr"] = o.m_SessionAmbr;
  if (o.qosFlowsSetupListIsSet() || !o.m_QosFlowsSetupList.empty())
    j["qosFlowsSetupList"] = o.m_QosFlowsSetupList;
  if (o.hSmfInstanceIdIsSet())
    j["hSmfInstanceId"] = o.m_HSmfInstanceId;
  if (o.smfInstanceIdIsSet())
    j["smfInstanceId"] = o.m_SmfInstanceId;
  if (o.pduSessionIdIsSet())
    j["pduSessionId"] = o.m_PduSessionId;
  if (o.sNssaiIsSet())
    j["sNssai"] = o.m_SNssai;
  if (o.enablePauseChargingIsSet())
    j["enablePauseCharging"] = o.m_EnablePauseCharging;
  if (o.ueIpv4AddressIsSet())
    j["ueIpv4Address"] = o.m_UeIpv4Address;
  if (o.ueIpv6PrefixIsSet())
    j["ueIpv6Prefix"] = o.m_UeIpv6Prefix;
  if (o.n1SmInfoToUeIsSet())
    j["n1SmInfoToUe"] = o.m_N1SmInfoToUe;
  if (o.epsPdnCnxInfoIsSet())
    j["epsPdnCnxInfo"] = o.m_EpsPdnCnxInfo;
  if (o.epsBearerInfoIsSet() || !o.m_EpsBearerInfo.empty())
    j["epsBearerInfo"] = o.m_EpsBearerInfo;
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
  if (o.maxIntegrityProtectedDataRateIsSet())
    j["maxIntegrityProtectedDataRate"] = o.m_MaxIntegrityProtectedDataRate;
  if (o.maxIntegrityProtectedDataRateDlIsSet())
    j["maxIntegrityProtectedDataRateDl"] = o.m_MaxIntegrityProtectedDataRateDl;
  if (o.alwaysOnGrantedIsSet())
    j["alwaysOnGranted"] = o.m_AlwaysOnGranted;
  if (o.gpsiIsSet())
    j["gpsi"] = o.m_Gpsi;
  if (o.upSecurityIsSet())
    j["upSecurity"] = o.m_UpSecurity;
  if (o.roamingChargingProfileIsSet())
    j["roamingChargingProfile"] = o.m_RoamingChargingProfile;
  if (o.hSmfServiceInstanceIdIsSet())
    j["hSmfServiceInstanceId"] = o.m_HSmfServiceInstanceId;
  if (o.smfServiceInstanceIdIsSet())
    j["smfServiceInstanceId"] = o.m_SmfServiceInstanceId;
  if (o.recoveryTimeIsSet())
    j["recoveryTime"] = o.m_RecoveryTime;
  if (o.dnaiListIsSet() || !o.m_DnaiList.empty())
    j["dnaiList"] = o.m_DnaiList;
  if (o.ipv6MultiHomingIndIsSet())
    j["ipv6MultiHomingInd"] = o.m_Ipv6MultiHomingInd;
  if (o.maAcceptedIndIsSet())
    j["maAcceptedInd"] = o.m_MaAcceptedInd;
  if (o.homeProvidedChargingIdIsSet())
    j["homeProvidedChargingId"] = o.m_HomeProvidedChargingId;
  if (o.nefExtBufSupportIndIsSet())
    j["nefExtBufSupportInd"] = o.m_NefExtBufSupportInd;
  if (o.smallDataRateControlEnabledIsSet())
    j["smallDataRateControlEnabled"] = o.m_SmallDataRateControlEnabled;
  if (o.ueIpv6InterfaceIdIsSet())
    j["ueIpv6InterfaceId"] = o.m_UeIpv6InterfaceId;
  if (o.ipv6IndexIsSet())
    j["ipv6Index"] = o.m_Ipv6Index;
  if (o.dnAaaAddressIsSet())
    j["dnAaaAddress"] = o.m_DnAaaAddress;
  if (o.redundantPduSessionInfoIsSet())
    j["redundantPduSessionInfo"] = o.m_RedundantPduSessionInfo;
  if (o.nspuSupportIndIsSet())
    j["nspuSupportInd"] = o.m_NspuSupportInd;
}

void from_json(const nlohmann::json &j, PduSessionCreatedData &o) {
  j.at("pduSessionType").get_to(o.m_PduSessionType);
  j.at("sscMode").get_to(o.m_SscMode);
  if (j.find("hcnTunnelInfo") != j.end()) {
    j.at("hcnTunnelInfo").get_to(o.m_HcnTunnelInfo);
    o.m_HcnTunnelInfoIsSet = true;
  }
  if (j.find("cnTunnelInfo") != j.end()) {
    j.at("cnTunnelInfo").get_to(o.m_CnTunnelInfo);
    o.m_CnTunnelInfoIsSet = true;
  }
  if (j.find("additionalCnTunnelInfo") != j.end()) {
    j.at("additionalCnTunnelInfo").get_to(o.m_AdditionalCnTunnelInfo);
    o.m_AdditionalCnTunnelInfoIsSet = true;
  }
  if (j.find("sessionAmbr") != j.end()) {
    j.at("sessionAmbr").get_to(o.m_SessionAmbr);
    o.m_SessionAmbrIsSet = true;
  }
  if (j.find("qosFlowsSetupList") != j.end()) {
    j.at("qosFlowsSetupList").get_to(o.m_QosFlowsSetupList);
    o.m_QosFlowsSetupListIsSet = true;
  }
  if (j.find("hSmfInstanceId") != j.end()) {
    j.at("hSmfInstanceId").get_to(o.m_HSmfInstanceId);
    o.m_HSmfInstanceIdIsSet = true;
  }
  if (j.find("smfInstanceId") != j.end()) {
    j.at("smfInstanceId").get_to(o.m_SmfInstanceId);
    o.m_SmfInstanceIdIsSet = true;
  }
  if (j.find("pduSessionId") != j.end()) {
    j.at("pduSessionId").get_to(o.m_PduSessionId);
    o.m_PduSessionIdIsSet = true;
  }
  if (j.find("sNssai") != j.end()) {
    j.at("sNssai").get_to(o.m_SNssai);
    o.m_SNssaiIsSet = true;
  }
  if (j.find("enablePauseCharging") != j.end()) {
    j.at("enablePauseCharging").get_to(o.m_EnablePauseCharging);
    o.m_EnablePauseChargingIsSet = true;
  }
  if (j.find("ueIpv4Address") != j.end()) {
    j.at("ueIpv4Address").get_to(o.m_UeIpv4Address);
    o.m_UeIpv4AddressIsSet = true;
  }
  if (j.find("ueIpv6Prefix") != j.end()) {
    j.at("ueIpv6Prefix").get_to(o.m_UeIpv6Prefix);
    o.m_UeIpv6PrefixIsSet = true;
  }
  if (j.find("n1SmInfoToUe") != j.end()) {
    j.at("n1SmInfoToUe").get_to(o.m_N1SmInfoToUe);
    o.m_N1SmInfoToUeIsSet = true;
  }
  if (j.find("epsPdnCnxInfo") != j.end()) {
    j.at("epsPdnCnxInfo").get_to(o.m_EpsPdnCnxInfo);
    o.m_EpsPdnCnxInfoIsSet = true;
  }
  if (j.find("epsBearerInfo") != j.end()) {
    j.at("epsBearerInfo").get_to(o.m_EpsBearerInfo);
    o.m_EpsBearerInfoIsSet = true;
  }
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
  if (j.find("maxIntegrityProtectedDataRate") != j.end()) {
    j.at("maxIntegrityProtectedDataRate")
        .get_to(o.m_MaxIntegrityProtectedDataRate);
    o.m_MaxIntegrityProtectedDataRateIsSet = true;
  }
  if (j.find("maxIntegrityProtectedDataRateDl") != j.end()) {
    j.at("maxIntegrityProtectedDataRateDl")
        .get_to(o.m_MaxIntegrityProtectedDataRateDl);
    o.m_MaxIntegrityProtectedDataRateDlIsSet = true;
  }
  if (j.find("alwaysOnGranted") != j.end()) {
    j.at("alwaysOnGranted").get_to(o.m_AlwaysOnGranted);
    o.m_AlwaysOnGrantedIsSet = true;
  }
  if (j.find("gpsi") != j.end()) {
    j.at("gpsi").get_to(o.m_Gpsi);
    o.m_GpsiIsSet = true;
  }
  if (j.find("upSecurity") != j.end()) {
    j.at("upSecurity").get_to(o.m_UpSecurity);
    o.m_UpSecurityIsSet = true;
  }
  if (j.find("roamingChargingProfile") != j.end()) {
    j.at("roamingChargingProfile").get_to(o.m_RoamingChargingProfile);
    o.m_RoamingChargingProfileIsSet = true;
  }
  if (j.find("hSmfServiceInstanceId") != j.end()) {
    j.at("hSmfServiceInstanceId").get_to(o.m_HSmfServiceInstanceId);
    o.m_HSmfServiceInstanceIdIsSet = true;
  }
  if (j.find("smfServiceInstanceId") != j.end()) {
    j.at("smfServiceInstanceId").get_to(o.m_SmfServiceInstanceId);
    o.m_SmfServiceInstanceIdIsSet = true;
  }
  if (j.find("recoveryTime") != j.end()) {
    j.at("recoveryTime").get_to(o.m_RecoveryTime);
    o.m_RecoveryTimeIsSet = true;
  }
  if (j.find("dnaiList") != j.end()) {
    j.at("dnaiList").get_to(o.m_DnaiList);
    o.m_DnaiListIsSet = true;
  }
  if (j.find("ipv6MultiHomingInd") != j.end()) {
    j.at("ipv6MultiHomingInd").get_to(o.m_Ipv6MultiHomingInd);
    o.m_Ipv6MultiHomingIndIsSet = true;
  }
  if (j.find("maAcceptedInd") != j.end()) {
    j.at("maAcceptedInd").get_to(o.m_MaAcceptedInd);
    o.m_MaAcceptedIndIsSet = true;
  }
  if (j.find("homeProvidedChargingId") != j.end()) {
    j.at("homeProvidedChargingId").get_to(o.m_HomeProvidedChargingId);
    o.m_HomeProvidedChargingIdIsSet = true;
  }
  if (j.find("nefExtBufSupportInd") != j.end()) {
    j.at("nefExtBufSupportInd").get_to(o.m_NefExtBufSupportInd);
    o.m_NefExtBufSupportIndIsSet = true;
  }
  if (j.find("smallDataRateControlEnabled") != j.end()) {
    j.at("smallDataRateControlEnabled").get_to(o.m_SmallDataRateControlEnabled);
    o.m_SmallDataRateControlEnabledIsSet = true;
  }
  if (j.find("ueIpv6InterfaceId") != j.end()) {
    j.at("ueIpv6InterfaceId").get_to(o.m_UeIpv6InterfaceId);
    o.m_UeIpv6InterfaceIdIsSet = true;
  }
  if (j.find("ipv6Index") != j.end()) {
    j.at("ipv6Index").get_to(o.m_Ipv6Index);
    o.m_Ipv6IndexIsSet = true;
  }
  if (j.find("dnAaaAddress") != j.end()) {
    j.at("dnAaaAddress").get_to(o.m_DnAaaAddress);
    o.m_DnAaaAddressIsSet = true;
  }
  if (j.find("redundantPduSessionInfo") != j.end()) {
    j.at("redundantPduSessionInfo").get_to(o.m_RedundantPduSessionInfo);
    o.m_RedundantPduSessionInfoIsSet = true;
  }
  if (j.find("nspuSupportInd") != j.end()) {
    j.at("nspuSupportInd").get_to(o.m_NspuSupportInd);
    o.m_NspuSupportIndIsSet = true;
  }
}

PduSessionType PduSessionCreatedData::getPduSessionType() const {
  return m_PduSessionType;
}
void PduSessionCreatedData::setPduSessionType(PduSessionType const &value) {
  m_PduSessionType = value;
}
std::string PduSessionCreatedData::getSscMode() const { return m_SscMode; }
void PduSessionCreatedData::setSscMode(std::string const &value) {
  m_SscMode = value;
}
TunnelInfo PduSessionCreatedData::getHcnTunnelInfo() const {
  return m_HcnTunnelInfo;
}
void PduSessionCreatedData::setHcnTunnelInfo(TunnelInfo const &value) {
  m_HcnTunnelInfo = value;
  m_HcnTunnelInfoIsSet = true;
}
bool PduSessionCreatedData::hcnTunnelInfoIsSet() const {
  return m_HcnTunnelInfoIsSet;
}
void PduSessionCreatedData::unsetHcnTunnelInfo() {
  m_HcnTunnelInfoIsSet = false;
}
TunnelInfo PduSessionCreatedData::getCnTunnelInfo() const {
  return m_CnTunnelInfo;
}
void PduSessionCreatedData::setCnTunnelInfo(TunnelInfo const &value) {
  m_CnTunnelInfo = value;
  m_CnTunnelInfoIsSet = true;
}
bool PduSessionCreatedData::cnTunnelInfoIsSet() const {
  return m_CnTunnelInfoIsSet;
}
void PduSessionCreatedData::unsetCnTunnelInfo() { m_CnTunnelInfoIsSet = false; }
TunnelInfo PduSessionCreatedData::getAdditionalCnTunnelInfo() const {
  return m_AdditionalCnTunnelInfo;
}
void PduSessionCreatedData::setAdditionalCnTunnelInfo(TunnelInfo const &value) {
  m_AdditionalCnTunnelInfo = value;
  m_AdditionalCnTunnelInfoIsSet = true;
}
bool PduSessionCreatedData::additionalCnTunnelInfoIsSet() const {
  return m_AdditionalCnTunnelInfoIsSet;
}
void PduSessionCreatedData::unsetAdditionalCnTunnelInfo() {
  m_AdditionalCnTunnelInfoIsSet = false;
}
Ambr PduSessionCreatedData::getSessionAmbr() const { return m_SessionAmbr; }
void PduSessionCreatedData::setSessionAmbr(Ambr const &value) {
  m_SessionAmbr = value;
  m_SessionAmbrIsSet = true;
}
bool PduSessionCreatedData::sessionAmbrIsSet() const {
  return m_SessionAmbrIsSet;
}
void PduSessionCreatedData::unsetSessionAmbr() { m_SessionAmbrIsSet = false; }
std::vector<QosFlowSetupItem> &PduSessionCreatedData::getQosFlowsSetupList() {
  return m_QosFlowsSetupList;
}
void PduSessionCreatedData::setQosFlowsSetupList(
    std::vector<QosFlowSetupItem> const &value) {
  m_QosFlowsSetupList = value;
  m_QosFlowsSetupListIsSet = true;
}
bool PduSessionCreatedData::qosFlowsSetupListIsSet() const {
  return m_QosFlowsSetupListIsSet;
}
void PduSessionCreatedData::unsetQosFlowsSetupList() {
  m_QosFlowsSetupListIsSet = false;
}
std::string PduSessionCreatedData::getHSmfInstanceId() const {
  return m_HSmfInstanceId;
}
void PduSessionCreatedData::setHSmfInstanceId(std::string const &value) {
  m_HSmfInstanceId = value;
  m_HSmfInstanceIdIsSet = true;
}
bool PduSessionCreatedData::hSmfInstanceIdIsSet() const {
  return m_HSmfInstanceIdIsSet;
}
void PduSessionCreatedData::unsetHSmfInstanceId() {
  m_HSmfInstanceIdIsSet = false;
}
std::string PduSessionCreatedData::getSmfInstanceId() const {
  return m_SmfInstanceId;
}
void PduSessionCreatedData::setSmfInstanceId(std::string const &value) {
  m_SmfInstanceId = value;
  m_SmfInstanceIdIsSet = true;
}
bool PduSessionCreatedData::smfInstanceIdIsSet() const {
  return m_SmfInstanceIdIsSet;
}
void PduSessionCreatedData::unsetSmfInstanceId() {
  m_SmfInstanceIdIsSet = false;
}
int32_t PduSessionCreatedData::getPduSessionId() const {
  return m_PduSessionId;
}
void PduSessionCreatedData::setPduSessionId(int32_t const value) {
  m_PduSessionId = value;
  m_PduSessionIdIsSet = true;
}
bool PduSessionCreatedData::pduSessionIdIsSet() const {
  return m_PduSessionIdIsSet;
}
void PduSessionCreatedData::unsetPduSessionId() { m_PduSessionIdIsSet = false; }
Snssai PduSessionCreatedData::getSNssai() const { return m_SNssai; }
void PduSessionCreatedData::setSNssai(Snssai const &value) {
  m_SNssai = value;
  m_SNssaiIsSet = true;
}
bool PduSessionCreatedData::sNssaiIsSet() const { return m_SNssaiIsSet; }
void PduSessionCreatedData::unsetSNssai() { m_SNssaiIsSet = false; }
bool PduSessionCreatedData::isEnablePauseCharging() const {
  return m_EnablePauseCharging;
}
void PduSessionCreatedData::setEnablePauseCharging(bool const value) {
  m_EnablePauseCharging = value;
  m_EnablePauseChargingIsSet = true;
}
bool PduSessionCreatedData::enablePauseChargingIsSet() const {
  return m_EnablePauseChargingIsSet;
}
void PduSessionCreatedData::unsetEnablePauseCharging() {
  m_EnablePauseChargingIsSet = false;
}
std::string PduSessionCreatedData::getUeIpv4Address() const {
  return m_UeIpv4Address;
}
void PduSessionCreatedData::setUeIpv4Address(std::string const &value) {
  m_UeIpv4Address = value;
  m_UeIpv4AddressIsSet = true;
}
bool PduSessionCreatedData::ueIpv4AddressIsSet() const {
  return m_UeIpv4AddressIsSet;
}
void PduSessionCreatedData::unsetUeIpv4Address() {
  m_UeIpv4AddressIsSet = false;
}
Ipv6Prefix PduSessionCreatedData::getUeIpv6Prefix() const {
  return m_UeIpv6Prefix;
}
void PduSessionCreatedData::setUeIpv6Prefix(Ipv6Prefix const &value) {
  m_UeIpv6Prefix = value;
  m_UeIpv6PrefixIsSet = true;
}
bool PduSessionCreatedData::ueIpv6PrefixIsSet() const {
  return m_UeIpv6PrefixIsSet;
}
void PduSessionCreatedData::unsetUeIpv6Prefix() { m_UeIpv6PrefixIsSet = false; }
RefToBinaryData PduSessionCreatedData::getN1SmInfoToUe() const {
  return m_N1SmInfoToUe;
}
void PduSessionCreatedData::setN1SmInfoToUe(RefToBinaryData const &value) {
  m_N1SmInfoToUe = value;
  m_N1SmInfoToUeIsSet = true;
}
bool PduSessionCreatedData::n1SmInfoToUeIsSet() const {
  return m_N1SmInfoToUeIsSet;
}
void PduSessionCreatedData::unsetN1SmInfoToUe() { m_N1SmInfoToUeIsSet = false; }
EpsPdnCnxInfo PduSessionCreatedData::getEpsPdnCnxInfo() const {
  return m_EpsPdnCnxInfo;
}
void PduSessionCreatedData::setEpsPdnCnxInfo(EpsPdnCnxInfo const &value) {
  m_EpsPdnCnxInfo = value;
  m_EpsPdnCnxInfoIsSet = true;
}
bool PduSessionCreatedData::epsPdnCnxInfoIsSet() const {
  return m_EpsPdnCnxInfoIsSet;
}
void PduSessionCreatedData::unsetEpsPdnCnxInfo() {
  m_EpsPdnCnxInfoIsSet = false;
}
std::vector<EpsBearerInfo> &PduSessionCreatedData::getEpsBearerInfo() {
  return m_EpsBearerInfo;
}
void PduSessionCreatedData::setEpsBearerInfo(
    std::vector<EpsBearerInfo> const &value) {
  m_EpsBearerInfo = value;
  m_EpsBearerInfoIsSet = true;
}
bool PduSessionCreatedData::epsBearerInfoIsSet() const {
  return m_EpsBearerInfoIsSet;
}
void PduSessionCreatedData::unsetEpsBearerInfo() {
  m_EpsBearerInfoIsSet = false;
}
std::string PduSessionCreatedData::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void PduSessionCreatedData::setSupportedFeatures(std::string const &value) {
  m_SupportedFeatures = value;
  m_SupportedFeaturesIsSet = true;
}
bool PduSessionCreatedData::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void PduSessionCreatedData::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}
MaxIntegrityProtectedDataRate
PduSessionCreatedData::getMaxIntegrityProtectedDataRate() const {
  return m_MaxIntegrityProtectedDataRate;
}
void PduSessionCreatedData::setMaxIntegrityProtectedDataRate(
    MaxIntegrityProtectedDataRate const &value) {
  m_MaxIntegrityProtectedDataRate = value;
  m_MaxIntegrityProtectedDataRateIsSet = true;
}
bool PduSessionCreatedData::maxIntegrityProtectedDataRateIsSet() const {
  return m_MaxIntegrityProtectedDataRateIsSet;
}
void PduSessionCreatedData::unsetMaxIntegrityProtectedDataRate() {
  m_MaxIntegrityProtectedDataRateIsSet = false;
}
MaxIntegrityProtectedDataRate
PduSessionCreatedData::getMaxIntegrityProtectedDataRateDl() const {
  return m_MaxIntegrityProtectedDataRateDl;
}
void PduSessionCreatedData::setMaxIntegrityProtectedDataRateDl(
    MaxIntegrityProtectedDataRate const &value) {
  m_MaxIntegrityProtectedDataRateDl = value;
  m_MaxIntegrityProtectedDataRateDlIsSet = true;
}
bool PduSessionCreatedData::maxIntegrityProtectedDataRateDlIsSet() const {
  return m_MaxIntegrityProtectedDataRateDlIsSet;
}
void PduSessionCreatedData::unsetMaxIntegrityProtectedDataRateDl() {
  m_MaxIntegrityProtectedDataRateDlIsSet = false;
}
bool PduSessionCreatedData::isAlwaysOnGranted() const {
  return m_AlwaysOnGranted;
}
void PduSessionCreatedData::setAlwaysOnGranted(bool const value) {
  m_AlwaysOnGranted = value;
  m_AlwaysOnGrantedIsSet = true;
}
bool PduSessionCreatedData::alwaysOnGrantedIsSet() const {
  return m_AlwaysOnGrantedIsSet;
}
void PduSessionCreatedData::unsetAlwaysOnGranted() {
  m_AlwaysOnGrantedIsSet = false;
}
std::string PduSessionCreatedData::getGpsi() const { return m_Gpsi; }
void PduSessionCreatedData::setGpsi(std::string const &value) {
  m_Gpsi = value;
  m_GpsiIsSet = true;
}
bool PduSessionCreatedData::gpsiIsSet() const { return m_GpsiIsSet; }
void PduSessionCreatedData::unsetGpsi() { m_GpsiIsSet = false; }
UpSecurity PduSessionCreatedData::getUpSecurity() const { return m_UpSecurity; }
void PduSessionCreatedData::setUpSecurity(UpSecurity const &value) {
  m_UpSecurity = value;
  m_UpSecurityIsSet = true;
}
bool PduSessionCreatedData::upSecurityIsSet() const {
  return m_UpSecurityIsSet;
}
void PduSessionCreatedData::unsetUpSecurity() { m_UpSecurityIsSet = false; }
RoamingChargingProfile
PduSessionCreatedData::getRoamingChargingProfile() const {
  return m_RoamingChargingProfile;
}
void PduSessionCreatedData::setRoamingChargingProfile(
    RoamingChargingProfile const &value) {
  m_RoamingChargingProfile = value;
  m_RoamingChargingProfileIsSet = true;
}
bool PduSessionCreatedData::roamingChargingProfileIsSet() const {
  return m_RoamingChargingProfileIsSet;
}
void PduSessionCreatedData::unsetRoamingChargingProfile() {
  m_RoamingChargingProfileIsSet = false;
}
std::string PduSessionCreatedData::getHSmfServiceInstanceId() const {
  return m_HSmfServiceInstanceId;
}
void PduSessionCreatedData::setHSmfServiceInstanceId(std::string const &value) {
  m_HSmfServiceInstanceId = value;
  m_HSmfServiceInstanceIdIsSet = true;
}
bool PduSessionCreatedData::hSmfServiceInstanceIdIsSet() const {
  return m_HSmfServiceInstanceIdIsSet;
}
void PduSessionCreatedData::unsetHSmfServiceInstanceId() {
  m_HSmfServiceInstanceIdIsSet = false;
}
std::string PduSessionCreatedData::getSmfServiceInstanceId() const {
  return m_SmfServiceInstanceId;
}
void PduSessionCreatedData::setSmfServiceInstanceId(std::string const &value) {
  m_SmfServiceInstanceId = value;
  m_SmfServiceInstanceIdIsSet = true;
}
bool PduSessionCreatedData::smfServiceInstanceIdIsSet() const {
  return m_SmfServiceInstanceIdIsSet;
}
void PduSessionCreatedData::unsetSmfServiceInstanceId() {
  m_SmfServiceInstanceIdIsSet = false;
}
std::string PduSessionCreatedData::getRecoveryTime() const {
  return m_RecoveryTime;
}
void PduSessionCreatedData::setRecoveryTime(std::string const &value) {
  m_RecoveryTime = value;
  m_RecoveryTimeIsSet = true;
}
bool PduSessionCreatedData::recoveryTimeIsSet() const {
  return m_RecoveryTimeIsSet;
}
void PduSessionCreatedData::unsetRecoveryTime() { m_RecoveryTimeIsSet = false; }
std::vector<std::string> &PduSessionCreatedData::getDnaiList() {
  return m_DnaiList;
}
void PduSessionCreatedData::setDnaiList(std::vector<std::string> const &value) {
  m_DnaiList = value;
  m_DnaiListIsSet = true;
}
bool PduSessionCreatedData::dnaiListIsSet() const { return m_DnaiListIsSet; }
void PduSessionCreatedData::unsetDnaiList() { m_DnaiListIsSet = false; }
bool PduSessionCreatedData::isIpv6MultiHomingInd() const {
  return m_Ipv6MultiHomingInd;
}
void PduSessionCreatedData::setIpv6MultiHomingInd(bool const value) {
  m_Ipv6MultiHomingInd = value;
  m_Ipv6MultiHomingIndIsSet = true;
}
bool PduSessionCreatedData::ipv6MultiHomingIndIsSet() const {
  return m_Ipv6MultiHomingIndIsSet;
}
void PduSessionCreatedData::unsetIpv6MultiHomingInd() {
  m_Ipv6MultiHomingIndIsSet = false;
}
bool PduSessionCreatedData::isMaAcceptedInd() const { return m_MaAcceptedInd; }
void PduSessionCreatedData::setMaAcceptedInd(bool const value) {
  m_MaAcceptedInd = value;
  m_MaAcceptedIndIsSet = true;
}
bool PduSessionCreatedData::maAcceptedIndIsSet() const {
  return m_MaAcceptedIndIsSet;
}
void PduSessionCreatedData::unsetMaAcceptedInd() {
  m_MaAcceptedIndIsSet = false;
}
std::string PduSessionCreatedData::getHomeProvidedChargingId() const {
  return m_HomeProvidedChargingId;
}
void PduSessionCreatedData::setHomeProvidedChargingId(
    std::string const &value) {
  m_HomeProvidedChargingId = value;
  m_HomeProvidedChargingIdIsSet = true;
}
bool PduSessionCreatedData::homeProvidedChargingIdIsSet() const {
  return m_HomeProvidedChargingIdIsSet;
}
void PduSessionCreatedData::unsetHomeProvidedChargingId() {
  m_HomeProvidedChargingIdIsSet = false;
}
bool PduSessionCreatedData::isNefExtBufSupportInd() const {
  return m_NefExtBufSupportInd;
}
void PduSessionCreatedData::setNefExtBufSupportInd(bool const value) {
  m_NefExtBufSupportInd = value;
  m_NefExtBufSupportIndIsSet = true;
}
bool PduSessionCreatedData::nefExtBufSupportIndIsSet() const {
  return m_NefExtBufSupportIndIsSet;
}
void PduSessionCreatedData::unsetNefExtBufSupportInd() {
  m_NefExtBufSupportIndIsSet = false;
}
bool PduSessionCreatedData::isSmallDataRateControlEnabled() const {
  return m_SmallDataRateControlEnabled;
}
void PduSessionCreatedData::setSmallDataRateControlEnabled(bool const value) {
  m_SmallDataRateControlEnabled = value;
  m_SmallDataRateControlEnabledIsSet = true;
}
bool PduSessionCreatedData::smallDataRateControlEnabledIsSet() const {
  return m_SmallDataRateControlEnabledIsSet;
}
void PduSessionCreatedData::unsetSmallDataRateControlEnabled() {
  m_SmallDataRateControlEnabledIsSet = false;
}
std::string PduSessionCreatedData::getUeIpv6InterfaceId() const {
  return m_UeIpv6InterfaceId;
}
void PduSessionCreatedData::setUeIpv6InterfaceId(std::string const &value) {
  m_UeIpv6InterfaceId = value;
  m_UeIpv6InterfaceIdIsSet = true;
}
bool PduSessionCreatedData::ueIpv6InterfaceIdIsSet() const {
  return m_UeIpv6InterfaceIdIsSet;
}
void PduSessionCreatedData::unsetUeIpv6InterfaceId() {
  m_UeIpv6InterfaceIdIsSet = false;
}
int32_t PduSessionCreatedData::getIpv6Index() const { return m_Ipv6Index; }
void PduSessionCreatedData::setIpv6Index(int32_t const value) {
  m_Ipv6Index = value;
  m_Ipv6IndexIsSet = true;
}
bool PduSessionCreatedData::ipv6IndexIsSet() const { return m_Ipv6IndexIsSet; }
void PduSessionCreatedData::unsetIpv6Index() { m_Ipv6IndexIsSet = false; }
IpAddress PduSessionCreatedData::getDnAaaAddress() const {
  return m_DnAaaAddress;
}
void PduSessionCreatedData::setDnAaaAddress(IpAddress const &value) {
  m_DnAaaAddress = value;
  m_DnAaaAddressIsSet = true;
}
bool PduSessionCreatedData::dnAaaAddressIsSet() const {
  return m_DnAaaAddressIsSet;
}
void PduSessionCreatedData::unsetDnAaaAddress() { m_DnAaaAddressIsSet = false; }
RedundantPduSessionInformation
PduSessionCreatedData::getRedundantPduSessionInfo() const {
  return m_RedundantPduSessionInfo;
}
void PduSessionCreatedData::setRedundantPduSessionInfo(
    RedundantPduSessionInformation const &value) {
  m_RedundantPduSessionInfo = value;
  m_RedundantPduSessionInfoIsSet = true;
}
bool PduSessionCreatedData::redundantPduSessionInfoIsSet() const {
  return m_RedundantPduSessionInfoIsSet;
}
void PduSessionCreatedData::unsetRedundantPduSessionInfo() {
  m_RedundantPduSessionInfoIsSet = false;
}
bool PduSessionCreatedData::isNspuSupportInd() const {
  return m_NspuSupportInd;
}
void PduSessionCreatedData::setNspuSupportInd(bool const value) {
  m_NspuSupportInd = value;
  m_NspuSupportIndIsSet = true;
}
bool PduSessionCreatedData::nspuSupportIndIsSet() const {
  return m_NspuSupportIndIsSet;
}
void PduSessionCreatedData::unsetNspuSupportInd() {
  m_NspuSupportIndIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
