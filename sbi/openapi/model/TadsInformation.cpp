/**
 * Nhss_imsSDM
 * Nhss Subscriber Data Management Service for IMS. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "TadsInformation.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

TadsInformation::TadsInformation() {
  m_AccessTypeIsSet = false;
  m_RatTypeIsSet = false;
  m_LastUeActivityTime = "";
  m_LastUeActivityTimeIsSet = false;
}

TadsInformation::~TadsInformation() {}

void TadsInformation::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const TadsInformation &o) {
  j = nlohmann::json();
  j["voiceOverPsSessionSupport"] = o.m_VoiceOverPsSessionSupport;
  if (o.accessTypeIsSet())
    j["accessType"] = o.m_AccessType;
  if (o.ratTypeIsSet())
    j["ratType"] = o.m_RatType;
  if (o.lastUeActivityTimeIsSet())
    j["lastUeActivityTime"] = o.m_LastUeActivityTime;
}

void from_json(const nlohmann::json &j, TadsInformation &o) {
  j.at("voiceOverPsSessionSupport").get_to(o.m_VoiceOverPsSessionSupport);
  if (j.find("accessType") != j.end()) {
    j.at("accessType").get_to(o.m_AccessType);
    o.m_AccessTypeIsSet = true;
  }
  if (j.find("ratType") != j.end()) {
    j.at("ratType").get_to(o.m_RatType);
    o.m_RatTypeIsSet = true;
  }
  if (j.find("lastUeActivityTime") != j.end()) {
    j.at("lastUeActivityTime").get_to(o.m_LastUeActivityTime);
    o.m_LastUeActivityTimeIsSet = true;
  }
}

ImsVoiceOverPsSessionSupport
TadsInformation::getVoiceOverPsSessionSupport() const {
  return m_VoiceOverPsSessionSupport;
}
void TadsInformation::setVoiceOverPsSessionSupport(
    ImsVoiceOverPsSessionSupport const &value) {
  m_VoiceOverPsSessionSupport = value;
}
AccessType_2 TadsInformation::getAccessType() const { return m_AccessType; }
void TadsInformation::setAccessType(AccessType_2 const &value) {
  m_AccessType = value;
  m_AccessTypeIsSet = true;
}
bool TadsInformation::accessTypeIsSet() const { return m_AccessTypeIsSet; }
void TadsInformation::unsetAccessType() { m_AccessTypeIsSet = false; }
RatType TadsInformation::getRatType() const { return m_RatType; }
void TadsInformation::setRatType(RatType const &value) {
  m_RatType = value;
  m_RatTypeIsSet = true;
}
bool TadsInformation::ratTypeIsSet() const { return m_RatTypeIsSet; }
void TadsInformation::unsetRatType() { m_RatTypeIsSet = false; }
std::string TadsInformation::getLastUeActivityTime() const {
  return m_LastUeActivityTime;
}
void TadsInformation::setLastUeActivityTime(std::string const &value) {
  m_LastUeActivityTime = value;
  m_LastUeActivityTimeIsSet = true;
}
bool TadsInformation::lastUeActivityTimeIsSet() const {
  return m_LastUeActivityTimeIsSet;
}
void TadsInformation::unsetLastUeActivityTime() {
  m_LastUeActivityTimeIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
