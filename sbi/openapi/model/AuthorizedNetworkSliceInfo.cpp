/**
 * NSSF NS Selection
 * NSSF Network Slice Selection Service. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "AuthorizedNetworkSliceInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

AuthorizedNetworkSliceInfo::AuthorizedNetworkSliceInfo() {
  m_AllowedNssaiListIsSet = false;
  m_ConfiguredNssaiIsSet = false;
  m_TargetAmfSet = "";
  m_TargetAmfSetIsSet = false;
  m_CandidateAmfListIsSet = false;
  m_RejectedNssaiInPlmnIsSet = false;
  m_RejectedNssaiInTaIsSet = false;
  m_NsiInformationIsSet = false;
  m_SupportedFeatures = "";
  m_SupportedFeaturesIsSet = false;
  m_NrfAmfSet = "";
  m_NrfAmfSetIsSet = false;
  m_NrfAmfSetNfMgtUri = "";
  m_NrfAmfSetNfMgtUriIsSet = false;
  m_NrfAmfSetAccessTokenUri = "";
  m_NrfAmfSetAccessTokenUriIsSet = false;
  m_TargetAmfServiceSet = "";
  m_TargetAmfServiceSetIsSet = false;
}

AuthorizedNetworkSliceInfo::~AuthorizedNetworkSliceInfo() {}

void AuthorizedNetworkSliceInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const AuthorizedNetworkSliceInfo &o) {
  j = nlohmann::json();
  if (o.allowedNssaiListIsSet() || !o.m_AllowedNssaiList.empty())
    j["allowedNssaiList"] = o.m_AllowedNssaiList;
  if (o.configuredNssaiIsSet() || !o.m_ConfiguredNssai.empty())
    j["configuredNssai"] = o.m_ConfiguredNssai;
  if (o.targetAmfSetIsSet())
    j["targetAmfSet"] = o.m_TargetAmfSet;
  if (o.candidateAmfListIsSet() || !o.m_CandidateAmfList.empty())
    j["candidateAmfList"] = o.m_CandidateAmfList;
  if (o.rejectedNssaiInPlmnIsSet() || !o.m_RejectedNssaiInPlmn.empty())
    j["rejectedNssaiInPlmn"] = o.m_RejectedNssaiInPlmn;
  if (o.rejectedNssaiInTaIsSet() || !o.m_RejectedNssaiInTa.empty())
    j["rejectedNssaiInTa"] = o.m_RejectedNssaiInTa;
  if (o.nsiInformationIsSet())
    j["nsiInformation"] = o.m_NsiInformation;
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
  if (o.nrfAmfSetIsSet())
    j["nrfAmfSet"] = o.m_NrfAmfSet;
  if (o.nrfAmfSetNfMgtUriIsSet())
    j["nrfAmfSetNfMgtUri"] = o.m_NrfAmfSetNfMgtUri;
  if (o.nrfAmfSetAccessTokenUriIsSet())
    j["nrfAmfSetAccessTokenUri"] = o.m_NrfAmfSetAccessTokenUri;
  if (o.targetAmfServiceSetIsSet())
    j["targetAmfServiceSet"] = o.m_TargetAmfServiceSet;
}

void from_json(const nlohmann::json &j, AuthorizedNetworkSliceInfo &o) {
  if (j.find("allowedNssaiList") != j.end()) {
    j.at("allowedNssaiList").get_to(o.m_AllowedNssaiList);
    o.m_AllowedNssaiListIsSet = true;
  }
  if (j.find("configuredNssai") != j.end()) {
    j.at("configuredNssai").get_to(o.m_ConfiguredNssai);
    o.m_ConfiguredNssaiIsSet = true;
  }
  if (j.find("targetAmfSet") != j.end()) {
    j.at("targetAmfSet").get_to(o.m_TargetAmfSet);
    o.m_TargetAmfSetIsSet = true;
  }
  if (j.find("candidateAmfList") != j.end()) {
    j.at("candidateAmfList").get_to(o.m_CandidateAmfList);
    o.m_CandidateAmfListIsSet = true;
  }
  if (j.find("rejectedNssaiInPlmn") != j.end()) {
    j.at("rejectedNssaiInPlmn").get_to(o.m_RejectedNssaiInPlmn);
    o.m_RejectedNssaiInPlmnIsSet = true;
  }
  if (j.find("rejectedNssaiInTa") != j.end()) {
    j.at("rejectedNssaiInTa").get_to(o.m_RejectedNssaiInTa);
    o.m_RejectedNssaiInTaIsSet = true;
  }
  if (j.find("nsiInformation") != j.end()) {
    j.at("nsiInformation").get_to(o.m_NsiInformation);
    o.m_NsiInformationIsSet = true;
  }
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
  if (j.find("nrfAmfSet") != j.end()) {
    j.at("nrfAmfSet").get_to(o.m_NrfAmfSet);
    o.m_NrfAmfSetIsSet = true;
  }
  if (j.find("nrfAmfSetNfMgtUri") != j.end()) {
    j.at("nrfAmfSetNfMgtUri").get_to(o.m_NrfAmfSetNfMgtUri);
    o.m_NrfAmfSetNfMgtUriIsSet = true;
  }
  if (j.find("nrfAmfSetAccessTokenUri") != j.end()) {
    j.at("nrfAmfSetAccessTokenUri").get_to(o.m_NrfAmfSetAccessTokenUri);
    o.m_NrfAmfSetAccessTokenUriIsSet = true;
  }
  if (j.find("targetAmfServiceSet") != j.end()) {
    j.at("targetAmfServiceSet").get_to(o.m_TargetAmfServiceSet);
    o.m_TargetAmfServiceSetIsSet = true;
  }
}

std::vector<AllowedNssai> &AuthorizedNetworkSliceInfo::getAllowedNssaiList() {
  return m_AllowedNssaiList;
}
void AuthorizedNetworkSliceInfo::setAllowedNssaiList(
    std::vector<AllowedNssai> const &value) {
  m_AllowedNssaiList = value;
  m_AllowedNssaiListIsSet = true;
}
bool AuthorizedNetworkSliceInfo::allowedNssaiListIsSet() const {
  return m_AllowedNssaiListIsSet;
}
void AuthorizedNetworkSliceInfo::unsetAllowedNssaiList() {
  m_AllowedNssaiListIsSet = false;
}
std::vector<ConfiguredSnssai> &
AuthorizedNetworkSliceInfo::getConfiguredNssai() {
  return m_ConfiguredNssai;
}
void AuthorizedNetworkSliceInfo::setConfiguredNssai(
    std::vector<ConfiguredSnssai> const &value) {
  m_ConfiguredNssai = value;
  m_ConfiguredNssaiIsSet = true;
}
bool AuthorizedNetworkSliceInfo::configuredNssaiIsSet() const {
  return m_ConfiguredNssaiIsSet;
}
void AuthorizedNetworkSliceInfo::unsetConfiguredNssai() {
  m_ConfiguredNssaiIsSet = false;
}
std::string AuthorizedNetworkSliceInfo::getTargetAmfSet() const {
  return m_TargetAmfSet;
}
void AuthorizedNetworkSliceInfo::setTargetAmfSet(std::string const &value) {
  m_TargetAmfSet = value;
  m_TargetAmfSetIsSet = true;
}
bool AuthorizedNetworkSliceInfo::targetAmfSetIsSet() const {
  return m_TargetAmfSetIsSet;
}
void AuthorizedNetworkSliceInfo::unsetTargetAmfSet() {
  m_TargetAmfSetIsSet = false;
}
std::vector<std::string> &AuthorizedNetworkSliceInfo::getCandidateAmfList() {
  return m_CandidateAmfList;
}
void AuthorizedNetworkSliceInfo::setCandidateAmfList(
    std::vector<std::string> const &value) {
  m_CandidateAmfList = value;
  m_CandidateAmfListIsSet = true;
}
bool AuthorizedNetworkSliceInfo::candidateAmfListIsSet() const {
  return m_CandidateAmfListIsSet;
}
void AuthorizedNetworkSliceInfo::unsetCandidateAmfList() {
  m_CandidateAmfListIsSet = false;
}
std::vector<Snssai> &AuthorizedNetworkSliceInfo::getRejectedNssaiInPlmn() {
  return m_RejectedNssaiInPlmn;
}
void AuthorizedNetworkSliceInfo::setRejectedNssaiInPlmn(
    std::vector<Snssai> const &value) {
  m_RejectedNssaiInPlmn = value;
  m_RejectedNssaiInPlmnIsSet = true;
}
bool AuthorizedNetworkSliceInfo::rejectedNssaiInPlmnIsSet() const {
  return m_RejectedNssaiInPlmnIsSet;
}
void AuthorizedNetworkSliceInfo::unsetRejectedNssaiInPlmn() {
  m_RejectedNssaiInPlmnIsSet = false;
}
std::vector<Snssai> &AuthorizedNetworkSliceInfo::getRejectedNssaiInTa() {
  return m_RejectedNssaiInTa;
}
void AuthorizedNetworkSliceInfo::setRejectedNssaiInTa(
    std::vector<Snssai> const &value) {
  m_RejectedNssaiInTa = value;
  m_RejectedNssaiInTaIsSet = true;
}
bool AuthorizedNetworkSliceInfo::rejectedNssaiInTaIsSet() const {
  return m_RejectedNssaiInTaIsSet;
}
void AuthorizedNetworkSliceInfo::unsetRejectedNssaiInTa() {
  m_RejectedNssaiInTaIsSet = false;
}
NsiInformation AuthorizedNetworkSliceInfo::getNsiInformation() const {
  return m_NsiInformation;
}
void AuthorizedNetworkSliceInfo::setNsiInformation(
    NsiInformation const &value) {
  m_NsiInformation = value;
  m_NsiInformationIsSet = true;
}
bool AuthorizedNetworkSliceInfo::nsiInformationIsSet() const {
  return m_NsiInformationIsSet;
}
void AuthorizedNetworkSliceInfo::unsetNsiInformation() {
  m_NsiInformationIsSet = false;
}
std::string AuthorizedNetworkSliceInfo::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void AuthorizedNetworkSliceInfo::setSupportedFeatures(
    std::string const &value) {
  m_SupportedFeatures = value;
  m_SupportedFeaturesIsSet = true;
}
bool AuthorizedNetworkSliceInfo::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void AuthorizedNetworkSliceInfo::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}
std::string AuthorizedNetworkSliceInfo::getNrfAmfSet() const {
  return m_NrfAmfSet;
}
void AuthorizedNetworkSliceInfo::setNrfAmfSet(std::string const &value) {
  m_NrfAmfSet = value;
  m_NrfAmfSetIsSet = true;
}
bool AuthorizedNetworkSliceInfo::nrfAmfSetIsSet() const {
  return m_NrfAmfSetIsSet;
}
void AuthorizedNetworkSliceInfo::unsetNrfAmfSet() { m_NrfAmfSetIsSet = false; }
std::string AuthorizedNetworkSliceInfo::getNrfAmfSetNfMgtUri() const {
  return m_NrfAmfSetNfMgtUri;
}
void AuthorizedNetworkSliceInfo::setNrfAmfSetNfMgtUri(
    std::string const &value) {
  m_NrfAmfSetNfMgtUri = value;
  m_NrfAmfSetNfMgtUriIsSet = true;
}
bool AuthorizedNetworkSliceInfo::nrfAmfSetNfMgtUriIsSet() const {
  return m_NrfAmfSetNfMgtUriIsSet;
}
void AuthorizedNetworkSliceInfo::unsetNrfAmfSetNfMgtUri() {
  m_NrfAmfSetNfMgtUriIsSet = false;
}
std::string AuthorizedNetworkSliceInfo::getNrfAmfSetAccessTokenUri() const {
  return m_NrfAmfSetAccessTokenUri;
}
void AuthorizedNetworkSliceInfo::setNrfAmfSetAccessTokenUri(
    std::string const &value) {
  m_NrfAmfSetAccessTokenUri = value;
  m_NrfAmfSetAccessTokenUriIsSet = true;
}
bool AuthorizedNetworkSliceInfo::nrfAmfSetAccessTokenUriIsSet() const {
  return m_NrfAmfSetAccessTokenUriIsSet;
}
void AuthorizedNetworkSliceInfo::unsetNrfAmfSetAccessTokenUri() {
  m_NrfAmfSetAccessTokenUriIsSet = false;
}
std::string AuthorizedNetworkSliceInfo::getTargetAmfServiceSet() const {
  return m_TargetAmfServiceSet;
}
void AuthorizedNetworkSliceInfo::setTargetAmfServiceSet(
    std::string const &value) {
  m_TargetAmfServiceSet = value;
  m_TargetAmfServiceSetIsSet = true;
}
bool AuthorizedNetworkSliceInfo::targetAmfServiceSetIsSet() const {
  return m_TargetAmfServiceSetIsSet;
}
void AuthorizedNetworkSliceInfo::unsetTargetAmfServiceSet() {
  m_TargetAmfServiceSetIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org