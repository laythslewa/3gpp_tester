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
 * SmPolicyDataPatch.h
 *
 * Contains the SM policy data for a given subscriber.
 */

#ifndef SmPolicyDataPatch_H_
#define SmPolicyDataPatch_H_

#include "SmPolicySnssaiDataPatch.h"
#include "UsageMonData.h"
#include <map>
#include <nlohmann/json.hpp>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Contains the SM policy data for a given subscriber.
/// </summary>
class SmPolicyDataPatch {
public:
  SmPolicyDataPatch();
  virtual ~SmPolicyDataPatch();

  void validate();

  /////////////////////////////////////////////
  /// SmPolicyDataPatch members

  /// <summary>
  /// Contains the remaining allowed usage data associated with the subscriber.
  /// The value of the limit identifier is used as the key of the map.
  /// </summary>
  std::map<std::string, UsageMonData> &getUmData();
  void setUmData(std::map<std::string, UsageMonData> const &value);
  bool umDataIsSet() const;
  void unsetUmData();
  /// <summary>
  /// Modifiable Session Management Policy data per S-NSSAI for all the SNSSAIs
  /// of the subscriber. The key of the map is the S-NSSAI.
  /// </summary>
  std::map<std::string, SmPolicySnssaiDataPatch> &getSmPolicySnssaiData();
  void setSmPolicySnssaiData(
      std::map<std::string, SmPolicySnssaiDataPatch> const &value);
  bool smPolicySnssaiDataIsSet() const;
  void unsetSmPolicySnssaiData();

  friend void to_json(nlohmann::json &j, const SmPolicyDataPatch &o);
  friend void from_json(const nlohmann::json &j, SmPolicyDataPatch &o);

protected:
  std::map<std::string, UsageMonData> m_UmData;
  bool m_UmDataIsSet;
  std::map<std::string, SmPolicySnssaiDataPatch> m_SmPolicySnssaiData;
  bool m_SmPolicySnssaiDataIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* SmPolicyDataPatch_H_ */