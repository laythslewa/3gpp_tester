/**
 * Npcf_EventExposure
 * PCF Event Exposure Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * IpFlowInfo.h
 *
 * Identifies an UL/DL IP flow.
 */

#ifndef IpFlowInfo_H_
#define IpFlowInfo_H_

#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Identifies an UL/DL IP flow.
/// </summary>
class IpFlowInfo {
public:
  IpFlowInfo();
  virtual ~IpFlowInfo();

  void validate();

  /////////////////////////////////////////////
  /// IpFlowInfo members

  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getIpFlows();
  void setIpFlows(std::vector<std::string> const &value);
  bool ipFlowsIsSet() const;
  void unsetIpFlows();
  /// <summary>
  ///
  /// </summary>
  int32_t getFlowNumber() const;
  void setFlowNumber(int32_t const value);

  friend void to_json(nlohmann::json &j, const IpFlowInfo &o);
  friend void from_json(const nlohmann::json &j, IpFlowInfo &o);

protected:
  std::vector<std::string> m_IpFlows;
  bool m_IpFlowsIsSet;
  int32_t m_FlowNumber;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* IpFlowInfo_H_ */
