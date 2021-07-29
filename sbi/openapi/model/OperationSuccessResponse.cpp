/**
 * M5_NetworkAssistance
 * 5GMS AF M5 Network Assistance API © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "OperationSuccessResponse.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

OperationSuccessResponse::OperationSuccessResponse() {
  m_Success = false;
  m_Reason = "";
  m_ReasonIsSet = false;
}

OperationSuccessResponse::~OperationSuccessResponse() {}

void OperationSuccessResponse::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const OperationSuccessResponse &o) {
  j = nlohmann::json();
  j["success"] = o.m_Success;
  if (o.reasonIsSet())
    j["reason"] = o.m_Reason;
}

void from_json(const nlohmann::json &j, OperationSuccessResponse &o) {
  j.at("success").get_to(o.m_Success);
  if (j.find("reason") != j.end()) {
    j.at("reason").get_to(o.m_Reason);
    o.m_ReasonIsSet = true;
  }
}

bool OperationSuccessResponse::isSuccess() const { return m_Success; }
void OperationSuccessResponse::setSuccess(bool const value) {
  m_Success = value;
}
std::string OperationSuccessResponse::getReason() const { return m_Reason; }
void OperationSuccessResponse::setReason(std::string const &value) {
  m_Reason = value;
  m_ReasonIsSet = true;
}
bool OperationSuccessResponse::reasonIsSet() const { return m_ReasonIsSet; }
void OperationSuccessResponse::unsetReason() { m_ReasonIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org