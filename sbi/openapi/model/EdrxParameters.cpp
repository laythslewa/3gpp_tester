/**
 * Unified Data Repository Service API file for subscription data
 * Unified Data Repository Service (subscription data). The API version is
 * defined in 3GPP TS 29.504. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "EdrxParameters.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

EdrxParameters::EdrxParameters() { m_EdrxValue = ""; }

EdrxParameters::~EdrxParameters() {}

void EdrxParameters::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const EdrxParameters &o) {
  j = nlohmann::json();
  j["ratType"] = o.m_RatType;
  j["edrxValue"] = o.m_EdrxValue;
}

void from_json(const nlohmann::json &j, EdrxParameters &o) {
  j.at("ratType").get_to(o.m_RatType);
  j.at("edrxValue").get_to(o.m_EdrxValue);
}

RatType EdrxParameters::getRatType() const { return m_RatType; }
void EdrxParameters::setRatType(RatType const &value) { m_RatType = value; }
std::string EdrxParameters::getEdrxValue() const { return m_EdrxValue; }
void EdrxParameters::setEdrxValue(std::string const &value) {
  m_EdrxValue = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org