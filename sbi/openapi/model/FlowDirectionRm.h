/**
 * Npcf_SMPolicyControl API
 * Session Management Policy Control Service © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * FlowDirectionRm.h
 *
 * This data type is defined in the same way as the \&quot;FlowDirection\&quot;
 * data type, with the only difference that it allows null value.
 */

#ifndef FlowDirectionRm_H_
#define FlowDirectionRm_H_

#include "FlowDirection.h"
#include "NullValue.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// This data type is defined in the same way as the \&quot;FlowDirection\&quot;
/// data type, with the only difference that it allows null value.
/// </summary>
class FlowDirectionRm {
public:
  FlowDirectionRm();
  virtual ~FlowDirectionRm();

  void validate();

  /////////////////////////////////////////////
  /// FlowDirectionRm members

  friend void to_json(nlohmann::json &j, const FlowDirectionRm &o);
  friend void from_json(const nlohmann::json &j, FlowDirectionRm &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* FlowDirectionRm_H_ */
