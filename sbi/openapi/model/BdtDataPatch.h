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
/*
 * BdtDataPatch.h
 *
 * Contains the modified background data transfer data.
 */

#ifndef BdtDataPatch_H_
#define BdtDataPatch_H_

#include "BdtPolicyStatus.h"
#include "TransferPolicy.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Contains the modified background data transfer data.
/// </summary>
class BdtDataPatch {
public:
  BdtDataPatch();
  virtual ~BdtDataPatch();

  void validate();

  /////////////////////////////////////////////
  /// BdtDataPatch members

  /// <summary>
  ///
  /// </summary>
  TransferPolicy getTransPolicy() const;
  void setTransPolicy(TransferPolicy const &value);
  bool transPolicyIsSet() const;
  void unsetTransPolicy();
  /// <summary>
  ///
  /// </summary>
  BdtPolicyStatus getBdtpStatus() const;
  void setBdtpStatus(BdtPolicyStatus const &value);
  bool bdtpStatusIsSet() const;
  void unsetBdtpStatus();

  friend void to_json(nlohmann::json &j, const BdtDataPatch &o);
  friend void from_json(const nlohmann::json &j, BdtDataPatch &o);

protected:
  TransferPolicy m_TransPolicy;
  bool m_TransPolicyIsSet;
  BdtPolicyStatus m_BdtpStatus;
  bool m_BdtpStatusIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* BdtDataPatch_H_ */
