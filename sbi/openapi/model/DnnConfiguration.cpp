/**
 * Unified Data Repository Service API file for subscription data
 * Unified Data Repository Service (subscription data). The API version is
 * defined in 3GPP TS 29.504. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "DnnConfiguration.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

DnnConfiguration::DnnConfiguration() {
  m_IwkEpsInd = false;
  m_IwkEpsIndIsSet = false;
  m_r_5gQosProfileIsSet = false;
  m_SessionAmbrIsSet = false;
  m_r_3gppChargingCharacteristics = "";
  m_r_3gppChargingCharacteristicsIsSet = false;
  m_StaticIpAddressIsSet = false;
  m_UpSecurityIsSet = false;
  m_PduSessionContinuityIndIsSet = false;
  m_NiddNefId = "";
  m_NiddNefIdIsSet = false;
  m_NiddInfoIsSet = false;
  m_RedundantSessionAllowed = false;
  m_RedundantSessionAllowedIsSet = false;
  m_AcsInfoIsSet = false;
  m_Ipv4FrameRouteListIsSet = false;
  m_Ipv6FrameRouteListIsSet = false;
  m_AtsssAllowed = false;
  m_AtsssAllowedIsSet = false;
  m_SecondaryAuth = false;
  m_SecondaryAuthIsSet = false;
  m_DnAaaIpAddressAllocation = false;
  m_DnAaaIpAddressAllocationIsSet = false;
  m_DnAaaAddressIsSet = false;
  m_AdditionalDnAaaAddressesIsSet = false;
  m_DnAaaFqdn = "";
  m_DnAaaFqdnIsSet = false;
  m_IptvAccCtrlInfo = "";
  m_IptvAccCtrlInfoIsSet = false;
  m_Ipv4IndexIsSet = false;
  m_Ipv6IndexIsSet = false;
  m_EcsServerAddrIsSet = false;
}

DnnConfiguration::~DnnConfiguration() {}

void DnnConfiguration::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const DnnConfiguration &o) {
  j = nlohmann::json();
  j["pduSessionTypes"] = o.m_PduSessionTypes;
  j["sscModes"] = o.m_SscModes;
  if (o.iwkEpsIndIsSet())
    j["iwkEpsInd"] = o.m_IwkEpsInd;
  if (o.r5gQosProfileIsSet())
    j["5gQosProfile"] = o.m_r_5gQosProfile;
  if (o.sessionAmbrIsSet())
    j["sessionAmbr"] = o.m_SessionAmbr;
  if (o.r3gppChargingCharacteristicsIsSet())
    j["3gppChargingCharacteristics"] = o.m_r_3gppChargingCharacteristics;
  if (o.staticIpAddressIsSet() || !o.m_StaticIpAddress.empty())
    j["staticIpAddress"] = o.m_StaticIpAddress;
  if (o.upSecurityIsSet())
    j["upSecurity"] = o.m_UpSecurity;
  if (o.pduSessionContinuityIndIsSet())
    j["pduSessionContinuityInd"] = o.m_PduSessionContinuityInd;
  if (o.niddNefIdIsSet())
    j["niddNefId"] = o.m_NiddNefId;
  if (o.niddInfoIsSet())
    j["niddInfo"] = o.m_NiddInfo;
  if (o.redundantSessionAllowedIsSet())
    j["redundantSessionAllowed"] = o.m_RedundantSessionAllowed;
  if (o.acsInfoIsSet())
    j["acsInfo"] = o.m_AcsInfo;
  if (o.ipv4FrameRouteListIsSet() || !o.m_Ipv4FrameRouteList.empty())
    j["ipv4FrameRouteList"] = o.m_Ipv4FrameRouteList;
  if (o.ipv6FrameRouteListIsSet() || !o.m_Ipv6FrameRouteList.empty())
    j["ipv6FrameRouteList"] = o.m_Ipv6FrameRouteList;
  if (o.atsssAllowedIsSet())
    j["atsssAllowed"] = o.m_AtsssAllowed;
  if (o.secondaryAuthIsSet())
    j["secondaryAuth"] = o.m_SecondaryAuth;
  if (o.dnAaaIpAddressAllocationIsSet())
    j["dnAaaIpAddressAllocation"] = o.m_DnAaaIpAddressAllocation;
  if (o.dnAaaAddressIsSet())
    j["dnAaaAddress"] = o.m_DnAaaAddress;
  if (o.additionalDnAaaAddressesIsSet() ||
      !o.m_AdditionalDnAaaAddresses.empty())
    j["additionalDnAaaAddresses"] = o.m_AdditionalDnAaaAddresses;
  if (o.dnAaaFqdnIsSet())
    j["dnAaaFqdn"] = o.m_DnAaaFqdn;
  if (o.iptvAccCtrlInfoIsSet())
    j["iptvAccCtrlInfo"] = o.m_IptvAccCtrlInfo;
  if (o.ipv4IndexIsSet())
    j["ipv4Index"] = o.m_Ipv4Index;
  if (o.ipv6IndexIsSet())
    j["ipv6Index"] = o.m_Ipv6Index;
  if (o.ecsServerAddrIsSet())
    j["ecsServerAddr"] = o.m_EcsServerAddr;
}

void from_json(const nlohmann::json &j, DnnConfiguration &o) {
  j.at("pduSessionTypes").get_to(o.m_PduSessionTypes);
  j.at("sscModes").get_to(o.m_SscModes);
  if (j.find("iwkEpsInd") != j.end()) {
    j.at("iwkEpsInd").get_to(o.m_IwkEpsInd);
    o.m_IwkEpsIndIsSet = true;
  }
  if (j.find("5gQosProfile") != j.end()) {
    j.at("5gQosProfile").get_to(o.m_r_5gQosProfile);
    o.m_r_5gQosProfileIsSet = true;
  }
  if (j.find("sessionAmbr") != j.end()) {
    j.at("sessionAmbr").get_to(o.m_SessionAmbr);
    o.m_SessionAmbrIsSet = true;
  }
  if (j.find("3gppChargingCharacteristics") != j.end()) {
    j.at("3gppChargingCharacteristics")
        .get_to(o.m_r_3gppChargingCharacteristics);
    o.m_r_3gppChargingCharacteristicsIsSet = true;
  }
  if (j.find("staticIpAddress") != j.end()) {
    j.at("staticIpAddress").get_to(o.m_StaticIpAddress);
    o.m_StaticIpAddressIsSet = true;
  }
  if (j.find("upSecurity") != j.end()) {
    j.at("upSecurity").get_to(o.m_UpSecurity);
    o.m_UpSecurityIsSet = true;
  }
  if (j.find("pduSessionContinuityInd") != j.end()) {
    j.at("pduSessionContinuityInd").get_to(o.m_PduSessionContinuityInd);
    o.m_PduSessionContinuityIndIsSet = true;
  }
  if (j.find("niddNefId") != j.end()) {
    j.at("niddNefId").get_to(o.m_NiddNefId);
    o.m_NiddNefIdIsSet = true;
  }
  if (j.find("niddInfo") != j.end()) {
    j.at("niddInfo").get_to(o.m_NiddInfo);
    o.m_NiddInfoIsSet = true;
  }
  if (j.find("redundantSessionAllowed") != j.end()) {
    j.at("redundantSessionAllowed").get_to(o.m_RedundantSessionAllowed);
    o.m_RedundantSessionAllowedIsSet = true;
  }
  if (j.find("acsInfo") != j.end()) {
    j.at("acsInfo").get_to(o.m_AcsInfo);
    o.m_AcsInfoIsSet = true;
  }
  if (j.find("ipv4FrameRouteList") != j.end()) {
    j.at("ipv4FrameRouteList").get_to(o.m_Ipv4FrameRouteList);
    o.m_Ipv4FrameRouteListIsSet = true;
  }
  if (j.find("ipv6FrameRouteList") != j.end()) {
    j.at("ipv6FrameRouteList").get_to(o.m_Ipv6FrameRouteList);
    o.m_Ipv6FrameRouteListIsSet = true;
  }
  if (j.find("atsssAllowed") != j.end()) {
    j.at("atsssAllowed").get_to(o.m_AtsssAllowed);
    o.m_AtsssAllowedIsSet = true;
  }
  if (j.find("secondaryAuth") != j.end()) {
    j.at("secondaryAuth").get_to(o.m_SecondaryAuth);
    o.m_SecondaryAuthIsSet = true;
  }
  if (j.find("dnAaaIpAddressAllocation") != j.end()) {
    j.at("dnAaaIpAddressAllocation").get_to(o.m_DnAaaIpAddressAllocation);
    o.m_DnAaaIpAddressAllocationIsSet = true;
  }
  if (j.find("dnAaaAddress") != j.end()) {
    j.at("dnAaaAddress").get_to(o.m_DnAaaAddress);
    o.m_DnAaaAddressIsSet = true;
  }
  if (j.find("additionalDnAaaAddresses") != j.end()) {
    j.at("additionalDnAaaAddresses").get_to(o.m_AdditionalDnAaaAddresses);
    o.m_AdditionalDnAaaAddressesIsSet = true;
  }
  if (j.find("dnAaaFqdn") != j.end()) {
    j.at("dnAaaFqdn").get_to(o.m_DnAaaFqdn);
    o.m_DnAaaFqdnIsSet = true;
  }
  if (j.find("iptvAccCtrlInfo") != j.end()) {
    j.at("iptvAccCtrlInfo").get_to(o.m_IptvAccCtrlInfo);
    o.m_IptvAccCtrlInfoIsSet = true;
  }
  if (j.find("ipv4Index") != j.end()) {
    j.at("ipv4Index").get_to(o.m_Ipv4Index);
    o.m_Ipv4IndexIsSet = true;
  }
  if (j.find("ipv6Index") != j.end()) {
    j.at("ipv6Index").get_to(o.m_Ipv6Index);
    o.m_Ipv6IndexIsSet = true;
  }
  if (j.find("ecsServerAddr") != j.end()) {
    j.at("ecsServerAddr").get_to(o.m_EcsServerAddr);
    o.m_EcsServerAddrIsSet = true;
  }
}

PduSessionTypes DnnConfiguration::getPduSessionTypes() const {
  return m_PduSessionTypes;
}
void DnnConfiguration::setPduSessionTypes(PduSessionTypes const &value) {
  m_PduSessionTypes = value;
}
SscModes DnnConfiguration::getSscModes() const { return m_SscModes; }
void DnnConfiguration::setSscModes(SscModes const &value) {
  m_SscModes = value;
}
bool DnnConfiguration::isIwkEpsInd() const { return m_IwkEpsInd; }
void DnnConfiguration::setIwkEpsInd(bool const value) {
  m_IwkEpsInd = value;
  m_IwkEpsIndIsSet = true;
}
bool DnnConfiguration::iwkEpsIndIsSet() const { return m_IwkEpsIndIsSet; }
void DnnConfiguration::unsetIwkEpsInd() { m_IwkEpsIndIsSet = false; }
SubscribedDefaultQos DnnConfiguration::getR5gQosProfile() const {
  return m_r_5gQosProfile;
}
void DnnConfiguration::setR5gQosProfile(SubscribedDefaultQos const &value) {
  m_r_5gQosProfile = value;
  m_r_5gQosProfileIsSet = true;
}
bool DnnConfiguration::r5gQosProfileIsSet() const {
  return m_r_5gQosProfileIsSet;
}
void DnnConfiguration::unsetr_5gQosProfile() { m_r_5gQosProfileIsSet = false; }
Ambr DnnConfiguration::getSessionAmbr() const { return m_SessionAmbr; }
void DnnConfiguration::setSessionAmbr(Ambr const &value) {
  m_SessionAmbr = value;
  m_SessionAmbrIsSet = true;
}
bool DnnConfiguration::sessionAmbrIsSet() const { return m_SessionAmbrIsSet; }
void DnnConfiguration::unsetSessionAmbr() { m_SessionAmbrIsSet = false; }
std::string DnnConfiguration::getR3gppChargingCharacteristics() const {
  return m_r_3gppChargingCharacteristics;
}
void DnnConfiguration::setR3gppChargingCharacteristics(
    std::string const &value) {
  m_r_3gppChargingCharacteristics = value;
  m_r_3gppChargingCharacteristicsIsSet = true;
}
bool DnnConfiguration::r3gppChargingCharacteristicsIsSet() const {
  return m_r_3gppChargingCharacteristicsIsSet;
}
void DnnConfiguration::unsetr_3gppChargingCharacteristics() {
  m_r_3gppChargingCharacteristicsIsSet = false;
}
std::vector<IpAddress> &DnnConfiguration::getStaticIpAddress() {
  return m_StaticIpAddress;
}
void DnnConfiguration::setStaticIpAddress(std::vector<IpAddress> const &value) {
  m_StaticIpAddress = value;
  m_StaticIpAddressIsSet = true;
}
bool DnnConfiguration::staticIpAddressIsSet() const {
  return m_StaticIpAddressIsSet;
}
void DnnConfiguration::unsetStaticIpAddress() {
  m_StaticIpAddressIsSet = false;
}
UpSecurity DnnConfiguration::getUpSecurity() const { return m_UpSecurity; }
void DnnConfiguration::setUpSecurity(UpSecurity const &value) {
  m_UpSecurity = value;
  m_UpSecurityIsSet = true;
}
bool DnnConfiguration::upSecurityIsSet() const { return m_UpSecurityIsSet; }
void DnnConfiguration::unsetUpSecurity() { m_UpSecurityIsSet = false; }
PduSessionContinuityInd DnnConfiguration::getPduSessionContinuityInd() const {
  return m_PduSessionContinuityInd;
}
void DnnConfiguration::setPduSessionContinuityInd(
    PduSessionContinuityInd const &value) {
  m_PduSessionContinuityInd = value;
  m_PduSessionContinuityIndIsSet = true;
}
bool DnnConfiguration::pduSessionContinuityIndIsSet() const {
  return m_PduSessionContinuityIndIsSet;
}
void DnnConfiguration::unsetPduSessionContinuityInd() {
  m_PduSessionContinuityIndIsSet = false;
}
std::string DnnConfiguration::getNiddNefId() const { return m_NiddNefId; }
void DnnConfiguration::setNiddNefId(std::string const &value) {
  m_NiddNefId = value;
  m_NiddNefIdIsSet = true;
}
bool DnnConfiguration::niddNefIdIsSet() const { return m_NiddNefIdIsSet; }
void DnnConfiguration::unsetNiddNefId() { m_NiddNefIdIsSet = false; }
NiddInformation DnnConfiguration::getNiddInfo() const { return m_NiddInfo; }
void DnnConfiguration::setNiddInfo(NiddInformation const &value) {
  m_NiddInfo = value;
  m_NiddInfoIsSet = true;
}
bool DnnConfiguration::niddInfoIsSet() const { return m_NiddInfoIsSet; }
void DnnConfiguration::unsetNiddInfo() { m_NiddInfoIsSet = false; }
bool DnnConfiguration::isRedundantSessionAllowed() const {
  return m_RedundantSessionAllowed;
}
void DnnConfiguration::setRedundantSessionAllowed(bool const value) {
  m_RedundantSessionAllowed = value;
  m_RedundantSessionAllowedIsSet = true;
}
bool DnnConfiguration::redundantSessionAllowedIsSet() const {
  return m_RedundantSessionAllowedIsSet;
}
void DnnConfiguration::unsetRedundantSessionAllowed() {
  m_RedundantSessionAllowedIsSet = false;
}
AcsInfo DnnConfiguration::getAcsInfo() const { return m_AcsInfo; }
void DnnConfiguration::setAcsInfo(AcsInfo const &value) {
  m_AcsInfo = value;
  m_AcsInfoIsSet = true;
}
bool DnnConfiguration::acsInfoIsSet() const { return m_AcsInfoIsSet; }
void DnnConfiguration::unsetAcsInfo() { m_AcsInfoIsSet = false; }
std::vector<FrameRouteInfo> &DnnConfiguration::getIpv4FrameRouteList() {
  return m_Ipv4FrameRouteList;
}
void DnnConfiguration::setIpv4FrameRouteList(
    std::vector<FrameRouteInfo> const &value) {
  m_Ipv4FrameRouteList = value;
  m_Ipv4FrameRouteListIsSet = true;
}
bool DnnConfiguration::ipv4FrameRouteListIsSet() const {
  return m_Ipv4FrameRouteListIsSet;
}
void DnnConfiguration::unsetIpv4FrameRouteList() {
  m_Ipv4FrameRouteListIsSet = false;
}
std::vector<FrameRouteInfo> &DnnConfiguration::getIpv6FrameRouteList() {
  return m_Ipv6FrameRouteList;
}
void DnnConfiguration::setIpv6FrameRouteList(
    std::vector<FrameRouteInfo> const &value) {
  m_Ipv6FrameRouteList = value;
  m_Ipv6FrameRouteListIsSet = true;
}
bool DnnConfiguration::ipv6FrameRouteListIsSet() const {
  return m_Ipv6FrameRouteListIsSet;
}
void DnnConfiguration::unsetIpv6FrameRouteList() {
  m_Ipv6FrameRouteListIsSet = false;
}
bool DnnConfiguration::isAtsssAllowed() const { return m_AtsssAllowed; }
void DnnConfiguration::setAtsssAllowed(bool const value) {
  m_AtsssAllowed = value;
  m_AtsssAllowedIsSet = true;
}
bool DnnConfiguration::atsssAllowedIsSet() const { return m_AtsssAllowedIsSet; }
void DnnConfiguration::unsetAtsssAllowed() { m_AtsssAllowedIsSet = false; }
bool DnnConfiguration::isSecondaryAuth() const { return m_SecondaryAuth; }
void DnnConfiguration::setSecondaryAuth(bool const value) {
  m_SecondaryAuth = value;
  m_SecondaryAuthIsSet = true;
}
bool DnnConfiguration::secondaryAuthIsSet() const {
  return m_SecondaryAuthIsSet;
}
void DnnConfiguration::unsetSecondaryAuth() { m_SecondaryAuthIsSet = false; }
bool DnnConfiguration::isDnAaaIpAddressAllocation() const {
  return m_DnAaaIpAddressAllocation;
}
void DnnConfiguration::setDnAaaIpAddressAllocation(bool const value) {
  m_DnAaaIpAddressAllocation = value;
  m_DnAaaIpAddressAllocationIsSet = true;
}
bool DnnConfiguration::dnAaaIpAddressAllocationIsSet() const {
  return m_DnAaaIpAddressAllocationIsSet;
}
void DnnConfiguration::unsetDnAaaIpAddressAllocation() {
  m_DnAaaIpAddressAllocationIsSet = false;
}
IpAddress DnnConfiguration::getDnAaaAddress() const { return m_DnAaaAddress; }
void DnnConfiguration::setDnAaaAddress(IpAddress const &value) {
  m_DnAaaAddress = value;
  m_DnAaaAddressIsSet = true;
}
bool DnnConfiguration::dnAaaAddressIsSet() const { return m_DnAaaAddressIsSet; }
void DnnConfiguration::unsetDnAaaAddress() { m_DnAaaAddressIsSet = false; }
std::vector<IpAddress> &DnnConfiguration::getAdditionalDnAaaAddresses() {
  return m_AdditionalDnAaaAddresses;
}
void DnnConfiguration::setAdditionalDnAaaAddresses(
    std::vector<IpAddress> const &value) {
  m_AdditionalDnAaaAddresses = value;
  m_AdditionalDnAaaAddressesIsSet = true;
}
bool DnnConfiguration::additionalDnAaaAddressesIsSet() const {
  return m_AdditionalDnAaaAddressesIsSet;
}
void DnnConfiguration::unsetAdditionalDnAaaAddresses() {
  m_AdditionalDnAaaAddressesIsSet = false;
}
std::string DnnConfiguration::getDnAaaFqdn() const { return m_DnAaaFqdn; }
void DnnConfiguration::setDnAaaFqdn(std::string const &value) {
  m_DnAaaFqdn = value;
  m_DnAaaFqdnIsSet = true;
}
bool DnnConfiguration::dnAaaFqdnIsSet() const { return m_DnAaaFqdnIsSet; }
void DnnConfiguration::unsetDnAaaFqdn() { m_DnAaaFqdnIsSet = false; }
std::string DnnConfiguration::getIptvAccCtrlInfo() const {
  return m_IptvAccCtrlInfo;
}
void DnnConfiguration::setIptvAccCtrlInfo(std::string const &value) {
  m_IptvAccCtrlInfo = value;
  m_IptvAccCtrlInfoIsSet = true;
}
bool DnnConfiguration::iptvAccCtrlInfoIsSet() const {
  return m_IptvAccCtrlInfoIsSet;
}
void DnnConfiguration::unsetIptvAccCtrlInfo() {
  m_IptvAccCtrlInfoIsSet = false;
}
IpIndex DnnConfiguration::getIpv4Index() const { return m_Ipv4Index; }
void DnnConfiguration::setIpv4Index(IpIndex const &value) {
  m_Ipv4Index = value;
  m_Ipv4IndexIsSet = true;
}
bool DnnConfiguration::ipv4IndexIsSet() const { return m_Ipv4IndexIsSet; }
void DnnConfiguration::unsetIpv4Index() { m_Ipv4IndexIsSet = false; }
IpIndex DnnConfiguration::getIpv6Index() const { return m_Ipv6Index; }
void DnnConfiguration::setIpv6Index(IpIndex const &value) {
  m_Ipv6Index = value;
  m_Ipv6IndexIsSet = true;
}
bool DnnConfiguration::ipv6IndexIsSet() const { return m_Ipv6IndexIsSet; }
void DnnConfiguration::unsetIpv6Index() { m_Ipv6IndexIsSet = false; }
EcsServerAddr DnnConfiguration::getEcsServerAddr() const {
  return m_EcsServerAddr;
}
void DnnConfiguration::setEcsServerAddr(EcsServerAddr const &value) {
  m_EcsServerAddr = value;
  m_EcsServerAddrIsSet = true;
}
bool DnnConfiguration::ecsServerAddrIsSet() const {
  return m_EcsServerAddrIsSet;
}
void DnnConfiguration::unsetEcsServerAddr() { m_EcsServerAddrIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
