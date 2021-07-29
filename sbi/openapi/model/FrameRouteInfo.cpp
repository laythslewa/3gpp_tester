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

#include "FrameRouteInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

FrameRouteInfo::FrameRouteInfo() {
  m_Ipv4Mask = "";
  m_Ipv4MaskIsSet = false;
  m_Ipv6PrefixIsSet = false;
}

FrameRouteInfo::~FrameRouteInfo() {}

void FrameRouteInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const FrameRouteInfo &o) {
  j = nlohmann::json();
  if (o.ipv4MaskIsSet())
    j["ipv4Mask"] = o.m_Ipv4Mask;
  if (o.ipv6PrefixIsSet())
    j["ipv6Prefix"] = o.m_Ipv6Prefix;
}

void from_json(const nlohmann::json &j, FrameRouteInfo &o) {
  if (j.find("ipv4Mask") != j.end()) {
    j.at("ipv4Mask").get_to(o.m_Ipv4Mask);
    o.m_Ipv4MaskIsSet = true;
  }
  if (j.find("ipv6Prefix") != j.end()) {
    j.at("ipv6Prefix").get_to(o.m_Ipv6Prefix);
    o.m_Ipv6PrefixIsSet = true;
  }
}

std::string FrameRouteInfo::getIpv4Mask() const { return m_Ipv4Mask; }
void FrameRouteInfo::setIpv4Mask(std::string const &value) {
  m_Ipv4Mask = value;
  m_Ipv4MaskIsSet = true;
}
bool FrameRouteInfo::ipv4MaskIsSet() const { return m_Ipv4MaskIsSet; }
void FrameRouteInfo::unsetIpv4Mask() { m_Ipv4MaskIsSet = false; }
Ipv6Prefix FrameRouteInfo::getIpv6Prefix() const { return m_Ipv6Prefix; }
void FrameRouteInfo::setIpv6Prefix(Ipv6Prefix const &value) {
  m_Ipv6Prefix = value;
  m_Ipv6PrefixIsSet = true;
}
bool FrameRouteInfo::ipv6PrefixIsSet() const { return m_Ipv6PrefixIsSet; }
void FrameRouteInfo::unsetIpv6Prefix() { m_Ipv6PrefixIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
