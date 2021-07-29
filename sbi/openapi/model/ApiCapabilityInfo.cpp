/**
 * 3gpp-monitoring-event
 * API for Monitoring Event. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ApiCapabilityInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ApiCapabilityInfo::ApiCapabilityInfo() {
  m_ApiName = "";
  m_SuppFeat = "";
}

ApiCapabilityInfo::~ApiCapabilityInfo() {}

void ApiCapabilityInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const ApiCapabilityInfo &o) {
  j = nlohmann::json();
  j["apiName"] = o.m_ApiName;
  j["suppFeat"] = o.m_SuppFeat;
}

void from_json(const nlohmann::json &j, ApiCapabilityInfo &o) {
  j.at("apiName").get_to(o.m_ApiName);
  j.at("suppFeat").get_to(o.m_SuppFeat);
}

std::string ApiCapabilityInfo::getApiName() const { return m_ApiName; }
void ApiCapabilityInfo::setApiName(std::string const &value) {
  m_ApiName = value;
}
std::string ApiCapabilityInfo::getSuppFeat() const { return m_SuppFeat; }
void ApiCapabilityInfo::setSuppFeat(std::string const &value) {
  m_SuppFeat = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org