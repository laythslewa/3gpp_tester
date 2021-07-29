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

#include "SmPolicyContextData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

SmPolicyContextData::SmPolicyContextData() {
  m_AccNetChIdIsSet = false;
  m_ChargEntityAddrIsSet = false;
  m_Gpsi = "";
  m_GpsiIsSet = false;
  m_Supi = "";
  m_InvalidSupi = false;
  m_InvalidSupiIsSet = false;
  m_InterGrpIdsIsSet = false;
  m_PduSessionId = 0;
  m_Chargingcharacteristics = "";
  m_ChargingcharacteristicsIsSet = false;
  m_Dnn = "";
  m_DnnSelModeIsSet = false;
  m_NotificationUri = "";
  m_AccessTypeIsSet = false;
  m_RatTypeIsSet = false;
  m_AddAccessInfoIsSet = false;
  m_ServingNetworkIsSet = false;
  m_UserLocationInfoIsSet = false;
  m_UeTimeZone = "";
  m_UeTimeZoneIsSet = false;
  m_Pei = "";
  m_PeiIsSet = false;
  m_Ipv4Address = "";
  m_Ipv4AddressIsSet = false;
  m_Ipv6AddressPrefixIsSet = false;
  m_IpDomain = "";
  m_IpDomainIsSet = false;
  m_SubsSessAmbrIsSet = false;
  m_AuthProfIndex = "";
  m_AuthProfIndexIsSet = false;
  m_SubsDefQosIsSet = false;
  m_VplmnQosIsSet = false;
  m_NumOfPackFilter = 0;
  m_NumOfPackFilterIsSet = false;
  m_Online = false;
  m_OnlineIsSet = false;
  m_Offline = false;
  m_OfflineIsSet = false;
  m_r_3gppPsDataOffStatus = false;
  m_r_3gppPsDataOffStatusIsSet = false;
  m_RefQosIndication = false;
  m_RefQosIndicationIsSet = false;
  m_TraceReqIsSet = false;
  m_QosFlowUsageIsSet = false;
  m_ServNfIdIsSet = false;
  m_SuppFeat = "";
  m_SuppFeatIsSet = false;
  m_SmfId = "";
  m_SmfIdIsSet = false;
  m_RecoveryTime = "";
  m_RecoveryTimeIsSet = false;
  m_MaPduIndIsSet = false;
  m_AtsssCapabIsSet = false;
  m_Ipv4FrameRouteListIsSet = false;
  m_Ipv6FrameRouteListIsSet = false;
  m_SatBackhaulCategoryIsSet = false;
}

SmPolicyContextData::~SmPolicyContextData() {}

void SmPolicyContextData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const SmPolicyContextData &o) {
  j = nlohmann::json();
  if (o.accNetChIdIsSet())
    j["accNetChId"] = o.m_AccNetChId;
  if (o.chargEntityAddrIsSet())
    j["chargEntityAddr"] = o.m_ChargEntityAddr;
  if (o.gpsiIsSet())
    j["gpsi"] = o.m_Gpsi;
  j["supi"] = o.m_Supi;
  if (o.invalidSupiIsSet())
    j["invalidSupi"] = o.m_InvalidSupi;
  if (o.interGrpIdsIsSet() || !o.m_InterGrpIds.empty())
    j["interGrpIds"] = o.m_InterGrpIds;
  j["pduSessionId"] = o.m_PduSessionId;
  j["pduSessionType"] = o.m_PduSessionType;
  if (o.chargingcharacteristicsIsSet())
    j["chargingcharacteristics"] = o.m_Chargingcharacteristics;
  j["dnn"] = o.m_Dnn;
  if (o.dnnSelModeIsSet())
    j["dnnSelMode"] = o.m_DnnSelMode;
  j["notificationUri"] = o.m_NotificationUri;
  if (o.accessTypeIsSet())
    j["accessType"] = o.m_AccessType;
  if (o.ratTypeIsSet())
    j["ratType"] = o.m_RatType;
  if (o.addAccessInfoIsSet())
    j["addAccessInfo"] = o.m_AddAccessInfo;
  if (o.servingNetworkIsSet())
    j["servingNetwork"] = o.m_ServingNetwork;
  if (o.userLocationInfoIsSet())
    j["userLocationInfo"] = o.m_UserLocationInfo;
  if (o.ueTimeZoneIsSet())
    j["ueTimeZone"] = o.m_UeTimeZone;
  if (o.peiIsSet())
    j["pei"] = o.m_Pei;
  if (o.ipv4AddressIsSet())
    j["ipv4Address"] = o.m_Ipv4Address;
  if (o.ipv6AddressPrefixIsSet())
    j["ipv6AddressPrefix"] = o.m_Ipv6AddressPrefix;
  if (o.ipDomainIsSet())
    j["ipDomain"] = o.m_IpDomain;
  if (o.subsSessAmbrIsSet())
    j["subsSessAmbr"] = o.m_SubsSessAmbr;
  if (o.authProfIndexIsSet())
    j["authProfIndex"] = o.m_AuthProfIndex;
  if (o.subsDefQosIsSet())
    j["subsDefQos"] = o.m_SubsDefQos;
  if (o.vplmnQosIsSet())
    j["vplmnQos"] = o.m_VplmnQos;
  if (o.numOfPackFilterIsSet())
    j["numOfPackFilter"] = o.m_NumOfPackFilter;
  if (o.onlineIsSet())
    j["online"] = o.m_Online;
  if (o.offlineIsSet())
    j["offline"] = o.m_Offline;
  if (o.r3gppPsDataOffStatusIsSet())
    j["3gppPsDataOffStatus"] = o.m_r_3gppPsDataOffStatus;
  if (o.refQosIndicationIsSet())
    j["refQosIndication"] = o.m_RefQosIndication;
  if (o.traceReqIsSet())
    j["traceReq"] = o.m_TraceReq;
  j["sliceInfo"] = o.m_SliceInfo;
  if (o.qosFlowUsageIsSet())
    j["qosFlowUsage"] = o.m_QosFlowUsage;
  if (o.servNfIdIsSet())
    j["servNfId"] = o.m_ServNfId;
  if (o.suppFeatIsSet())
    j["suppFeat"] = o.m_SuppFeat;
  if (o.smfIdIsSet())
    j["smfId"] = o.m_SmfId;
  if (o.recoveryTimeIsSet())
    j["recoveryTime"] = o.m_RecoveryTime;
  if (o.maPduIndIsSet())
    j["maPduInd"] = o.m_MaPduInd;
  if (o.atsssCapabIsSet())
    j["atsssCapab"] = o.m_AtsssCapab;
  if (o.ipv4FrameRouteListIsSet() || !o.m_Ipv4FrameRouteList.empty())
    j["ipv4FrameRouteList"] = o.m_Ipv4FrameRouteList;
  if (o.ipv6FrameRouteListIsSet() || !o.m_Ipv6FrameRouteList.empty())
    j["ipv6FrameRouteList"] = o.m_Ipv6FrameRouteList;
  if (o.satBackhaulCategoryIsSet())
    j["satBackhaulCategory"] = o.m_SatBackhaulCategory;
}

void from_json(const nlohmann::json &j, SmPolicyContextData &o) {
  if (j.find("accNetChId") != j.end()) {
    j.at("accNetChId").get_to(o.m_AccNetChId);
    o.m_AccNetChIdIsSet = true;
  }
  if (j.find("chargEntityAddr") != j.end()) {
    j.at("chargEntityAddr").get_to(o.m_ChargEntityAddr);
    o.m_ChargEntityAddrIsSet = true;
  }
  if (j.find("gpsi") != j.end()) {
    j.at("gpsi").get_to(o.m_Gpsi);
    o.m_GpsiIsSet = true;
  }
  j.at("supi").get_to(o.m_Supi);
  if (j.find("invalidSupi") != j.end()) {
    j.at("invalidSupi").get_to(o.m_InvalidSupi);
    o.m_InvalidSupiIsSet = true;
  }
  if (j.find("interGrpIds") != j.end()) {
    j.at("interGrpIds").get_to(o.m_InterGrpIds);
    o.m_InterGrpIdsIsSet = true;
  }
  j.at("pduSessionId").get_to(o.m_PduSessionId);
  j.at("pduSessionType").get_to(o.m_PduSessionType);
  if (j.find("chargingcharacteristics") != j.end()) {
    j.at("chargingcharacteristics").get_to(o.m_Chargingcharacteristics);
    o.m_ChargingcharacteristicsIsSet = true;
  }
  j.at("dnn").get_to(o.m_Dnn);
  if (j.find("dnnSelMode") != j.end()) {
    j.at("dnnSelMode").get_to(o.m_DnnSelMode);
    o.m_DnnSelModeIsSet = true;
  }
  j.at("notificationUri").get_to(o.m_NotificationUri);
  if (j.find("accessType") != j.end()) {
    j.at("accessType").get_to(o.m_AccessType);
    o.m_AccessTypeIsSet = true;
  }
  if (j.find("ratType") != j.end()) {
    j.at("ratType").get_to(o.m_RatType);
    o.m_RatTypeIsSet = true;
  }
  if (j.find("addAccessInfo") != j.end()) {
    j.at("addAccessInfo").get_to(o.m_AddAccessInfo);
    o.m_AddAccessInfoIsSet = true;
  }
  if (j.find("servingNetwork") != j.end()) {
    j.at("servingNetwork").get_to(o.m_ServingNetwork);
    o.m_ServingNetworkIsSet = true;
  }
  if (j.find("userLocationInfo") != j.end()) {
    j.at("userLocationInfo").get_to(o.m_UserLocationInfo);
    o.m_UserLocationInfoIsSet = true;
  }
  if (j.find("ueTimeZone") != j.end()) {
    j.at("ueTimeZone").get_to(o.m_UeTimeZone);
    o.m_UeTimeZoneIsSet = true;
  }
  if (j.find("pei") != j.end()) {
    j.at("pei").get_to(o.m_Pei);
    o.m_PeiIsSet = true;
  }
  if (j.find("ipv4Address") != j.end()) {
    j.at("ipv4Address").get_to(o.m_Ipv4Address);
    o.m_Ipv4AddressIsSet = true;
  }
  if (j.find("ipv6AddressPrefix") != j.end()) {
    j.at("ipv6AddressPrefix").get_to(o.m_Ipv6AddressPrefix);
    o.m_Ipv6AddressPrefixIsSet = true;
  }
  if (j.find("ipDomain") != j.end()) {
    j.at("ipDomain").get_to(o.m_IpDomain);
    o.m_IpDomainIsSet = true;
  }
  if (j.find("subsSessAmbr") != j.end()) {
    j.at("subsSessAmbr").get_to(o.m_SubsSessAmbr);
    o.m_SubsSessAmbrIsSet = true;
  }
  if (j.find("authProfIndex") != j.end()) {
    j.at("authProfIndex").get_to(o.m_AuthProfIndex);
    o.m_AuthProfIndexIsSet = true;
  }
  if (j.find("subsDefQos") != j.end()) {
    j.at("subsDefQos").get_to(o.m_SubsDefQos);
    o.m_SubsDefQosIsSet = true;
  }
  if (j.find("vplmnQos") != j.end()) {
    j.at("vplmnQos").get_to(o.m_VplmnQos);
    o.m_VplmnQosIsSet = true;
  }
  if (j.find("numOfPackFilter") != j.end()) {
    j.at("numOfPackFilter").get_to(o.m_NumOfPackFilter);
    o.m_NumOfPackFilterIsSet = true;
  }
  if (j.find("online") != j.end()) {
    j.at("online").get_to(o.m_Online);
    o.m_OnlineIsSet = true;
  }
  if (j.find("offline") != j.end()) {
    j.at("offline").get_to(o.m_Offline);
    o.m_OfflineIsSet = true;
  }
  if (j.find("3gppPsDataOffStatus") != j.end()) {
    j.at("3gppPsDataOffStatus").get_to(o.m_r_3gppPsDataOffStatus);
    o.m_r_3gppPsDataOffStatusIsSet = true;
  }
  if (j.find("refQosIndication") != j.end()) {
    j.at("refQosIndication").get_to(o.m_RefQosIndication);
    o.m_RefQosIndicationIsSet = true;
  }
  if (j.find("traceReq") != j.end()) {
    j.at("traceReq").get_to(o.m_TraceReq);
    o.m_TraceReqIsSet = true;
  }
  j.at("sliceInfo").get_to(o.m_SliceInfo);
  if (j.find("qosFlowUsage") != j.end()) {
    j.at("qosFlowUsage").get_to(o.m_QosFlowUsage);
    o.m_QosFlowUsageIsSet = true;
  }
  if (j.find("servNfId") != j.end()) {
    j.at("servNfId").get_to(o.m_ServNfId);
    o.m_ServNfIdIsSet = true;
  }
  if (j.find("suppFeat") != j.end()) {
    j.at("suppFeat").get_to(o.m_SuppFeat);
    o.m_SuppFeatIsSet = true;
  }
  if (j.find("smfId") != j.end()) {
    j.at("smfId").get_to(o.m_SmfId);
    o.m_SmfIdIsSet = true;
  }
  if (j.find("recoveryTime") != j.end()) {
    j.at("recoveryTime").get_to(o.m_RecoveryTime);
    o.m_RecoveryTimeIsSet = true;
  }
  if (j.find("maPduInd") != j.end()) {
    j.at("maPduInd").get_to(o.m_MaPduInd);
    o.m_MaPduIndIsSet = true;
  }
  if (j.find("atsssCapab") != j.end()) {
    j.at("atsssCapab").get_to(o.m_AtsssCapab);
    o.m_AtsssCapabIsSet = true;
  }
  if (j.find("ipv4FrameRouteList") != j.end()) {
    j.at("ipv4FrameRouteList").get_to(o.m_Ipv4FrameRouteList);
    o.m_Ipv4FrameRouteListIsSet = true;
  }
  if (j.find("ipv6FrameRouteList") != j.end()) {
    j.at("ipv6FrameRouteList").get_to(o.m_Ipv6FrameRouteList);
    o.m_Ipv6FrameRouteListIsSet = true;
  }
  if (j.find("satBackhaulCategory") != j.end()) {
    j.at("satBackhaulCategory").get_to(o.m_SatBackhaulCategory);
    o.m_SatBackhaulCategoryIsSet = true;
  }
}

AccNetChId SmPolicyContextData::getAccNetChId() const { return m_AccNetChId; }
void SmPolicyContextData::setAccNetChId(AccNetChId const &value) {
  m_AccNetChId = value;
  m_AccNetChIdIsSet = true;
}
bool SmPolicyContextData::accNetChIdIsSet() const { return m_AccNetChIdIsSet; }
void SmPolicyContextData::unsetAccNetChId() { m_AccNetChIdIsSet = false; }
AccNetChargingAddress SmPolicyContextData::getChargEntityAddr() const {
  return m_ChargEntityAddr;
}
void SmPolicyContextData::setChargEntityAddr(
    AccNetChargingAddress const &value) {
  m_ChargEntityAddr = value;
  m_ChargEntityAddrIsSet = true;
}
bool SmPolicyContextData::chargEntityAddrIsSet() const {
  return m_ChargEntityAddrIsSet;
}
void SmPolicyContextData::unsetChargEntityAddr() {
  m_ChargEntityAddrIsSet = false;
}
std::string SmPolicyContextData::getGpsi() const { return m_Gpsi; }
void SmPolicyContextData::setGpsi(std::string const &value) {
  m_Gpsi = value;
  m_GpsiIsSet = true;
}
bool SmPolicyContextData::gpsiIsSet() const { return m_GpsiIsSet; }
void SmPolicyContextData::unsetGpsi() { m_GpsiIsSet = false; }
std::string SmPolicyContextData::getSupi() const { return m_Supi; }
void SmPolicyContextData::setSupi(std::string const &value) { m_Supi = value; }
bool SmPolicyContextData::isInvalidSupi() const { return m_InvalidSupi; }
void SmPolicyContextData::setInvalidSupi(bool const value) {
  m_InvalidSupi = value;
  m_InvalidSupiIsSet = true;
}
bool SmPolicyContextData::invalidSupiIsSet() const {
  return m_InvalidSupiIsSet;
}
void SmPolicyContextData::unsetInvalidSupi() { m_InvalidSupiIsSet = false; }
std::vector<std::string> &SmPolicyContextData::getInterGrpIds() {
  return m_InterGrpIds;
}
void SmPolicyContextData::setInterGrpIds(
    std::vector<std::string> const &value) {
  m_InterGrpIds = value;
  m_InterGrpIdsIsSet = true;
}
bool SmPolicyContextData::interGrpIdsIsSet() const {
  return m_InterGrpIdsIsSet;
}
void SmPolicyContextData::unsetInterGrpIds() { m_InterGrpIdsIsSet = false; }
int32_t SmPolicyContextData::getPduSessionId() const { return m_PduSessionId; }
void SmPolicyContextData::setPduSessionId(int32_t const value) {
  m_PduSessionId = value;
}
PduSessionType SmPolicyContextData::getPduSessionType() const {
  return m_PduSessionType;
}
void SmPolicyContextData::setPduSessionType(PduSessionType const &value) {
  m_PduSessionType = value;
}
std::string SmPolicyContextData::getChargingcharacteristics() const {
  return m_Chargingcharacteristics;
}
void SmPolicyContextData::setChargingcharacteristics(std::string const &value) {
  m_Chargingcharacteristics = value;
  m_ChargingcharacteristicsIsSet = true;
}
bool SmPolicyContextData::chargingcharacteristicsIsSet() const {
  return m_ChargingcharacteristicsIsSet;
}
void SmPolicyContextData::unsetChargingcharacteristics() {
  m_ChargingcharacteristicsIsSet = false;
}
std::string SmPolicyContextData::getDnn() const { return m_Dnn; }
void SmPolicyContextData::setDnn(std::string const &value) { m_Dnn = value; }
DnnSelectionMode SmPolicyContextData::getDnnSelMode() const {
  return m_DnnSelMode;
}
void SmPolicyContextData::setDnnSelMode(DnnSelectionMode const &value) {
  m_DnnSelMode = value;
  m_DnnSelModeIsSet = true;
}
bool SmPolicyContextData::dnnSelModeIsSet() const { return m_DnnSelModeIsSet; }
void SmPolicyContextData::unsetDnnSelMode() { m_DnnSelModeIsSet = false; }
std::string SmPolicyContextData::getNotificationUri() const {
  return m_NotificationUri;
}
void SmPolicyContextData::setNotificationUri(std::string const &value) {
  m_NotificationUri = value;
}
AccessType SmPolicyContextData::getAccessType() const { return m_AccessType; }
void SmPolicyContextData::setAccessType(AccessType const &value) {
  m_AccessType = value;
  m_AccessTypeIsSet = true;
}
bool SmPolicyContextData::accessTypeIsSet() const { return m_AccessTypeIsSet; }
void SmPolicyContextData::unsetAccessType() { m_AccessTypeIsSet = false; }
RatType SmPolicyContextData::getRatType() const { return m_RatType; }
void SmPolicyContextData::setRatType(RatType const &value) {
  m_RatType = value;
  m_RatTypeIsSet = true;
}
bool SmPolicyContextData::ratTypeIsSet() const { return m_RatTypeIsSet; }
void SmPolicyContextData::unsetRatType() { m_RatTypeIsSet = false; }
AdditionalAccessInfo SmPolicyContextData::getAddAccessInfo() const {
  return m_AddAccessInfo;
}
void SmPolicyContextData::setAddAccessInfo(AdditionalAccessInfo const &value) {
  m_AddAccessInfo = value;
  m_AddAccessInfoIsSet = true;
}
bool SmPolicyContextData::addAccessInfoIsSet() const {
  return m_AddAccessInfoIsSet;
}
void SmPolicyContextData::unsetAddAccessInfo() { m_AddAccessInfoIsSet = false; }
PlmnIdNid SmPolicyContextData::getServingNetwork() const {
  return m_ServingNetwork;
}
void SmPolicyContextData::setServingNetwork(PlmnIdNid const &value) {
  m_ServingNetwork = value;
  m_ServingNetworkIsSet = true;
}
bool SmPolicyContextData::servingNetworkIsSet() const {
  return m_ServingNetworkIsSet;
}
void SmPolicyContextData::unsetServingNetwork() {
  m_ServingNetworkIsSet = false;
}
UserLocation SmPolicyContextData::getUserLocationInfo() const {
  return m_UserLocationInfo;
}
void SmPolicyContextData::setUserLocationInfo(UserLocation const &value) {
  m_UserLocationInfo = value;
  m_UserLocationInfoIsSet = true;
}
bool SmPolicyContextData::userLocationInfoIsSet() const {
  return m_UserLocationInfoIsSet;
}
void SmPolicyContextData::unsetUserLocationInfo() {
  m_UserLocationInfoIsSet = false;
}
std::string SmPolicyContextData::getUeTimeZone() const { return m_UeTimeZone; }
void SmPolicyContextData::setUeTimeZone(std::string const &value) {
  m_UeTimeZone = value;
  m_UeTimeZoneIsSet = true;
}
bool SmPolicyContextData::ueTimeZoneIsSet() const { return m_UeTimeZoneIsSet; }
void SmPolicyContextData::unsetUeTimeZone() { m_UeTimeZoneIsSet = false; }
std::string SmPolicyContextData::getPei() const { return m_Pei; }
void SmPolicyContextData::setPei(std::string const &value) {
  m_Pei = value;
  m_PeiIsSet = true;
}
bool SmPolicyContextData::peiIsSet() const { return m_PeiIsSet; }
void SmPolicyContextData::unsetPei() { m_PeiIsSet = false; }
std::string SmPolicyContextData::getIpv4Address() const {
  return m_Ipv4Address;
}
void SmPolicyContextData::setIpv4Address(std::string const &value) {
  m_Ipv4Address = value;
  m_Ipv4AddressIsSet = true;
}
bool SmPolicyContextData::ipv4AddressIsSet() const {
  return m_Ipv4AddressIsSet;
}
void SmPolicyContextData::unsetIpv4Address() { m_Ipv4AddressIsSet = false; }
Ipv6Prefix SmPolicyContextData::getIpv6AddressPrefix() const {
  return m_Ipv6AddressPrefix;
}
void SmPolicyContextData::setIpv6AddressPrefix(Ipv6Prefix const &value) {
  m_Ipv6AddressPrefix = value;
  m_Ipv6AddressPrefixIsSet = true;
}
bool SmPolicyContextData::ipv6AddressPrefixIsSet() const {
  return m_Ipv6AddressPrefixIsSet;
}
void SmPolicyContextData::unsetIpv6AddressPrefix() {
  m_Ipv6AddressPrefixIsSet = false;
}
std::string SmPolicyContextData::getIpDomain() const { return m_IpDomain; }
void SmPolicyContextData::setIpDomain(std::string const &value) {
  m_IpDomain = value;
  m_IpDomainIsSet = true;
}
bool SmPolicyContextData::ipDomainIsSet() const { return m_IpDomainIsSet; }
void SmPolicyContextData::unsetIpDomain() { m_IpDomainIsSet = false; }
Ambr SmPolicyContextData::getSubsSessAmbr() const { return m_SubsSessAmbr; }
void SmPolicyContextData::setSubsSessAmbr(Ambr const &value) {
  m_SubsSessAmbr = value;
  m_SubsSessAmbrIsSet = true;
}
bool SmPolicyContextData::subsSessAmbrIsSet() const {
  return m_SubsSessAmbrIsSet;
}
void SmPolicyContextData::unsetSubsSessAmbr() { m_SubsSessAmbrIsSet = false; }
std::string SmPolicyContextData::getAuthProfIndex() const {
  return m_AuthProfIndex;
}
void SmPolicyContextData::setAuthProfIndex(std::string const &value) {
  m_AuthProfIndex = value;
  m_AuthProfIndexIsSet = true;
}
bool SmPolicyContextData::authProfIndexIsSet() const {
  return m_AuthProfIndexIsSet;
}
void SmPolicyContextData::unsetAuthProfIndex() { m_AuthProfIndexIsSet = false; }
SubscribedDefaultQos SmPolicyContextData::getSubsDefQos() const {
  return m_SubsDefQos;
}
void SmPolicyContextData::setSubsDefQos(SubscribedDefaultQos const &value) {
  m_SubsDefQos = value;
  m_SubsDefQosIsSet = true;
}
bool SmPolicyContextData::subsDefQosIsSet() const { return m_SubsDefQosIsSet; }
void SmPolicyContextData::unsetSubsDefQos() { m_SubsDefQosIsSet = false; }
VplmnQos SmPolicyContextData::getVplmnQos() const { return m_VplmnQos; }
void SmPolicyContextData::setVplmnQos(VplmnQos const &value) {
  m_VplmnQos = value;
  m_VplmnQosIsSet = true;
}
bool SmPolicyContextData::vplmnQosIsSet() const { return m_VplmnQosIsSet; }
void SmPolicyContextData::unsetVplmnQos() { m_VplmnQosIsSet = false; }
int32_t SmPolicyContextData::getNumOfPackFilter() const {
  return m_NumOfPackFilter;
}
void SmPolicyContextData::setNumOfPackFilter(int32_t const value) {
  m_NumOfPackFilter = value;
  m_NumOfPackFilterIsSet = true;
}
bool SmPolicyContextData::numOfPackFilterIsSet() const {
  return m_NumOfPackFilterIsSet;
}
void SmPolicyContextData::unsetNumOfPackFilter() {
  m_NumOfPackFilterIsSet = false;
}
bool SmPolicyContextData::isOnline() const { return m_Online; }
void SmPolicyContextData::setOnline(bool const value) {
  m_Online = value;
  m_OnlineIsSet = true;
}
bool SmPolicyContextData::onlineIsSet() const { return m_OnlineIsSet; }
void SmPolicyContextData::unsetOnline() { m_OnlineIsSet = false; }
bool SmPolicyContextData::isOffline() const { return m_Offline; }
void SmPolicyContextData::setOffline(bool const value) {
  m_Offline = value;
  m_OfflineIsSet = true;
}
bool SmPolicyContextData::offlineIsSet() const { return m_OfflineIsSet; }
void SmPolicyContextData::unsetOffline() { m_OfflineIsSet = false; }
bool SmPolicyContextData::isR3gppPsDataOffStatus() const {
  return m_r_3gppPsDataOffStatus;
}
void SmPolicyContextData::setR3gppPsDataOffStatus(bool const value) {
  m_r_3gppPsDataOffStatus = value;
  m_r_3gppPsDataOffStatusIsSet = true;
}
bool SmPolicyContextData::r3gppPsDataOffStatusIsSet() const {
  return m_r_3gppPsDataOffStatusIsSet;
}
void SmPolicyContextData::unsetr_3gppPsDataOffStatus() {
  m_r_3gppPsDataOffStatusIsSet = false;
}
bool SmPolicyContextData::isRefQosIndication() const {
  return m_RefQosIndication;
}
void SmPolicyContextData::setRefQosIndication(bool const value) {
  m_RefQosIndication = value;
  m_RefQosIndicationIsSet = true;
}
bool SmPolicyContextData::refQosIndicationIsSet() const {
  return m_RefQosIndicationIsSet;
}
void SmPolicyContextData::unsetRefQosIndication() {
  m_RefQosIndicationIsSet = false;
}
TraceData SmPolicyContextData::getTraceReq() const { return m_TraceReq; }
void SmPolicyContextData::setTraceReq(TraceData const &value) {
  m_TraceReq = value;
  m_TraceReqIsSet = true;
}
bool SmPolicyContextData::traceReqIsSet() const { return m_TraceReqIsSet; }
void SmPolicyContextData::unsetTraceReq() { m_TraceReqIsSet = false; }
Snssai SmPolicyContextData::getSliceInfo() const { return m_SliceInfo; }
void SmPolicyContextData::setSliceInfo(Snssai const &value) {
  m_SliceInfo = value;
}
QosFlowUsage SmPolicyContextData::getQosFlowUsage() const {
  return m_QosFlowUsage;
}
void SmPolicyContextData::setQosFlowUsage(QosFlowUsage const &value) {
  m_QosFlowUsage = value;
  m_QosFlowUsageIsSet = true;
}
bool SmPolicyContextData::qosFlowUsageIsSet() const {
  return m_QosFlowUsageIsSet;
}
void SmPolicyContextData::unsetQosFlowUsage() { m_QosFlowUsageIsSet = false; }
ServingNfIdentity SmPolicyContextData::getServNfId() const {
  return m_ServNfId;
}
void SmPolicyContextData::setServNfId(ServingNfIdentity const &value) {
  m_ServNfId = value;
  m_ServNfIdIsSet = true;
}
bool SmPolicyContextData::servNfIdIsSet() const { return m_ServNfIdIsSet; }
void SmPolicyContextData::unsetServNfId() { m_ServNfIdIsSet = false; }
std::string SmPolicyContextData::getSuppFeat() const { return m_SuppFeat; }
void SmPolicyContextData::setSuppFeat(std::string const &value) {
  m_SuppFeat = value;
  m_SuppFeatIsSet = true;
}
bool SmPolicyContextData::suppFeatIsSet() const { return m_SuppFeatIsSet; }
void SmPolicyContextData::unsetSuppFeat() { m_SuppFeatIsSet = false; }
std::string SmPolicyContextData::getSmfId() const { return m_SmfId; }
void SmPolicyContextData::setSmfId(std::string const &value) {
  m_SmfId = value;
  m_SmfIdIsSet = true;
}
bool SmPolicyContextData::smfIdIsSet() const { return m_SmfIdIsSet; }
void SmPolicyContextData::unsetSmfId() { m_SmfIdIsSet = false; }
std::string SmPolicyContextData::getRecoveryTime() const {
  return m_RecoveryTime;
}
void SmPolicyContextData::setRecoveryTime(std::string const &value) {
  m_RecoveryTime = value;
  m_RecoveryTimeIsSet = true;
}
bool SmPolicyContextData::recoveryTimeIsSet() const {
  return m_RecoveryTimeIsSet;
}
void SmPolicyContextData::unsetRecoveryTime() { m_RecoveryTimeIsSet = false; }
MaPduIndication SmPolicyContextData::getMaPduInd() const { return m_MaPduInd; }
void SmPolicyContextData::setMaPduInd(MaPduIndication const &value) {
  m_MaPduInd = value;
  m_MaPduIndIsSet = true;
}
bool SmPolicyContextData::maPduIndIsSet() const { return m_MaPduIndIsSet; }
void SmPolicyContextData::unsetMaPduInd() { m_MaPduIndIsSet = false; }
AtsssCapability SmPolicyContextData::getAtsssCapab() const {
  return m_AtsssCapab;
}
void SmPolicyContextData::setAtsssCapab(AtsssCapability const &value) {
  m_AtsssCapab = value;
  m_AtsssCapabIsSet = true;
}
bool SmPolicyContextData::atsssCapabIsSet() const { return m_AtsssCapabIsSet; }
void SmPolicyContextData::unsetAtsssCapab() { m_AtsssCapabIsSet = false; }
std::vector<std::string> &SmPolicyContextData::getIpv4FrameRouteList() {
  return m_Ipv4FrameRouteList;
}
void SmPolicyContextData::setIpv4FrameRouteList(
    std::vector<std::string> const &value) {
  m_Ipv4FrameRouteList = value;
  m_Ipv4FrameRouteListIsSet = true;
}
bool SmPolicyContextData::ipv4FrameRouteListIsSet() const {
  return m_Ipv4FrameRouteListIsSet;
}
void SmPolicyContextData::unsetIpv4FrameRouteList() {
  m_Ipv4FrameRouteListIsSet = false;
}
std::vector<Ipv6Prefix> &SmPolicyContextData::getIpv6FrameRouteList() {
  return m_Ipv6FrameRouteList;
}
void SmPolicyContextData::setIpv6FrameRouteList(
    std::vector<Ipv6Prefix> const &value) {
  m_Ipv6FrameRouteList = value;
  m_Ipv6FrameRouteListIsSet = true;
}
bool SmPolicyContextData::ipv6FrameRouteListIsSet() const {
  return m_Ipv6FrameRouteListIsSet;
}
void SmPolicyContextData::unsetIpv6FrameRouteList() {
  m_Ipv6FrameRouteListIsSet = false;
}
SatelliteBackhaulCategory SmPolicyContextData::getSatBackhaulCategory() const {
  return m_SatBackhaulCategory;
}
void SmPolicyContextData::setSatBackhaulCategory(
    SatelliteBackhaulCategory const &value) {
  m_SatBackhaulCategory = value;
  m_SatBackhaulCategoryIsSet = true;
}
bool SmPolicyContextData::satBackhaulCategoryIsSet() const {
  return m_SatBackhaulCategoryIsSet;
}
void SmPolicyContextData::unsetSatBackhaulCategory() {
  m_SatBackhaulCategoryIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
