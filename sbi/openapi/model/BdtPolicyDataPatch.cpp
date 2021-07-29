/**
 * Npcf_BDTPolicyControl Service API
 * PCF BDT Policy Control Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "BdtPolicyDataPatch.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

BdtPolicyDataPatch::BdtPolicyDataPatch() { m_SelTransPolicyId = 0; }

BdtPolicyDataPatch::~BdtPolicyDataPatch() {}

void BdtPolicyDataPatch::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const BdtPolicyDataPatch &o) {
  j = nlohmann::json();
  j["selTransPolicyId"] = o.m_SelTransPolicyId;
}

void from_json(const nlohmann::json &j, BdtPolicyDataPatch &o) {
  j.at("selTransPolicyId").get_to(o.m_SelTransPolicyId);
}

int32_t BdtPolicyDataPatch::getSelTransPolicyId() const {
  return m_SelTransPolicyId;
}
void BdtPolicyDataPatch::setSelTransPolicyId(int32_t const value) {
  m_SelTransPolicyId = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
