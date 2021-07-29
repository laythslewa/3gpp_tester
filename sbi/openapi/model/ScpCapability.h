/**
 * NRF NFManagement Service
 * NRF NFManagement Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
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
 * ScpCapability.h
 *
 * Indicates the capabilities supported by an SCP
 */

#ifndef ScpCapability_H_
#define ScpCapability_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Indicates the capabilities supported by an SCP
/// </summary>
class ScpCapability {
public:
  ScpCapability();
  virtual ~ScpCapability();

  void validate();

  /////////////////////////////////////////////
  /// ScpCapability members

  friend void to_json(nlohmann::json &j, const ScpCapability &o);
  friend void from_json(const nlohmann::json &j, ScpCapability &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ScpCapability_H_ */
