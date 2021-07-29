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

#include "SipAuthenticationInfoRequest.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

SipAuthenticationInfoRequest::SipAuthenticationInfoRequest() {
  m_CscfServerName = "";
  m_SipNumberAuthItems = 0;
  m_SipNumberAuthItemsIsSet = false;
  m_ResynchronizationInfoIsSet = false;
}

SipAuthenticationInfoRequest::~SipAuthenticationInfoRequest() {}

void SipAuthenticationInfoRequest::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const SipAuthenticationInfoRequest &o) {
  j = nlohmann::json();
  j["cscfServerName"] = o.m_CscfServerName;
  j["sipAuthenticationScheme"] = o.m_SipAuthenticationScheme;
  if (o.sipNumberAuthItemsIsSet())
    j["sipNumberAuthItems"] = o.m_SipNumberAuthItems;
  if (o.resynchronizationInfoIsSet())
    j["resynchronizationInfo"] = o.m_ResynchronizationInfo;
}

void from_json(const nlohmann::json &j, SipAuthenticationInfoRequest &o) {
  j.at("cscfServerName").get_to(o.m_CscfServerName);
  j.at("sipAuthenticationScheme").get_to(o.m_SipAuthenticationScheme);
  if (j.find("sipNumberAuthItems") != j.end()) {
    j.at("sipNumberAuthItems").get_to(o.m_SipNumberAuthItems);
    o.m_SipNumberAuthItemsIsSet = true;
  }
  if (j.find("resynchronizationInfo") != j.end()) {
    j.at("resynchronizationInfo").get_to(o.m_ResynchronizationInfo);
    o.m_ResynchronizationInfoIsSet = true;
  }
}

std::string SipAuthenticationInfoRequest::getCscfServerName() const {
  return m_CscfServerName;
}
void SipAuthenticationInfoRequest::setCscfServerName(std::string const &value) {
  m_CscfServerName = value;
}
SipAuthenticationScheme
SipAuthenticationInfoRequest::getSipAuthenticationScheme() const {
  return m_SipAuthenticationScheme;
}
void SipAuthenticationInfoRequest::setSipAuthenticationScheme(
    SipAuthenticationScheme const &value) {
  m_SipAuthenticationScheme = value;
}
int32_t SipAuthenticationInfoRequest::getSipNumberAuthItems() const {
  return m_SipNumberAuthItems;
}
void SipAuthenticationInfoRequest::setSipNumberAuthItems(int32_t const value) {
  m_SipNumberAuthItems = value;
  m_SipNumberAuthItemsIsSet = true;
}
bool SipAuthenticationInfoRequest::sipNumberAuthItemsIsSet() const {
  return m_SipNumberAuthItemsIsSet;
}
void SipAuthenticationInfoRequest::unsetSipNumberAuthItems() {
  m_SipNumberAuthItemsIsSet = false;
}
ResynchronizationInfo
SipAuthenticationInfoRequest::getResynchronizationInfo() const {
  return m_ResynchronizationInfo;
}
void SipAuthenticationInfoRequest::setResynchronizationInfo(
    ResynchronizationInfo const &value) {
  m_ResynchronizationInfo = value;
  m_ResynchronizationInfoIsSet = true;
}
bool SipAuthenticationInfoRequest::resynchronizationInfoIsSet() const {
  return m_ResynchronizationInfoIsSet;
}
void SipAuthenticationInfoRequest::unsetResynchronizationInfo() {
  m_ResynchronizationInfoIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org