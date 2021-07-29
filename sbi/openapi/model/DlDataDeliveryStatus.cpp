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

#include "DlDataDeliveryStatus.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

DlDataDeliveryStatus::DlDataDeliveryStatus() {}

DlDataDeliveryStatus::~DlDataDeliveryStatus() {}

void DlDataDeliveryStatus::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const DlDataDeliveryStatus &o) {
  j = nlohmann::json();
}

void from_json(const nlohmann::json &j, DlDataDeliveryStatus &o) {}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org