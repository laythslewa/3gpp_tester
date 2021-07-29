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

#include "CagAckData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

CagAckData::CagAckData() { m_ProvisioningTime = ""; }

CagAckData::~CagAckData() {}

void CagAckData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const CagAckData &o) {
  j = nlohmann::json();
  j["provisioningTime"] = o.m_ProvisioningTime;
  j["ueUpdateStatus"] = o.m_UeUpdateStatus;
}

void from_json(const nlohmann::json &j, CagAckData &o) {
  j.at("provisioningTime").get_to(o.m_ProvisioningTime);
  j.at("ueUpdateStatus").get_to(o.m_UeUpdateStatus);
}

std::string CagAckData::getProvisioningTime() const {
  return m_ProvisioningTime;
}
void CagAckData::setProvisioningTime(std::string const &value) {
  m_ProvisioningTime = value;
}
UeUpdateStatus CagAckData::getUeUpdateStatus() const {
  return m_UeUpdateStatus;
}
void CagAckData::setUeUpdateStatus(UeUpdateStatus const &value) {
  m_UeUpdateStatus = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
