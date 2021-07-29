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

#include "UeRegStatusUpdateRspData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

UeRegStatusUpdateRspData::UeRegStatusUpdateRspData() {
  m_RegStatusTransferComplete = false;
}

UeRegStatusUpdateRspData::~UeRegStatusUpdateRspData() {}

void UeRegStatusUpdateRspData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const UeRegStatusUpdateRspData &o) {
  j = nlohmann::json();
  j["regStatusTransferComplete"] = o.m_RegStatusTransferComplete;
}

void from_json(const nlohmann::json &j, UeRegStatusUpdateRspData &o) {
  j.at("regStatusTransferComplete").get_to(o.m_RegStatusTransferComplete);
}

bool UeRegStatusUpdateRspData::isRegStatusTransferComplete() const {
  return m_RegStatusTransferComplete;
}
void UeRegStatusUpdateRspData::setRegStatusTransferComplete(bool const value) {
  m_RegStatusTransferComplete = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
