/**
 * NRF NFDiscovery Service
 * NRF NFDiscovery Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ScpDomainRoutingInformation.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ScpDomainRoutingInformation::ScpDomainRoutingInformation() {}

ScpDomainRoutingInformation::~ScpDomainRoutingInformation() {}

void ScpDomainRoutingInformation::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const ScpDomainRoutingInformation &o) {
  j = nlohmann::json();
  j["scpDomainList"] = o.m_ScpDomainList;
}

void from_json(const nlohmann::json &j, ScpDomainRoutingInformation &o) {
  j.at("scpDomainList").get_to(o.m_ScpDomainList);
}

std::map<std::string, ScpDomainConnectivity> &
ScpDomainRoutingInformation::getScpDomainList() {
  return m_ScpDomainList;
}
void ScpDomainRoutingInformation::setScpDomainList(
    std::map<std::string, ScpDomainConnectivity> const &value) {
  m_ScpDomainList = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org