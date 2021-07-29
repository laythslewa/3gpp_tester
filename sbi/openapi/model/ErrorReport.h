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
 * ErrorReport.h
 *
 * Contains the rule error reports.
 */

#ifndef ErrorReport_H_
#define ErrorReport_H_

#include "InvalidParam.h"
#include "PolicyDecisionFailureCode.h"
#include "ProblemDetails.h"
#include "RuleReport.h"
#include "SessionRuleReport.h"
#include <nlohmann/json.hpp>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Contains the rule error reports.
/// </summary>
class ErrorReport {
public:
  ErrorReport();
  virtual ~ErrorReport();

  void validate();

  /////////////////////////////////////////////
  /// ErrorReport members

  /// <summary>
  ///
  /// </summary>
  ProblemDetails getError() const;
  void setError(ProblemDetails const &value);
  bool errorIsSet() const;
  void unsetError();
  /// <summary>
  /// Used to report the PCC rule failure.
  /// </summary>
  std::vector<RuleReport> &getRuleReports();
  void setRuleReports(std::vector<RuleReport> const &value);
  bool ruleReportsIsSet() const;
  void unsetRuleReports();
  /// <summary>
  /// Used to report the session rule failure.
  /// </summary>
  std::vector<SessionRuleReport> &getSessRuleReports();
  void setSessRuleReports(std::vector<SessionRuleReport> const &value);
  bool sessRuleReportsIsSet() const;
  void unsetSessRuleReports();
  /// <summary>
  /// Used to report failure of the policy decision and/or condition data.
  /// </summary>
  std::vector<PolicyDecisionFailureCode> &getPolDecFailureReports();
  void
  setPolDecFailureReports(std::vector<PolicyDecisionFailureCode> const &value);
  bool polDecFailureReportsIsSet() const;
  void unsetPolDecFailureReports();
  /// <summary>
  /// Indicates the invalid parameters for the reported type(s) of the failed
  /// policy decision and/or condition data.
  /// </summary>
  std::vector<InvalidParam> &getInvalidPolicyDecs();
  void setInvalidPolicyDecs(std::vector<InvalidParam> const &value);
  bool invalidPolicyDecsIsSet() const;
  void unsetInvalidPolicyDecs();

  friend void to_json(nlohmann::json &j, const ErrorReport &o);
  friend void from_json(const nlohmann::json &j, ErrorReport &o);

protected:
  ProblemDetails m_Error;
  bool m_ErrorIsSet;
  std::vector<RuleReport> m_RuleReports;
  bool m_RuleReportsIsSet;
  std::vector<SessionRuleReport> m_SessRuleReports;
  bool m_SessRuleReportsIsSet;
  std::vector<PolicyDecisionFailureCode> m_PolDecFailureReports;
  bool m_PolDecFailureReportsIsSet;
  std::vector<InvalidParam> m_InvalidPolicyDecs;
  bool m_InvalidPolicyDecsIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ErrorReport_H_ */