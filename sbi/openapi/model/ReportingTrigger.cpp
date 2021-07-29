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

#include "ReportingTrigger.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ReportingTrigger::ReportingTrigger() {}

ReportingTrigger::~ReportingTrigger() {}

void ReportingTrigger::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const ReportingTrigger &o) {
  j = nlohmann::json();
}

void from_json(const nlohmann::json &j, ReportingTrigger &o) {}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org