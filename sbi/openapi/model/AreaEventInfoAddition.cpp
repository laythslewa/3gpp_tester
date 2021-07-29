/**
 * Ngmlc_Location
 * Ngmlc_Location Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "AreaEventInfoAddition.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

AreaEventInfoAddition::AreaEventInfoAddition() {
  m_GeoAreaListIsSet = false;
  m_IgnoreAreaDefInd = false;
  m_IgnoreAreaDefIndIsSet = false;
}

AreaEventInfoAddition::~AreaEventInfoAddition() {}

void AreaEventInfoAddition::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const AreaEventInfoAddition &o) {
  j = nlohmann::json();
  if (o.geoAreaListIsSet() || !o.m_GeoAreaList.empty())
    j["geoAreaList"] = o.m_GeoAreaList;
  if (o.ignoreAreaDefIndIsSet())
    j["ignoreAreaDefInd"] = o.m_IgnoreAreaDefInd;
}

void from_json(const nlohmann::json &j, AreaEventInfoAddition &o) {
  if (j.find("geoAreaList") != j.end()) {
    j.at("geoAreaList").get_to(o.m_GeoAreaList);
    o.m_GeoAreaListIsSet = true;
  }
  if (j.find("ignoreAreaDefInd") != j.end()) {
    j.at("ignoreAreaDefInd").get_to(o.m_IgnoreAreaDefInd);
    o.m_IgnoreAreaDefIndIsSet = true;
  }
}

std::vector<GeographicArea> &AreaEventInfoAddition::getGeoAreaList() {
  return m_GeoAreaList;
}
void AreaEventInfoAddition::setGeoAreaList(
    std::vector<GeographicArea> const &value) {
  m_GeoAreaList = value;
  m_GeoAreaListIsSet = true;
}
bool AreaEventInfoAddition::geoAreaListIsSet() const {
  return m_GeoAreaListIsSet;
}
void AreaEventInfoAddition::unsetGeoAreaList() { m_GeoAreaListIsSet = false; }
bool AreaEventInfoAddition::isIgnoreAreaDefInd() const {
  return m_IgnoreAreaDefInd;
}
void AreaEventInfoAddition::setIgnoreAreaDefInd(bool const value) {
  m_IgnoreAreaDefInd = value;
  m_IgnoreAreaDefIndIsSet = true;
}
bool AreaEventInfoAddition::ignoreAreaDefIndIsSet() const {
  return m_IgnoreAreaDefIndIsSet;
}
void AreaEventInfoAddition::unsetIgnoreAreaDefInd() {
  m_IgnoreAreaDefIndIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org