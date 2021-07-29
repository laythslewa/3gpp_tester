/**
 * Nchf_OfflineOnlyCharging
 * OfflineOnlyCharging Service © 2020, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "PDUAddress.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

PDUAddress::PDUAddress() {
  m_PduIPv4Address = "";
  m_PduIPv4AddressIsSet = false;
  m_PduIPv6AddresswithPrefixIsSet = false;
  m_PduAddressprefixlength = 0;
  m_PduAddressprefixlengthIsSet = false;
  m_IPv4dynamicAddressFlag = false;
  m_IPv4dynamicAddressFlagIsSet = false;
  m_IPv6dynamicPrefixFlag = false;
  m_IPv6dynamicPrefixFlagIsSet = false;
}

PDUAddress::~PDUAddress() {}

void PDUAddress::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const PDUAddress &o) {
  j = nlohmann::json();
  if (o.pduIPv4AddressIsSet())
    j["pduIPv4Address"] = o.m_PduIPv4Address;
  if (o.pduIPv6AddresswithPrefixIsSet())
    j["pduIPv6AddresswithPrefix"] = o.m_PduIPv6AddresswithPrefix;
  if (o.pduAddressprefixlengthIsSet())
    j["pduAddressprefixlength"] = o.m_PduAddressprefixlength;
  if (o.iPv4dynamicAddressFlagIsSet())
    j["iPv4dynamicAddressFlag"] = o.m_IPv4dynamicAddressFlag;
  if (o.iPv6dynamicPrefixFlagIsSet())
    j["iPv6dynamicPrefixFlag"] = o.m_IPv6dynamicPrefixFlag;
}

void from_json(const nlohmann::json &j, PDUAddress &o) {
  if (j.find("pduIPv4Address") != j.end()) {
    j.at("pduIPv4Address").get_to(o.m_PduIPv4Address);
    o.m_PduIPv4AddressIsSet = true;
  }
  if (j.find("pduIPv6AddresswithPrefix") != j.end()) {
    j.at("pduIPv6AddresswithPrefix").get_to(o.m_PduIPv6AddresswithPrefix);
    o.m_PduIPv6AddresswithPrefixIsSet = true;
  }
  if (j.find("pduAddressprefixlength") != j.end()) {
    j.at("pduAddressprefixlength").get_to(o.m_PduAddressprefixlength);
    o.m_PduAddressprefixlengthIsSet = true;
  }
  if (j.find("iPv4dynamicAddressFlag") != j.end()) {
    j.at("iPv4dynamicAddressFlag").get_to(o.m_IPv4dynamicAddressFlag);
    o.m_IPv4dynamicAddressFlagIsSet = true;
  }
  if (j.find("iPv6dynamicPrefixFlag") != j.end()) {
    j.at("iPv6dynamicPrefixFlag").get_to(o.m_IPv6dynamicPrefixFlag);
    o.m_IPv6dynamicPrefixFlagIsSet = true;
  }
}

std::string PDUAddress::getPduIPv4Address() const { return m_PduIPv4Address; }
void PDUAddress::setPduIPv4Address(std::string const &value) {
  m_PduIPv4Address = value;
  m_PduIPv4AddressIsSet = true;
}
bool PDUAddress::pduIPv4AddressIsSet() const { return m_PduIPv4AddressIsSet; }
void PDUAddress::unsetPduIPv4Address() { m_PduIPv4AddressIsSet = false; }
Ipv6Addr PDUAddress::getPduIPv6AddresswithPrefix() const {
  return m_PduIPv6AddresswithPrefix;
}
void PDUAddress::setPduIPv6AddresswithPrefix(Ipv6Addr const &value) {
  m_PduIPv6AddresswithPrefix = value;
  m_PduIPv6AddresswithPrefixIsSet = true;
}
bool PDUAddress::pduIPv6AddresswithPrefixIsSet() const {
  return m_PduIPv6AddresswithPrefixIsSet;
}
void PDUAddress::unsetPduIPv6AddresswithPrefix() {
  m_PduIPv6AddresswithPrefixIsSet = false;
}
int32_t PDUAddress::getPduAddressprefixlength() const {
  return m_PduAddressprefixlength;
}
void PDUAddress::setPduAddressprefixlength(int32_t const value) {
  m_PduAddressprefixlength = value;
  m_PduAddressprefixlengthIsSet = true;
}
bool PDUAddress::pduAddressprefixlengthIsSet() const {
  return m_PduAddressprefixlengthIsSet;
}
void PDUAddress::unsetPduAddressprefixlength() {
  m_PduAddressprefixlengthIsSet = false;
}
bool PDUAddress::isIPv4dynamicAddressFlag() const {
  return m_IPv4dynamicAddressFlag;
}
void PDUAddress::setIPv4dynamicAddressFlag(bool const value) {
  m_IPv4dynamicAddressFlag = value;
  m_IPv4dynamicAddressFlagIsSet = true;
}
bool PDUAddress::iPv4dynamicAddressFlagIsSet() const {
  return m_IPv4dynamicAddressFlagIsSet;
}
void PDUAddress::unsetIPv4dynamicAddressFlag() {
  m_IPv4dynamicAddressFlagIsSet = false;
}
bool PDUAddress::isIPv6dynamicPrefixFlag() const {
  return m_IPv6dynamicPrefixFlag;
}
void PDUAddress::setIPv6dynamicPrefixFlag(bool const value) {
  m_IPv6dynamicPrefixFlag = value;
  m_IPv6dynamicPrefixFlagIsSet = true;
}
bool PDUAddress::iPv6dynamicPrefixFlagIsSet() const {
  return m_IPv6dynamicPrefixFlagIsSet;
}
void PDUAddress::unsetIPv6dynamicPrefixFlag() {
  m_IPv6dynamicPrefixFlagIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org