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

#include "SmPolicyUpdateContextData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

SmPolicyUpdateContextData::SmPolicyUpdateContextData() {
  m_RepPolicyCtrlReqTriggersIsSet = false;
  m_AccNetChIdsIsSet = false;
  m_AccessTypeIsSet = false;
  m_RatTypeIsSet = false;
  m_AddAccessInfoIsSet = false;
  m_RelAccessInfoIsSet = false;
  m_ServingNetworkIsSet = false;
  m_UserLocationInfoIsSet = false;
  m_UeTimeZone = "";
  m_UeTimeZoneIsSet = false;
  m_RelIpv4Address = "";
  m_RelIpv4AddressIsSet = false;
  m_Ipv4Address = "";
  m_Ipv4AddressIsSet = false;
  m_IpDomain = "";
  m_IpDomainIsSet = false;
  m_Ipv6AddressPrefixIsSet = false;
  m_RelIpv6AddressPrefixIsSet = false;
  m_AddIpv6AddrPrefixesIsSet = false;
  m_AddRelIpv6AddrPrefixesIsSet = false;
  m_RelUeMac = "";
  m_RelUeMacIsSet = false;
  m_UeMac = "";
  m_UeMacIsSet = false;
  m_SubsSessAmbrIsSet = false;
  m_AuthProfIndex = "";
  m_AuthProfIndexIsSet = false;
  m_SubsDefQosIsSet = false;
  m_VplmnQosIsSet = false;
  m_NumOfPackFilter = 0;
  m_NumOfPackFilterIsSet = false;
  m_AccuUsageReportsIsSet = false;
  m_r_3gppPsDataOffStatus = false;
  m_r_3gppPsDataOffStatusIsSet = false;
  m_AppDetectionInfosIsSet = false;
  m_RuleReportsIsSet = false;
  m_SessRuleReportsIsSet = false;
  m_QncReportsIsSet = false;
  m_QosMonReportsIsSet = false;
  m_UserLocationInfoTime = "";
  m_UserLocationInfoTimeIsSet = false;
  m_RepPraInfosIsSet = false;
  m_UeInitResReqIsSet = false;
  m_RefQosIndication = false;
  m_RefQosIndicationIsSet = false;
  m_QosFlowUsageIsSet = false;
  m_CreditManageStatusIsSet = false;
  m_ServNfIdIsSet = false;
  m_TraceReqIsSet = false;
  m_MaPduIndIsSet = false;
  m_AtsssCapabIsSet = false;
  m_TsnBridgeInfoIsSet = false;
  m_TsnBridgeManContIsSet = false;
  m_TsnPortManContDsttIsSet = false;
  m_TsnPortManContNwttsIsSet = false;
  m_MulAddrInfosIsSet = false;
  m_PolicyDecFailureReportsIsSet = false;
  m_InvalidPolicyDecsIsSet = false;
  m_TrafficDescriptorsIsSet = false;
  m_PccRuleId = "";
  m_PccRuleIdIsSet = false;
  m_TypesOfNotifIsSet = false;
  m_InterGrpIdsIsSet = false;
}

SmPolicyUpdateContextData::~SmPolicyUpdateContextData() {}

void SmPolicyUpdateContextData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const SmPolicyUpdateContextData &o) {
  j = nlohmann::json();
  if (o.repPolicyCtrlReqTriggersIsSet() ||
      !o.m_RepPolicyCtrlReqTriggers.empty())
    j["repPolicyCtrlReqTriggers"] = o.m_RepPolicyCtrlReqTriggers;
  if (o.accNetChIdsIsSet() || !o.m_AccNetChIds.empty())
    j["accNetChIds"] = o.m_AccNetChIds;
  if (o.accessTypeIsSet())
    j["accessType"] = o.m_AccessType;
  if (o.ratTypeIsSet())
    j["ratType"] = o.m_RatType;
  if (o.addAccessInfoIsSet())
    j["addAccessInfo"] = o.m_AddAccessInfo;
  if (o.relAccessInfoIsSet())
    j["relAccessInfo"] = o.m_RelAccessInfo;
  if (o.servingNetworkIsSet())
    j["servingNetwork"] = o.m_ServingNetwork;
  if (o.userLocationInfoIsSet())
    j["userLocationInfo"] = o.m_UserLocationInfo;
  if (o.ueTimeZoneIsSet())
    j["ueTimeZone"] = o.m_UeTimeZone;
  if (o.relIpv4AddressIsSet())
    j["relIpv4Address"] = o.m_RelIpv4Address;
  if (o.ipv4AddressIsSet())
    j["ipv4Address"] = o.m_Ipv4Address;
  if (o.ipDomainIsSet())
    j["ipDomain"] = o.m_IpDomain;
  if (o.ipv6AddressPrefixIsSet())
    j["ipv6AddressPrefix"] = o.m_Ipv6AddressPrefix;
  if (o.relIpv6AddressPrefixIsSet())
    j["relIpv6AddressPrefix"] = o.m_RelIpv6AddressPrefix;
  if (o.addIpv6AddrPrefixesIsSet())
    j["addIpv6AddrPrefixes"] = o.m_AddIpv6AddrPrefixes;
  if (o.addRelIpv6AddrPrefixesIsSet())
    j["addRelIpv6AddrPrefixes"] = o.m_AddRelIpv6AddrPrefixes;
  if (o.relUeMacIsSet())
    j["relUeMac"] = o.m_RelUeMac;
  if (o.ueMacIsSet())
    j["ueMac"] = o.m_UeMac;
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
  if (o.accuUsageReportsIsSet() || !o.m_AccuUsageReports.empty())
    j["accuUsageReports"] = o.m_AccuUsageReports;
  if (o.r3gppPsDataOffStatusIsSet())
    j["3gppPsDataOffStatus"] = o.m_r_3gppPsDataOffStatus;
  if (o.appDetectionInfosIsSet() || !o.m_AppDetectionInfos.empty())
    j["appDetectionInfos"] = o.m_AppDetectionInfos;
  if (o.ruleReportsIsSet() || !o.m_RuleReports.empty())
    j["ruleReports"] = o.m_RuleReports;
  if (o.sessRuleReportsIsSet() || !o.m_SessRuleReports.empty())
    j["sessRuleReports"] = o.m_SessRuleReports;
  if (o.qncReportsIsSet() || !o.m_QncReports.empty())
    j["qncReports"] = o.m_QncReports;
  if (o.qosMonReportsIsSet() || !o.m_QosMonReports.empty())
    j["qosMonReports"] = o.m_QosMonReports;
  if (o.userLocationInfoTimeIsSet())
    j["userLocationInfoTime"] = o.m_UserLocationInfoTime;
  if (o.repPraInfosIsSet() || !o.m_RepPraInfos.empty())
    j["repPraInfos"] = o.m_RepPraInfos;
  if (o.ueInitResReqIsSet())
    j["ueInitResReq"] = o.m_UeInitResReq;
  if (o.refQosIndicationIsSet())
    j["refQosIndication"] = o.m_RefQosIndication;
  if (o.qosFlowUsageIsSet())
    j["qosFlowUsage"] = o.m_QosFlowUsage;
  if (o.creditManageStatusIsSet())
    j["creditManageStatus"] = o.m_CreditManageStatus;
  if (o.servNfIdIsSet())
    j["servNfId"] = o.m_ServNfId;
  if (o.traceReqIsSet())
    j["traceReq"] = o.m_TraceReq;
  if (o.maPduIndIsSet())
    j["maPduInd"] = o.m_MaPduInd;
  if (o.atsssCapabIsSet())
    j["atsssCapab"] = o.m_AtsssCapab;
  if (o.tsnBridgeInfoIsSet())
    j["tsnBridgeInfo"] = o.m_TsnBridgeInfo;
  if (o.tsnBridgeManContIsSet())
    j["tsnBridgeManCont"] = o.m_TsnBridgeManCont;
  if (o.tsnPortManContDsttIsSet())
    j["tsnPortManContDstt"] = o.m_TsnPortManContDstt;
  if (o.tsnPortManContNwttsIsSet() || !o.m_TsnPortManContNwtts.empty())
    j["tsnPortManContNwtts"] = o.m_TsnPortManContNwtts;
  if (o.mulAddrInfosIsSet() || !o.m_MulAddrInfos.empty())
    j["mulAddrInfos"] = o.m_MulAddrInfos;
  if (o.policyDecFailureReportsIsSet() || !o.m_PolicyDecFailureReports.empty())
    j["policyDecFailureReports"] = o.m_PolicyDecFailureReports;
  if (o.invalidPolicyDecsIsSet() || !o.m_InvalidPolicyDecs.empty())
    j["invalidPolicyDecs"] = o.m_InvalidPolicyDecs;
  if (o.trafficDescriptorsIsSet() || !o.m_TrafficDescriptors.empty())
    j["trafficDescriptors"] = o.m_TrafficDescriptors;
  if (o.pccRuleIdIsSet())
    j["pccRuleId"] = o.m_PccRuleId;
  if (o.typesOfNotifIsSet() || !o.m_TypesOfNotif.empty())
    j["typesOfNotif"] = o.m_TypesOfNotif;
  if (o.interGrpIdsIsSet() || !o.m_InterGrpIds.empty())
    j["interGrpIds"] = o.m_InterGrpIds;
}

void from_json(const nlohmann::json &j, SmPolicyUpdateContextData &o) {
  if (j.find("repPolicyCtrlReqTriggers") != j.end()) {
    j.at("repPolicyCtrlReqTriggers").get_to(o.m_RepPolicyCtrlReqTriggers);
    o.m_RepPolicyCtrlReqTriggersIsSet = true;
  }
  if (j.find("accNetChIds") != j.end()) {
    j.at("accNetChIds").get_to(o.m_AccNetChIds);
    o.m_AccNetChIdsIsSet = true;
  }
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
  if (j.find("relAccessInfo") != j.end()) {
    j.at("relAccessInfo").get_to(o.m_RelAccessInfo);
    o.m_RelAccessInfoIsSet = true;
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
  if (j.find("relIpv4Address") != j.end()) {
    j.at("relIpv4Address").get_to(o.m_RelIpv4Address);
    o.m_RelIpv4AddressIsSet = true;
  }
  if (j.find("ipv4Address") != j.end()) {
    j.at("ipv4Address").get_to(o.m_Ipv4Address);
    o.m_Ipv4AddressIsSet = true;
  }
  if (j.find("ipDomain") != j.end()) {
    j.at("ipDomain").get_to(o.m_IpDomain);
    o.m_IpDomainIsSet = true;
  }
  if (j.find("ipv6AddressPrefix") != j.end()) {
    j.at("ipv6AddressPrefix").get_to(o.m_Ipv6AddressPrefix);
    o.m_Ipv6AddressPrefixIsSet = true;
  }
  if (j.find("relIpv6AddressPrefix") != j.end()) {
    j.at("relIpv6AddressPrefix").get_to(o.m_RelIpv6AddressPrefix);
    o.m_RelIpv6AddressPrefixIsSet = true;
  }
  if (j.find("addIpv6AddrPrefixes") != j.end()) {
    j.at("addIpv6AddrPrefixes").get_to(o.m_AddIpv6AddrPrefixes);
    o.m_AddIpv6AddrPrefixesIsSet = true;
  }
  if (j.find("addRelIpv6AddrPrefixes") != j.end()) {
    j.at("addRelIpv6AddrPrefixes").get_to(o.m_AddRelIpv6AddrPrefixes);
    o.m_AddRelIpv6AddrPrefixesIsSet = true;
  }
  if (j.find("relUeMac") != j.end()) {
    j.at("relUeMac").get_to(o.m_RelUeMac);
    o.m_RelUeMacIsSet = true;
  }
  if (j.find("ueMac") != j.end()) {
    j.at("ueMac").get_to(o.m_UeMac);
    o.m_UeMacIsSet = true;
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
  if (j.find("accuUsageReports") != j.end()) {
    j.at("accuUsageReports").get_to(o.m_AccuUsageReports);
    o.m_AccuUsageReportsIsSet = true;
  }
  if (j.find("3gppPsDataOffStatus") != j.end()) {
    j.at("3gppPsDataOffStatus").get_to(o.m_r_3gppPsDataOffStatus);
    o.m_r_3gppPsDataOffStatusIsSet = true;
  }
  if (j.find("appDetectionInfos") != j.end()) {
    j.at("appDetectionInfos").get_to(o.m_AppDetectionInfos);
    o.m_AppDetectionInfosIsSet = true;
  }
  if (j.find("ruleReports") != j.end()) {
    j.at("ruleReports").get_to(o.m_RuleReports);
    o.m_RuleReportsIsSet = true;
  }
  if (j.find("sessRuleReports") != j.end()) {
    j.at("sessRuleReports").get_to(o.m_SessRuleReports);
    o.m_SessRuleReportsIsSet = true;
  }
  if (j.find("qncReports") != j.end()) {
    j.at("qncReports").get_to(o.m_QncReports);
    o.m_QncReportsIsSet = true;
  }
  if (j.find("qosMonReports") != j.end()) {
    j.at("qosMonReports").get_to(o.m_QosMonReports);
    o.m_QosMonReportsIsSet = true;
  }
  if (j.find("userLocationInfoTime") != j.end()) {
    j.at("userLocationInfoTime").get_to(o.m_UserLocationInfoTime);
    o.m_UserLocationInfoTimeIsSet = true;
  }
  if (j.find("repPraInfos") != j.end()) {
    j.at("repPraInfos").get_to(o.m_RepPraInfos);
    o.m_RepPraInfosIsSet = true;
  }
  if (j.find("ueInitResReq") != j.end()) {
    j.at("ueInitResReq").get_to(o.m_UeInitResReq);
    o.m_UeInitResReqIsSet = true;
  }
  if (j.find("refQosIndication") != j.end()) {
    j.at("refQosIndication").get_to(o.m_RefQosIndication);
    o.m_RefQosIndicationIsSet = true;
  }
  if (j.find("qosFlowUsage") != j.end()) {
    j.at("qosFlowUsage").get_to(o.m_QosFlowUsage);
    o.m_QosFlowUsageIsSet = true;
  }
  if (j.find("creditManageStatus") != j.end()) {
    j.at("creditManageStatus").get_to(o.m_CreditManageStatus);
    o.m_CreditManageStatusIsSet = true;
  }
  if (j.find("servNfId") != j.end()) {
    j.at("servNfId").get_to(o.m_ServNfId);
    o.m_ServNfIdIsSet = true;
  }
  if (j.find("traceReq") != j.end()) {
    j.at("traceReq").get_to(o.m_TraceReq);
    o.m_TraceReqIsSet = true;
  }
  if (j.find("maPduInd") != j.end()) {
    j.at("maPduInd").get_to(o.m_MaPduInd);
    o.m_MaPduIndIsSet = true;
  }
  if (j.find("atsssCapab") != j.end()) {
    j.at("atsssCapab").get_to(o.m_AtsssCapab);
    o.m_AtsssCapabIsSet = true;
  }
  if (j.find("tsnBridgeInfo") != j.end()) {
    j.at("tsnBridgeInfo").get_to(o.m_TsnBridgeInfo);
    o.m_TsnBridgeInfoIsSet = true;
  }
  if (j.find("tsnBridgeManCont") != j.end()) {
    j.at("tsnBridgeManCont").get_to(o.m_TsnBridgeManCont);
    o.m_TsnBridgeManContIsSet = true;
  }
  if (j.find("tsnPortManContDstt") != j.end()) {
    j.at("tsnPortManContDstt").get_to(o.m_TsnPortManContDstt);
    o.m_TsnPortManContDsttIsSet = true;
  }
  if (j.find("tsnPortManContNwtts") != j.end()) {
    j.at("tsnPortManContNwtts").get_to(o.m_TsnPortManContNwtts);
    o.m_TsnPortManContNwttsIsSet = true;
  }
  if (j.find("mulAddrInfos") != j.end()) {
    j.at("mulAddrInfos").get_to(o.m_MulAddrInfos);
    o.m_MulAddrInfosIsSet = true;
  }
  if (j.find("policyDecFailureReports") != j.end()) {
    j.at("policyDecFailureReports").get_to(o.m_PolicyDecFailureReports);
    o.m_PolicyDecFailureReportsIsSet = true;
  }
  if (j.find("invalidPolicyDecs") != j.end()) {
    j.at("invalidPolicyDecs").get_to(o.m_InvalidPolicyDecs);
    o.m_InvalidPolicyDecsIsSet = true;
  }
  if (j.find("trafficDescriptors") != j.end()) {
    j.at("trafficDescriptors").get_to(o.m_TrafficDescriptors);
    o.m_TrafficDescriptorsIsSet = true;
  }
  if (j.find("pccRuleId") != j.end()) {
    j.at("pccRuleId").get_to(o.m_PccRuleId);
    o.m_PccRuleIdIsSet = true;
  }
  if (j.find("typesOfNotif") != j.end()) {
    j.at("typesOfNotif").get_to(o.m_TypesOfNotif);
    o.m_TypesOfNotifIsSet = true;
  }
  if (j.find("interGrpIds") != j.end()) {
    j.at("interGrpIds").get_to(o.m_InterGrpIds);
    o.m_InterGrpIdsIsSet = true;
  }
}

std::vector<PolicyControlRequestTrigger> &
SmPolicyUpdateContextData::getRepPolicyCtrlReqTriggers() {
  return m_RepPolicyCtrlReqTriggers;
}
void SmPolicyUpdateContextData::setRepPolicyCtrlReqTriggers(
    std::vector<PolicyControlRequestTrigger> const &value) {
  m_RepPolicyCtrlReqTriggers = value;
  m_RepPolicyCtrlReqTriggersIsSet = true;
}
bool SmPolicyUpdateContextData::repPolicyCtrlReqTriggersIsSet() const {
  return m_RepPolicyCtrlReqTriggersIsSet;
}
void SmPolicyUpdateContextData::unsetRepPolicyCtrlReqTriggers() {
  m_RepPolicyCtrlReqTriggersIsSet = false;
}
std::vector<AccNetChId> &SmPolicyUpdateContextData::getAccNetChIds() {
  return m_AccNetChIds;
}
void SmPolicyUpdateContextData::setAccNetChIds(
    std::vector<AccNetChId> const &value) {
  m_AccNetChIds = value;
  m_AccNetChIdsIsSet = true;
}
bool SmPolicyUpdateContextData::accNetChIdsIsSet() const {
  return m_AccNetChIdsIsSet;
}
void SmPolicyUpdateContextData::unsetAccNetChIds() {
  m_AccNetChIdsIsSet = false;
}
AccessType SmPolicyUpdateContextData::getAccessType() const {
  return m_AccessType;
}
void SmPolicyUpdateContextData::setAccessType(AccessType const &value) {
  m_AccessType = value;
  m_AccessTypeIsSet = true;
}
bool SmPolicyUpdateContextData::accessTypeIsSet() const {
  return m_AccessTypeIsSet;
}
void SmPolicyUpdateContextData::unsetAccessType() { m_AccessTypeIsSet = false; }
RatType SmPolicyUpdateContextData::getRatType() const { return m_RatType; }
void SmPolicyUpdateContextData::setRatType(RatType const &value) {
  m_RatType = value;
  m_RatTypeIsSet = true;
}
bool SmPolicyUpdateContextData::ratTypeIsSet() const { return m_RatTypeIsSet; }
void SmPolicyUpdateContextData::unsetRatType() { m_RatTypeIsSet = false; }
AdditionalAccessInfo SmPolicyUpdateContextData::getAddAccessInfo() const {
  return m_AddAccessInfo;
}
void SmPolicyUpdateContextData::setAddAccessInfo(
    AdditionalAccessInfo const &value) {
  m_AddAccessInfo = value;
  m_AddAccessInfoIsSet = true;
}
bool SmPolicyUpdateContextData::addAccessInfoIsSet() const {
  return m_AddAccessInfoIsSet;
}
void SmPolicyUpdateContextData::unsetAddAccessInfo() {
  m_AddAccessInfoIsSet = false;
}
AdditionalAccessInfo SmPolicyUpdateContextData::getRelAccessInfo() const {
  return m_RelAccessInfo;
}
void SmPolicyUpdateContextData::setRelAccessInfo(
    AdditionalAccessInfo const &value) {
  m_RelAccessInfo = value;
  m_RelAccessInfoIsSet = true;
}
bool SmPolicyUpdateContextData::relAccessInfoIsSet() const {
  return m_RelAccessInfoIsSet;
}
void SmPolicyUpdateContextData::unsetRelAccessInfo() {
  m_RelAccessInfoIsSet = false;
}
PlmnIdNid SmPolicyUpdateContextData::getServingNetwork() const {
  return m_ServingNetwork;
}
void SmPolicyUpdateContextData::setServingNetwork(PlmnIdNid const &value) {
  m_ServingNetwork = value;
  m_ServingNetworkIsSet = true;
}
bool SmPolicyUpdateContextData::servingNetworkIsSet() const {
  return m_ServingNetworkIsSet;
}
void SmPolicyUpdateContextData::unsetServingNetwork() {
  m_ServingNetworkIsSet = false;
}
UserLocation SmPolicyUpdateContextData::getUserLocationInfo() const {
  return m_UserLocationInfo;
}
void SmPolicyUpdateContextData::setUserLocationInfo(UserLocation const &value) {
  m_UserLocationInfo = value;
  m_UserLocationInfoIsSet = true;
}
bool SmPolicyUpdateContextData::userLocationInfoIsSet() const {
  return m_UserLocationInfoIsSet;
}
void SmPolicyUpdateContextData::unsetUserLocationInfo() {
  m_UserLocationInfoIsSet = false;
}
std::string SmPolicyUpdateContextData::getUeTimeZone() const {
  return m_UeTimeZone;
}
void SmPolicyUpdateContextData::setUeTimeZone(std::string const &value) {
  m_UeTimeZone = value;
  m_UeTimeZoneIsSet = true;
}
bool SmPolicyUpdateContextData::ueTimeZoneIsSet() const {
  return m_UeTimeZoneIsSet;
}
void SmPolicyUpdateContextData::unsetUeTimeZone() { m_UeTimeZoneIsSet = false; }
std::string SmPolicyUpdateContextData::getRelIpv4Address() const {
  return m_RelIpv4Address;
}
void SmPolicyUpdateContextData::setRelIpv4Address(std::string const &value) {
  m_RelIpv4Address = value;
  m_RelIpv4AddressIsSet = true;
}
bool SmPolicyUpdateContextData::relIpv4AddressIsSet() const {
  return m_RelIpv4AddressIsSet;
}
void SmPolicyUpdateContextData::unsetRelIpv4Address() {
  m_RelIpv4AddressIsSet = false;
}
std::string SmPolicyUpdateContextData::getIpv4Address() const {
  return m_Ipv4Address;
}
void SmPolicyUpdateContextData::setIpv4Address(std::string const &value) {
  m_Ipv4Address = value;
  m_Ipv4AddressIsSet = true;
}
bool SmPolicyUpdateContextData::ipv4AddressIsSet() const {
  return m_Ipv4AddressIsSet;
}
void SmPolicyUpdateContextData::unsetIpv4Address() {
  m_Ipv4AddressIsSet = false;
}
std::string SmPolicyUpdateContextData::getIpDomain() const {
  return m_IpDomain;
}
void SmPolicyUpdateContextData::setIpDomain(std::string const &value) {
  m_IpDomain = value;
  m_IpDomainIsSet = true;
}
bool SmPolicyUpdateContextData::ipDomainIsSet() const {
  return m_IpDomainIsSet;
}
void SmPolicyUpdateContextData::unsetIpDomain() { m_IpDomainIsSet = false; }
Ipv6Prefix SmPolicyUpdateContextData::getIpv6AddressPrefix() const {
  return m_Ipv6AddressPrefix;
}
void SmPolicyUpdateContextData::setIpv6AddressPrefix(Ipv6Prefix const &value) {
  m_Ipv6AddressPrefix = value;
  m_Ipv6AddressPrefixIsSet = true;
}
bool SmPolicyUpdateContextData::ipv6AddressPrefixIsSet() const {
  return m_Ipv6AddressPrefixIsSet;
}
void SmPolicyUpdateContextData::unsetIpv6AddressPrefix() {
  m_Ipv6AddressPrefixIsSet = false;
}
Ipv6Prefix SmPolicyUpdateContextData::getRelIpv6AddressPrefix() const {
  return m_RelIpv6AddressPrefix;
}
void SmPolicyUpdateContextData::setRelIpv6AddressPrefix(
    Ipv6Prefix const &value) {
  m_RelIpv6AddressPrefix = value;
  m_RelIpv6AddressPrefixIsSet = true;
}
bool SmPolicyUpdateContextData::relIpv6AddressPrefixIsSet() const {
  return m_RelIpv6AddressPrefixIsSet;
}
void SmPolicyUpdateContextData::unsetRelIpv6AddressPrefix() {
  m_RelIpv6AddressPrefixIsSet = false;
}
Ipv6Prefix SmPolicyUpdateContextData::getAddIpv6AddrPrefixes() const {
  return m_AddIpv6AddrPrefixes;
}
void SmPolicyUpdateContextData::setAddIpv6AddrPrefixes(
    Ipv6Prefix const &value) {
  m_AddIpv6AddrPrefixes = value;
  m_AddIpv6AddrPrefixesIsSet = true;
}
bool SmPolicyUpdateContextData::addIpv6AddrPrefixesIsSet() const {
  return m_AddIpv6AddrPrefixesIsSet;
}
void SmPolicyUpdateContextData::unsetAddIpv6AddrPrefixes() {
  m_AddIpv6AddrPrefixesIsSet = false;
}
Ipv6Prefix SmPolicyUpdateContextData::getAddRelIpv6AddrPrefixes() const {
  return m_AddRelIpv6AddrPrefixes;
}
void SmPolicyUpdateContextData::setAddRelIpv6AddrPrefixes(
    Ipv6Prefix const &value) {
  m_AddRelIpv6AddrPrefixes = value;
  m_AddRelIpv6AddrPrefixesIsSet = true;
}
bool SmPolicyUpdateContextData::addRelIpv6AddrPrefixesIsSet() const {
  return m_AddRelIpv6AddrPrefixesIsSet;
}
void SmPolicyUpdateContextData::unsetAddRelIpv6AddrPrefixes() {
  m_AddRelIpv6AddrPrefixesIsSet = false;
}
std::string SmPolicyUpdateContextData::getRelUeMac() const {
  return m_RelUeMac;
}
void SmPolicyUpdateContextData::setRelUeMac(std::string const &value) {
  m_RelUeMac = value;
  m_RelUeMacIsSet = true;
}
bool SmPolicyUpdateContextData::relUeMacIsSet() const {
  return m_RelUeMacIsSet;
}
void SmPolicyUpdateContextData::unsetRelUeMac() { m_RelUeMacIsSet = false; }
std::string SmPolicyUpdateContextData::getUeMac() const { return m_UeMac; }
void SmPolicyUpdateContextData::setUeMac(std::string const &value) {
  m_UeMac = value;
  m_UeMacIsSet = true;
}
bool SmPolicyUpdateContextData::ueMacIsSet() const { return m_UeMacIsSet; }
void SmPolicyUpdateContextData::unsetUeMac() { m_UeMacIsSet = false; }
Ambr SmPolicyUpdateContextData::getSubsSessAmbr() const {
  return m_SubsSessAmbr;
}
void SmPolicyUpdateContextData::setSubsSessAmbr(Ambr const &value) {
  m_SubsSessAmbr = value;
  m_SubsSessAmbrIsSet = true;
}
bool SmPolicyUpdateContextData::subsSessAmbrIsSet() const {
  return m_SubsSessAmbrIsSet;
}
void SmPolicyUpdateContextData::unsetSubsSessAmbr() {
  m_SubsSessAmbrIsSet = false;
}
std::string SmPolicyUpdateContextData::getAuthProfIndex() const {
  return m_AuthProfIndex;
}
void SmPolicyUpdateContextData::setAuthProfIndex(std::string const &value) {
  m_AuthProfIndex = value;
  m_AuthProfIndexIsSet = true;
}
bool SmPolicyUpdateContextData::authProfIndexIsSet() const {
  return m_AuthProfIndexIsSet;
}
void SmPolicyUpdateContextData::unsetAuthProfIndex() {
  m_AuthProfIndexIsSet = false;
}
SubscribedDefaultQos SmPolicyUpdateContextData::getSubsDefQos() const {
  return m_SubsDefQos;
}
void SmPolicyUpdateContextData::setSubsDefQos(
    SubscribedDefaultQos const &value) {
  m_SubsDefQos = value;
  m_SubsDefQosIsSet = true;
}
bool SmPolicyUpdateContextData::subsDefQosIsSet() const {
  return m_SubsDefQosIsSet;
}
void SmPolicyUpdateContextData::unsetSubsDefQos() { m_SubsDefQosIsSet = false; }
VplmnQos SmPolicyUpdateContextData::getVplmnQos() const { return m_VplmnQos; }
void SmPolicyUpdateContextData::setVplmnQos(VplmnQos const &value) {
  m_VplmnQos = value;
  m_VplmnQosIsSet = true;
}
bool SmPolicyUpdateContextData::vplmnQosIsSet() const {
  return m_VplmnQosIsSet;
}
void SmPolicyUpdateContextData::unsetVplmnQos() { m_VplmnQosIsSet = false; }
int32_t SmPolicyUpdateContextData::getNumOfPackFilter() const {
  return m_NumOfPackFilter;
}
void SmPolicyUpdateContextData::setNumOfPackFilter(int32_t const value) {
  m_NumOfPackFilter = value;
  m_NumOfPackFilterIsSet = true;
}
bool SmPolicyUpdateContextData::numOfPackFilterIsSet() const {
  return m_NumOfPackFilterIsSet;
}
void SmPolicyUpdateContextData::unsetNumOfPackFilter() {
  m_NumOfPackFilterIsSet = false;
}
std::vector<AccuUsageReport> &SmPolicyUpdateContextData::getAccuUsageReports() {
  return m_AccuUsageReports;
}
void SmPolicyUpdateContextData::setAccuUsageReports(
    std::vector<AccuUsageReport> const &value) {
  m_AccuUsageReports = value;
  m_AccuUsageReportsIsSet = true;
}
bool SmPolicyUpdateContextData::accuUsageReportsIsSet() const {
  return m_AccuUsageReportsIsSet;
}
void SmPolicyUpdateContextData::unsetAccuUsageReports() {
  m_AccuUsageReportsIsSet = false;
}
bool SmPolicyUpdateContextData::isR3gppPsDataOffStatus() const {
  return m_r_3gppPsDataOffStatus;
}
void SmPolicyUpdateContextData::setR3gppPsDataOffStatus(bool const value) {
  m_r_3gppPsDataOffStatus = value;
  m_r_3gppPsDataOffStatusIsSet = true;
}
bool SmPolicyUpdateContextData::r3gppPsDataOffStatusIsSet() const {
  return m_r_3gppPsDataOffStatusIsSet;
}
void SmPolicyUpdateContextData::unsetr_3gppPsDataOffStatus() {
  m_r_3gppPsDataOffStatusIsSet = false;
}
std::vector<AppDetectionInfo> &
SmPolicyUpdateContextData::getAppDetectionInfos() {
  return m_AppDetectionInfos;
}
void SmPolicyUpdateContextData::setAppDetectionInfos(
    std::vector<AppDetectionInfo> const &value) {
  m_AppDetectionInfos = value;
  m_AppDetectionInfosIsSet = true;
}
bool SmPolicyUpdateContextData::appDetectionInfosIsSet() const {
  return m_AppDetectionInfosIsSet;
}
void SmPolicyUpdateContextData::unsetAppDetectionInfos() {
  m_AppDetectionInfosIsSet = false;
}
std::vector<RuleReport> &SmPolicyUpdateContextData::getRuleReports() {
  return m_RuleReports;
}
void SmPolicyUpdateContextData::setRuleReports(
    std::vector<RuleReport> const &value) {
  m_RuleReports = value;
  m_RuleReportsIsSet = true;
}
bool SmPolicyUpdateContextData::ruleReportsIsSet() const {
  return m_RuleReportsIsSet;
}
void SmPolicyUpdateContextData::unsetRuleReports() {
  m_RuleReportsIsSet = false;
}
std::vector<SessionRuleReport> &
SmPolicyUpdateContextData::getSessRuleReports() {
  return m_SessRuleReports;
}
void SmPolicyUpdateContextData::setSessRuleReports(
    std::vector<SessionRuleReport> const &value) {
  m_SessRuleReports = value;
  m_SessRuleReportsIsSet = true;
}
bool SmPolicyUpdateContextData::sessRuleReportsIsSet() const {
  return m_SessRuleReportsIsSet;
}
void SmPolicyUpdateContextData::unsetSessRuleReports() {
  m_SessRuleReportsIsSet = false;
}
std::vector<QosNotificationControlInfo> &
SmPolicyUpdateContextData::getQncReports() {
  return m_QncReports;
}
void SmPolicyUpdateContextData::setQncReports(
    std::vector<QosNotificationControlInfo> const &value) {
  m_QncReports = value;
  m_QncReportsIsSet = true;
}
bool SmPolicyUpdateContextData::qncReportsIsSet() const {
  return m_QncReportsIsSet;
}
void SmPolicyUpdateContextData::unsetQncReports() { m_QncReportsIsSet = false; }
std::vector<QosMonitoringReport> &
SmPolicyUpdateContextData::getQosMonReports() {
  return m_QosMonReports;
}
void SmPolicyUpdateContextData::setQosMonReports(
    std::vector<QosMonitoringReport> const &value) {
  m_QosMonReports = value;
  m_QosMonReportsIsSet = true;
}
bool SmPolicyUpdateContextData::qosMonReportsIsSet() const {
  return m_QosMonReportsIsSet;
}
void SmPolicyUpdateContextData::unsetQosMonReports() {
  m_QosMonReportsIsSet = false;
}
std::string SmPolicyUpdateContextData::getUserLocationInfoTime() const {
  return m_UserLocationInfoTime;
}
void SmPolicyUpdateContextData::setUserLocationInfoTime(
    std::string const &value) {
  m_UserLocationInfoTime = value;
  m_UserLocationInfoTimeIsSet = true;
}
bool SmPolicyUpdateContextData::userLocationInfoTimeIsSet() const {
  return m_UserLocationInfoTimeIsSet;
}
void SmPolicyUpdateContextData::unsetUserLocationInfoTime() {
  m_UserLocationInfoTimeIsSet = false;
}
std::map<std::string, PresenceInfo> &
SmPolicyUpdateContextData::getRepPraInfos() {
  return m_RepPraInfos;
}
void SmPolicyUpdateContextData::setRepPraInfos(
    std::map<std::string, PresenceInfo> const &value) {
  m_RepPraInfos = value;
  m_RepPraInfosIsSet = true;
}
bool SmPolicyUpdateContextData::repPraInfosIsSet() const {
  return m_RepPraInfosIsSet;
}
void SmPolicyUpdateContextData::unsetRepPraInfos() {
  m_RepPraInfosIsSet = false;
}
UeInitiatedResourceRequest SmPolicyUpdateContextData::getUeInitResReq() const {
  return m_UeInitResReq;
}
void SmPolicyUpdateContextData::setUeInitResReq(
    UeInitiatedResourceRequest const &value) {
  m_UeInitResReq = value;
  m_UeInitResReqIsSet = true;
}
bool SmPolicyUpdateContextData::ueInitResReqIsSet() const {
  return m_UeInitResReqIsSet;
}
void SmPolicyUpdateContextData::unsetUeInitResReq() {
  m_UeInitResReqIsSet = false;
}
bool SmPolicyUpdateContextData::isRefQosIndication() const {
  return m_RefQosIndication;
}
void SmPolicyUpdateContextData::setRefQosIndication(bool const value) {
  m_RefQosIndication = value;
  m_RefQosIndicationIsSet = true;
}
bool SmPolicyUpdateContextData::refQosIndicationIsSet() const {
  return m_RefQosIndicationIsSet;
}
void SmPolicyUpdateContextData::unsetRefQosIndication() {
  m_RefQosIndicationIsSet = false;
}
QosFlowUsage SmPolicyUpdateContextData::getQosFlowUsage() const {
  return m_QosFlowUsage;
}
void SmPolicyUpdateContextData::setQosFlowUsage(QosFlowUsage const &value) {
  m_QosFlowUsage = value;
  m_QosFlowUsageIsSet = true;
}
bool SmPolicyUpdateContextData::qosFlowUsageIsSet() const {
  return m_QosFlowUsageIsSet;
}
void SmPolicyUpdateContextData::unsetQosFlowUsage() {
  m_QosFlowUsageIsSet = false;
}
CreditManagementStatus
SmPolicyUpdateContextData::getCreditManageStatus() const {
  return m_CreditManageStatus;
}
void SmPolicyUpdateContextData::setCreditManageStatus(
    CreditManagementStatus const &value) {
  m_CreditManageStatus = value;
  m_CreditManageStatusIsSet = true;
}
bool SmPolicyUpdateContextData::creditManageStatusIsSet() const {
  return m_CreditManageStatusIsSet;
}
void SmPolicyUpdateContextData::unsetCreditManageStatus() {
  m_CreditManageStatusIsSet = false;
}
ServingNfIdentity SmPolicyUpdateContextData::getServNfId() const {
  return m_ServNfId;
}
void SmPolicyUpdateContextData::setServNfId(ServingNfIdentity const &value) {
  m_ServNfId = value;
  m_ServNfIdIsSet = true;
}
bool SmPolicyUpdateContextData::servNfIdIsSet() const {
  return m_ServNfIdIsSet;
}
void SmPolicyUpdateContextData::unsetServNfId() { m_ServNfIdIsSet = false; }
TraceData SmPolicyUpdateContextData::getTraceReq() const { return m_TraceReq; }
void SmPolicyUpdateContextData::setTraceReq(TraceData const &value) {
  m_TraceReq = value;
  m_TraceReqIsSet = true;
}
bool SmPolicyUpdateContextData::traceReqIsSet() const {
  return m_TraceReqIsSet;
}
void SmPolicyUpdateContextData::unsetTraceReq() { m_TraceReqIsSet = false; }
MaPduIndication SmPolicyUpdateContextData::getMaPduInd() const {
  return m_MaPduInd;
}
void SmPolicyUpdateContextData::setMaPduInd(MaPduIndication const &value) {
  m_MaPduInd = value;
  m_MaPduIndIsSet = true;
}
bool SmPolicyUpdateContextData::maPduIndIsSet() const {
  return m_MaPduIndIsSet;
}
void SmPolicyUpdateContextData::unsetMaPduInd() { m_MaPduIndIsSet = false; }
AtsssCapability SmPolicyUpdateContextData::getAtsssCapab() const {
  return m_AtsssCapab;
}
void SmPolicyUpdateContextData::setAtsssCapab(AtsssCapability const &value) {
  m_AtsssCapab = value;
  m_AtsssCapabIsSet = true;
}
bool SmPolicyUpdateContextData::atsssCapabIsSet() const {
  return m_AtsssCapabIsSet;
}
void SmPolicyUpdateContextData::unsetAtsssCapab() { m_AtsssCapabIsSet = false; }
TsnBridgeInfo SmPolicyUpdateContextData::getTsnBridgeInfo() const {
  return m_TsnBridgeInfo;
}
void SmPolicyUpdateContextData::setTsnBridgeInfo(TsnBridgeInfo const &value) {
  m_TsnBridgeInfo = value;
  m_TsnBridgeInfoIsSet = true;
}
bool SmPolicyUpdateContextData::tsnBridgeInfoIsSet() const {
  return m_TsnBridgeInfoIsSet;
}
void SmPolicyUpdateContextData::unsetTsnBridgeInfo() {
  m_TsnBridgeInfoIsSet = false;
}
BridgeManagementContainer
SmPolicyUpdateContextData::getTsnBridgeManCont() const {
  return m_TsnBridgeManCont;
}
void SmPolicyUpdateContextData::setTsnBridgeManCont(
    BridgeManagementContainer const &value) {
  m_TsnBridgeManCont = value;
  m_TsnBridgeManContIsSet = true;
}
bool SmPolicyUpdateContextData::tsnBridgeManContIsSet() const {
  return m_TsnBridgeManContIsSet;
}
void SmPolicyUpdateContextData::unsetTsnBridgeManCont() {
  m_TsnBridgeManContIsSet = false;
}
PortManagementContainer
SmPolicyUpdateContextData::getTsnPortManContDstt() const {
  return m_TsnPortManContDstt;
}
void SmPolicyUpdateContextData::setTsnPortManContDstt(
    PortManagementContainer const &value) {
  m_TsnPortManContDstt = value;
  m_TsnPortManContDsttIsSet = true;
}
bool SmPolicyUpdateContextData::tsnPortManContDsttIsSet() const {
  return m_TsnPortManContDsttIsSet;
}
void SmPolicyUpdateContextData::unsetTsnPortManContDstt() {
  m_TsnPortManContDsttIsSet = false;
}
std::vector<PortManagementContainer> &
SmPolicyUpdateContextData::getTsnPortManContNwtts() {
  return m_TsnPortManContNwtts;
}
void SmPolicyUpdateContextData::setTsnPortManContNwtts(
    std::vector<PortManagementContainer> const &value) {
  m_TsnPortManContNwtts = value;
  m_TsnPortManContNwttsIsSet = true;
}
bool SmPolicyUpdateContextData::tsnPortManContNwttsIsSet() const {
  return m_TsnPortManContNwttsIsSet;
}
void SmPolicyUpdateContextData::unsetTsnPortManContNwtts() {
  m_TsnPortManContNwttsIsSet = false;
}
std::vector<IpMulticastAddressInfo> &
SmPolicyUpdateContextData::getMulAddrInfos() {
  return m_MulAddrInfos;
}
void SmPolicyUpdateContextData::setMulAddrInfos(
    std::vector<IpMulticastAddressInfo> const &value) {
  m_MulAddrInfos = value;
  m_MulAddrInfosIsSet = true;
}
bool SmPolicyUpdateContextData::mulAddrInfosIsSet() const {
  return m_MulAddrInfosIsSet;
}
void SmPolicyUpdateContextData::unsetMulAddrInfos() {
  m_MulAddrInfosIsSet = false;
}
std::vector<PolicyDecisionFailureCode> &
SmPolicyUpdateContextData::getPolicyDecFailureReports() {
  return m_PolicyDecFailureReports;
}
void SmPolicyUpdateContextData::setPolicyDecFailureReports(
    std::vector<PolicyDecisionFailureCode> const &value) {
  m_PolicyDecFailureReports = value;
  m_PolicyDecFailureReportsIsSet = true;
}
bool SmPolicyUpdateContextData::policyDecFailureReportsIsSet() const {
  return m_PolicyDecFailureReportsIsSet;
}
void SmPolicyUpdateContextData::unsetPolicyDecFailureReports() {
  m_PolicyDecFailureReportsIsSet = false;
}
std::vector<InvalidParam> &SmPolicyUpdateContextData::getInvalidPolicyDecs() {
  return m_InvalidPolicyDecs;
}
void SmPolicyUpdateContextData::setInvalidPolicyDecs(
    std::vector<InvalidParam> const &value) {
  m_InvalidPolicyDecs = value;
  m_InvalidPolicyDecsIsSet = true;
}
bool SmPolicyUpdateContextData::invalidPolicyDecsIsSet() const {
  return m_InvalidPolicyDecsIsSet;
}
void SmPolicyUpdateContextData::unsetInvalidPolicyDecs() {
  m_InvalidPolicyDecsIsSet = false;
}
std::vector<DddTrafficDescriptor> &
SmPolicyUpdateContextData::getTrafficDescriptors() {
  return m_TrafficDescriptors;
}
void SmPolicyUpdateContextData::setTrafficDescriptors(
    std::vector<DddTrafficDescriptor> const &value) {
  m_TrafficDescriptors = value;
  m_TrafficDescriptorsIsSet = true;
}
bool SmPolicyUpdateContextData::trafficDescriptorsIsSet() const {
  return m_TrafficDescriptorsIsSet;
}
void SmPolicyUpdateContextData::unsetTrafficDescriptors() {
  m_TrafficDescriptorsIsSet = false;
}
std::string SmPolicyUpdateContextData::getPccRuleId() const {
  return m_PccRuleId;
}
void SmPolicyUpdateContextData::setPccRuleId(std::string const &value) {
  m_PccRuleId = value;
  m_PccRuleIdIsSet = true;
}
bool SmPolicyUpdateContextData::pccRuleIdIsSet() const {
  return m_PccRuleIdIsSet;
}
void SmPolicyUpdateContextData::unsetPccRuleId() { m_PccRuleIdIsSet = false; }
std::vector<DlDataDeliveryStatus> &
SmPolicyUpdateContextData::getTypesOfNotif() {
  return m_TypesOfNotif;
}
void SmPolicyUpdateContextData::setTypesOfNotif(
    std::vector<DlDataDeliveryStatus> const &value) {
  m_TypesOfNotif = value;
  m_TypesOfNotifIsSet = true;
}
bool SmPolicyUpdateContextData::typesOfNotifIsSet() const {
  return m_TypesOfNotifIsSet;
}
void SmPolicyUpdateContextData::unsetTypesOfNotif() {
  m_TypesOfNotifIsSet = false;
}
std::vector<std::string> &SmPolicyUpdateContextData::getInterGrpIds() {
  return m_InterGrpIds;
}
void SmPolicyUpdateContextData::setInterGrpIds(
    std::vector<std::string> const &value) {
  m_InterGrpIds = value;
  m_InterGrpIdsIsSet = true;
}
bool SmPolicyUpdateContextData::interGrpIdsIsSet() const {
  return m_InterGrpIdsIsSet;
}
void SmPolicyUpdateContextData::unsetInterGrpIds() {
  m_InterGrpIdsIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org