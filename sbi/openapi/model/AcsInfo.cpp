/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.3.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "AcsInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

AcsInfo::AcsInfo() {
  m_AcsUrl = "";
  m_AcsUrlIsSet = false;
  m_AcsIpv4Addr = "";
  m_AcsIpv4AddrIsSet = false;
  m_AcsIpv6AddrIsSet = false;
}

AcsInfo::~AcsInfo() {}

void AcsInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const AcsInfo &o) {
  j = nlohmann::json();
  if (o.acsUrlIsSet())
    j["acsUrl"] = o.m_AcsUrl;
  if (o.acsIpv4AddrIsSet())
    j["acsIpv4Addr"] = o.m_AcsIpv4Addr;
  if (o.acsIpv6AddrIsSet())
    j["acsIpv6Addr"] = o.m_AcsIpv6Addr;
}

void from_json(const nlohmann::json &j, AcsInfo &o) {
  if (j.find("acsUrl") != j.end()) {
    j.at("acsUrl").get_to(o.m_AcsUrl);
    o.m_AcsUrlIsSet = true;
  }
  if (j.find("acsIpv4Addr") != j.end()) {
    j.at("acsIpv4Addr").get_to(o.m_AcsIpv4Addr);
    o.m_AcsIpv4AddrIsSet = true;
  }
  if (j.find("acsIpv6Addr") != j.end()) {
    j.at("acsIpv6Addr").get_to(o.m_AcsIpv6Addr);
    o.m_AcsIpv6AddrIsSet = true;
  }
}

std::string AcsInfo::getAcsUrl() const { return m_AcsUrl; }
void AcsInfo::setAcsUrl(std::string const &value) {
  m_AcsUrl = value;
  m_AcsUrlIsSet = true;
}
bool AcsInfo::acsUrlIsSet() const { return m_AcsUrlIsSet; }
void AcsInfo::unsetAcsUrl() { m_AcsUrlIsSet = false; }
std::string AcsInfo::getAcsIpv4Addr() const { return m_AcsIpv4Addr; }
void AcsInfo::setAcsIpv4Addr(std::string const &value) {
  m_AcsIpv4Addr = value;
  m_AcsIpv4AddrIsSet = true;
}
bool AcsInfo::acsIpv4AddrIsSet() const { return m_AcsIpv4AddrIsSet; }
void AcsInfo::unsetAcsIpv4Addr() { m_AcsIpv4AddrIsSet = false; }
Ipv6Addr AcsInfo::getAcsIpv6Addr() const { return m_AcsIpv6Addr; }
void AcsInfo::setAcsIpv6Addr(Ipv6Addr const &value) {
  m_AcsIpv6Addr = value;
  m_AcsIpv6AddrIsSet = true;
}
bool AcsInfo::acsIpv6AddrIsSet() const { return m_AcsIpv6AddrIsSet; }
void AcsInfo::unsetAcsIpv6Addr() { m_AcsIpv6AddrIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org