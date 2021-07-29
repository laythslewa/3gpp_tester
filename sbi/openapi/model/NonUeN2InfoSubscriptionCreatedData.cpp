/**
 * Namf_Communication
 * AMF Communication Service © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "NonUeN2InfoSubscriptionCreatedData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

NonUeN2InfoSubscriptionCreatedData::NonUeN2InfoSubscriptionCreatedData() {
  m_N2NotifySubscriptionId = "";
  m_SupportedFeatures = "";
  m_SupportedFeaturesIsSet = false;
  m_N2InformationClassIsSet = false;
}

NonUeN2InfoSubscriptionCreatedData::~NonUeN2InfoSubscriptionCreatedData() {}

void NonUeN2InfoSubscriptionCreatedData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const NonUeN2InfoSubscriptionCreatedData &o) {
  j = nlohmann::json();
  j["n2NotifySubscriptionId"] = o.m_N2NotifySubscriptionId;
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
  if (o.n2InformationClassIsSet())
    j["n2InformationClass"] = o.m_N2InformationClass;
}

void from_json(const nlohmann::json &j, NonUeN2InfoSubscriptionCreatedData &o) {
  j.at("n2NotifySubscriptionId").get_to(o.m_N2NotifySubscriptionId);
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
  if (j.find("n2InformationClass") != j.end()) {
    j.at("n2InformationClass").get_to(o.m_N2InformationClass);
    o.m_N2InformationClassIsSet = true;
  }
}

std::string
NonUeN2InfoSubscriptionCreatedData::getN2NotifySubscriptionId() const {
  return m_N2NotifySubscriptionId;
}
void NonUeN2InfoSubscriptionCreatedData::setN2NotifySubscriptionId(
    std::string const &value) {
  m_N2NotifySubscriptionId = value;
}
std::string NonUeN2InfoSubscriptionCreatedData::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void NonUeN2InfoSubscriptionCreatedData::setSupportedFeatures(
    std::string const &value) {
  m_SupportedFeatures = value;
  m_SupportedFeaturesIsSet = true;
}
bool NonUeN2InfoSubscriptionCreatedData::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void NonUeN2InfoSubscriptionCreatedData::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}
N2InformationClass
NonUeN2InfoSubscriptionCreatedData::getN2InformationClass() const {
  return m_N2InformationClass;
}
void NonUeN2InfoSubscriptionCreatedData::setN2InformationClass(
    N2InformationClass const &value) {
  m_N2InformationClass = value;
  m_N2InformationClassIsSet = true;
}
bool NonUeN2InfoSubscriptionCreatedData::n2InformationClassIsSet() const {
  return m_N2InformationClassIsSet;
}
void NonUeN2InfoSubscriptionCreatedData::unsetN2InformationClass() {
  m_N2InformationClassIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org