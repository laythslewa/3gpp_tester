/**
 * M5_ConsumptionReporting
 * 5GMS AF M5 Consumption Reporting API © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "TypedLocation.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

TypedLocation::TypedLocation() { m_Location = ""; }

TypedLocation::~TypedLocation() {}

void TypedLocation::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const TypedLocation &o) {
  j = nlohmann::json();
  j["locationIdentifierType"] = o.m_LocationIdentifierType;
  j["location"] = o.m_Location;
}

void from_json(const nlohmann::json &j, TypedLocation &o) {
  j.at("locationIdentifierType").get_to(o.m_LocationIdentifierType);
  j.at("location").get_to(o.m_Location);
}

CellIdentifierType TypedLocation::getLocationIdentifierType() const {
  return m_LocationIdentifierType;
}
void TypedLocation::setLocationIdentifierType(CellIdentifierType const &value) {
  m_LocationIdentifierType = value;
}
std::string TypedLocation::getLocation() const { return m_Location; }
void TypedLocation::setLocation(std::string const &value) {
  m_Location = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org