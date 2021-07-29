/**
 * N5g-ddnmf_Discovery API
 * N5g-ddnmf_Discovery Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "MatchInformation.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

MatchInformation::MatchInformation() {
  m_OpenMatchInfoForOpenIsSet = false;
  m_RestrictedMatchInfoIsSet = false;
}

MatchInformation::~MatchInformation() {}

void MatchInformation::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const MatchInformation &o) {
  j = nlohmann::json();
  j["discType"] = o.m_DiscType;
  if (o.openMatchInfoForOpenIsSet())
    j["openMatchInfoForOpen"] = o.m_OpenMatchInfoForOpen;
  if (o.restrictedMatchInfoIsSet())
    j["restrictedMatchInfo"] = o.m_RestrictedMatchInfo;
}

void from_json(const nlohmann::json &j, MatchInformation &o) {
  j.at("discType").get_to(o.m_DiscType);
  if (j.find("openMatchInfoForOpen") != j.end()) {
    j.at("openMatchInfoForOpen").get_to(o.m_OpenMatchInfoForOpen);
    o.m_OpenMatchInfoForOpenIsSet = true;
  }
  if (j.find("restrictedMatchInfo") != j.end()) {
    j.at("restrictedMatchInfo").get_to(o.m_RestrictedMatchInfo);
    o.m_RestrictedMatchInfoIsSet = true;
  }
}

DiscoveryType MatchInformation::getDiscType() const { return m_DiscType; }
void MatchInformation::setDiscType(DiscoveryType const &value) {
  m_DiscType = value;
}
MatchInfoForOpen MatchInformation::getOpenMatchInfoForOpen() const {
  return m_OpenMatchInfoForOpen;
}
void MatchInformation::setOpenMatchInfoForOpen(MatchInfoForOpen const &value) {
  m_OpenMatchInfoForOpen = value;
  m_OpenMatchInfoForOpenIsSet = true;
}
bool MatchInformation::openMatchInfoForOpenIsSet() const {
  return m_OpenMatchInfoForOpenIsSet;
}
void MatchInformation::unsetOpenMatchInfoForOpen() {
  m_OpenMatchInfoForOpenIsSet = false;
}
MatchInfoForRestricted MatchInformation::getRestrictedMatchInfo() const {
  return m_RestrictedMatchInfo;
}
void MatchInformation::setRestrictedMatchInfo(
    MatchInfoForRestricted const &value) {
  m_RestrictedMatchInfo = value;
  m_RestrictedMatchInfoIsSet = true;
}
bool MatchInformation::restrictedMatchInfoIsSet() const {
  return m_RestrictedMatchInfoIsSet;
}
void MatchInformation::unsetRestrictedMatchInfo() {
  m_RestrictedMatchInfoIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
