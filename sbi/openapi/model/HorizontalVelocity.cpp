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

#include "HorizontalVelocity.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

HorizontalVelocity::HorizontalVelocity() {
  m_HSpeed = 0.0f;
  m_Bearing = 0;
}

HorizontalVelocity::~HorizontalVelocity() {}

void HorizontalVelocity::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const HorizontalVelocity &o) {
  j = nlohmann::json();
  j["hSpeed"] = o.m_HSpeed;
  j["bearing"] = o.m_Bearing;
}

void from_json(const nlohmann::json &j, HorizontalVelocity &o) {
  j.at("hSpeed").get_to(o.m_HSpeed);
  j.at("bearing").get_to(o.m_Bearing);
}

float HorizontalVelocity::getHSpeed() const { return m_HSpeed; }
void HorizontalVelocity::setHSpeed(float const value) { m_HSpeed = value; }
int32_t HorizontalVelocity::getBearing() const { return m_Bearing; }
void HorizontalVelocity::setBearing(int32_t const value) { m_Bearing = value; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
