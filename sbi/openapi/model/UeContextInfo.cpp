/**
 * Namf_MT
 * AMF Mobile Terminated Service © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "UeContextInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

UeContextInfo::UeContextInfo() {
  m_SupportVoPS = false;
  m_SupportVoPSIsSet = false;
  m_SupportVoPSn3gpp = false;
  m_SupportVoPSn3gppIsSet = false;
  m_LastActTime = "";
  m_LastActTimeIsSet = false;
  m_AccessTypeIsSet = false;
  m_RatTypeIsSet = false;
  m_SupportedFeatures = "";
  m_SupportedFeaturesIsSet = false;
}

UeContextInfo::~UeContextInfo() {}

void UeContextInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const UeContextInfo &o) {
  j = nlohmann::json();
  if (o.supportVoPSIsSet())
    j["supportVoPS"] = o.m_SupportVoPS;
  if (o.supportVoPSn3gppIsSet())
    j["supportVoPSn3gpp"] = o.m_SupportVoPSn3gpp;
  if (o.lastActTimeIsSet())
    j["lastActTime"] = o.m_LastActTime;
  if (o.accessTypeIsSet())
    j["accessType"] = o.m_AccessType;
  if (o.ratTypeIsSet())
    j["ratType"] = o.m_RatType;
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
}

void from_json(const nlohmann::json &j, UeContextInfo &o) {
  if (j.find("supportVoPS") != j.end()) {
    j.at("supportVoPS").get_to(o.m_SupportVoPS);
    o.m_SupportVoPSIsSet = true;
  }
  if (j.find("supportVoPSn3gpp") != j.end()) {
    j.at("supportVoPSn3gpp").get_to(o.m_SupportVoPSn3gpp);
    o.m_SupportVoPSn3gppIsSet = true;
  }
  if (j.find("lastActTime") != j.end()) {
    j.at("lastActTime").get_to(o.m_LastActTime);
    o.m_LastActTimeIsSet = true;
  }
  if (j.find("accessType") != j.end()) {
    j.at("accessType").get_to(o.m_AccessType);
    o.m_AccessTypeIsSet = true;
  }
  if (j.find("ratType") != j.end()) {
    j.at("ratType").get_to(o.m_RatType);
    o.m_RatTypeIsSet = true;
  }
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
}

bool UeContextInfo::isSupportVoPS() const { return m_SupportVoPS; }
void UeContextInfo::setSupportVoPS(bool const value) {
  m_SupportVoPS = value;
  m_SupportVoPSIsSet = true;
}
bool UeContextInfo::supportVoPSIsSet() const { return m_SupportVoPSIsSet; }
void UeContextInfo::unsetSupportVoPS() { m_SupportVoPSIsSet = false; }
bool UeContextInfo::isSupportVoPSn3gpp() const { return m_SupportVoPSn3gpp; }
void UeContextInfo::setSupportVoPSn3gpp(bool const value) {
  m_SupportVoPSn3gpp = value;
  m_SupportVoPSn3gppIsSet = true;
}
bool UeContextInfo::supportVoPSn3gppIsSet() const {
  return m_SupportVoPSn3gppIsSet;
}
void UeContextInfo::unsetSupportVoPSn3gpp() { m_SupportVoPSn3gppIsSet = false; }
std::string UeContextInfo::getLastActTime() const { return m_LastActTime; }
void UeContextInfo::setLastActTime(std::string const &value) {
  m_LastActTime = value;
  m_LastActTimeIsSet = true;
}
bool UeContextInfo::lastActTimeIsSet() const { return m_LastActTimeIsSet; }
void UeContextInfo::unsetLastActTime() { m_LastActTimeIsSet = false; }
AccessType UeContextInfo::getAccessType() const { return m_AccessType; }
void UeContextInfo::setAccessType(AccessType const &value) {
  m_AccessType = value;
  m_AccessTypeIsSet = true;
}
bool UeContextInfo::accessTypeIsSet() const { return m_AccessTypeIsSet; }
void UeContextInfo::unsetAccessType() { m_AccessTypeIsSet = false; }
RatType UeContextInfo::getRatType() const { return m_RatType; }
void UeContextInfo::setRatType(RatType const &value) {
  m_RatType = value;
  m_RatTypeIsSet = true;
}
bool UeContextInfo::ratTypeIsSet() const { return m_RatTypeIsSet; }
void UeContextInfo::unsetRatType() { m_RatTypeIsSet = false; }
std::string UeContextInfo::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void UeContextInfo::setSupportedFeatures(std::string const &value) {
  m_SupportedFeatures = value;
  m_SupportedFeaturesIsSet = true;
}
bool UeContextInfo::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void UeContextInfo::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org