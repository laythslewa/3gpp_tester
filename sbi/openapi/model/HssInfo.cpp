/**
 * NRF NFManagement Service
 * NRF NFManagement Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "HssInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

HssInfo::HssInfo() {
  m_GroupId = "";
  m_GroupIdIsSet = false;
  m_ImsiRangesIsSet = false;
  m_ImsPrivateIdentityRangesIsSet = false;
  m_ImsPublicIdentityRangesIsSet = false;
  m_MsisdnRangesIsSet = false;
}

HssInfo::~HssInfo() {}

void HssInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const HssInfo &o) {
  j = nlohmann::json();
  if (o.groupIdIsSet())
    j["groupId"] = o.m_GroupId;
  if (o.imsiRangesIsSet() || !o.m_ImsiRanges.empty())
    j["imsiRanges"] = o.m_ImsiRanges;
  if (o.imsPrivateIdentityRangesIsSet() ||
      !o.m_ImsPrivateIdentityRanges.empty())
    j["imsPrivateIdentityRanges"] = o.m_ImsPrivateIdentityRanges;
  if (o.imsPublicIdentityRangesIsSet() || !o.m_ImsPublicIdentityRanges.empty())
    j["imsPublicIdentityRanges"] = o.m_ImsPublicIdentityRanges;
  if (o.msisdnRangesIsSet() || !o.m_MsisdnRanges.empty())
    j["msisdnRanges"] = o.m_MsisdnRanges;
}

void from_json(const nlohmann::json &j, HssInfo &o) {
  if (j.find("groupId") != j.end()) {
    j.at("groupId").get_to(o.m_GroupId);
    o.m_GroupIdIsSet = true;
  }
  if (j.find("imsiRanges") != j.end()) {
    j.at("imsiRanges").get_to(o.m_ImsiRanges);
    o.m_ImsiRangesIsSet = true;
  }
  if (j.find("imsPrivateIdentityRanges") != j.end()) {
    j.at("imsPrivateIdentityRanges").get_to(o.m_ImsPrivateIdentityRanges);
    o.m_ImsPrivateIdentityRangesIsSet = true;
  }
  if (j.find("imsPublicIdentityRanges") != j.end()) {
    j.at("imsPublicIdentityRanges").get_to(o.m_ImsPublicIdentityRanges);
    o.m_ImsPublicIdentityRangesIsSet = true;
  }
  if (j.find("msisdnRanges") != j.end()) {
    j.at("msisdnRanges").get_to(o.m_MsisdnRanges);
    o.m_MsisdnRangesIsSet = true;
  }
}

std::string HssInfo::getGroupId() const { return m_GroupId; }
void HssInfo::setGroupId(std::string const &value) {
  m_GroupId = value;
  m_GroupIdIsSet = true;
}
bool HssInfo::groupIdIsSet() const { return m_GroupIdIsSet; }
void HssInfo::unsetGroupId() { m_GroupIdIsSet = false; }
std::vector<ImsiRange> &HssInfo::getImsiRanges() { return m_ImsiRanges; }
void HssInfo::setImsiRanges(std::vector<ImsiRange> const &value) {
  m_ImsiRanges = value;
  m_ImsiRangesIsSet = true;
}
bool HssInfo::imsiRangesIsSet() const { return m_ImsiRangesIsSet; }
void HssInfo::unsetImsiRanges() { m_ImsiRangesIsSet = false; }
std::vector<IdentityRange> &HssInfo::getImsPrivateIdentityRanges() {
  return m_ImsPrivateIdentityRanges;
}
void HssInfo::setImsPrivateIdentityRanges(
    std::vector<IdentityRange> const &value) {
  m_ImsPrivateIdentityRanges = value;
  m_ImsPrivateIdentityRangesIsSet = true;
}
bool HssInfo::imsPrivateIdentityRangesIsSet() const {
  return m_ImsPrivateIdentityRangesIsSet;
}
void HssInfo::unsetImsPrivateIdentityRanges() {
  m_ImsPrivateIdentityRangesIsSet = false;
}
std::vector<IdentityRange> &HssInfo::getImsPublicIdentityRanges() {
  return m_ImsPublicIdentityRanges;
}
void HssInfo::setImsPublicIdentityRanges(
    std::vector<IdentityRange> const &value) {
  m_ImsPublicIdentityRanges = value;
  m_ImsPublicIdentityRangesIsSet = true;
}
bool HssInfo::imsPublicIdentityRangesIsSet() const {
  return m_ImsPublicIdentityRangesIsSet;
}
void HssInfo::unsetImsPublicIdentityRanges() {
  m_ImsPublicIdentityRangesIsSet = false;
}
std::vector<IdentityRange> &HssInfo::getMsisdnRanges() {
  return m_MsisdnRanges;
}
void HssInfo::setMsisdnRanges(std::vector<IdentityRange> const &value) {
  m_MsisdnRanges = value;
  m_MsisdnRangesIsSet = true;
}
bool HssInfo::msisdnRangesIsSet() const { return m_MsisdnRangesIsSet; }
void HssInfo::unsetMsisdnRanges() { m_MsisdnRangesIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
