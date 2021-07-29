/**
 * Nudm_SDM
 * Nudm Subscriber Data Management Service. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.2.0-alpha.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "IdTranslationResult.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

IdTranslationResult::IdTranslationResult() {
  m_SupportedFeatures = "";
  m_SupportedFeaturesIsSet = false;
  m_Supi = "";
  m_Gpsi = "";
  m_GpsiIsSet = false;
}

IdTranslationResult::~IdTranslationResult() {}

void IdTranslationResult::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const IdTranslationResult &o) {
  j = nlohmann::json();
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
  j["supi"] = o.m_Supi;
  if (o.gpsiIsSet())
    j["gpsi"] = o.m_Gpsi;
}

void from_json(const nlohmann::json &j, IdTranslationResult &o) {
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
  j.at("supi").get_to(o.m_Supi);
  if (j.find("gpsi") != j.end()) {
    j.at("gpsi").get_to(o.m_Gpsi);
    o.m_GpsiIsSet = true;
  }
}

std::string IdTranslationResult::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void IdTranslationResult::setSupportedFeatures(std::string const &value) {
  m_SupportedFeatures = value;
  m_SupportedFeaturesIsSet = true;
}
bool IdTranslationResult::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void IdTranslationResult::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}
std::string IdTranslationResult::getSupi() const { return m_Supi; }
void IdTranslationResult::setSupi(std::string const &value) { m_Supi = value; }
std::string IdTranslationResult::getGpsi() const { return m_Gpsi; }
void IdTranslationResult::setGpsi(std::string const &value) {
  m_Gpsi = value;
  m_GpsiIsSet = true;
}
bool IdTranslationResult::gpsiIsSet() const { return m_GpsiIsSet; }
void IdTranslationResult::unsetGpsi() { m_GpsiIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org