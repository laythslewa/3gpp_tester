/**
 * 3gpp-nidd
 * API for non IP data delivery. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "DeliveryStatus.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

DeliveryStatus::DeliveryStatus() {}

DeliveryStatus::~DeliveryStatus() {}

void DeliveryStatus::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const DeliveryStatus &o) {
  j = nlohmann::json();
}

void from_json(const nlohmann::json &j, DeliveryStatus &o) {}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
