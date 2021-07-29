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

#include "ScpDomainConnectivity.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ScpDomainConnectivity::ScpDomainConnectivity() {}

ScpDomainConnectivity::~ScpDomainConnectivity() {}

void ScpDomainConnectivity::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const ScpDomainConnectivity &o) {
  j = nlohmann::json();
  j["connectedScpDomainList"] = o.m_ConnectedScpDomainList;
}

void from_json(const nlohmann::json &j, ScpDomainConnectivity &o) {
  j.at("connectedScpDomainList").get_to(o.m_ConnectedScpDomainList);
}

std::vector<std::string> &ScpDomainConnectivity::getConnectedScpDomainList() {
  return m_ConnectedScpDomainList;
}
void ScpDomainConnectivity::setConnectedScpDomainList(
    std::vector<std::string> const &value) {
  m_ConnectedScpDomainList = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
