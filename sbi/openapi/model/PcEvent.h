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
/*
 * PcEvent.h
 *
 * Represents the policy control events that can be subscribed.
 */

#ifndef PcEvent_H_
#define PcEvent_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents the policy control events that can be subscribed.
/// </summary>
class PcEvent {
public:
  PcEvent();
  virtual ~PcEvent();

  void validate();

  /////////////////////////////////////////////
  /// PcEvent members

  friend void to_json(nlohmann::json &j, const PcEvent &o);
  friend void from_json(const nlohmann::json &j, PcEvent &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* PcEvent_H_ */