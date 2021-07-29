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
/*
 * BdtPolicy.h
 *
 * Represents an Individual BDT policy resource.
 */

#ifndef BdtPolicy_H_
#define BdtPolicy_H_

#include "BdtPolicyData.h"
#include "BdtReqData.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents an Individual BDT policy resource.
/// </summary>
class BdtPolicy {
public:
  BdtPolicy();
  virtual ~BdtPolicy();

  void validate();

  /////////////////////////////////////////////
  /// BdtPolicy members

  /// <summary>
  ///
  /// </summary>
  BdtPolicyData getBdtPolData() const;
  void setBdtPolData(BdtPolicyData const &value);
  bool bdtPolDataIsSet() const;
  void unsetBdtPolData();
  /// <summary>
  ///
  /// </summary>
  BdtReqData getBdtReqData() const;
  void setBdtReqData(BdtReqData const &value);
  bool bdtReqDataIsSet() const;
  void unsetBdtReqData();

  friend void to_json(nlohmann::json &j, const BdtPolicy &o);
  friend void from_json(const nlohmann::json &j, BdtPolicy &o);

protected:
  BdtPolicyData m_BdtPolData;
  bool m_BdtPolDataIsSet;
  BdtReqData m_BdtReqData;
  bool m_BdtReqDataIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* BdtPolicy_H_ */