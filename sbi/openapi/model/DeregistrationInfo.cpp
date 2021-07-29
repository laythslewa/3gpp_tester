/**
 * AUSF API
 * AUSF UE Authentication Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "DeregistrationInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

DeregistrationInfo::DeregistrationInfo() {
  m_Supi = "";
  m_SupportedFeatures = "";
  m_SupportedFeaturesIsSet = false;
}

DeregistrationInfo::~DeregistrationInfo() {}

void DeregistrationInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const DeregistrationInfo &o) {
  j = nlohmann::json();
  j["supi"] = o.m_Supi;
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
}

void from_json(const nlohmann::json &j, DeregistrationInfo &o) {
  j.at("supi").get_to(o.m_Supi);
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
}

std::string DeregistrationInfo::getSupi() const { return m_Supi; }
void DeregistrationInfo::setSupi(std::string const &value) { m_Supi = value; }
std::string DeregistrationInfo::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void DeregistrationInfo::setSupportedFeatures(std::string const &value) {
  m_SupportedFeatures = value;
  m_SupportedFeaturesIsSet = true;
}
bool DeregistrationInfo::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void DeregistrationInfo::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
