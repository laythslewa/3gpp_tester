/**
 * NRF NFManagement Service
 * NRF NFManagement Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "WAgfInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

WAgfInfo::WAgfInfo() {
  m_Ipv4EndpointAddressesIsSet = false;
  m_Ipv6EndpointAddressesIsSet = false;
  m_EndpointFqdn = "";
  m_EndpointFqdnIsSet = false;
}

WAgfInfo::~WAgfInfo() {}

void WAgfInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const WAgfInfo &o) {
  j = nlohmann::json();
  if (o.ipv4EndpointAddressesIsSet() || !o.m_Ipv4EndpointAddresses.empty())
    j["ipv4EndpointAddresses"] = o.m_Ipv4EndpointAddresses;
  if (o.ipv6EndpointAddressesIsSet() || !o.m_Ipv6EndpointAddresses.empty())
    j["ipv6EndpointAddresses"] = o.m_Ipv6EndpointAddresses;
  if (o.endpointFqdnIsSet())
    j["endpointFqdn"] = o.m_EndpointFqdn;
}

void from_json(const nlohmann::json &j, WAgfInfo &o) {
  if (j.find("ipv4EndpointAddresses") != j.end()) {
    j.at("ipv4EndpointAddresses").get_to(o.m_Ipv4EndpointAddresses);
    o.m_Ipv4EndpointAddressesIsSet = true;
  }
  if (j.find("ipv6EndpointAddresses") != j.end()) {
    j.at("ipv6EndpointAddresses").get_to(o.m_Ipv6EndpointAddresses);
    o.m_Ipv6EndpointAddressesIsSet = true;
  }
  if (j.find("endpointFqdn") != j.end()) {
    j.at("endpointFqdn").get_to(o.m_EndpointFqdn);
    o.m_EndpointFqdnIsSet = true;
  }
}

std::vector<std::string> &WAgfInfo::getIpv4EndpointAddresses() {
  return m_Ipv4EndpointAddresses;
}
void WAgfInfo::setIpv4EndpointAddresses(std::vector<std::string> const &value) {
  m_Ipv4EndpointAddresses = value;
  m_Ipv4EndpointAddressesIsSet = true;
}
bool WAgfInfo::ipv4EndpointAddressesIsSet() const {
  return m_Ipv4EndpointAddressesIsSet;
}
void WAgfInfo::unsetIpv4EndpointAddresses() {
  m_Ipv4EndpointAddressesIsSet = false;
}
std::vector<Ipv6Addr> &WAgfInfo::getIpv6EndpointAddresses() {
  return m_Ipv6EndpointAddresses;
}
void WAgfInfo::setIpv6EndpointAddresses(std::vector<Ipv6Addr> const &value) {
  m_Ipv6EndpointAddresses = value;
  m_Ipv6EndpointAddressesIsSet = true;
}
bool WAgfInfo::ipv6EndpointAddressesIsSet() const {
  return m_Ipv6EndpointAddressesIsSet;
}
void WAgfInfo::unsetIpv6EndpointAddresses() {
  m_Ipv6EndpointAddressesIsSet = false;
}
std::string WAgfInfo::getEndpointFqdn() const { return m_EndpointFqdn; }
void WAgfInfo::setEndpointFqdn(std::string const &value) {
  m_EndpointFqdn = value;
  m_EndpointFqdnIsSet = true;
}
bool WAgfInfo::endpointFqdnIsSet() const { return m_EndpointFqdnIsSet; }
void WAgfInfo::unsetEndpointFqdn() { m_EndpointFqdnIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
