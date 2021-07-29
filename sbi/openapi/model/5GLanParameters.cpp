/**
 * 3gpp-5glan-pp
 * API for 5G LAN Parameter Provision. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "5GLanParameters.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

5GLanParameters ::5GLanParameters() {
  m_ExterGroupId = "";
  m_Dnn = "";
  m_AaaIpv4Addr = "";
  m_AaaIpv4AddrIsSet = false;
  m_AaaIpv6AddrIsSet = false;
  m_AaaUsgsIsSet = false;
  m_MtcProviderId = "";
  m_MtcProviderIdIsSet = false;
}

5GLanParameters ::~5GLanParameters() {}

void 5GLanParameters ::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const 5GLanParameters & o) {
  j = nlohmann::json();
  j["exterGroupId"] = o.m_ExterGroupId;
  j["gpsis"] = o.m_Gpsis;
  j["dnn"] = o.m_Dnn;
  if (o.aaaIpv4AddrIsSet())
    j["aaaIpv4Addr"] = o.m_AaaIpv4Addr;
  if (o.aaaIpv6AddrIsSet())
    j["aaaIpv6Addr"] = o.m_AaaIpv6Addr;
  if (o.aaaUsgsIsSet() || !o.m_AaaUsgs.empty())
    j["aaaUsgs"] = o.m_AaaUsgs;
  if (o.mtcProviderIdIsSet())
    j["mtcProviderId"] = o.m_MtcProviderId;
  j["snssai"] = o.m_Snssai;
  j["sessionType"] = o.m_SessionType;
  j["appDesps"] = o.m_AppDesps;
}

void from_json(const nlohmann::json &j, 5GLanParameters & o) {
  j.at("exterGroupId").get_to(o.m_ExterGroupId);
  j.at("gpsis").get_to(o.m_Gpsis);
  j.at("dnn").get_to(o.m_Dnn);
  if (j.find("aaaIpv4Addr") != j.end()) {
    j.at("aaaIpv4Addr").get_to(o.m_AaaIpv4Addr);
    o.m_AaaIpv4AddrIsSet = true;
  }
  if (j.find("aaaIpv6Addr") != j.end()) {
    j.at("aaaIpv6Addr").get_to(o.m_AaaIpv6Addr);
    o.m_AaaIpv6AddrIsSet = true;
  }
  if (j.find("aaaUsgs") != j.end()) {
    j.at("aaaUsgs").get_to(o.m_AaaUsgs);
    o.m_AaaUsgsIsSet = true;
  }
  if (j.find("mtcProviderId") != j.end()) {
    j.at("mtcProviderId").get_to(o.m_MtcProviderId);
    o.m_MtcProviderIdIsSet = true;
  }
  j.at("snssai").get_to(o.m_Snssai);
  j.at("sessionType").get_to(o.m_SessionType);
  j.at("appDesps").get_to(o.m_AppDesps);
}

std::string 5GLanParameters ::getExterGroupId() const { return m_ExterGroupId; }
void 5GLanParameters ::setExterGroupId(std::string const &value) {
  m_ExterGroupId = value;
}
std::map<std::string, std::string> & 5GLanParameters ::getGpsis() {
  return m_Gpsis;
}
void 5GLanParameters ::setGpsis(
    std::map<std::string, std::string> const &value) {
  m_Gpsis = value;
}
std::string 5GLanParameters ::getDnn() const { return m_Dnn; }
void 5GLanParameters ::setDnn(std::string const &value) { m_Dnn = value; }
std::string 5GLanParameters ::getAaaIpv4Addr() const { return m_AaaIpv4Addr; }
void 5GLanParameters ::setAaaIpv4Addr(std::string const &value) {
  m_AaaIpv4Addr = value;
  m_AaaIpv4AddrIsSet = true;
}
bool 5GLanParameters ::aaaIpv4AddrIsSet() const { return m_AaaIpv4AddrIsSet; }
void 5GLanParameters ::unsetAaaIpv4Addr() { m_AaaIpv4AddrIsSet = false; }
Ipv6Addr 5GLanParameters ::getAaaIpv6Addr() const { return m_AaaIpv6Addr; }
void 5GLanParameters ::setAaaIpv6Addr(Ipv6Addr const &value) {
  m_AaaIpv6Addr = value;
  m_AaaIpv6AddrIsSet = true;
}
bool 5GLanParameters ::aaaIpv6AddrIsSet() const { return m_AaaIpv6AddrIsSet; }
void 5GLanParameters ::unsetAaaIpv6Addr() { m_AaaIpv6AddrIsSet = false; }
std::vector<AaaUsage> & 5GLanParameters ::getAaaUsgs() { return m_AaaUsgs; }
void 5GLanParameters ::setAaaUsgs(std::vector<AaaUsage> const &value) {
  m_AaaUsgs = value;
  m_AaaUsgsIsSet = true;
}
bool 5GLanParameters ::aaaUsgsIsSet() const { return m_AaaUsgsIsSet; }
void 5GLanParameters ::unsetAaaUsgs() { m_AaaUsgsIsSet = false; }
std::string 5GLanParameters ::getMtcProviderId() const {
  return m_MtcProviderId;
}
void 5GLanParameters ::setMtcProviderId(std::string const &value) {
  m_MtcProviderId = value;
  m_MtcProviderIdIsSet = true;
}
bool 5GLanParameters ::mtcProviderIdIsSet() const {
  return m_MtcProviderIdIsSet;
}
void 5GLanParameters ::unsetMtcProviderId() { m_MtcProviderIdIsSet = false; }
Snssai 5GLanParameters ::getSnssai() const { return m_Snssai; }
void 5GLanParameters ::setSnssai(Snssai const &value) { m_Snssai = value; }
PduSessionType 5GLanParameters ::getSessionType() const {
  return m_SessionType;
}
void 5GLanParameters ::setSessionType(PduSessionType const &value) {
  m_SessionType = value;
}
std::map<std::string, AppDescriptor> & 5GLanParameters ::getAppDesps() {
  return m_AppDesps;
}
void 5GLanParameters ::setAppDesps(
    std::map<std::string, AppDescriptor> const &value) {
  m_AppDesps = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
