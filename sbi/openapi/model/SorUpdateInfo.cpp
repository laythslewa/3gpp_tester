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

#include "SorUpdateInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

SorUpdateInfo::SorUpdateInfo() {
  m_SupportedFeatures = "";
  m_SupportedFeaturesIsSet = false;
}

SorUpdateInfo::~SorUpdateInfo() {}

void SorUpdateInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const SorUpdateInfo &o) {
  j = nlohmann::json();
  j["vplmnId"] = o.m_VplmnId;
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
}

void from_json(const nlohmann::json &j, SorUpdateInfo &o) {
  j.at("vplmnId").get_to(o.m_VplmnId);
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
}

PlmnId SorUpdateInfo::getVplmnId() const { return m_VplmnId; }
void SorUpdateInfo::setVplmnId(PlmnId const &value) { m_VplmnId = value; }
std::string SorUpdateInfo::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void SorUpdateInfo::setSupportedFeatures(std::string const &value) {
  m_SupportedFeatures = value;
  m_SupportedFeaturesIsSet = true;
}
bool SorUpdateInfo::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void SorUpdateInfo::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org