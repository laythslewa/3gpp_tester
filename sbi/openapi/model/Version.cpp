/**
 * CAPIF_Routing_Info_API
 * API for Routing information. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "Version.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

Version::Version() {
  m_ApiVersion = "";
  m_Expiry = "";
  m_ExpiryIsSet = false;
  m_ResourcesIsSet = false;
  m_CustOperationsIsSet = false;
}

Version::~Version() {}

void Version::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const Version &o) {
  j = nlohmann::json();
  j["apiVersion"] = o.m_ApiVersion;
  if (o.expiryIsSet())
    j["expiry"] = o.m_Expiry;
  if (o.resourcesIsSet() || !o.m_Resources.empty())
    j["resources"] = o.m_Resources;
  if (o.custOperationsIsSet() || !o.m_CustOperations.empty())
    j["custOperations"] = o.m_CustOperations;
}

void from_json(const nlohmann::json &j, Version &o) {
  j.at("apiVersion").get_to(o.m_ApiVersion);
  if (j.find("expiry") != j.end()) {
    j.at("expiry").get_to(o.m_Expiry);
    o.m_ExpiryIsSet = true;
  }
  if (j.find("resources") != j.end()) {
    j.at("resources").get_to(o.m_Resources);
    o.m_ResourcesIsSet = true;
  }
  if (j.find("custOperations") != j.end()) {
    j.at("custOperations").get_to(o.m_CustOperations);
    o.m_CustOperationsIsSet = true;
  }
}

std::string Version::getApiVersion() const { return m_ApiVersion; }
void Version::setApiVersion(std::string const &value) { m_ApiVersion = value; }
std::string Version::getExpiry() const { return m_Expiry; }
void Version::setExpiry(std::string const &value) {
  m_Expiry = value;
  m_ExpiryIsSet = true;
}
bool Version::expiryIsSet() const { return m_ExpiryIsSet; }
void Version::unsetExpiry() { m_ExpiryIsSet = false; }
std::vector<Resource> &Version::getResources() { return m_Resources; }
void Version::setResources(std::vector<Resource> const &value) {
  m_Resources = value;
  m_ResourcesIsSet = true;
}
bool Version::resourcesIsSet() const { return m_ResourcesIsSet; }
void Version::unsetResources() { m_ResourcesIsSet = false; }
std::vector<CustomOperation> &Version::getCustOperations() {
  return m_CustOperations;
}
void Version::setCustOperations(std::vector<CustomOperation> const &value) {
  m_CustOperations = value;
  m_CustOperationsIsSet = true;
}
bool Version::custOperationsIsSet() const { return m_CustOperationsIsSet; }
void Version::unsetCustOperations() { m_CustOperationsIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org