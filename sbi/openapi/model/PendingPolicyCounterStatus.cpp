/**
 * Nchf_SpendingLimitControl
 * Nchf Spending Limit Control Service. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "PendingPolicyCounterStatus.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

PendingPolicyCounterStatus::PendingPolicyCounterStatus() {
  m_PolicyCounterStatus = "";
  m_ActivationTime = "";
}

PendingPolicyCounterStatus::~PendingPolicyCounterStatus() {}

void PendingPolicyCounterStatus::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const PendingPolicyCounterStatus &o) {
  j = nlohmann::json();
  j["policyCounterStatus"] = o.m_PolicyCounterStatus;
  j["activationTime"] = o.m_ActivationTime;
}

void from_json(const nlohmann::json &j, PendingPolicyCounterStatus &o) {
  j.at("policyCounterStatus").get_to(o.m_PolicyCounterStatus);
  j.at("activationTime").get_to(o.m_ActivationTime);
}

std::string PendingPolicyCounterStatus::getPolicyCounterStatus() const {
  return m_PolicyCounterStatus;
}
void PendingPolicyCounterStatus::setPolicyCounterStatus(
    std::string const &value) {
  m_PolicyCounterStatus = value;
}
std::string PendingPolicyCounterStatus::getActivationTime() const {
  return m_ActivationTime;
}
void PendingPolicyCounterStatus::setActivationTime(std::string const &value) {
  m_ActivationTime = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org