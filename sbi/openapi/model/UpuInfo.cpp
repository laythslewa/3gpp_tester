/**
 * Nausf_UPUProtection Service
 * AUSF UPU Protection Service © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "UpuInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

UpuInfo::UpuInfo() {
  m_UpuAckInd = false;
  m_SupportedFeatures = "";
  m_SupportedFeaturesIsSet = false;
}

UpuInfo::~UpuInfo() {}

void UpuInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const UpuInfo &o) {
  j = nlohmann::json();
  j["upuDataList"] = o.m_UpuDataList;
  j["upuAckInd"] = o.m_UpuAckInd;
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
}

void from_json(const nlohmann::json &j, UpuInfo &o) {
  j.at("upuDataList").get_to(o.m_UpuDataList);
  j.at("upuAckInd").get_to(o.m_UpuAckInd);
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
}

std::vector<UpuData> &UpuInfo::getUpuDataList() { return m_UpuDataList; }
void UpuInfo::setUpuDataList(std::vector<UpuData> const &value) {
  m_UpuDataList = value;
}
bool UpuInfo::isUpuAckInd() const { return m_UpuAckInd; }
void UpuInfo::setUpuAckInd(bool const value) { m_UpuAckInd = value; }
std::string UpuInfo::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void UpuInfo::setSupportedFeatures(std::string const &value) {
  m_SupportedFeatures = value;
  m_SupportedFeaturesIsSet = true;
}
bool UpuInfo::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void UpuInfo::unsetSupportedFeatures() { m_SupportedFeaturesIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org