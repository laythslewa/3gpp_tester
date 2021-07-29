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
 * UeInitiatedResourceRequest.h
 *
 * Indicates that a UE requests specific QoS handling for the selected SDF.
 */

#ifndef UeInitiatedResourceRequest_H_
#define UeInitiatedResourceRequest_H_

#include "PacketFilterInfo.h"
#include "RequestedQos.h"
#include "RuleOperation.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Indicates that a UE requests specific QoS handling for the selected SDF.
/// </summary>
class UeInitiatedResourceRequest {
public:
  UeInitiatedResourceRequest();
  virtual ~UeInitiatedResourceRequest();

  void validate();

  /////////////////////////////////////////////
  /// UeInitiatedResourceRequest members

  /// <summary>
  ///
  /// </summary>
  std::string getPccRuleId() const;
  void setPccRuleId(std::string const &value);
  bool pccRuleIdIsSet() const;
  void unsetPccRuleId();
  /// <summary>
  ///
  /// </summary>
  RuleOperation getRuleOp() const;
  void setRuleOp(RuleOperation const &value);
  /// <summary>
  ///
  /// </summary>
  int32_t getPrecedence() const;
  void setPrecedence(int32_t const value);
  bool precedenceIsSet() const;
  void unsetPrecedence();
  /// <summary>
  ///
  /// </summary>
  std::vector<PacketFilterInfo> &getPackFiltInfo();
  void setPackFiltInfo(std::vector<PacketFilterInfo> const &value);
  /// <summary>
  ///
  /// </summary>
  RequestedQos getReqQos() const;
  void setReqQos(RequestedQos const &value);
  bool reqQosIsSet() const;
  void unsetReqQos();

  friend void to_json(nlohmann::json &j, const UeInitiatedResourceRequest &o);
  friend void from_json(const nlohmann::json &j, UeInitiatedResourceRequest &o);

protected:
  std::string m_PccRuleId;
  bool m_PccRuleIdIsSet;
  RuleOperation m_RuleOp;

  int32_t m_Precedence;
  bool m_PrecedenceIsSet;
  std::vector<PacketFilterInfo> m_PackFiltInfo;

  RequestedQos m_ReqQos;
  bool m_ReqQosIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* UeInitiatedResourceRequest_H_ */