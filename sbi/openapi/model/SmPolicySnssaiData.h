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
 * SmPolicySnssaiData.h
 *
 * Contains the SM policy data for a given subscriber and S-NSSAI.
 */

#ifndef SmPolicySnssaiData_H_
#define SmPolicySnssaiData_H_

#include "SmPolicyDnnData.h"
#include "Snssai.h"
#include <map>
#include <nlohmann/json.hpp>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Contains the SM policy data for a given subscriber and S-NSSAI.
/// </summary>
class SmPolicySnssaiData {
public:
  SmPolicySnssaiData();
  virtual ~SmPolicySnssaiData();

  void validate();

  /////////////////////////////////////////////
  /// SmPolicySnssaiData members

  /// <summary>
  ///
  /// </summary>
  Snssai getSnssai() const;
  void setSnssai(Snssai const &value);
  /// <summary>
  /// Session Management Policy data per DNN for all the DNNs of the indicated
  /// S-NSSAI. The key of the map is the DNN.
  /// </summary>
  std::map<std::string, SmPolicyDnnData> &getSmPolicyDnnData();
  void setSmPolicyDnnData(std::map<std::string, SmPolicyDnnData> const &value);
  bool smPolicyDnnDataIsSet() const;
  void unsetSmPolicyDnnData();

  friend void to_json(nlohmann::json &j, const SmPolicySnssaiData &o);
  friend void from_json(const nlohmann::json &j, SmPolicySnssaiData &o);

protected:
  Snssai m_Snssai;

  std::map<std::string, SmPolicyDnnData> m_SmPolicyDnnData;
  bool m_SmPolicyDnnDataIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* SmPolicySnssaiData_H_ */