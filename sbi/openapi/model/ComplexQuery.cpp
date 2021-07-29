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

#include "ComplexQuery.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComplexQuery::ComplexQuery() {}

ComplexQuery::~ComplexQuery() {}

void ComplexQuery::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const ComplexQuery &o) {
  j = nlohmann::json();
  j["cnfUnits"] = o.m_CnfUnits;
  j["dnfUnits"] = o.m_DnfUnits;
}

void from_json(const nlohmann::json &j, ComplexQuery &o) {
  j.at("cnfUnits").get_to(o.m_CnfUnits);
  j.at("dnfUnits").get_to(o.m_DnfUnits);
}

std::vector<CnfUnit> &ComplexQuery::getCnfUnits() { return m_CnfUnits; }
void ComplexQuery::setCnfUnits(std::vector<CnfUnit> const &value) {
  m_CnfUnits = value;
}
std::vector<DnfUnit> &ComplexQuery::getDnfUnits() { return m_DnfUnits; }
void ComplexQuery::setDnfUnits(std::vector<DnfUnit> const &value) {
  m_DnfUnits = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
