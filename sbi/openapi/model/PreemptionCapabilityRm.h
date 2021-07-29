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
/*
 * PreemptionCapabilityRm.h
 *
 * This enumeration is defined in the same way as the
 * \&quot;PreemptionCapability\&quot; enumeration, but with the OpenAPI
 * \&quot;nullable&#x3D; true\&quot; property.
 */

#ifndef PreemptionCapabilityRm_H_
#define PreemptionCapabilityRm_H_

#include "NullValue.h"
#include "PreemptionCapability.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// This enumeration is defined in the same way as the
/// \&quot;PreemptionCapability\&quot; enumeration, but with the OpenAPI
/// \&quot;nullable&#x3D; true\&quot; property.
/// </summary>
class PreemptionCapabilityRm {
public:
  PreemptionCapabilityRm();
  virtual ~PreemptionCapabilityRm();

  void validate();

  /////////////////////////////////////////////
  /// PreemptionCapabilityRm members

  friend void to_json(nlohmann::json &j, const PreemptionCapabilityRm &o);
  friend void from_json(const nlohmann::json &j, PreemptionCapabilityRm &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* PreemptionCapabilityRm_H_ */
