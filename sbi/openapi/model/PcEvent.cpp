/**
 * Npcf_EventExposure
 * PCF Event Exposure Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "PcEvent.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

PcEvent::PcEvent() {}

PcEvent::~PcEvent() {}

void PcEvent::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const PcEvent &o) { j = nlohmann::json(); }

void from_json(const nlohmann::json &j, PcEvent &o) {}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
