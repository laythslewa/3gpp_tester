/**
 * 3gpp-monitoring-event
 * API for Monitoring Event. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "PdnConnectionStatus.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

PdnConnectionStatus::PdnConnectionStatus() {}

PdnConnectionStatus::~PdnConnectionStatus() {}

void PdnConnectionStatus::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const PdnConnectionStatus &o) {
  j = nlohmann::json();
}

void from_json(const nlohmann::json &j, PdnConnectionStatus &o) {}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
