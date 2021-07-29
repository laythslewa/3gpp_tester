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

#include "Polygon.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

Polygon::Polygon() {}

Polygon::~Polygon() {}

void Polygon::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const Polygon &o) {
  j = nlohmann::json();
  j["shape"] = o.m_Shape;
  j["pointList"] = o.m_PointList;
}

void from_json(const nlohmann::json &j, Polygon &o) {
  j.at("shape").get_to(o.m_Shape);
  j.at("pointList").get_to(o.m_PointList);
}

SupportedGADShapes Polygon::getShape() const { return m_Shape; }
void Polygon::setShape(SupportedGADShapes const &value) { m_Shape = value; }
std::vector<GeographicalCoordinates> &Polygon::getPointList() {
  return m_PointList;
}
void Polygon::setPointList(std::vector<GeographicalCoordinates> const &value) {
  m_PointList = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org