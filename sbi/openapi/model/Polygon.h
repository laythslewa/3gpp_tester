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
 * Polygon.h
 *
 * Polygon.
 */

#ifndef Polygon_H_
#define Polygon_H_

#include "GADShape.h"
#include "GeographicalCoordinates.h"
#include "Polygon_allOf.h"
#include "SupportedGADShapes.h"
#include <nlohmann/json.hpp>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Polygon.
/// </summary>
class Polygon {
public:
  Polygon();
  virtual ~Polygon();

  void validate();

  /////////////////////////////////////////////
  /// Polygon members

  /// <summary>
  ///
  /// </summary>
  SupportedGADShapes getShape() const;
  void setShape(SupportedGADShapes const &value);
  /// <summary>
  /// List of points.
  /// </summary>
  std::vector<GeographicalCoordinates> &getPointList();
  void setPointList(std::vector<GeographicalCoordinates> const &value);

  friend void to_json(nlohmann::json &j, const Polygon &o);
  friend void from_json(const nlohmann::json &j, Polygon &o);

protected:
  SupportedGADShapes m_Shape;

  std::vector<GeographicalCoordinates> m_PointList;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* Polygon_H_ */
