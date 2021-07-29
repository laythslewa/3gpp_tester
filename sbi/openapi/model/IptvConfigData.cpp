/**
 * 3gpp-iptvconfiguration
 * API for IPTV configuration. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "IptvConfigData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

IptvConfigData::IptvConfigData() {
  m_Self = "";
  m_SelfIsSet = false;
  m_Gpsi = "";
  m_GpsiIsSet = false;
  m_ExterGroupId = "";
  m_ExterGroupIdIsSet = false;
  m_AfAppId = "";
  m_Dnn = "";
  m_DnnIsSet = false;
  m_SnssaiIsSet = false;
  m_MtcProviderId = "";
  m_MtcProviderIdIsSet = false;
  m_SuppFeat = "";
}

IptvConfigData::~IptvConfigData() {}

void IptvConfigData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const IptvConfigData &o) {
  j = nlohmann::json();
  if (o.selfIsSet())
    j["self"] = o.m_Self;
  if (o.gpsiIsSet())
    j["gpsi"] = o.m_Gpsi;
  if (o.exterGroupIdIsSet())
    j["exterGroupId"] = o.m_ExterGroupId;
  j["afAppId"] = o.m_AfAppId;
  if (o.dnnIsSet())
    j["dnn"] = o.m_Dnn;
  if (o.snssaiIsSet())
    j["snssai"] = o.m_Snssai;
  j["multiAccCtrls"] = o.m_MultiAccCtrls;
  if (o.mtcProviderIdIsSet())
    j["mtcProviderId"] = o.m_MtcProviderId;
  j["suppFeat"] = o.m_SuppFeat;
}

void from_json(const nlohmann::json &j, IptvConfigData &o) {
  if (j.find("self") != j.end()) {
    j.at("self").get_to(o.m_Self);
    o.m_SelfIsSet = true;
  }
  if (j.find("gpsi") != j.end()) {
    j.at("gpsi").get_to(o.m_Gpsi);
    o.m_GpsiIsSet = true;
  }
  if (j.find("exterGroupId") != j.end()) {
    j.at("exterGroupId").get_to(o.m_ExterGroupId);
    o.m_ExterGroupIdIsSet = true;
  }
  j.at("afAppId").get_to(o.m_AfAppId);
  if (j.find("dnn") != j.end()) {
    j.at("dnn").get_to(o.m_Dnn);
    o.m_DnnIsSet = true;
  }
  if (j.find("snssai") != j.end()) {
    j.at("snssai").get_to(o.m_Snssai);
    o.m_SnssaiIsSet = true;
  }
  j.at("multiAccCtrls").get_to(o.m_MultiAccCtrls);
  if (j.find("mtcProviderId") != j.end()) {
    j.at("mtcProviderId").get_to(o.m_MtcProviderId);
    o.m_MtcProviderIdIsSet = true;
  }
  j.at("suppFeat").get_to(o.m_SuppFeat);
}

std::string IptvConfigData::getSelf() const { return m_Self; }
void IptvConfigData::setSelf(std::string const &value) {
  m_Self = value;
  m_SelfIsSet = true;
}
bool IptvConfigData::selfIsSet() const { return m_SelfIsSet; }
void IptvConfigData::unsetSelf() { m_SelfIsSet = false; }
std::string IptvConfigData::getGpsi() const { return m_Gpsi; }
void IptvConfigData::setGpsi(std::string const &value) {
  m_Gpsi = value;
  m_GpsiIsSet = true;
}
bool IptvConfigData::gpsiIsSet() const { return m_GpsiIsSet; }
void IptvConfigData::unsetGpsi() { m_GpsiIsSet = false; }
std::string IptvConfigData::getExterGroupId() const { return m_ExterGroupId; }
void IptvConfigData::setExterGroupId(std::string const &value) {
  m_ExterGroupId = value;
  m_ExterGroupIdIsSet = true;
}
bool IptvConfigData::exterGroupIdIsSet() const { return m_ExterGroupIdIsSet; }
void IptvConfigData::unsetExterGroupId() { m_ExterGroupIdIsSet = false; }
std::string IptvConfigData::getAfAppId() const { return m_AfAppId; }
void IptvConfigData::setAfAppId(std::string const &value) { m_AfAppId = value; }
std::string IptvConfigData::getDnn() const { return m_Dnn; }
void IptvConfigData::setDnn(std::string const &value) {
  m_Dnn = value;
  m_DnnIsSet = true;
}
bool IptvConfigData::dnnIsSet() const { return m_DnnIsSet; }
void IptvConfigData::unsetDnn() { m_DnnIsSet = false; }
Snssai IptvConfigData::getSnssai() const { return m_Snssai; }
void IptvConfigData::setSnssai(Snssai const &value) {
  m_Snssai = value;
  m_SnssaiIsSet = true;
}
bool IptvConfigData::snssaiIsSet() const { return m_SnssaiIsSet; }
void IptvConfigData::unsetSnssai() { m_SnssaiIsSet = false; }
std::map<std::string, MulticastAccessControl> &
IptvConfigData::getMultiAccCtrls() {
  return m_MultiAccCtrls;
}
void IptvConfigData::setMultiAccCtrls(
    std::map<std::string, MulticastAccessControl> const &value) {
  m_MultiAccCtrls = value;
}
std::string IptvConfigData::getMtcProviderId() const { return m_MtcProviderId; }
void IptvConfigData::setMtcProviderId(std::string const &value) {
  m_MtcProviderId = value;
  m_MtcProviderIdIsSet = true;
}
bool IptvConfigData::mtcProviderIdIsSet() const { return m_MtcProviderIdIsSet; }
void IptvConfigData::unsetMtcProviderId() { m_MtcProviderIdIsSet = false; }
std::string IptvConfigData::getSuppFeat() const { return m_SuppFeat; }
void IptvConfigData::setSuppFeat(std::string const &value) {
  m_SuppFeat = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
