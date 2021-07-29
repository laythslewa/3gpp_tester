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

#include "UeContextInAmfData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

UeContextInAmfData::UeContextInAmfData() { m_EpsInterworkingInfoIsSet = false; }

UeContextInAmfData::~UeContextInAmfData() {}

void UeContextInAmfData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const UeContextInAmfData &o) {
  j = nlohmann::json();
  if (o.epsInterworkingInfoIsSet())
    j["epsInterworkingInfo"] = o.m_EpsInterworkingInfo;
}

void from_json(const nlohmann::json &j, UeContextInAmfData &o) {
  if (j.find("epsInterworkingInfo") != j.end()) {
    j.at("epsInterworkingInfo").get_to(o.m_EpsInterworkingInfo);
    o.m_EpsInterworkingInfoIsSet = true;
  }
}

EpsInterworkingInfo UeContextInAmfData::getEpsInterworkingInfo() const {
  return m_EpsInterworkingInfo;
}
void UeContextInAmfData::setEpsInterworkingInfo(
    EpsInterworkingInfo const &value) {
  m_EpsInterworkingInfo = value;
  m_EpsInterworkingInfoIsSet = true;
}
bool UeContextInAmfData::epsInterworkingInfoIsSet() const {
  return m_EpsInterworkingInfoIsSet;
}
void UeContextInAmfData::unsetEpsInterworkingInfo() {
  m_EpsInterworkingInfoIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
