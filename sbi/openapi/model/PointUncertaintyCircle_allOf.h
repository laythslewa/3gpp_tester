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
 * PointUncertaintyCircle_allOf.h
 *
 *
 */

#ifndef PointUncertaintyCircle_allOf_H_
#define PointUncertaintyCircle_allOf_H_

#include "GeographicalCoordinates.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class PointUncertaintyCircle_allOf {
public:
  PointUncertaintyCircle_allOf();
  virtual ~PointUncertaintyCircle_allOf();

  void validate();

  /////////////////////////////////////////////
  /// PointUncertaintyCircle_allOf members

  /// <summary>
  ///
  /// </summary>
  GeographicalCoordinates getPoint() const;
  void setPoint(GeographicalCoordinates const &value);
  /// <summary>
  /// Indicates value of uncertainty.
  /// </summary>
  float getUncertainty() const;
  void setUncertainty(float const value);

  friend void to_json(nlohmann::json &j, const PointUncertaintyCircle_allOf &o);
  friend void from_json(const nlohmann::json &j,
                        PointUncertaintyCircle_allOf &o);

protected:
  GeographicalCoordinates m_Point;

  float m_Uncertainty;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* PointUncertaintyCircle_allOf_H_ */
