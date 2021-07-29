/**
 * Unified Data Repository Service API file for policy data
 * The API version is defined in 3GPP TS 29.504 © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "PlmnRouteSelectionDescriptor.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

PlmnRouteSelectionDescriptor::PlmnRouteSelectionDescriptor() {
  m_SnssaiRouteSelDescsIsSet = false;
}

PlmnRouteSelectionDescriptor::~PlmnRouteSelectionDescriptor() {}

void PlmnRouteSelectionDescriptor::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const PlmnRouteSelectionDescriptor &o) {
  j = nlohmann::json();
  j["servingPlmn"] = o.m_ServingPlmn;
  if (o.snssaiRouteSelDescsIsSet() || !o.m_SnssaiRouteSelDescs.empty())
    j["snssaiRouteSelDescs"] = o.m_SnssaiRouteSelDescs;
}

void from_json(const nlohmann::json &j, PlmnRouteSelectionDescriptor &o) {
  j.at("servingPlmn").get_to(o.m_ServingPlmn);
  if (j.find("snssaiRouteSelDescs") != j.end()) {
    j.at("snssaiRouteSelDescs").get_to(o.m_SnssaiRouteSelDescs);
    o.m_SnssaiRouteSelDescsIsSet = true;
  }
}

PlmnId PlmnRouteSelectionDescriptor::getServingPlmn() const {
  return m_ServingPlmn;
}
void PlmnRouteSelectionDescriptor::setServingPlmn(PlmnId const &value) {
  m_ServingPlmn = value;
}
std::vector<SnssaiRouteSelectionDescriptor> &
PlmnRouteSelectionDescriptor::getSnssaiRouteSelDescs() {
  return m_SnssaiRouteSelDescs;
}
void PlmnRouteSelectionDescriptor::setSnssaiRouteSelDescs(
    std::vector<SnssaiRouteSelectionDescriptor> const &value) {
  m_SnssaiRouteSelDescs = value;
  m_SnssaiRouteSelDescsIsSet = true;
}
bool PlmnRouteSelectionDescriptor::snssaiRouteSelDescsIsSet() const {
  return m_SnssaiRouteSelDescsIsSet;
}
void PlmnRouteSelectionDescriptor::unsetSnssaiRouteSelDescs() {
  m_SnssaiRouteSelDescsIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
