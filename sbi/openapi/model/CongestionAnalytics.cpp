/**
 * 3gpp-analyticsexposure
 * API for Analytics Exposure. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "CongestionAnalytics.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

CongestionAnalytics::CongestionAnalytics() {
  m_Confidence = 0;
  m_ConfidenceIsSet = false;
}

CongestionAnalytics::~CongestionAnalytics() {}

void CongestionAnalytics::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const CongestionAnalytics &o) {
  j = nlohmann::json();
  j["cngType"] = o.m_CngType;
  j["tmWdw"] = o.m_TmWdw;
  j["nsi"] = o.m_Nsi;
  if (o.confidenceIsSet())
    j["confidence"] = o.m_Confidence;
}

void from_json(const nlohmann::json &j, CongestionAnalytics &o) {
  j.at("cngType").get_to(o.m_CngType);
  j.at("tmWdw").get_to(o.m_TmWdw);
  j.at("nsi").get_to(o.m_Nsi);
  if (j.find("confidence") != j.end()) {
    j.at("confidence").get_to(o.m_Confidence);
    o.m_ConfidenceIsSet = true;
  }
}

CongestionType CongestionAnalytics::getCngType() const { return m_CngType; }
void CongestionAnalytics::setCngType(CongestionType const &value) {
  m_CngType = value;
}
TimeWindow CongestionAnalytics::getTmWdw() const { return m_TmWdw; }
void CongestionAnalytics::setTmWdw(TimeWindow const &value) { m_TmWdw = value; }
ThresholdLevel CongestionAnalytics::getNsi() const { return m_Nsi; }
void CongestionAnalytics::setNsi(ThresholdLevel const &value) { m_Nsi = value; }
int32_t CongestionAnalytics::getConfidence() const { return m_Confidence; }
void CongestionAnalytics::setConfidence(int32_t const value) {
  m_Confidence = value;
  m_ConfidenceIsSet = true;
}
bool CongestionAnalytics::confidenceIsSet() const { return m_ConfidenceIsSet; }
void CongestionAnalytics::unsetConfidence() { m_ConfidenceIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
