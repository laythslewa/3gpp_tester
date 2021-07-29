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
 * RatTypeRm.h
 *
 * Provides infromatiuon about the radio access but with the OpenAPI
 * \&quot;nullable&#x3D; true\&quot; property.
 */

#ifndef RatTypeRm_H_
#define RatTypeRm_H_

#include "NullValue.h"
#include "RatType.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Provides infromatiuon about the radio access but with the OpenAPI
/// \&quot;nullable&#x3D; true\&quot; property.
/// </summary>
class RatTypeRm {
public:
  RatTypeRm();
  virtual ~RatTypeRm();

  void validate();

  /////////////////////////////////////////////
  /// RatTypeRm members

  friend void to_json(nlohmann::json &j, const RatTypeRm &o);
  friend void from_json(const nlohmann::json &j, RatTypeRm &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* RatTypeRm_H_ */