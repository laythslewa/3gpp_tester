/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.3.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "DnfUnit.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

DnfUnit::DnfUnit() {}

DnfUnit::~DnfUnit() {}

void DnfUnit::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const DnfUnit &o) {
  j = nlohmann::json();
  j["dnfUnit"] = o.m_DnfUnit;
}

void from_json(const nlohmann::json &j, DnfUnit &o) {
  j.at("dnfUnit").get_to(o.m_DnfUnit);
}

std::vector<Atom> &DnfUnit::getDnfUnit() { return m_DnfUnit; }
void DnfUnit::setDnfUnit(std::vector<Atom> const &value) { m_DnfUnit = value; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org