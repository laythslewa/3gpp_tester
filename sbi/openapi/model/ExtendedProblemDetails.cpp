/**
 * Nhss_imsUECM
 * Nhss UE Context Management Service for IMS. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ExtendedProblemDetails.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ExtendedProblemDetails::ExtendedProblemDetails() {
  m_Type = "";
  m_TypeIsSet = false;
  m_Title = "";
  m_TitleIsSet = false;
  m_Status = 0;
  m_StatusIsSet = false;
  m_Detail = "";
  m_DetailIsSet = false;
  m_Instance = "";
  m_InstanceIsSet = false;
  m_Cause = "";
  m_CauseIsSet = false;
  m_InvalidParamsIsSet = false;
  m_SupportedFeatures = "";
  m_SupportedFeaturesIsSet = false;
  m_AccessTokenErrorIsSet = false;
  m_AccessTokenRequestIsSet = false;
  m_NrfId = "";
  m_NrfIdIsSet = false;
  m_ScscfServerName = "";
  m_ScscfServerNameIsSet = false;
}

ExtendedProblemDetails::~ExtendedProblemDetails() {}

void ExtendedProblemDetails::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const ExtendedProblemDetails &o) {
  j = nlohmann::json();
  if (o.typeIsSet())
    j["type"] = o.m_Type;
  if (o.titleIsSet())
    j["title"] = o.m_Title;
  if (o.statusIsSet())
    j["status"] = o.m_Status;
  if (o.detailIsSet())
    j["detail"] = o.m_Detail;
  if (o.instanceIsSet())
    j["instance"] = o.m_Instance;
  if (o.causeIsSet())
    j["cause"] = o.m_Cause;
  if (o.invalidParamsIsSet() || !o.m_InvalidParams.empty())
    j["invalidParams"] = o.m_InvalidParams;
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
  if (o.accessTokenErrorIsSet())
    j["accessTokenError"] = o.m_AccessTokenError;
  if (o.accessTokenRequestIsSet())
    j["accessTokenRequest"] = o.m_AccessTokenRequest;
  if (o.nrfIdIsSet())
    j["nrfId"] = o.m_NrfId;
  if (o.scscfServerNameIsSet())
    j["scscfServerName"] = o.m_ScscfServerName;
}

void from_json(const nlohmann::json &j, ExtendedProblemDetails &o) {
  if (j.find("type") != j.end()) {
    j.at("type").get_to(o.m_Type);
    o.m_TypeIsSet = true;
  }
  if (j.find("title") != j.end()) {
    j.at("title").get_to(o.m_Title);
    o.m_TitleIsSet = true;
  }
  if (j.find("status") != j.end()) {
    j.at("status").get_to(o.m_Status);
    o.m_StatusIsSet = true;
  }
  if (j.find("detail") != j.end()) {
    j.at("detail").get_to(o.m_Detail);
    o.m_DetailIsSet = true;
  }
  if (j.find("instance") != j.end()) {
    j.at("instance").get_to(o.m_Instance);
    o.m_InstanceIsSet = true;
  }
  if (j.find("cause") != j.end()) {
    j.at("cause").get_to(o.m_Cause);
    o.m_CauseIsSet = true;
  }
  if (j.find("invalidParams") != j.end()) {
    j.at("invalidParams").get_to(o.m_InvalidParams);
    o.m_InvalidParamsIsSet = true;
  }
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
  if (j.find("accessTokenError") != j.end()) {
    j.at("accessTokenError").get_to(o.m_AccessTokenError);
    o.m_AccessTokenErrorIsSet = true;
  }
  if (j.find("accessTokenRequest") != j.end()) {
    j.at("accessTokenRequest").get_to(o.m_AccessTokenRequest);
    o.m_AccessTokenRequestIsSet = true;
  }
  if (j.find("nrfId") != j.end()) {
    j.at("nrfId").get_to(o.m_NrfId);
    o.m_NrfIdIsSet = true;
  }
  if (j.find("scscfServerName") != j.end()) {
    j.at("scscfServerName").get_to(o.m_ScscfServerName);
    o.m_ScscfServerNameIsSet = true;
  }
}

std::string ExtendedProblemDetails::getType() const { return m_Type; }
void ExtendedProblemDetails::setType(std::string const &value) {
  m_Type = value;
  m_TypeIsSet = true;
}
bool ExtendedProblemDetails::typeIsSet() const { return m_TypeIsSet; }
void ExtendedProblemDetails::unsetType() { m_TypeIsSet = false; }
std::string ExtendedProblemDetails::getTitle() const { return m_Title; }
void ExtendedProblemDetails::setTitle(std::string const &value) {
  m_Title = value;
  m_TitleIsSet = true;
}
bool ExtendedProblemDetails::titleIsSet() const { return m_TitleIsSet; }
void ExtendedProblemDetails::unsetTitle() { m_TitleIsSet = false; }
int32_t ExtendedProblemDetails::getStatus() const { return m_Status; }
void ExtendedProblemDetails::setStatus(int32_t const value) {
  m_Status = value;
  m_StatusIsSet = true;
}
bool ExtendedProblemDetails::statusIsSet() const { return m_StatusIsSet; }
void ExtendedProblemDetails::unsetStatus() { m_StatusIsSet = false; }
std::string ExtendedProblemDetails::getDetail() const { return m_Detail; }
void ExtendedProblemDetails::setDetail(std::string const &value) {
  m_Detail = value;
  m_DetailIsSet = true;
}
bool ExtendedProblemDetails::detailIsSet() const { return m_DetailIsSet; }
void ExtendedProblemDetails::unsetDetail() { m_DetailIsSet = false; }
std::string ExtendedProblemDetails::getInstance() const { return m_Instance; }
void ExtendedProblemDetails::setInstance(std::string const &value) {
  m_Instance = value;
  m_InstanceIsSet = true;
}
bool ExtendedProblemDetails::instanceIsSet() const { return m_InstanceIsSet; }
void ExtendedProblemDetails::unsetInstance() { m_InstanceIsSet = false; }
std::string ExtendedProblemDetails::getCause() const { return m_Cause; }
void ExtendedProblemDetails::setCause(std::string const &value) {
  m_Cause = value;
  m_CauseIsSet = true;
}
bool ExtendedProblemDetails::causeIsSet() const { return m_CauseIsSet; }
void ExtendedProblemDetails::unsetCause() { m_CauseIsSet = false; }
std::vector<InvalidParam> &ExtendedProblemDetails::getInvalidParams() {
  return m_InvalidParams;
}
void ExtendedProblemDetails::setInvalidParams(
    std::vector<InvalidParam> const &value) {
  m_InvalidParams = value;
  m_InvalidParamsIsSet = true;
}
bool ExtendedProblemDetails::invalidParamsIsSet() const {
  return m_InvalidParamsIsSet;
}
void ExtendedProblemDetails::unsetInvalidParams() {
  m_InvalidParamsIsSet = false;
}
std::string ExtendedProblemDetails::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void ExtendedProblemDetails::setSupportedFeatures(std::string const &value) {
  m_SupportedFeatures = value;
  m_SupportedFeaturesIsSet = true;
}
bool ExtendedProblemDetails::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void ExtendedProblemDetails::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}
AccessTokenErr ExtendedProblemDetails::getAccessTokenError() const {
  return m_AccessTokenError;
}
void ExtendedProblemDetails::setAccessTokenError(AccessTokenErr const &value) {
  m_AccessTokenError = value;
  m_AccessTokenErrorIsSet = true;
}
bool ExtendedProblemDetails::accessTokenErrorIsSet() const {
  return m_AccessTokenErrorIsSet;
}
void ExtendedProblemDetails::unsetAccessTokenError() {
  m_AccessTokenErrorIsSet = false;
}
AccessTokenReq ExtendedProblemDetails::getAccessTokenRequest() const {
  return m_AccessTokenRequest;
}
void ExtendedProblemDetails::setAccessTokenRequest(
    AccessTokenReq const &value) {
  m_AccessTokenRequest = value;
  m_AccessTokenRequestIsSet = true;
}
bool ExtendedProblemDetails::accessTokenRequestIsSet() const {
  return m_AccessTokenRequestIsSet;
}
void ExtendedProblemDetails::unsetAccessTokenRequest() {
  m_AccessTokenRequestIsSet = false;
}
std::string ExtendedProblemDetails::getNrfId() const { return m_NrfId; }
void ExtendedProblemDetails::setNrfId(std::string const &value) {
  m_NrfId = value;
  m_NrfIdIsSet = true;
}
bool ExtendedProblemDetails::nrfIdIsSet() const { return m_NrfIdIsSet; }
void ExtendedProblemDetails::unsetNrfId() { m_NrfIdIsSet = false; }
std::string ExtendedProblemDetails::getScscfServerName() const {
  return m_ScscfServerName;
}
void ExtendedProblemDetails::setScscfServerName(std::string const &value) {
  m_ScscfServerName = value;
  m_ScscfServerNameIsSet = true;
}
bool ExtendedProblemDetails::scscfServerNameIsSet() const {
  return m_ScscfServerNameIsSet;
}
void ExtendedProblemDetails::unsetScscfServerName() {
  m_ScscfServerNameIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org