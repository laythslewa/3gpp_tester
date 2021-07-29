/**
 * Nhss_imsUEAU
 * Nhss UE Authentication Service for IMS. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SipAuthenticationInfoResult.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

SipAuthenticationInfoResult::SipAuthenticationInfoResult() {
  m_Impi = "";
  m_r_3gAkaAvsIsSet = false;
  m_DigestAuthIsSet = false;
  m_LineIdentifierListIsSet = false;
  m_IpAddressIsSet = false;
}

SipAuthenticationInfoResult::~SipAuthenticationInfoResult() {}

void SipAuthenticationInfoResult::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const SipAuthenticationInfoResult &o) {
  j = nlohmann::json();
  j["impi"] = o.m_Impi;
  if (o.r3gAkaAvsIsSet() || !o.m_r_3gAkaAvs.empty())
    j["3gAkaAvs"] = o.m_r_3gAkaAvs;
  if (o.digestAuthIsSet())
    j["digestAuth"] = o.m_DigestAuth;
  if (o.lineIdentifierListIsSet() || !o.m_LineIdentifierList.empty())
    j["lineIdentifierList"] = o.m_LineIdentifierList;
  if (o.ipAddressIsSet())
    j["ipAddress"] = o.m_IpAddress;
}

void from_json(const nlohmann::json &j, SipAuthenticationInfoResult &o) {
  j.at("impi").get_to(o.m_Impi);
  if (j.find("3gAkaAvs") != j.end()) {
    j.at("3gAkaAvs").get_to(o.m_r_3gAkaAvs);
    o.m_r_3gAkaAvsIsSet = true;
  }
  if (j.find("digestAuth") != j.end()) {
    j.at("digestAuth").get_to(o.m_DigestAuth);
    o.m_DigestAuthIsSet = true;
  }
  if (j.find("lineIdentifierList") != j.end()) {
    j.at("lineIdentifierList").get_to(o.m_LineIdentifierList);
    o.m_LineIdentifierListIsSet = true;
  }
  if (j.find("ipAddress") != j.end()) {
    j.at("ipAddress").get_to(o.m_IpAddress);
    o.m_IpAddressIsSet = true;
  }
}

std::string SipAuthenticationInfoResult::getImpi() const { return m_Impi; }
void SipAuthenticationInfoResult::setImpi(std::string const &value) {
  m_Impi = value;
}
std::vector<3GAkaAv> &SipAuthenticationInfoResult::getR3gAkaAvs() {
  return m_r_3gAkaAvs;
}
void SipAuthenticationInfoResult::setR3gAkaAvs(
    std::vector<3GAkaAv> const &value) {
  m_r_3gAkaAvs = value;
  m_r_3gAkaAvsIsSet = true;
}
bool SipAuthenticationInfoResult::r3gAkaAvsIsSet() const {
  return m_r_3gAkaAvsIsSet;
}
void SipAuthenticationInfoResult::unsetr_3gAkaAvs() {
  m_r_3gAkaAvsIsSet = false;
}
DigestAuthentication SipAuthenticationInfoResult::getDigestAuth() const {
  return m_DigestAuth;
}
void SipAuthenticationInfoResult::setDigestAuth(
    DigestAuthentication const &value) {
  m_DigestAuth = value;
  m_DigestAuthIsSet = true;
}
bool SipAuthenticationInfoResult::digestAuthIsSet() const {
  return m_DigestAuthIsSet;
}
void SipAuthenticationInfoResult::unsetDigestAuth() {
  m_DigestAuthIsSet = false;
}
std::vector<std::string> &SipAuthenticationInfoResult::getLineIdentifierList() {
  return m_LineIdentifierList;
}
void SipAuthenticationInfoResult::setLineIdentifierList(
    std::vector<std::string> const &value) {
  m_LineIdentifierList = value;
  m_LineIdentifierListIsSet = true;
}
bool SipAuthenticationInfoResult::lineIdentifierListIsSet() const {
  return m_LineIdentifierListIsSet;
}
void SipAuthenticationInfoResult::unsetLineIdentifierList() {
  m_LineIdentifierListIsSet = false;
}
IpAddress SipAuthenticationInfoResult::getIpAddress() const {
  return m_IpAddress;
}
void SipAuthenticationInfoResult::setIpAddress(IpAddress const &value) {
  m_IpAddress = value;
  m_IpAddressIsSet = true;
}
bool SipAuthenticationInfoResult::ipAddressIsSet() const {
  return m_IpAddressIsSet;
}
void SipAuthenticationInfoResult::unsetIpAddress() { m_IpAddressIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
