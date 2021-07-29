/**
 * Npcf_PolicyAuthorization Service API
 * PCF Policy Authorization Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "TsnBridgeInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

TsnBridgeInfo::TsnBridgeInfo() {
  m_BridgeId = 0;
  m_BridgeIdIsSet = false;
  m_DsttAddr = "";
  m_DsttAddrIsSet = false;
  m_DsttIpv4Addr = "";
  m_DsttIpv4AddrIsSet = false;
  m_DsttIpv6AddrIsSet = false;
  m_DsttPortNum = 0;
  m_DsttPortNumIsSet = false;
  m_DsttResidTime = 0;
  m_DsttResidTimeIsSet = false;
}

TsnBridgeInfo::~TsnBridgeInfo() {}

void TsnBridgeInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const TsnBridgeInfo &o) {
  j = nlohmann::json();
  if (o.bridgeIdIsSet())
    j["bridgeId"] = o.m_BridgeId;
  if (o.dsttAddrIsSet())
    j["dsttAddr"] = o.m_DsttAddr;
  if (o.dsttIpv4AddrIsSet())
    j["dsttIpv4Addr"] = o.m_DsttIpv4Addr;
  if (o.dsttIpv6AddrIsSet())
    j["dsttIpv6Addr"] = o.m_DsttIpv6Addr;
  if (o.dsttPortNumIsSet())
    j["dsttPortNum"] = o.m_DsttPortNum;
  if (o.dsttResidTimeIsSet())
    j["dsttResidTime"] = o.m_DsttResidTime;
}

void from_json(const nlohmann::json &j, TsnBridgeInfo &o) {
  if (j.find("bridgeId") != j.end()) {
    j.at("bridgeId").get_to(o.m_BridgeId);
    o.m_BridgeIdIsSet = true;
  }
  if (j.find("dsttAddr") != j.end()) {
    j.at("dsttAddr").get_to(o.m_DsttAddr);
    o.m_DsttAddrIsSet = true;
  }
  if (j.find("dsttIpv4Addr") != j.end()) {
    j.at("dsttIpv4Addr").get_to(o.m_DsttIpv4Addr);
    o.m_DsttIpv4AddrIsSet = true;
  }
  if (j.find("dsttIpv6Addr") != j.end()) {
    j.at("dsttIpv6Addr").get_to(o.m_DsttIpv6Addr);
    o.m_DsttIpv6AddrIsSet = true;
  }
  if (j.find("dsttPortNum") != j.end()) {
    j.at("dsttPortNum").get_to(o.m_DsttPortNum);
    o.m_DsttPortNumIsSet = true;
  }
  if (j.find("dsttResidTime") != j.end()) {
    j.at("dsttResidTime").get_to(o.m_DsttResidTime);
    o.m_DsttResidTimeIsSet = true;
  }
}

int32_t TsnBridgeInfo::getBridgeId() const { return m_BridgeId; }
void TsnBridgeInfo::setBridgeId(int32_t const value) {
  m_BridgeId = value;
  m_BridgeIdIsSet = true;
}
bool TsnBridgeInfo::bridgeIdIsSet() const { return m_BridgeIdIsSet; }
void TsnBridgeInfo::unsetBridgeId() { m_BridgeIdIsSet = false; }
std::string TsnBridgeInfo::getDsttAddr() const { return m_DsttAddr; }
void TsnBridgeInfo::setDsttAddr(std::string const &value) {
  m_DsttAddr = value;
  m_DsttAddrIsSet = true;
}
bool TsnBridgeInfo::dsttAddrIsSet() const { return m_DsttAddrIsSet; }
void TsnBridgeInfo::unsetDsttAddr() { m_DsttAddrIsSet = false; }
std::string TsnBridgeInfo::getDsttIpv4Addr() const { return m_DsttIpv4Addr; }
void TsnBridgeInfo::setDsttIpv4Addr(std::string const &value) {
  m_DsttIpv4Addr = value;
  m_DsttIpv4AddrIsSet = true;
}
bool TsnBridgeInfo::dsttIpv4AddrIsSet() const { return m_DsttIpv4AddrIsSet; }
void TsnBridgeInfo::unsetDsttIpv4Addr() { m_DsttIpv4AddrIsSet = false; }
Ipv6Addr TsnBridgeInfo::getDsttIpv6Addr() const { return m_DsttIpv6Addr; }
void TsnBridgeInfo::setDsttIpv6Addr(Ipv6Addr const &value) {
  m_DsttIpv6Addr = value;
  m_DsttIpv6AddrIsSet = true;
}
bool TsnBridgeInfo::dsttIpv6AddrIsSet() const { return m_DsttIpv6AddrIsSet; }
void TsnBridgeInfo::unsetDsttIpv6Addr() { m_DsttIpv6AddrIsSet = false; }
int32_t TsnBridgeInfo::getDsttPortNum() const { return m_DsttPortNum; }
void TsnBridgeInfo::setDsttPortNum(int32_t const value) {
  m_DsttPortNum = value;
  m_DsttPortNumIsSet = true;
}
bool TsnBridgeInfo::dsttPortNumIsSet() const { return m_DsttPortNumIsSet; }
void TsnBridgeInfo::unsetDsttPortNum() { m_DsttPortNumIsSet = false; }
int32_t TsnBridgeInfo::getDsttResidTime() const { return m_DsttResidTime; }
void TsnBridgeInfo::setDsttResidTime(int32_t const value) {
  m_DsttResidTime = value;
  m_DsttResidTimeIsSet = true;
}
bool TsnBridgeInfo::dsttResidTimeIsSet() const { return m_DsttResidTimeIsSet; }
void TsnBridgeInfo::unsetDsttResidTime() { m_DsttResidTimeIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
