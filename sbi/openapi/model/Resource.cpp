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

#include "Resource.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

Resource::Resource() {
  m_ResourceName = "";
  m_Uri = "";
  m_CustOpName = "";
  m_CustOpNameIsSet = false;
  m_OperationsIsSet = false;
  m_Description = "";
  m_DescriptionIsSet = false;
}

Resource::~Resource() {}

void Resource::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const Resource &o) {
  j = nlohmann::json();
  j["resourceName"] = o.m_ResourceName;
  j["commType"] = o.m_CommType;
  j["uri"] = o.m_Uri;
  if (o.custOpNameIsSet())
    j["custOpName"] = o.m_CustOpName;
  if (o.operationsIsSet() || !o.m_Operations.empty())
    j["operations"] = o.m_Operations;
  if (o.descriptionIsSet())
    j["description"] = o.m_Description;
}

void from_json(const nlohmann::json &j, Resource &o) {
  j.at("resourceName").get_to(o.m_ResourceName);
  j.at("commType").get_to(o.m_CommType);
  j.at("uri").get_to(o.m_Uri);
  if (j.find("custOpName") != j.end()) {
    j.at("custOpName").get_to(o.m_CustOpName);
    o.m_CustOpNameIsSet = true;
  }
  if (j.find("operations") != j.end()) {
    j.at("operations").get_to(o.m_Operations);
    o.m_OperationsIsSet = true;
  }
  if (j.find("description") != j.end()) {
    j.at("description").get_to(o.m_Description);
    o.m_DescriptionIsSet = true;
  }
}

std::string Resource::getResourceName() const { return m_ResourceName; }
void Resource::setResourceName(std::string const &value) {
  m_ResourceName = value;
}
CommunicationType Resource::getCommType() const { return m_CommType; }
void Resource::setCommType(CommunicationType const &value) {
  m_CommType = value;
}
std::string Resource::getUri() const { return m_Uri; }
void Resource::setUri(std::string const &value) { m_Uri = value; }
std::string Resource::getCustOpName() const { return m_CustOpName; }
void Resource::setCustOpName(std::string const &value) {
  m_CustOpName = value;
  m_CustOpNameIsSet = true;
}
bool Resource::custOpNameIsSet() const { return m_CustOpNameIsSet; }
void Resource::unsetCustOpName() { m_CustOpNameIsSet = false; }
std::vector<Operation> &Resource::getOperations() { return m_Operations; }
void Resource::setOperations(std::vector<Operation> const &value) {
  m_Operations = value;
  m_OperationsIsSet = true;
}
bool Resource::operationsIsSet() const { return m_OperationsIsSet; }
void Resource::unsetOperations() { m_OperationsIsSet = false; }
std::string Resource::getDescription() const { return m_Description; }
void Resource::setDescription(std::string const &value) {
  m_Description = value;
  m_DescriptionIsSet = true;
}
bool Resource::descriptionIsSet() const { return m_DescriptionIsSet; }
void Resource::unsetDescription() { m_DescriptionIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
