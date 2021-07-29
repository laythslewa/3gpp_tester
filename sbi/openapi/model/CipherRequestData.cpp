/**
 * LMF Broadcast
 * LMF Broadcast Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "CipherRequestData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

CipherRequestData::CipherRequestData() {
  m_AmfCallBackURI = "";
  m_SupportedFeatures = "";
  m_SupportedFeaturesIsSet = false;
}

CipherRequestData::~CipherRequestData() {}

void CipherRequestData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const CipherRequestData &o) {
  j = nlohmann::json();
  j["amfCallBackURI"] = o.m_AmfCallBackURI;
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
}

void from_json(const nlohmann::json &j, CipherRequestData &o) {
  j.at("amfCallBackURI").get_to(o.m_AmfCallBackURI);
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
}

std::string CipherRequestData::getAmfCallBackURI() const {
  return m_AmfCallBackURI;
}
void CipherRequestData::setAmfCallBackURI(std::string const &value) {
  m_AmfCallBackURI = value;
}
std::string CipherRequestData::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void CipherRequestData::setSupportedFeatures(std::string const &value) {
  m_SupportedFeatures = value;
  m_SupportedFeaturesIsSet = true;
}
bool CipherRequestData::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void CipherRequestData::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org