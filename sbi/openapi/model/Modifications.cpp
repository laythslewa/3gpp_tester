/**
 * JOSE Protected Message Forwarding API
 * N32-f Message Forwarding Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "Modifications.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

Modifications::Modifications() {
  m_Identity = "";
  m_OperationsIsSet = false;
}

Modifications::~Modifications() {}

void Modifications::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const Modifications &o) {
  j = nlohmann::json();
  j["identity"] = o.m_Identity;
  if (o.operationsIsSet() || !o.m_Operations.empty())
    j["operations"] = o.m_Operations;
}

void from_json(const nlohmann::json &j, Modifications &o) {
  j.at("identity").get_to(o.m_Identity);
  if (j.find("operations") != j.end()) {
    j.at("operations").get_to(o.m_Operations);
    o.m_OperationsIsSet = true;
  }
}

std::string Modifications::getIdentity() const { return m_Identity; }
void Modifications::setIdentity(std::string const &value) {
  m_Identity = value;
}
std::vector<PatchItem> &Modifications::getOperations() { return m_Operations; }
void Modifications::setOperations(std::vector<PatchItem> const &value) {
  m_Operations = value;
  m_OperationsIsSet = true;
}
bool Modifications::operationsIsSet() const { return m_OperationsIsSet; }
void Modifications::unsetOperations() { m_OperationsIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org