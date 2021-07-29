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

#include "Local3dPointUncertaintyEllipsoid_allOf.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

Local3dPointUncertaintyEllipsoid_allOf::
    Local3dPointUncertaintyEllipsoid_allOf() {
  m_Confidence = 0;
}

Local3dPointUncertaintyEllipsoid_allOf::
    ~Local3dPointUncertaintyEllipsoid_allOf() {}

void Local3dPointUncertaintyEllipsoid_allOf::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j,
             const Local3dPointUncertaintyEllipsoid_allOf &o) {
  j = nlohmann::json();
  j["localOrigin"] = o.m_LocalOrigin;
  j["point"] = o.m_Point;
  j["uncertaintyEllipsoid"] = o.m_UncertaintyEllipsoid;
  j["confidence"] = o.m_Confidence;
}

void from_json(const nlohmann::json &j,
               Local3dPointUncertaintyEllipsoid_allOf &o) {
  j.at("localOrigin").get_to(o.m_LocalOrigin);
  j.at("point").get_to(o.m_Point);
  j.at("uncertaintyEllipsoid").get_to(o.m_UncertaintyEllipsoid);
  j.at("confidence").get_to(o.m_Confidence);
}

LocalOrigin Local3dPointUncertaintyEllipsoid_allOf::getLocalOrigin() const {
  return m_LocalOrigin;
}
void Local3dPointUncertaintyEllipsoid_allOf::setLocalOrigin(
    LocalOrigin const &value) {
  m_LocalOrigin = value;
}
RelativeCartesianLocation
Local3dPointUncertaintyEllipsoid_allOf::getPoint() const {
  return m_Point;
}
void Local3dPointUncertaintyEllipsoid_allOf::setPoint(
    RelativeCartesianLocation const &value) {
  m_Point = value;
}
UncertaintyEllipsoid
Local3dPointUncertaintyEllipsoid_allOf::getUncertaintyEllipsoid() const {
  return m_UncertaintyEllipsoid;
}
void Local3dPointUncertaintyEllipsoid_allOf::setUncertaintyEllipsoid(
    UncertaintyEllipsoid const &value) {
  m_UncertaintyEllipsoid = value;
}
int32_t Local3dPointUncertaintyEllipsoid_allOf::getConfidence() const {
  return m_Confidence;
}
void Local3dPointUncertaintyEllipsoid_allOf::setConfidence(
    int32_t const value) {
  m_Confidence = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
