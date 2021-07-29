/**
 * Namf_Communication
 * AMF Communication Service © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "UeContextCreateError.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

UeContextCreateError::UeContextCreateError() {
  m_NgapCauseIsSet = false;
  m_TargetToSourceFailureDataIsSet = false;
}

UeContextCreateError::~UeContextCreateError() {}

void UeContextCreateError::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const UeContextCreateError &o) {
  j = nlohmann::json();
  j["error"] = o.m_Error;
  if (o.ngapCauseIsSet())
    j["ngapCause"] = o.m_NgapCause;
  if (o.targetToSourceFailureDataIsSet())
    j["targetToSourceFailureData"] = o.m_TargetToSourceFailureData;
}

void from_json(const nlohmann::json &j, UeContextCreateError &o) {
  j.at("error").get_to(o.m_Error);
  if (j.find("ngapCause") != j.end()) {
    j.at("ngapCause").get_to(o.m_NgapCause);
    o.m_NgapCauseIsSet = true;
  }
  if (j.find("targetToSourceFailureData") != j.end()) {
    j.at("targetToSourceFailureData").get_to(o.m_TargetToSourceFailureData);
    o.m_TargetToSourceFailureDataIsSet = true;
  }
}

ProblemDetails UeContextCreateError::getError() const { return m_Error; }
void UeContextCreateError::setError(ProblemDetails const &value) {
  m_Error = value;
}
NgApCause UeContextCreateError::getNgapCause() const { return m_NgapCause; }
void UeContextCreateError::setNgapCause(NgApCause const &value) {
  m_NgapCause = value;
  m_NgapCauseIsSet = true;
}
bool UeContextCreateError::ngapCauseIsSet() const { return m_NgapCauseIsSet; }
void UeContextCreateError::unsetNgapCause() { m_NgapCauseIsSet = false; }
N2InfoContent UeContextCreateError::getTargetToSourceFailureData() const {
  return m_TargetToSourceFailureData;
}
void UeContextCreateError::setTargetToSourceFailureData(
    N2InfoContent const &value) {
  m_TargetToSourceFailureData = value;
  m_TargetToSourceFailureDataIsSet = true;
}
bool UeContextCreateError::targetToSourceFailureDataIsSet() const {
  return m_TargetToSourceFailureDataIsSet;
}
void UeContextCreateError::unsetTargetToSourceFailureData() {
  m_TargetToSourceFailureDataIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
