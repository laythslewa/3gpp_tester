/**
 * Unified Data Repository Service API file for policy data
 * The API version is defined in 3GPP TS 29.504 © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SmPolicyDnnDataPatch.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

SmPolicyDnnDataPatch::SmPolicyDnnDataPatch() {
  m_Dnn = "";
  m_BdtRefIdsIsSet = false;
}

SmPolicyDnnDataPatch::~SmPolicyDnnDataPatch() {}

void SmPolicyDnnDataPatch::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const SmPolicyDnnDataPatch &o) {
  j = nlohmann::json();
  j["dnn"] = o.m_Dnn;
  if (o.bdtRefIdsIsSet() || !o.m_BdtRefIds.empty())
    j["bdtRefIds"] = o.m_BdtRefIds;
}

void from_json(const nlohmann::json &j, SmPolicyDnnDataPatch &o) {
  j.at("dnn").get_to(o.m_Dnn);
  if (j.find("bdtRefIds") != j.end()) {
    j.at("bdtRefIds").get_to(o.m_BdtRefIds);
    o.m_BdtRefIdsIsSet = true;
  }
}

std::string SmPolicyDnnDataPatch::getDnn() const { return m_Dnn; }
void SmPolicyDnnDataPatch::setDnn(std::string const &value) { m_Dnn = value; }
std::map<std::string, std::string> &SmPolicyDnnDataPatch::getBdtRefIds() {
  return m_BdtRefIds;
}
void SmPolicyDnnDataPatch::setBdtRefIds(
    std::map<std::string, std::string> const &value) {
  m_BdtRefIds = value;
  m_BdtRefIdsIsSet = true;
}
bool SmPolicyDnnDataPatch::bdtRefIdsIsSet() const { return m_BdtRefIdsIsSet; }
void SmPolicyDnnDataPatch::unsetBdtRefIds() { m_BdtRefIdsIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
