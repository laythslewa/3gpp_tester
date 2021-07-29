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

#include "BdtPolicy.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

BdtPolicy::BdtPolicy() {
  m_BdtPolDataIsSet = false;
  m_BdtReqDataIsSet = false;
}

BdtPolicy::~BdtPolicy() {}

void BdtPolicy::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const BdtPolicy &o) {
  j = nlohmann::json();
  if (o.bdtPolDataIsSet())
    j["bdtPolData"] = o.m_BdtPolData;
  if (o.bdtReqDataIsSet())
    j["bdtReqData"] = o.m_BdtReqData;
}

void from_json(const nlohmann::json &j, BdtPolicy &o) {
  if (j.find("bdtPolData") != j.end()) {
    j.at("bdtPolData").get_to(o.m_BdtPolData);
    o.m_BdtPolDataIsSet = true;
  }
  if (j.find("bdtReqData") != j.end()) {
    j.at("bdtReqData").get_to(o.m_BdtReqData);
    o.m_BdtReqDataIsSet = true;
  }
}

BdtPolicyData BdtPolicy::getBdtPolData() const { return m_BdtPolData; }
void BdtPolicy::setBdtPolData(BdtPolicyData const &value) {
  m_BdtPolData = value;
  m_BdtPolDataIsSet = true;
}
bool BdtPolicy::bdtPolDataIsSet() const { return m_BdtPolDataIsSet; }
void BdtPolicy::unsetBdtPolData() { m_BdtPolDataIsSet = false; }
BdtReqData BdtPolicy::getBdtReqData() const { return m_BdtReqData; }
void BdtPolicy::setBdtReqData(BdtReqData const &value) {
  m_BdtReqData = value;
  m_BdtReqDataIsSet = true;
}
bool BdtPolicy::bdtReqDataIsSet() const { return m_BdtReqDataIsSet; }
void BdtPolicy::unsetBdtReqData() { m_BdtReqDataIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
