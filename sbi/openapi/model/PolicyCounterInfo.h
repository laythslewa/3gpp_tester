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
/*
 * PolicyCounterInfo.h
 *
 * Represents the data structure presenting the policy counter status.
 */

#ifndef PolicyCounterInfo_H_
#define PolicyCounterInfo_H_

#include "PendingPolicyCounterStatus.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents the data structure presenting the policy counter status.
/// </summary>
class PolicyCounterInfo {
public:
  PolicyCounterInfo();
  virtual ~PolicyCounterInfo();

  void validate();

  /////////////////////////////////////////////
  /// PolicyCounterInfo members

  /// <summary>
  /// Identifies a policy counter.
  /// </summary>
  std::string getPolicyCounterId() const;
  void setPolicyCounterId(std::string const &value);
  /// <summary>
  /// Identifies the policy counter status applicable for a specific policy
  /// counter identified by the policyCounterId. The values (e.g. valid, invalid
  /// or any other status) are not specified. The interpretation and actions
  /// related to the defined values are out of scope of 3GPP.
  /// </summary>
  std::string getCurrentStatus() const;
  void setCurrentStatus(std::string const &value);
  /// <summary>
  /// Provides the pending policy counter status.
  /// </summary>
  std::vector<PendingPolicyCounterStatus> &getPenPolCounterStatuses();
  void setPenPolCounterStatuses(
      std::vector<PendingPolicyCounterStatus> const &value);
  bool penPolCounterStatusesIsSet() const;
  void unsetPenPolCounterStatuses();

  friend void to_json(nlohmann::json &j, const PolicyCounterInfo &o);
  friend void from_json(const nlohmann::json &j, PolicyCounterInfo &o);

protected:
  std::string m_PolicyCounterId;

  std::string m_CurrentStatus;

  std::vector<PendingPolicyCounterStatus> m_PenPolCounterStatuses;
  bool m_PenPolCounterStatusesIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* PolicyCounterInfo_H_ */