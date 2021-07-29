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
 * HorizontalWithVerticalVelocity.h
 *
 * Horizontal and vertical velocity.
 */

#ifndef HorizontalWithVerticalVelocity_H_
#define HorizontalWithVerticalVelocity_H_

#include "VerticalDirection.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Horizontal and vertical velocity.
/// </summary>
class HorizontalWithVerticalVelocity {
public:
  HorizontalWithVerticalVelocity();
  virtual ~HorizontalWithVerticalVelocity();

  void validate();

  /////////////////////////////////////////////
  /// HorizontalWithVerticalVelocity members

  /// <summary>
  /// Indicates value of horizontal speed.
  /// </summary>
  float getHSpeed() const;
  void setHSpeed(float const value);
  /// <summary>
  /// Indicates value of angle.
  /// </summary>
  int32_t getBearing() const;
  void setBearing(int32_t const value);
  /// <summary>
  /// Indicates value of vertical speed.
  /// </summary>
  float getVSpeed() const;
  void setVSpeed(float const value);
  /// <summary>
  ///
  /// </summary>
  VerticalDirection getVDirection() const;
  void setVDirection(VerticalDirection const &value);

  friend void to_json(nlohmann::json &j,
                      const HorizontalWithVerticalVelocity &o);
  friend void from_json(const nlohmann::json &j,
                        HorizontalWithVerticalVelocity &o);

protected:
  float m_HSpeed;

  int32_t m_Bearing;

  float m_VSpeed;

  VerticalDirection m_VDirection;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* HorizontalWithVerticalVelocity_H_ */
