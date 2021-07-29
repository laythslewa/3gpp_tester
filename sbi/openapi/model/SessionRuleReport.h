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
/*
 * SessionRuleReport.h
 *
 * Represents reporting of the status of a session rule.
 */

#ifndef SessionRuleReport_H_
#define SessionRuleReport_H_

#include "PolicyDecisionFailureCode.h"
#include "RuleStatus.h"
#include "SessionRuleFailureCode.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents reporting of the status of a session rule.
/// </summary>
class SessionRuleReport {
public:
  SessionRuleReport();
  virtual ~SessionRuleReport();

  void validate();

  /////////////////////////////////////////////
  /// SessionRuleReport members

  /// <summary>
  /// Contains the identifier of the affected session rule(s).
  /// </summary>
  std::vector<std::string> &getRuleIds();
  void setRuleIds(std::vector<std::string> const &value);
  /// <summary>
  ///
  /// </summary>
  RuleStatus getRuleStatus() const;
  void setRuleStatus(RuleStatus const &value);
  /// <summary>
  ///
  /// </summary>
  SessionRuleFailureCode getSessRuleFailureCode() const;
  void setSessRuleFailureCode(SessionRuleFailureCode const &value);
  bool sessRuleFailureCodeIsSet() const;
  void unsetSessRuleFailureCode();
  /// <summary>
  /// Contains the type(s) of failed policy decision and/or condition data.
  /// </summary>
  std::vector<PolicyDecisionFailureCode> &getPolicyDecFailureReports();
  void setPolicyDecFailureReports(
      std::vector<PolicyDecisionFailureCode> const &value);
  bool policyDecFailureReportsIsSet() const;
  void unsetPolicyDecFailureReports();

  friend void to_json(nlohmann::json &j, const SessionRuleReport &o);
  friend void from_json(const nlohmann::json &j, SessionRuleReport &o);

protected:
  std::vector<std::string> m_RuleIds;

  RuleStatus m_RuleStatus;

  SessionRuleFailureCode m_SessRuleFailureCode;
  bool m_SessRuleFailureCodeIsSet;
  std::vector<PolicyDecisionFailureCode> m_PolicyDecFailureReports;
  bool m_PolicyDecFailureReportsIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* SessionRuleReport_H_ */