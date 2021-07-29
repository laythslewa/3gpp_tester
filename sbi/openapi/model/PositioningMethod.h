/**
 * LMF Location
 * LMF Location Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA,
 * ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * PositioningMethod.h
 *
 * Indicates supported positioning methods.
 */

#ifndef PositioningMethod_H_
#define PositioningMethod_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Indicates supported positioning methods.
/// </summary>
class PositioningMethod {
public:
  PositioningMethod();
  virtual ~PositioningMethod();

  void validate();

  /////////////////////////////////////////////
  /// PositioningMethod members

  friend void to_json(nlohmann::json &j, const PositioningMethod &o);
  friend void from_json(const nlohmann::json &j, PositioningMethod &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* PositioningMethod_H_ */