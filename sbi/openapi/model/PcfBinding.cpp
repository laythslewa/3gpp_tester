/**
 * Nbsf_Management
 * Binding Support Management Service API. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "PcfBinding.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

PcfBinding::PcfBinding() {
  m_Supi = "";
  m_SupiIsSet = false;
  m_Gpsi = "";
  m_GpsiIsSet = false;
  m_Ipv4Addr = "";
  m_Ipv4AddrIsSet = false;
  m_Ipv6PrefixIsSet = false;
  m_AddIpv6PrefixesIsSet = false;
  m_IpDomain = "";
  m_IpDomainIsSet = false;
  m_MacAddr48 = "";
  m_MacAddr48IsSet = false;
  m_AddMacAddrsIsSet = false;
  m_Dnn = "";
  m_PcfFqdn = "";
  m_PcfFqdnIsSet = false;
  m_PcfIpEndPointsIsSet = false;
  m_PcfDiamHost = "";
  m_PcfDiamHostIsSet = false;
  m_PcfDiamRealm = "";
  m_PcfDiamRealmIsSet = false;
  m_PcfSmFqdn = "";
  m_PcfSmFqdnIsSet = false;
  m_PcfSmIpEndPointsIsSet = false;
  m_SuppFeat = "";
  m_SuppFeatIsSet = false;
  m_PcfId = "";
  m_PcfIdIsSet = false;
  m_PcfSetId = "";
  m_PcfSetIdIsSet = false;
  m_RecoveryTime = "";
  m_RecoveryTimeIsSet = false;
  m_ParaComIsSet = false;
  m_BindLevelIsSet = false;
  m_Ipv4FrameRouteListIsSet = false;
  m_Ipv6FrameRouteListIsSet = false;
}

PcfBinding::~PcfBinding() {}

void PcfBinding::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const PcfBinding &o) {
  j = nlohmann::json();
  if (o.supiIsSet())
    j["supi"] = o.m_Supi;
  if (o.gpsiIsSet())
    j["gpsi"] = o.m_Gpsi;
  if (o.ipv4AddrIsSet())
    j["ipv4Addr"] = o.m_Ipv4Addr;
  if (o.ipv6PrefixIsSet())
    j["ipv6Prefix"] = o.m_Ipv6Prefix;
  if (o.addIpv6PrefixesIsSet() || !o.m_AddIpv6Prefixes.empty())
    j["addIpv6Prefixes"] = o.m_AddIpv6Prefixes;
  if (o.ipDomainIsSet())
    j["ipDomain"] = o.m_IpDomain;
  if (o.macAddr48IsSet())
    j["macAddr48"] = o.m_MacAddr48;
  if (o.addMacAddrsIsSet() || !o.m_AddMacAddrs.empty())
    j["addMacAddrs"] = o.m_AddMacAddrs;
  j["dnn"] = o.m_Dnn;
  if (o.pcfFqdnIsSet())
    j["pcfFqdn"] = o.m_PcfFqdn;
  if (o.pcfIpEndPointsIsSet() || !o.m_PcfIpEndPoints.empty())
    j["pcfIpEndPoints"] = o.m_PcfIpEndPoints;
  if (o.pcfDiamHostIsSet())
    j["pcfDiamHost"] = o.m_PcfDiamHost;
  if (o.pcfDiamRealmIsSet())
    j["pcfDiamRealm"] = o.m_PcfDiamRealm;
  if (o.pcfSmFqdnIsSet())
    j["pcfSmFqdn"] = o.m_PcfSmFqdn;
  if (o.pcfSmIpEndPointsIsSet() || !o.m_PcfSmIpEndPoints.empty())
    j["pcfSmIpEndPoints"] = o.m_PcfSmIpEndPoints;
  j["snssai"] = o.m_Snssai;
  if (o.suppFeatIsSet())
    j["suppFeat"] = o.m_SuppFeat;
  if (o.pcfIdIsSet())
    j["pcfId"] = o.m_PcfId;
  if (o.pcfSetIdIsSet())
    j["pcfSetId"] = o.m_PcfSetId;
  if (o.recoveryTimeIsSet())
    j["recoveryTime"] = o.m_RecoveryTime;
  if (o.paraComIsSet())
    j["paraCom"] = o.m_ParaCom;
  if (o.bindLevelIsSet())
    j["bindLevel"] = o.m_BindLevel;
  if (o.ipv4FrameRouteListIsSet() || !o.m_Ipv4FrameRouteList.empty())
    j["ipv4FrameRouteList"] = o.m_Ipv4FrameRouteList;
  if (o.ipv6FrameRouteListIsSet() || !o.m_Ipv6FrameRouteList.empty())
    j["ipv6FrameRouteList"] = o.m_Ipv6FrameRouteList;
}

void from_json(const nlohmann::json &j, PcfBinding &o) {
  if (j.find("supi") != j.end()) {
    j.at("supi").get_to(o.m_Supi);
    o.m_SupiIsSet = true;
  }
  if (j.find("gpsi") != j.end()) {
    j.at("gpsi").get_to(o.m_Gpsi);
    o.m_GpsiIsSet = true;
  }
  if (j.find("ipv4Addr") != j.end()) {
    j.at("ipv4Addr").get_to(o.m_Ipv4Addr);
    o.m_Ipv4AddrIsSet = true;
  }
  if (j.find("ipv6Prefix") != j.end()) {
    j.at("ipv6Prefix").get_to(o.m_Ipv6Prefix);
    o.m_Ipv6PrefixIsSet = true;
  }
  if (j.find("addIpv6Prefixes") != j.end()) {
    j.at("addIpv6Prefixes").get_to(o.m_AddIpv6Prefixes);
    o.m_AddIpv6PrefixesIsSet = true;
  }
  if (j.find("ipDomain") != j.end()) {
    j.at("ipDomain").get_to(o.m_IpDomain);
    o.m_IpDomainIsSet = true;
  }
  if (j.find("macAddr48") != j.end()) {
    j.at("macAddr48").get_to(o.m_MacAddr48);
    o.m_MacAddr48IsSet = true;
  }
  if (j.find("addMacAddrs") != j.end()) {
    j.at("addMacAddrs").get_to(o.m_AddMacAddrs);
    o.m_AddMacAddrsIsSet = true;
  }
  j.at("dnn").get_to(o.m_Dnn);
  if (j.find("pcfFqdn") != j.end()) {
    j.at("pcfFqdn").get_to(o.m_PcfFqdn);
    o.m_PcfFqdnIsSet = true;
  }
  if (j.find("pcfIpEndPoints") != j.end()) {
    j.at("pcfIpEndPoints").get_to(o.m_PcfIpEndPoints);
    o.m_PcfIpEndPointsIsSet = true;
  }
  if (j.find("pcfDiamHost") != j.end()) {
    j.at("pcfDiamHost").get_to(o.m_PcfDiamHost);
    o.m_PcfDiamHostIsSet = true;
  }
  if (j.find("pcfDiamRealm") != j.end()) {
    j.at("pcfDiamRealm").get_to(o.m_PcfDiamRealm);
    o.m_PcfDiamRealmIsSet = true;
  }
  if (j.find("pcfSmFqdn") != j.end()) {
    j.at("pcfSmFqdn").get_to(o.m_PcfSmFqdn);
    o.m_PcfSmFqdnIsSet = true;
  }
  if (j.find("pcfSmIpEndPoints") != j.end()) {
    j.at("pcfSmIpEndPoints").get_to(o.m_PcfSmIpEndPoints);
    o.m_PcfSmIpEndPointsIsSet = true;
  }
  j.at("snssai").get_to(o.m_Snssai);
  if (j.find("suppFeat") != j.end()) {
    j.at("suppFeat").get_to(o.m_SuppFeat);
    o.m_SuppFeatIsSet = true;
  }
  if (j.find("pcfId") != j.end()) {
    j.at("pcfId").get_to(o.m_PcfId);
    o.m_PcfIdIsSet = true;
  }
  if (j.find("pcfSetId") != j.end()) {
    j.at("pcfSetId").get_to(o.m_PcfSetId);
    o.m_PcfSetIdIsSet = true;
  }
  if (j.find("recoveryTime") != j.end()) {
    j.at("recoveryTime").get_to(o.m_RecoveryTime);
    o.m_RecoveryTimeIsSet = true;
  }
  if (j.find("paraCom") != j.end()) {
    j.at("paraCom").get_to(o.m_ParaCom);
    o.m_ParaComIsSet = true;
  }
  if (j.find("bindLevel") != j.end()) {
    j.at("bindLevel").get_to(o.m_BindLevel);
    o.m_BindLevelIsSet = true;
  }
  if (j.find("ipv4FrameRouteList") != j.end()) {
    j.at("ipv4FrameRouteList").get_to(o.m_Ipv4FrameRouteList);
    o.m_Ipv4FrameRouteListIsSet = true;
  }
  if (j.find("ipv6FrameRouteList") != j.end()) {
    j.at("ipv6FrameRouteList").get_to(o.m_Ipv6FrameRouteList);
    o.m_Ipv6FrameRouteListIsSet = true;
  }
}

std::string PcfBinding::getSupi() const { return m_Supi; }
void PcfBinding::setSupi(std::string const &value) {
  m_Supi = value;
  m_SupiIsSet = true;
}
bool PcfBinding::supiIsSet() const { return m_SupiIsSet; }
void PcfBinding::unsetSupi() { m_SupiIsSet = false; }
std::string PcfBinding::getGpsi() const { return m_Gpsi; }
void PcfBinding::setGpsi(std::string const &value) {
  m_Gpsi = value;
  m_GpsiIsSet = true;
}
bool PcfBinding::gpsiIsSet() const { return m_GpsiIsSet; }
void PcfBinding::unsetGpsi() { m_GpsiIsSet = false; }
std::string PcfBinding::getIpv4Addr() const { return m_Ipv4Addr; }
void PcfBinding::setIpv4Addr(std::string const &value) {
  m_Ipv4Addr = value;
  m_Ipv4AddrIsSet = true;
}
bool PcfBinding::ipv4AddrIsSet() const { return m_Ipv4AddrIsSet; }
void PcfBinding::unsetIpv4Addr() { m_Ipv4AddrIsSet = false; }
Ipv6Prefix PcfBinding::getIpv6Prefix() const { return m_Ipv6Prefix; }
void PcfBinding::setIpv6Prefix(Ipv6Prefix const &value) {
  m_Ipv6Prefix = value;
  m_Ipv6PrefixIsSet = true;
}
bool PcfBinding::ipv6PrefixIsSet() const { return m_Ipv6PrefixIsSet; }
void PcfBinding::unsetIpv6Prefix() { m_Ipv6PrefixIsSet = false; }
std::vector<Ipv6Prefix> &PcfBinding::getAddIpv6Prefixes() {
  return m_AddIpv6Prefixes;
}
void PcfBinding::setAddIpv6Prefixes(std::vector<Ipv6Prefix> const &value) {
  m_AddIpv6Prefixes = value;
  m_AddIpv6PrefixesIsSet = true;
}
bool PcfBinding::addIpv6PrefixesIsSet() const { return m_AddIpv6PrefixesIsSet; }
void PcfBinding::unsetAddIpv6Prefixes() { m_AddIpv6PrefixesIsSet = false; }
std::string PcfBinding::getIpDomain() const { return m_IpDomain; }
void PcfBinding::setIpDomain(std::string const &value) {
  m_IpDomain = value;
  m_IpDomainIsSet = true;
}
bool PcfBinding::ipDomainIsSet() const { return m_IpDomainIsSet; }
void PcfBinding::unsetIpDomain() { m_IpDomainIsSet = false; }
std::string PcfBinding::getMacAddr48() const { return m_MacAddr48; }
void PcfBinding::setMacAddr48(std::string const &value) {
  m_MacAddr48 = value;
  m_MacAddr48IsSet = true;
}
bool PcfBinding::macAddr48IsSet() const { return m_MacAddr48IsSet; }
void PcfBinding::unsetMacAddr48() { m_MacAddr48IsSet = false; }
std::vector<std::string> &PcfBinding::getAddMacAddrs() { return m_AddMacAddrs; }
void PcfBinding::setAddMacAddrs(std::vector<std::string> const &value) {
  m_AddMacAddrs = value;
  m_AddMacAddrsIsSet = true;
}
bool PcfBinding::addMacAddrsIsSet() const { return m_AddMacAddrsIsSet; }
void PcfBinding::unsetAddMacAddrs() { m_AddMacAddrsIsSet = false; }
std::string PcfBinding::getDnn() const { return m_Dnn; }
void PcfBinding::setDnn(std::string const &value) { m_Dnn = value; }
std::string PcfBinding::getPcfFqdn() const { return m_PcfFqdn; }
void PcfBinding::setPcfFqdn(std::string const &value) {
  m_PcfFqdn = value;
  m_PcfFqdnIsSet = true;
}
bool PcfBinding::pcfFqdnIsSet() const { return m_PcfFqdnIsSet; }
void PcfBinding::unsetPcfFqdn() { m_PcfFqdnIsSet = false; }
std::vector<IpEndPoint> &PcfBinding::getPcfIpEndPoints() {
  return m_PcfIpEndPoints;
}
void PcfBinding::setPcfIpEndPoints(std::vector<IpEndPoint> const &value) {
  m_PcfIpEndPoints = value;
  m_PcfIpEndPointsIsSet = true;
}
bool PcfBinding::pcfIpEndPointsIsSet() const { return m_PcfIpEndPointsIsSet; }
void PcfBinding::unsetPcfIpEndPoints() { m_PcfIpEndPointsIsSet = false; }
std::string PcfBinding::getPcfDiamHost() const { return m_PcfDiamHost; }
void PcfBinding::setPcfDiamHost(std::string const &value) {
  m_PcfDiamHost = value;
  m_PcfDiamHostIsSet = true;
}
bool PcfBinding::pcfDiamHostIsSet() const { return m_PcfDiamHostIsSet; }
void PcfBinding::unsetPcfDiamHost() { m_PcfDiamHostIsSet = false; }
std::string PcfBinding::getPcfDiamRealm() const { return m_PcfDiamRealm; }
void PcfBinding::setPcfDiamRealm(std::string const &value) {
  m_PcfDiamRealm = value;
  m_PcfDiamRealmIsSet = true;
}
bool PcfBinding::pcfDiamRealmIsSet() const { return m_PcfDiamRealmIsSet; }
void PcfBinding::unsetPcfDiamRealm() { m_PcfDiamRealmIsSet = false; }
std::string PcfBinding::getPcfSmFqdn() const { return m_PcfSmFqdn; }
void PcfBinding::setPcfSmFqdn(std::string const &value) {
  m_PcfSmFqdn = value;
  m_PcfSmFqdnIsSet = true;
}
bool PcfBinding::pcfSmFqdnIsSet() const { return m_PcfSmFqdnIsSet; }
void PcfBinding::unsetPcfSmFqdn() { m_PcfSmFqdnIsSet = false; }
std::vector<IpEndPoint> &PcfBinding::getPcfSmIpEndPoints() {
  return m_PcfSmIpEndPoints;
}
void PcfBinding::setPcfSmIpEndPoints(std::vector<IpEndPoint> const &value) {
  m_PcfSmIpEndPoints = value;
  m_PcfSmIpEndPointsIsSet = true;
}
bool PcfBinding::pcfSmIpEndPointsIsSet() const {
  return m_PcfSmIpEndPointsIsSet;
}
void PcfBinding::unsetPcfSmIpEndPoints() { m_PcfSmIpEndPointsIsSet = false; }
Snssai PcfBinding::getSnssai() const { return m_Snssai; }
void PcfBinding::setSnssai(Snssai const &value) { m_Snssai = value; }
std::string PcfBinding::getSuppFeat() const { return m_SuppFeat; }
void PcfBinding::setSuppFeat(std::string const &value) {
  m_SuppFeat = value;
  m_SuppFeatIsSet = true;
}
bool PcfBinding::suppFeatIsSet() const { return m_SuppFeatIsSet; }
void PcfBinding::unsetSuppFeat() { m_SuppFeatIsSet = false; }
std::string PcfBinding::getPcfId() const { return m_PcfId; }
void PcfBinding::setPcfId(std::string const &value) {
  m_PcfId = value;
  m_PcfIdIsSet = true;
}
bool PcfBinding::pcfIdIsSet() const { return m_PcfIdIsSet; }
void PcfBinding::unsetPcfId() { m_PcfIdIsSet = false; }
std::string PcfBinding::getPcfSetId() const { return m_PcfSetId; }
void PcfBinding::setPcfSetId(std::string const &value) {
  m_PcfSetId = value;
  m_PcfSetIdIsSet = true;
}
bool PcfBinding::pcfSetIdIsSet() const { return m_PcfSetIdIsSet; }
void PcfBinding::unsetPcfSetId() { m_PcfSetIdIsSet = false; }
std::string PcfBinding::getRecoveryTime() const { return m_RecoveryTime; }
void PcfBinding::setRecoveryTime(std::string const &value) {
  m_RecoveryTime = value;
  m_RecoveryTimeIsSet = true;
}
bool PcfBinding::recoveryTimeIsSet() const { return m_RecoveryTimeIsSet; }
void PcfBinding::unsetRecoveryTime() { m_RecoveryTimeIsSet = false; }
ParameterCombination PcfBinding::getParaCom() const { return m_ParaCom; }
void PcfBinding::setParaCom(ParameterCombination const &value) {
  m_ParaCom = value;
  m_ParaComIsSet = true;
}
bool PcfBinding::paraComIsSet() const { return m_ParaComIsSet; }
void PcfBinding::unsetParaCom() { m_ParaComIsSet = false; }
BindingLevel PcfBinding::getBindLevel() const { return m_BindLevel; }
void PcfBinding::setBindLevel(BindingLevel const &value) {
  m_BindLevel = value;
  m_BindLevelIsSet = true;
}
bool PcfBinding::bindLevelIsSet() const { return m_BindLevelIsSet; }
void PcfBinding::unsetBindLevel() { m_BindLevelIsSet = false; }
std::vector<std::string> &PcfBinding::getIpv4FrameRouteList() {
  return m_Ipv4FrameRouteList;
}
void PcfBinding::setIpv4FrameRouteList(std::vector<std::string> const &value) {
  m_Ipv4FrameRouteList = value;
  m_Ipv4FrameRouteListIsSet = true;
}
bool PcfBinding::ipv4FrameRouteListIsSet() const {
  return m_Ipv4FrameRouteListIsSet;
}
void PcfBinding::unsetIpv4FrameRouteList() {
  m_Ipv4FrameRouteListIsSet = false;
}
std::vector<Ipv6Prefix> &PcfBinding::getIpv6FrameRouteList() {
  return m_Ipv6FrameRouteList;
}
void PcfBinding::setIpv6FrameRouteList(std::vector<Ipv6Prefix> const &value) {
  m_Ipv6FrameRouteList = value;
  m_Ipv6FrameRouteListIsSet = true;
}
bool PcfBinding::ipv6FrameRouteListIsSet() const {
  return m_Ipv6FrameRouteListIsSet;
}
void PcfBinding::unsetIpv6FrameRouteList() {
  m_Ipv6FrameRouteListIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
