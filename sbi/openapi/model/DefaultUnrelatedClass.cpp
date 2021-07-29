/**
 * Unified Data Repository Service API file for subscription data
 * Unified Data Repository Service (subscription data). The API version is
 * defined in 3GPP TS 29.504. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "DefaultUnrelatedClass.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

DefaultUnrelatedClass::DefaultUnrelatedClass() {
  m_AllowedGeographicAreaIsSet = false;
  m_PrivacyCheckRelatedActionIsSet = false;
  m_CodeWordIndIsSet = false;
  m_ValidTimePeriodIsSet = false;
  m_CodeWordListIsSet = false;
}

DefaultUnrelatedClass::~DefaultUnrelatedClass() {}

void DefaultUnrelatedClass::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const DefaultUnrelatedClass &o) {
  j = nlohmann::json();
  if (o.allowedGeographicAreaIsSet() || !o.m_AllowedGeographicArea.empty())
    j["allowedGeographicArea"] = o.m_AllowedGeographicArea;
  if (o.privacyCheckRelatedActionIsSet())
    j["privacyCheckRelatedAction"] = o.m_PrivacyCheckRelatedAction;
  if (o.codeWordIndIsSet())
    j["codeWordInd"] = o.m_CodeWordInd;
  if (o.validTimePeriodIsSet())
    j["validTimePeriod"] = o.m_ValidTimePeriod;
  if (o.codeWordListIsSet() || !o.m_CodeWordList.empty())
    j["codeWordList"] = o.m_CodeWordList;
}

void from_json(const nlohmann::json &j, DefaultUnrelatedClass &o) {
  if (j.find("allowedGeographicArea") != j.end()) {
    j.at("allowedGeographicArea").get_to(o.m_AllowedGeographicArea);
    o.m_AllowedGeographicAreaIsSet = true;
  }
  if (j.find("privacyCheckRelatedAction") != j.end()) {
    j.at("privacyCheckRelatedAction").get_to(o.m_PrivacyCheckRelatedAction);
    o.m_PrivacyCheckRelatedActionIsSet = true;
  }
  if (j.find("codeWordInd") != j.end()) {
    j.at("codeWordInd").get_to(o.m_CodeWordInd);
    o.m_CodeWordIndIsSet = true;
  }
  if (j.find("validTimePeriod") != j.end()) {
    j.at("validTimePeriod").get_to(o.m_ValidTimePeriod);
    o.m_ValidTimePeriodIsSet = true;
  }
  if (j.find("codeWordList") != j.end()) {
    j.at("codeWordList").get_to(o.m_CodeWordList);
    o.m_CodeWordListIsSet = true;
  }
}

std::vector<GeographicArea> &DefaultUnrelatedClass::getAllowedGeographicArea() {
  return m_AllowedGeographicArea;
}
void DefaultUnrelatedClass::setAllowedGeographicArea(
    std::vector<GeographicArea> const &value) {
  m_AllowedGeographicArea = value;
  m_AllowedGeographicAreaIsSet = true;
}
bool DefaultUnrelatedClass::allowedGeographicAreaIsSet() const {
  return m_AllowedGeographicAreaIsSet;
}
void DefaultUnrelatedClass::unsetAllowedGeographicArea() {
  m_AllowedGeographicAreaIsSet = false;
}
PrivacyCheckRelatedAction
DefaultUnrelatedClass::getPrivacyCheckRelatedAction() const {
  return m_PrivacyCheckRelatedAction;
}
void DefaultUnrelatedClass::setPrivacyCheckRelatedAction(
    PrivacyCheckRelatedAction const &value) {
  m_PrivacyCheckRelatedAction = value;
  m_PrivacyCheckRelatedActionIsSet = true;
}
bool DefaultUnrelatedClass::privacyCheckRelatedActionIsSet() const {
  return m_PrivacyCheckRelatedActionIsSet;
}
void DefaultUnrelatedClass::unsetPrivacyCheckRelatedAction() {
  m_PrivacyCheckRelatedActionIsSet = false;
}
CodeWordInd DefaultUnrelatedClass::getCodeWordInd() const {
  return m_CodeWordInd;
}
void DefaultUnrelatedClass::setCodeWordInd(CodeWordInd const &value) {
  m_CodeWordInd = value;
  m_CodeWordIndIsSet = true;
}
bool DefaultUnrelatedClass::codeWordIndIsSet() const {
  return m_CodeWordIndIsSet;
}
void DefaultUnrelatedClass::unsetCodeWordInd() { m_CodeWordIndIsSet = false; }
ValidTimePeriod DefaultUnrelatedClass::getValidTimePeriod() const {
  return m_ValidTimePeriod;
}
void DefaultUnrelatedClass::setValidTimePeriod(ValidTimePeriod const &value) {
  m_ValidTimePeriod = value;
  m_ValidTimePeriodIsSet = true;
}
bool DefaultUnrelatedClass::validTimePeriodIsSet() const {
  return m_ValidTimePeriodIsSet;
}
void DefaultUnrelatedClass::unsetValidTimePeriod() {
  m_ValidTimePeriodIsSet = false;
}
std::vector<std::string> &DefaultUnrelatedClass::getCodeWordList() {
  return m_CodeWordList;
}
void DefaultUnrelatedClass::setCodeWordList(
    std::vector<std::string> const &value) {
  m_CodeWordList = value;
  m_CodeWordListIsSet = true;
}
bool DefaultUnrelatedClass::codeWordListIsSet() const {
  return m_CodeWordListIsSet;
}
void DefaultUnrelatedClass::unsetCodeWordList() { m_CodeWordListIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
