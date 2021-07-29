/**
 * VAE_HDMapDynamicInfo
 * API for VAE HDMapDynamicInfo Service © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "HdMapDynamicInfoNotification.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

HdMapDynamicInfoNotification::HdMapDynamicInfoNotification() {
  m_ResourceUri = "";
}

HdMapDynamicInfoNotification::~HdMapDynamicInfoNotification() {}

void HdMapDynamicInfoNotification::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const HdMapDynamicInfoNotification &o) {
  j = nlohmann::json();
  j["resourceUri"] = o.m_ResourceUri;
  j["nearbyUeInfo"] = o.m_NearbyUeInfo;
}

void from_json(const nlohmann::json &j, HdMapDynamicInfoNotification &o) {
  j.at("resourceUri").get_to(o.m_ResourceUri);
  j.at("nearbyUeInfo").get_to(o.m_NearbyUeInfo);
}

std::string HdMapDynamicInfoNotification::getResourceUri() const {
  return m_ResourceUri;
}
void HdMapDynamicInfoNotification::setResourceUri(std::string const &value) {
  m_ResourceUri = value;
}
std::vector<NearbyUeInfo> &HdMapDynamicInfoNotification::getNearbyUeInfo() {
  return m_NearbyUeInfo;
}
void HdMapDynamicInfoNotification::setNearbyUeInfo(
    std::vector<NearbyUeInfo> const &value) {
  m_NearbyUeInfo = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org