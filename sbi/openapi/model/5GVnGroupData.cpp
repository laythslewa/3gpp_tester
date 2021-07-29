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

#include "5GVnGroupData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

5GVnGroupData ::5GVnGroupData() {
  m_Dnn = "";
  m_PduSessionTypesIsSet = false;
  m_AppDescriptorsIsSet = false;
  m_SecondaryAuth = false;
  m_SecondaryAuthIsSet = false;
  m_DnAaaAddressIsSet = false;
  m_AdditionalDnAaaAddressesIsSet = false;
  m_DnAaaFqdn = "";
  m_DnAaaFqdnIsSet = false;
}

5GVnGroupData ::~5GVnGroupData() {}

void 5GVnGroupData ::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const 5GVnGroupData & o) {
  j = nlohmann::json();
  j["dnn"] = o.m_Dnn;
  j["sNssai"] = o.m_SNssai;
  if (o.pduSessionTypesIsSet() || !o.m_PduSessionTypes.empty())
    j["pduSessionTypes"] = o.m_PduSessionTypes;
  if (o.appDescriptorsIsSet() || !o.m_AppDescriptors.empty())
    j["appDescriptors"] = o.m_AppDescriptors;
  if (o.secondaryAuthIsSet())
    j["secondaryAuth"] = o.m_SecondaryAuth;
  if (o.dnAaaAddressIsSet())
    j["dnAaaAddress"] = o.m_DnAaaAddress;
  if (o.additionalDnAaaAddressesIsSet() ||
      !o.m_AdditionalDnAaaAddresses.empty())
    j["additionalDnAaaAddresses"] = o.m_AdditionalDnAaaAddresses;
  if (o.dnAaaFqdnIsSet())
    j["dnAaaFqdn"] = o.m_DnAaaFqdn;
}

void from_json(const nlohmann::json &j, 5GVnGroupData & o) {
  j.at("dnn").get_to(o.m_Dnn);
  j.at("sNssai").get_to(o.m_SNssai);
  if (j.find("pduSessionTypes") != j.end()) {
    j.at("pduSessionTypes").get_to(o.m_PduSessionTypes);
    o.m_PduSessionTypesIsSet = true;
  }
  if (j.find("appDescriptors") != j.end()) {
    j.at("appDescriptors").get_to(o.m_AppDescriptors);
    o.m_AppDescriptorsIsSet = true;
  }
  if (j.find("secondaryAuth") != j.end()) {
    j.at("secondaryAuth").get_to(o.m_SecondaryAuth);
    o.m_SecondaryAuthIsSet = true;
  }
  if (j.find("dnAaaAddress") != j.end()) {
    j.at("dnAaaAddress").get_to(o.m_DnAaaAddress);
    o.m_DnAaaAddressIsSet = true;
  }
  if (j.find("additionalDnAaaAddresses") != j.end()) {
    j.at("additionalDnAaaAddresses").get_to(o.m_AdditionalDnAaaAddresses);
    o.m_AdditionalDnAaaAddressesIsSet = true;
  }
  if (j.find("dnAaaFqdn") != j.end()) {
    j.at("dnAaaFqdn").get_to(o.m_DnAaaFqdn);
    o.m_DnAaaFqdnIsSet = true;
  }
}

std::string 5GVnGroupData ::getDnn() const { return m_Dnn; }
void 5GVnGroupData ::setDnn(std::string const &value) { m_Dnn = value; }
Snssai 5GVnGroupData ::getSNssai() const { return m_SNssai; }
void 5GVnGroupData ::setSNssai(Snssai const &value) { m_SNssai = value; }
std::vector<PduSessionType> & 5GVnGroupData ::getPduSessionTypes() {
  return m_PduSessionTypes;
}
void 5GVnGroupData ::setPduSessionTypes(
    std::vector<PduSessionType> const &value) {
  m_PduSessionTypes = value;
  m_PduSessionTypesIsSet = true;
}
bool 5GVnGroupData ::pduSessionTypesIsSet() const {
  return m_PduSessionTypesIsSet;
}
void 5GVnGroupData ::unsetPduSessionTypes() { m_PduSessionTypesIsSet = false; }
std::vector<AppDescriptor> & 5GVnGroupData ::getAppDescriptors() {
  return m_AppDescriptors;
}
void 5GVnGroupData ::setAppDescriptors(
    std::vector<AppDescriptor> const &value) {
  m_AppDescriptors = value;
  m_AppDescriptorsIsSet = true;
}
bool 5GVnGroupData ::appDescriptorsIsSet() const {
  return m_AppDescriptorsIsSet;
}
void 5GVnGroupData ::unsetAppDescriptors() { m_AppDescriptorsIsSet = false; }
bool 5GVnGroupData ::isSecondaryAuth() const { return m_SecondaryAuth; }
void 5GVnGroupData ::setSecondaryAuth(bool const value) {
  m_SecondaryAuth = value;
  m_SecondaryAuthIsSet = true;
}
bool 5GVnGroupData ::secondaryAuthIsSet() const { return m_SecondaryAuthIsSet; }
void 5GVnGroupData ::unsetSecondaryAuth() { m_SecondaryAuthIsSet = false; }
IpAddress 5GVnGroupData ::getDnAaaAddress() const { return m_DnAaaAddress; }
void 5GVnGroupData ::setDnAaaAddress(IpAddress const &value) {
  m_DnAaaAddress = value;
  m_DnAaaAddressIsSet = true;
}
bool 5GVnGroupData ::dnAaaAddressIsSet() const { return m_DnAaaAddressIsSet; }
void 5GVnGroupData ::unsetDnAaaAddress() { m_DnAaaAddressIsSet = false; }
std::vector<IpAddress> & 5GVnGroupData ::getAdditionalDnAaaAddresses() {
  return m_AdditionalDnAaaAddresses;
}
void 5GVnGroupData ::setAdditionalDnAaaAddresses(
    std::vector<IpAddress> const &value) {
  m_AdditionalDnAaaAddresses = value;
  m_AdditionalDnAaaAddressesIsSet = true;
}
bool 5GVnGroupData ::additionalDnAaaAddressesIsSet() const {
  return m_AdditionalDnAaaAddressesIsSet;
}
void 5GVnGroupData ::unsetAdditionalDnAaaAddresses() {
  m_AdditionalDnAaaAddressesIsSet = false;
}
std::string 5GVnGroupData ::getDnAaaFqdn() const { return m_DnAaaFqdn; }
void 5GVnGroupData ::setDnAaaFqdn(std::string const &value) {
  m_DnAaaFqdn = value;
  m_DnAaaFqdnIsSet = true;
}
bool 5GVnGroupData ::dnAaaFqdnIsSet() const { return m_DnAaaFqdnIsSet; }
void 5GVnGroupData ::unsetDnAaaFqdn() { m_DnAaaFqdnIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
