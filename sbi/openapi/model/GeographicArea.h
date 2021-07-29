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
 * GeographicArea.h
 *
 * Geographic area specified by different shape.
 */

#ifndef GeographicArea_H_
#define GeographicArea_H_

#include "EllipsoidArc.h"
#include "GeographicalCoordinates.h"
#include "Point.h"
#include "PointAltitude.h"
#include "PointAltitudeUncertainty.h"
#include "PointUncertaintyCircle.h"
#include "PointUncertaintyEllipse.h"
#include "Polygon.h"
#include "SupportedGADShapes.h"
#include "UncertaintyEllipse.h"
#include <nlohmann/json.hpp>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Geographic area specified by different shape.
/// </summary>
class GeographicArea {
public:
  GeographicArea();
  virtual ~GeographicArea();

  void validate();

  /////////////////////////////////////////////
  /// GeographicArea members

  /// <summary>
  ///
  /// </summary>
  SupportedGADShapes getShape() const;
  void setShape(SupportedGADShapes const &value);
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
  /// <summary>
  ///
  /// </summary>
  UncertaintyEllipse getUncertaintyEllipse() const;
  void setUncertaintyEllipse(UncertaintyEllipse const &value);
  /// <summary>
  /// Indicates value of confidence.
  /// </summary>
  int32_t getConfidence() const;
  void setConfidence(int32_t const value);
  /// <summary>
  /// List of points.
  /// </summary>
  std::vector<GeographicalCoordinates> &getPointList();
  void setPointList(std::vector<GeographicalCoordinates> const &value);
  /// <summary>
  /// Indicates value of altitude.
  /// </summary>
  double getAltitude() const;
  void setAltitude(double const value);
  /// <summary>
  /// Indicates value of uncertainty.
  /// </summary>
  float getUncertaintyAltitude() const;
  void setUncertaintyAltitude(float const value);
  /// <summary>
  /// Indicates value of the inner radius.
  /// </summary>
  int32_t getInnerRadius() const;
  void setInnerRadius(int32_t const value);
  /// <summary>
  /// Indicates value of uncertainty.
  /// </summary>
  float getUncertaintyRadius() const;
  void setUncertaintyRadius(float const value);
  /// <summary>
  /// Indicates value of angle.
  /// </summary>
  int32_t getOffsetAngle() const;
  void setOffsetAngle(int32_t const value);
  /// <summary>
  /// Indicates value of angle.
  /// </summary>
  int32_t getIncludedAngle() const;
  void setIncludedAngle(int32_t const value);

  friend void to_json(nlohmann::json &j, const GeographicArea &o);
  friend void from_json(const nlohmann::json &j, GeographicArea &o);

protected:
  SupportedGADShapes m_Shape;

  GeographicalCoordinates m_Point;

  float m_Uncertainty;

  UncertaintyEllipse m_UncertaintyEllipse;

  int32_t m_Confidence;

  std::vector<GeographicalCoordinates> m_PointList;

  double m_Altitude;

  float m_UncertaintyAltitude;

  int32_t m_InnerRadius;

  float m_UncertaintyRadius;

  int32_t m_OffsetAngle;

  int32_t m_IncludedAngle;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* GeographicArea_H_ */
