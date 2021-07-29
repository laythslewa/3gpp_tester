/**
 * 3gpp-lpi-pp
 * API for Location Privacy Indication Parameters Provisioning. © 2021, 3GPP
 * Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights
 * reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "Lpi.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

Lpi::Lpi() { m_ValidTimePeriodIsSet = false; }

Lpi::~Lpi() {}

void Lpi::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const Lpi &o) {
  j = nlohmann::json();
  j["locationPrivacyInd"] = o.m_LocationPrivacyInd;
  if (o.validTimePeriodIsSet())
    j["validTimePeriod"] = o.m_ValidTimePeriod;
}

void from_json(const nlohmann::json &j, Lpi &o) {
  j.at("locationPrivacyInd").get_to(o.m_LocationPrivacyInd);
  if (j.find("validTimePeriod") != j.end()) {
    j.at("validTimePeriod").get_to(o.m_ValidTimePeriod);
    o.m_ValidTimePeriodIsSet = true;
  }
}

LocationPrivacyInd Lpi::getLocationPrivacyInd() const {
  return m_LocationPrivacyInd;
}
void Lpi::setLocationPrivacyInd(LocationPrivacyInd const &value) {
  m_LocationPrivacyInd = value;
}
ValidTimePeriod Lpi::getValidTimePeriod() const { return m_ValidTimePeriod; }
void Lpi::setValidTimePeriod(ValidTimePeriod const &value) {
  m_ValidTimePeriod = value;
  m_ValidTimePeriodIsSet = true;
}
bool Lpi::validTimePeriodIsSet() const { return m_ValidTimePeriodIsSet; }
void Lpi::unsetValidTimePeriod() { m_ValidTimePeriodIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org