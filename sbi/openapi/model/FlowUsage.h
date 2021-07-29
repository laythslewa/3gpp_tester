/**
 * Npcf_PolicyAuthorization Service API
 * PCF Policy Authorization Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * FlowUsage.h
 *
 * Describes the flow usage of the flows described by a media subcomponent.
 */

#ifndef FlowUsage_H_
#define FlowUsage_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Describes the flow usage of the flows described by a media subcomponent.
/// </summary>
class FlowUsage {
public:
  FlowUsage();
  virtual ~FlowUsage();

  void validate();

  /////////////////////////////////////////////
  /// FlowUsage members

  friend void to_json(nlohmann::json &j, const FlowUsage &o);
  friend void from_json(const nlohmann::json &j, FlowUsage &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* FlowUsage_H_ */