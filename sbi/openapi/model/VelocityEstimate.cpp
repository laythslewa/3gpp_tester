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

#include "VelocityEstimate.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

VelocityEstimate::VelocityEstimate() {
  m_HSpeed = 0.0f;
  m_Bearing = 0;
  m_VSpeed = 0.0f;
  m_HUncertainty = 0.0f;
  m_VUncertainty = 0.0f;
}

VelocityEstimate::~VelocityEstimate() {}

void VelocityEstimate::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const VelocityEstimate &o) {
  j = nlohmann::json();
  j["hSpeed"] = o.m_HSpeed;
  j["bearing"] = o.m_Bearing;
  j["vSpeed"] = o.m_VSpeed;
  j["vDirection"] = o.m_VDirection;
  j["hUncertainty"] = o.m_HUncertainty;
  j["vUncertainty"] = o.m_VUncertainty;
}

void from_json(const nlohmann::json &j, VelocityEstimate &o) {
  j.at("hSpeed").get_to(o.m_HSpeed);
  j.at("bearing").get_to(o.m_Bearing);
  j.at("vSpeed").get_to(o.m_VSpeed);
  j.at("vDirection").get_to(o.m_VDirection);
  j.at("hUncertainty").get_to(o.m_HUncertainty);
  j.at("vUncertainty").get_to(o.m_VUncertainty);
}

float VelocityEstimate::getHSpeed() const { return m_HSpeed; }
void VelocityEstimate::setHSpeed(float const value) { m_HSpeed = value; }
int32_t VelocityEstimate::getBearing() const { return m_Bearing; }
void VelocityEstimate::setBearing(int32_t const value) { m_Bearing = value; }
float VelocityEstimate::getVSpeed() const { return m_VSpeed; }
void VelocityEstimate::setVSpeed(float const value) { m_VSpeed = value; }
VerticalDirection VelocityEstimate::getVDirection() const {
  return m_VDirection;
}
void VelocityEstimate::setVDirection(VerticalDirection const &value) {
  m_VDirection = value;
}
float VelocityEstimate::getHUncertainty() const { return m_HUncertainty; }
void VelocityEstimate::setHUncertainty(float const value) {
  m_HUncertainty = value;
}
float VelocityEstimate::getVUncertainty() const { return m_VUncertainty; }
void VelocityEstimate::setVUncertainty(float const value) {
  m_VUncertainty = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org