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

#include "RuleReport.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

RuleReport::RuleReport() {
  m_ContVersIsSet = false;
  m_FailureCodeIsSet = false;
  m_FinUnitActIsSet = false;
  m_RanNasRelCausesIsSet = false;
  m_AltQosParamId = "";
  m_AltQosParamIdIsSet = false;
}

RuleReport::~RuleReport() {}

void RuleReport::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const RuleReport &o) {
  j = nlohmann::json();
  j["pccRuleIds"] = o.m_PccRuleIds;
  j["ruleStatus"] = o.m_RuleStatus;
  if (o.contVersIsSet() || !o.m_ContVers.empty())
    j["contVers"] = o.m_ContVers;
  if (o.failureCodeIsSet())
    j["failureCode"] = o.m_FailureCode;
  if (o.finUnitActIsSet())
    j["finUnitAct"] = o.m_FinUnitAct;
  if (o.ranNasRelCausesIsSet() || !o.m_RanNasRelCauses.empty())
    j["ranNasRelCauses"] = o.m_RanNasRelCauses;
  if (o.altQosParamIdIsSet())
    j["altQosParamId"] = o.m_AltQosParamId;
}

void from_json(const nlohmann::json &j, RuleReport &o) {
  j.at("pccRuleIds").get_to(o.m_PccRuleIds);
  j.at("ruleStatus").get_to(o.m_RuleStatus);
  if (j.find("contVers") != j.end()) {
    j.at("contVers").get_to(o.m_ContVers);
    o.m_ContVersIsSet = true;
  }
  if (j.find("failureCode") != j.end()) {
    j.at("failureCode").get_to(o.m_FailureCode);
    o.m_FailureCodeIsSet = true;
  }
  if (j.find("finUnitAct") != j.end()) {
    j.at("finUnitAct").get_to(o.m_FinUnitAct);
    o.m_FinUnitActIsSet = true;
  }
  if (j.find("ranNasRelCauses") != j.end()) {
    j.at("ranNasRelCauses").get_to(o.m_RanNasRelCauses);
    o.m_RanNasRelCausesIsSet = true;
  }
  if (j.find("altQosParamId") != j.end()) {
    j.at("altQosParamId").get_to(o.m_AltQosParamId);
    o.m_AltQosParamIdIsSet = true;
  }
}

std::vector<std::string> &RuleReport::getPccRuleIds() { return m_PccRuleIds; }
void RuleReport::setPccRuleIds(std::vector<std::string> const &value) {
  m_PccRuleIds = value;
}
RuleStatus RuleReport::getRuleStatus() const { return m_RuleStatus; }
void RuleReport::setRuleStatus(RuleStatus const &value) {
  m_RuleStatus = value;
}
std::vector<int32_t> &RuleReport::getContVers() { return m_ContVers; }
void RuleReport::setContVers(std::vector<int32_t> const value) {
  m_ContVers = value;
  m_ContVersIsSet = true;
}
bool RuleReport::contVersIsSet() const { return m_ContVersIsSet; }
void RuleReport::unsetContVers() { m_ContVersIsSet = false; }
FailureCode RuleReport::getFailureCode() const { return m_FailureCode; }
void RuleReport::setFailureCode(FailureCode const &value) {
  m_FailureCode = value;
  m_FailureCodeIsSet = true;
}
bool RuleReport::failureCodeIsSet() const { return m_FailureCodeIsSet; }
void RuleReport::unsetFailureCode() { m_FailureCodeIsSet = false; }
FinalUnitAction RuleReport::getFinUnitAct() const { return m_FinUnitAct; }
void RuleReport::setFinUnitAct(FinalUnitAction const &value) {
  m_FinUnitAct = value;
  m_FinUnitActIsSet = true;
}
bool RuleReport::finUnitActIsSet() const { return m_FinUnitActIsSet; }
void RuleReport::unsetFinUnitAct() { m_FinUnitActIsSet = false; }
std::vector<RanNasRelCause> &RuleReport::getRanNasRelCauses() {
  return m_RanNasRelCauses;
}
void RuleReport::setRanNasRelCauses(std::vector<RanNasRelCause> const &value) {
  m_RanNasRelCauses = value;
  m_RanNasRelCausesIsSet = true;
}
bool RuleReport::ranNasRelCausesIsSet() const { return m_RanNasRelCausesIsSet; }
void RuleReport::unsetRanNasRelCauses() { m_RanNasRelCausesIsSet = false; }
std::string RuleReport::getAltQosParamId() const { return m_AltQosParamId; }
void RuleReport::setAltQosParamId(std::string const &value) {
  m_AltQosParamId = value;
  m_AltQosParamIdIsSet = true;
}
bool RuleReport::altQosParamIdIsSet() const { return m_AltQosParamIdIsSet; }
void RuleReport::unsetAltQosParamId() { m_AltQosParamIdIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
