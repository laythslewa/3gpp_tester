/**
 * Nudsf_DataRepository
 * Nudsf Data Repository Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "RecordSearchResult.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

RecordSearchResult::RecordSearchResult() {
  m_Count = 0;
  m_ReferencesIsSet = false;
  m_SupportedFeatures = "";
  m_SupportedFeaturesIsSet = false;
}

RecordSearchResult::~RecordSearchResult() {}

void RecordSearchResult::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const RecordSearchResult &o) {
  j = nlohmann::json();
  j["count"] = o.m_Count;
  if (o.referencesIsSet() || !o.m_References.empty())
    j["references"] = o.m_References;
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
}

void from_json(const nlohmann::json &j, RecordSearchResult &o) {
  j.at("count").get_to(o.m_Count);
  if (j.find("references") != j.end()) {
    j.at("references").get_to(o.m_References);
    o.m_ReferencesIsSet = true;
  }
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
}

int32_t RecordSearchResult::getCount() const { return m_Count; }
void RecordSearchResult::setCount(int32_t const value) { m_Count = value; }
std::vector<std::string> &RecordSearchResult::getReferences() {
  return m_References;
}
void RecordSearchResult::setReferences(std::vector<std::string> const &value) {
  m_References = value;
  m_ReferencesIsSet = true;
}
bool RecordSearchResult::referencesIsSet() const { return m_ReferencesIsSet; }
void RecordSearchResult::unsetReferences() { m_ReferencesIsSet = false; }
std::string RecordSearchResult::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void RecordSearchResult::setSupportedFeatures(std::string const &value) {
  m_SupportedFeatures = value;
  m_SupportedFeaturesIsSet = true;
}
bool RecordSearchResult::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void RecordSearchResult::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
