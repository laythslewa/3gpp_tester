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
 * PositioningMode.h
 *
 * Indicates supported modes used for positioning method.
 */

#ifndef PositioningMode_H_
#define PositioningMode_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Indicates supported modes used for positioning method.
/// </summary>
class PositioningMode {
public:
  PositioningMode();
  virtual ~PositioningMode();

  void validate();

  /////////////////////////////////////////////
  /// PositioningMode members

  friend void to_json(nlohmann::json &j, const PositioningMode &o);
  friend void from_json(const nlohmann::json &j, PositioningMode &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* PositioningMode_H_ */