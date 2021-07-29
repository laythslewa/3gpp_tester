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

#include "UncertaintyEllipsoid.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

UncertaintyEllipsoid::UncertaintyEllipsoid() {
  m_SemiMajor = 0.0f;
  m_SemiMinor = 0.0f;
  m_Vertical = 0.0f;
  m_OrientationMajor = 0;
}

UncertaintyEllipsoid::~UncertaintyEllipsoid() {}

void UncertaintyEllipsoid::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const UncertaintyEllipsoid &o) {
  j = nlohmann::json();
  j["semiMajor"] = o.m_SemiMajor;
  j["semiMinor"] = o.m_SemiMinor;
  j["vertical"] = o.m_Vertical;
  j["orientationMajor"] = o.m_OrientationMajor;
}

void from_json(const nlohmann::json &j, UncertaintyEllipsoid &o) {
  j.at("semiMajor").get_to(o.m_SemiMajor);
  j.at("semiMinor").get_to(o.m_SemiMinor);
  j.at("vertical").get_to(o.m_Vertical);
  j.at("orientationMajor").get_to(o.m_OrientationMajor);
}

float UncertaintyEllipsoid::getSemiMajor() const { return m_SemiMajor; }
void UncertaintyEllipsoid::setSemiMajor(float const value) {
  m_SemiMajor = value;
}
float UncertaintyEllipsoid::getSemiMinor() const { return m_SemiMinor; }
void UncertaintyEllipsoid::setSemiMinor(float const value) {
  m_SemiMinor = value;
}
float UncertaintyEllipsoid::getVertical() const { return m_Vertical; }
void UncertaintyEllipsoid::setVertical(float const value) {
  m_Vertical = value;
}
int32_t UncertaintyEllipsoid::getOrientationMajor() const {
  return m_OrientationMajor;
}
void UncertaintyEllipsoid::setOrientationMajor(int32_t const value) {
  m_OrientationMajor = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
