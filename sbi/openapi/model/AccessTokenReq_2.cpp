/**
 * NRF OAuth2
 * NRF OAuth2 Authorization. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "AccessTokenReq_2.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

AccessTokenReq_2::AccessTokenReq_2() {
  m_Grant_type = "";
  m_NfInstanceId = "";
  m_NfTypeIsSet = false;
  m_TargetNfTypeIsSet = false;
  m_Scope = "";
  m_TargetNfInstanceId = "";
  m_TargetNfInstanceIdIsSet = false;
  m_RequesterPlmnIsSet = false;
  m_RequesterPlmnListIsSet = false;
  m_RequesterSnssaiListIsSet = false;
  m_RequesterFqdn = "";
  m_RequesterFqdnIsSet = false;
  m_RequesterSnpnListIsSet = false;
  m_TargetPlmnIsSet = false;
  m_TargetSnssaiListIsSet = false;
  m_TargetNsiListIsSet = false;
  m_TargetNfSetId = "";
  m_TargetNfSetIdIsSet = false;
  m_TargetNfServiceSetId = "";
  m_TargetNfServiceSetIdIsSet = false;
  m_HnrfAccessTokenUri = "";
  m_HnrfAccessTokenUriIsSet = false;
}

AccessTokenReq_2::~AccessTokenReq_2() {}

void AccessTokenReq_2::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const AccessTokenReq_2 &o) {
  j = nlohmann::json();
  j["grant_type"] = o.m_Grant_type;
  j["nfInstanceId"] = o.m_NfInstanceId;
  if (o.nfTypeIsSet())
    j["nfType"] = o.m_NfType;
  if (o.targetNfTypeIsSet())
    j["targetNfType"] = o.m_TargetNfType;
  j["scope"] = o.m_Scope;
  if (o.targetNfInstanceIdIsSet())
    j["targetNfInstanceId"] = o.m_TargetNfInstanceId;
  if (o.requesterPlmnIsSet())
    j["requesterPlmn"] = o.m_RequesterPlmn;
  if (o.requesterPlmnListIsSet() || !o.m_RequesterPlmnList.empty())
    j["requesterPlmnList"] = o.m_RequesterPlmnList;
  if (o.requesterSnssaiListIsSet() || !o.m_RequesterSnssaiList.empty())
    j["requesterSnssaiList"] = o.m_RequesterSnssaiList;
  if (o.requesterFqdnIsSet())
    j["requesterFqdn"] = o.m_RequesterFqdn;
  if (o.requesterSnpnListIsSet() || !o.m_RequesterSnpnList.empty())
    j["requesterSnpnList"] = o.m_RequesterSnpnList;
  if (o.targetPlmnIsSet())
    j["targetPlmn"] = o.m_TargetPlmn;
  if (o.targetSnssaiListIsSet() || !o.m_TargetSnssaiList.empty())
    j["targetSnssaiList"] = o.m_TargetSnssaiList;
  if (o.targetNsiListIsSet() || !o.m_TargetNsiList.empty())
    j["targetNsiList"] = o.m_TargetNsiList;
  if (o.targetNfSetIdIsSet())
    j["targetNfSetId"] = o.m_TargetNfSetId;
  if (o.targetNfServiceSetIdIsSet())
    j["targetNfServiceSetId"] = o.m_TargetNfServiceSetId;
  if (o.hnrfAccessTokenUriIsSet())
    j["hnrfAccessTokenUri"] = o.m_HnrfAccessTokenUri;
}

void from_json(const nlohmann::json &j, AccessTokenReq_2 &o) {
  j.at("grant_type").get_to(o.m_Grant_type);
  j.at("nfInstanceId").get_to(o.m_NfInstanceId);
  if (j.find("nfType") != j.end()) {
    j.at("nfType").get_to(o.m_NfType);
    o.m_NfTypeIsSet = true;
  }
  if (j.find("targetNfType") != j.end()) {
    j.at("targetNfType").get_to(o.m_TargetNfType);
    o.m_TargetNfTypeIsSet = true;
  }
  j.at("scope").get_to(o.m_Scope);
  if (j.find("targetNfInstanceId") != j.end()) {
    j.at("targetNfInstanceId").get_to(o.m_TargetNfInstanceId);
    o.m_TargetNfInstanceIdIsSet = true;
  }
  if (j.find("requesterPlmn") != j.end()) {
    j.at("requesterPlmn").get_to(o.m_RequesterPlmn);
    o.m_RequesterPlmnIsSet = true;
  }
  if (j.find("requesterPlmnList") != j.end()) {
    j.at("requesterPlmnList").get_to(o.m_RequesterPlmnList);
    o.m_RequesterPlmnListIsSet = true;
  }
  if (j.find("requesterSnssaiList") != j.end()) {
    j.at("requesterSnssaiList").get_to(o.m_RequesterSnssaiList);
    o.m_RequesterSnssaiListIsSet = true;
  }
  if (j.find("requesterFqdn") != j.end()) {
    j.at("requesterFqdn").get_to(o.m_RequesterFqdn);
    o.m_RequesterFqdnIsSet = true;
  }
  if (j.find("requesterSnpnList") != j.end()) {
    j.at("requesterSnpnList").get_to(o.m_RequesterSnpnList);
    o.m_RequesterSnpnListIsSet = true;
  }
  if (j.find("targetPlmn") != j.end()) {
    j.at("targetPlmn").get_to(o.m_TargetPlmn);
    o.m_TargetPlmnIsSet = true;
  }
  if (j.find("targetSnssaiList") != j.end()) {
    j.at("targetSnssaiList").get_to(o.m_TargetSnssaiList);
    o.m_TargetSnssaiListIsSet = true;
  }
  if (j.find("targetNsiList") != j.end()) {
    j.at("targetNsiList").get_to(o.m_TargetNsiList);
    o.m_TargetNsiListIsSet = true;
  }
  if (j.find("targetNfSetId") != j.end()) {
    j.at("targetNfSetId").get_to(o.m_TargetNfSetId);
    o.m_TargetNfSetIdIsSet = true;
  }
  if (j.find("targetNfServiceSetId") != j.end()) {
    j.at("targetNfServiceSetId").get_to(o.m_TargetNfServiceSetId);
    o.m_TargetNfServiceSetIdIsSet = true;
  }
  if (j.find("hnrfAccessTokenUri") != j.end()) {
    j.at("hnrfAccessTokenUri").get_to(o.m_HnrfAccessTokenUri);
    o.m_HnrfAccessTokenUriIsSet = true;
  }
}

std::string AccessTokenReq_2::getGrantType() const { return m_Grant_type; }
void AccessTokenReq_2::setGrantType(std::string const &value) {
  m_Grant_type = value;
}
std::string AccessTokenReq_2::getNfInstanceId() const { return m_NfInstanceId; }
void AccessTokenReq_2::setNfInstanceId(std::string const &value) {
  m_NfInstanceId = value;
}
NFType AccessTokenReq_2::getNfType() const { return m_NfType; }
void AccessTokenReq_2::setNfType(NFType const &value) {
  m_NfType = value;
  m_NfTypeIsSet = true;
}
bool AccessTokenReq_2::nfTypeIsSet() const { return m_NfTypeIsSet; }
void AccessTokenReq_2::unsetNfType() { m_NfTypeIsSet = false; }
NFType AccessTokenReq_2::getTargetNfType() const { return m_TargetNfType; }
void AccessTokenReq_2::setTargetNfType(NFType const &value) {
  m_TargetNfType = value;
  m_TargetNfTypeIsSet = true;
}
bool AccessTokenReq_2::targetNfTypeIsSet() const { return m_TargetNfTypeIsSet; }
void AccessTokenReq_2::unsetTargetNfType() { m_TargetNfTypeIsSet = false; }
std::string AccessTokenReq_2::getScope() const { return m_Scope; }
void AccessTokenReq_2::setScope(std::string const &value) { m_Scope = value; }
std::string AccessTokenReq_2::getTargetNfInstanceId() const {
  return m_TargetNfInstanceId;
}
void AccessTokenReq_2::setTargetNfInstanceId(std::string const &value) {
  m_TargetNfInstanceId = value;
  m_TargetNfInstanceIdIsSet = true;
}
bool AccessTokenReq_2::targetNfInstanceIdIsSet() const {
  return m_TargetNfInstanceIdIsSet;
}
void AccessTokenReq_2::unsetTargetNfInstanceId() {
  m_TargetNfInstanceIdIsSet = false;
}
PlmnId AccessTokenReq_2::getRequesterPlmn() const { return m_RequesterPlmn; }
void AccessTokenReq_2::setRequesterPlmn(PlmnId const &value) {
  m_RequesterPlmn = value;
  m_RequesterPlmnIsSet = true;
}
bool AccessTokenReq_2::requesterPlmnIsSet() const {
  return m_RequesterPlmnIsSet;
}
void AccessTokenReq_2::unsetRequesterPlmn() { m_RequesterPlmnIsSet = false; }
std::vector<PlmnId> &AccessTokenReq_2::getRequesterPlmnList() {
  return m_RequesterPlmnList;
}
void AccessTokenReq_2::setRequesterPlmnList(std::vector<PlmnId> const &value) {
  m_RequesterPlmnList = value;
  m_RequesterPlmnListIsSet = true;
}
bool AccessTokenReq_2::requesterPlmnListIsSet() const {
  return m_RequesterPlmnListIsSet;
}
void AccessTokenReq_2::unsetRequesterPlmnList() {
  m_RequesterPlmnListIsSet = false;
}
std::vector<Snssai> &AccessTokenReq_2::getRequesterSnssaiList() {
  return m_RequesterSnssaiList;
}
void AccessTokenReq_2::setRequesterSnssaiList(
    std::vector<Snssai> const &value) {
  m_RequesterSnssaiList = value;
  m_RequesterSnssaiListIsSet = true;
}
bool AccessTokenReq_2::requesterSnssaiListIsSet() const {
  return m_RequesterSnssaiListIsSet;
}
void AccessTokenReq_2::unsetRequesterSnssaiList() {
  m_RequesterSnssaiListIsSet = false;
}
std::string AccessTokenReq_2::getRequesterFqdn() const {
  return m_RequesterFqdn;
}
void AccessTokenReq_2::setRequesterFqdn(std::string const &value) {
  m_RequesterFqdn = value;
  m_RequesterFqdnIsSet = true;
}
bool AccessTokenReq_2::requesterFqdnIsSet() const {
  return m_RequesterFqdnIsSet;
}
void AccessTokenReq_2::unsetRequesterFqdn() { m_RequesterFqdnIsSet = false; }
std::vector<PlmnIdNid> &AccessTokenReq_2::getRequesterSnpnList() {
  return m_RequesterSnpnList;
}
void AccessTokenReq_2::setRequesterSnpnList(
    std::vector<PlmnIdNid> const &value) {
  m_RequesterSnpnList = value;
  m_RequesterSnpnListIsSet = true;
}
bool AccessTokenReq_2::requesterSnpnListIsSet() const {
  return m_RequesterSnpnListIsSet;
}
void AccessTokenReq_2::unsetRequesterSnpnList() {
  m_RequesterSnpnListIsSet = false;
}
PlmnId AccessTokenReq_2::getTargetPlmn() const { return m_TargetPlmn; }
void AccessTokenReq_2::setTargetPlmn(PlmnId const &value) {
  m_TargetPlmn = value;
  m_TargetPlmnIsSet = true;
}
bool AccessTokenReq_2::targetPlmnIsSet() const { return m_TargetPlmnIsSet; }
void AccessTokenReq_2::unsetTargetPlmn() { m_TargetPlmnIsSet = false; }
std::vector<Snssai> &AccessTokenReq_2::getTargetSnssaiList() {
  return m_TargetSnssaiList;
}
void AccessTokenReq_2::setTargetSnssaiList(std::vector<Snssai> const &value) {
  m_TargetSnssaiList = value;
  m_TargetSnssaiListIsSet = true;
}
bool AccessTokenReq_2::targetSnssaiListIsSet() const {
  return m_TargetSnssaiListIsSet;
}
void AccessTokenReq_2::unsetTargetSnssaiList() {
  m_TargetSnssaiListIsSet = false;
}
std::vector<std::string> &AccessTokenReq_2::getTargetNsiList() {
  return m_TargetNsiList;
}
void AccessTokenReq_2::setTargetNsiList(std::vector<std::string> const &value) {
  m_TargetNsiList = value;
  m_TargetNsiListIsSet = true;
}
bool AccessTokenReq_2::targetNsiListIsSet() const {
  return m_TargetNsiListIsSet;
}
void AccessTokenReq_2::unsetTargetNsiList() { m_TargetNsiListIsSet = false; }
std::string AccessTokenReq_2::getTargetNfSetId() const {
  return m_TargetNfSetId;
}
void AccessTokenReq_2::setTargetNfSetId(std::string const &value) {
  m_TargetNfSetId = value;
  m_TargetNfSetIdIsSet = true;
}
bool AccessTokenReq_2::targetNfSetIdIsSet() const {
  return m_TargetNfSetIdIsSet;
}
void AccessTokenReq_2::unsetTargetNfSetId() { m_TargetNfSetIdIsSet = false; }
std::string AccessTokenReq_2::getTargetNfServiceSetId() const {
  return m_TargetNfServiceSetId;
}
void AccessTokenReq_2::setTargetNfServiceSetId(std::string const &value) {
  m_TargetNfServiceSetId = value;
  m_TargetNfServiceSetIdIsSet = true;
}
bool AccessTokenReq_2::targetNfServiceSetIdIsSet() const {
  return m_TargetNfServiceSetIdIsSet;
}
void AccessTokenReq_2::unsetTargetNfServiceSetId() {
  m_TargetNfServiceSetIdIsSet = false;
}
std::string AccessTokenReq_2::getHnrfAccessTokenUri() const {
  return m_HnrfAccessTokenUri;
}
void AccessTokenReq_2::setHnrfAccessTokenUri(std::string const &value) {
  m_HnrfAccessTokenUri = value;
  m_HnrfAccessTokenUriIsSet = true;
}
bool AccessTokenReq_2::hnrfAccessTokenUriIsSet() const {
  return m_HnrfAccessTokenUriIsSet;
}
void AccessTokenReq_2::unsetHnrfAccessTokenUri() {
  m_HnrfAccessTokenUriIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
