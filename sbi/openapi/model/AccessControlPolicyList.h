/**
 * CAPIF_Events_API
 * API for event subscription management. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * AccessControlPolicyList.h
 *
 * Represents the access control policy list for a published service API.
 */

#ifndef AccessControlPolicyList_H_
#define AccessControlPolicyList_H_

#include "ApiInvokerPolicy.h"
#include <nlohmann/json.hpp>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents the access control policy list for a published service API.
/// </summary>
class AccessControlPolicyList {
public:
  AccessControlPolicyList();
  virtual ~AccessControlPolicyList();

  void validate();

  /////////////////////////////////////////////
  /// AccessControlPolicyList members

  /// <summary>
  /// Policy of each API invoker.
  /// </summary>
  std::vector<ApiInvokerPolicy> &getApiInvokerPolicies();
  void setApiInvokerPolicies(std::vector<ApiInvokerPolicy> const &value);
  bool apiInvokerPoliciesIsSet() const;
  void unsetApiInvokerPolicies();

  friend void to_json(nlohmann::json &j, const AccessControlPolicyList &o);
  friend void from_json(const nlohmann::json &j, AccessControlPolicyList &o);

protected:
  std::vector<ApiInvokerPolicy> m_ApiInvokerPolicies;
  bool m_ApiInvokerPoliciesIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AccessControlPolicyList_H_ */
