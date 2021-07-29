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

#include "PublicIdentifier.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

PublicIdentifier::PublicIdentifier() {
  m_DisplayName = "";
  m_DisplayNameIsSet = false;
  m_ImsServicePriorityIsSet = false;
  m_ServiceLevelTraceInfoIsSet = false;
  m_BarringIndicator = false;
  m_BarringIndicatorIsSet = false;
  m_WildcardedImpu = "";
  m_WildcardedImpuIsSet = false;
}

PublicIdentifier::~PublicIdentifier() {}

void PublicIdentifier::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const PublicIdentifier &o) {
  j = nlohmann::json();
  j["publicIdentity"] = o.m_PublicIdentity;
  if (o.displayNameIsSet())
    j["displayName"] = o.m_DisplayName;
  if (o.imsServicePriorityIsSet())
    j["imsServicePriority"] = o.m_ImsServicePriority;
  if (o.serviceLevelTraceInfoIsSet())
    j["serviceLevelTraceInfo"] = o.m_ServiceLevelTraceInfo;
  if (o.barringIndicatorIsSet())
    j["barringIndicator"] = o.m_BarringIndicator;
  if (o.wildcardedImpuIsSet())
    j["wildcardedImpu"] = o.m_WildcardedImpu;
}

void from_json(const nlohmann::json &j, PublicIdentifier &o) {
  j.at("publicIdentity").get_to(o.m_PublicIdentity);
  if (j.find("displayName") != j.end()) {
    j.at("displayName").get_to(o.m_DisplayName);
    o.m_DisplayNameIsSet = true;
  }
  if (j.find("imsServicePriority") != j.end()) {
    j.at("imsServicePriority").get_to(o.m_ImsServicePriority);
    o.m_ImsServicePriorityIsSet = true;
  }
  if (j.find("serviceLevelTraceInfo") != j.end()) {
    j.at("serviceLevelTraceInfo").get_to(o.m_ServiceLevelTraceInfo);
    o.m_ServiceLevelTraceInfoIsSet = true;
  }
  if (j.find("barringIndicator") != j.end()) {
    j.at("barringIndicator").get_to(o.m_BarringIndicator);
    o.m_BarringIndicatorIsSet = true;
  }
  if (j.find("wildcardedImpu") != j.end()) {
    j.at("wildcardedImpu").get_to(o.m_WildcardedImpu);
    o.m_WildcardedImpuIsSet = true;
  }
}

PublicIdentity PublicIdentifier::getPublicIdentity() const {
  return m_PublicIdentity;
}
void PublicIdentifier::setPublicIdentity(PublicIdentity const &value) {
  m_PublicIdentity = value;
}
std::string PublicIdentifier::getDisplayName() const { return m_DisplayName; }
void PublicIdentifier::setDisplayName(std::string const &value) {
  m_DisplayName = value;
  m_DisplayNameIsSet = true;
}
bool PublicIdentifier::displayNameIsSet() const { return m_DisplayNameIsSet; }
void PublicIdentifier::unsetDisplayName() { m_DisplayNameIsSet = false; }
PriorityLevels PublicIdentifier::getImsServicePriority() const {
  return m_ImsServicePriority;
}
void PublicIdentifier::setImsServicePriority(PriorityLevels const &value) {
  m_ImsServicePriority = value;
  m_ImsServicePriorityIsSet = true;
}
bool PublicIdentifier::imsServicePriorityIsSet() const {
  return m_ImsServicePriorityIsSet;
}
void PublicIdentifier::unsetImsServicePriority() {
  m_ImsServicePriorityIsSet = false;
}
ServiceLevelTraceInformation
PublicIdentifier::getServiceLevelTraceInfo() const {
  return m_ServiceLevelTraceInfo;
}
void PublicIdentifier::setServiceLevelTraceInfo(
    ServiceLevelTraceInformation const &value) {
  m_ServiceLevelTraceInfo = value;
  m_ServiceLevelTraceInfoIsSet = true;
}
bool PublicIdentifier::serviceLevelTraceInfoIsSet() const {
  return m_ServiceLevelTraceInfoIsSet;
}
void PublicIdentifier::unsetServiceLevelTraceInfo() {
  m_ServiceLevelTraceInfoIsSet = false;
}
bool PublicIdentifier::isBarringIndicator() const { return m_BarringIndicator; }
void PublicIdentifier::setBarringIndicator(bool const value) {
  m_BarringIndicator = value;
  m_BarringIndicatorIsSet = true;
}
bool PublicIdentifier::barringIndicatorIsSet() const {
  return m_BarringIndicatorIsSet;
}
void PublicIdentifier::unsetBarringIndicator() {
  m_BarringIndicatorIsSet = false;
}
std::string PublicIdentifier::getWildcardedImpu() const {
  return m_WildcardedImpu;
}
void PublicIdentifier::setWildcardedImpu(std::string const &value) {
  m_WildcardedImpu = value;
  m_WildcardedImpuIsSet = true;
}
bool PublicIdentifier::wildcardedImpuIsSet() const {
  return m_WildcardedImpuIsSet;
}
void PublicIdentifier::unsetWildcardedImpu() { m_WildcardedImpuIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org