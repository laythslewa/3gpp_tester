/**
 * Npcf_PolicyAuthorization Service API
 * PCF Policy Authorization Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ResourcesAllocationInfo.h
 *
 * describes the status of the PCC rule(s) related to certain media components.
 */

#ifndef ResourcesAllocationInfo_H_
#define ResourcesAllocationInfo_H_

#include "Flows.h"
#include "MediaComponentResourcesStatus.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// describes the status of the PCC rule(s) related to certain media components.
/// </summary>
class ResourcesAllocationInfo {
public:
  ResourcesAllocationInfo();
  virtual ~ResourcesAllocationInfo();

  void validate();

  /////////////////////////////////////////////
  /// ResourcesAllocationInfo members

  /// <summary>
  ///
  /// </summary>
  MediaComponentResourcesStatus getMcResourcStatus() const;
  void setMcResourcStatus(MediaComponentResourcesStatus const &value);
  bool mcResourcStatusIsSet() const;
  void unsetMcResourcStatus();
  /// <summary>
  ///
  /// </summary>
  std::vector<Flows> &getFlows();
  void setFlows(std::vector<Flows> const &value);
  bool flowsIsSet() const;
  void unsetFlows();
  /// <summary>
  ///
  /// </summary>
  std::string getAltSerReq() const;
  void setAltSerReq(std::string const &value);
  bool altSerReqIsSet() const;
  void unsetAltSerReq();

  friend void to_json(nlohmann::json &j, const ResourcesAllocationInfo &o);
  friend void from_json(const nlohmann::json &j, ResourcesAllocationInfo &o);

protected:
  MediaComponentResourcesStatus m_McResourcStatus;
  bool m_McResourcStatusIsSet;
  std::vector<Flows> m_Flows;
  bool m_FlowsIsSet;
  std::string m_AltSerReq;
  bool m_AltSerReqIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ResourcesAllocationInfo_H_ */