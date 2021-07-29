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

#include "HorizontalWithVerticalVelocity.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

HorizontalWithVerticalVelocity::HorizontalWithVerticalVelocity() {
  m_HSpeed = 0.0f;
  m_Bearing = 0;
  m_VSpeed = 0.0f;
}

HorizontalWithVerticalVelocity::~HorizontalWithVerticalVelocity() {}

void HorizontalWithVerticalVelocity::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const HorizontalWithVerticalVelocity &o) {
  j = nlohmann::json();
  j["hSpeed"] = o.m_HSpeed;
  j["bearing"] = o.m_Bearing;
  j["vSpeed"] = o.m_VSpeed;
  j["vDirection"] = o.m_VDirection;
}

void from_json(const nlohmann::json &j, HorizontalWithVerticalVelocity &o) {
  j.at("hSpeed").get_to(o.m_HSpeed);
  j.at("bearing").get_to(o.m_Bearing);
  j.at("vSpeed").get_to(o.m_VSpeed);
  j.at("vDirection").get_to(o.m_VDirection);
}

float HorizontalWithVerticalVelocity::getHSpeed() const { return m_HSpeed; }
void HorizontalWithVerticalVelocity::setHSpeed(float const value) {
  m_HSpeed = value;
}
int32_t HorizontalWithVerticalVelocity::getBearing() const { return m_Bearing; }
void HorizontalWithVerticalVelocity::setBearing(int32_t const value) {
  m_Bearing = value;
}
float HorizontalWithVerticalVelocity::getVSpeed() const { return m_VSpeed; }
void HorizontalWithVerticalVelocity::setVSpeed(float const value) {
  m_VSpeed = value;
}
VerticalDirection HorizontalWithVerticalVelocity::getVDirection() const {
  return m_VDirection;
}
void HorizontalWithVerticalVelocity::setVDirection(
    VerticalDirection const &value) {
  m_VDirection = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org