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
 * BdtPolicyDataPatch.h
 *
 * A JSON Merge Patch body schema containing modification instruction to be
 * performed on the bdtPolData attribute of the BdtPolicy data structure to
 * select a transfer policy. Adds selTransPolicyId to BdtPolicyData data
 * structure.
 */

#ifndef BdtPolicyDataPatch_H_
#define BdtPolicyDataPatch_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// A JSON Merge Patch body schema containing modification instruction to be
/// performed on the bdtPolData attribute of the BdtPolicy data structure to
/// select a transfer policy. Adds selTransPolicyId to BdtPolicyData data
/// structure.
/// </summary>
class BdtPolicyDataPatch {
public:
  BdtPolicyDataPatch();
  virtual ~BdtPolicyDataPatch();

  void validate();

  /////////////////////////////////////////////
  /// BdtPolicyDataPatch members

  /// <summary>
  /// Contains an identity (i.e. transPolicyId value) of the selected transfer
  /// policy. If the BdtNotification_5G feature is supported value 0 indicates
  /// that no transfer policy is selected.
  /// </summary>
  int32_t getSelTransPolicyId() const;
  void setSelTransPolicyId(int32_t const value);

  friend void to_json(nlohmann::json &j, const BdtPolicyDataPatch &o);
  friend void from_json(const nlohmann::json &j, BdtPolicyDataPatch &o);

protected:
  int32_t m_SelTransPolicyId;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* BdtPolicyDataPatch_H_ */