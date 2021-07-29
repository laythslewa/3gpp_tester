/**
 * Npcf_SMPolicyControl API
 * Session Management Policy Control Service © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ErrorReport.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ErrorReport::ErrorReport() {
  m_ErrorIsSet = false;
  m_RuleReportsIsSet = false;
  m_SessRuleReportsIsSet = false;
  m_PolDecFailureReportsIsSet = false;
  m_InvalidPolicyDecsIsSet = false;
}

ErrorReport::~ErrorReport() {}

void ErrorReport::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const ErrorReport &o) {
  j = nlohmann::json();
  if (o.errorIsSet())
    j["error"] = o.m_Error;
  if (o.ruleReportsIsSet() || !o.m_RuleReports.empty())
    j["ruleReports"] = o.m_RuleReports;
  if (o.sessRuleReportsIsSet() || !o.m_SessRuleReports.empty())
    j["sessRuleReports"] = o.m_SessRuleReports;
  if (o.polDecFailureReportsIsSet() || !o.m_PolDecFailureReports.empty())
    j["polDecFailureReports"] = o.m_PolDecFailureReports;
  if (o.invalidPolicyDecsIsSet() || !o.m_InvalidPolicyDecs.empty())
    j["invalidPolicyDecs"] = o.m_InvalidPolicyDecs;
}

void from_json(const nlohmann::json &j, ErrorReport &o) {
  if (j.find("error") != j.end()) {
    j.at("error").get_to(o.m_Error);
    o.m_ErrorIsSet = true;
  }
  if (j.find("ruleReports") != j.end()) {
    j.at("ruleReports").get_to(o.m_RuleReports);
    o.m_RuleReportsIsSet = true;
  }
  if (j.find("sessRuleReports") != j.end()) {
    j.at("sessRuleReports").get_to(o.m_SessRuleReports);
    o.m_SessRuleReportsIsSet = true;
  }
  if (j.find("polDecFailureReports") != j.end()) {
    j.at("polDecFailureReports").get_to(o.m_PolDecFailureReports);
    o.m_PolDecFailureReportsIsSet = true;
  }
  if (j.find("invalidPolicyDecs") != j.end()) {
    j.at("invalidPolicyDecs").get_to(o.m_InvalidPolicyDecs);
    o.m_InvalidPolicyDecsIsSet = true;
  }
}

ProblemDetails ErrorReport::getError() const { return m_Error; }
void ErrorReport::setError(ProblemDetails const &value) {
  m_Error = value;
  m_ErrorIsSet = true;
}
bool ErrorReport::errorIsSet() const { return m_ErrorIsSet; }
void ErrorReport::unsetError() { m_ErrorIsSet = false; }
std::vector<RuleReport> &ErrorReport::getRuleReports() { return m_RuleReports; }
void ErrorReport::setRuleReports(std::vector<RuleReport> const &value) {
  m_RuleReports = value;
  m_RuleReportsIsSet = true;
}
bool ErrorReport::ruleReportsIsSet() const { return m_RuleReportsIsSet; }
void ErrorReport::unsetRuleReports() { m_RuleReportsIsSet = false; }
std::vector<SessionRuleReport> &ErrorReport::getSessRuleReports() {
  return m_SessRuleReports;
}
void ErrorReport::setSessRuleReports(
    std::vector<SessionRuleReport> const &value) {
  m_SessRuleReports = value;
  m_SessRuleReportsIsSet = true;
}
bool ErrorReport::sessRuleReportsIsSet() const {
  return m_SessRuleReportsIsSet;
}
void ErrorReport::unsetSessRuleReports() { m_SessRuleReportsIsSet = false; }
std::vector<PolicyDecisionFailureCode> &ErrorReport::getPolDecFailureReports() {
  return m_PolDecFailureReports;
}
void ErrorReport::setPolDecFailureReports(
    std::vector<PolicyDecisionFailureCode> const &value) {
  m_PolDecFailureReports = value;
  m_PolDecFailureReportsIsSet = true;
}
bool ErrorReport::polDecFailureReportsIsSet() const {
  return m_PolDecFailureReportsIsSet;
}
void ErrorReport::unsetPolDecFailureReports() {
  m_PolDecFailureReportsIsSet = false;
}
std::vector<InvalidParam> &ErrorReport::getInvalidPolicyDecs() {
  return m_InvalidPolicyDecs;
}
void ErrorReport::setInvalidPolicyDecs(std::vector<InvalidParam> const &value) {
  m_InvalidPolicyDecs = value;
  m_InvalidPolicyDecsIsSet = true;
}
bool ErrorReport::invalidPolicyDecsIsSet() const {
  return m_InvalidPolicyDecsIsSet;
}
void ErrorReport::unsetInvalidPolicyDecs() { m_InvalidPolicyDecsIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
