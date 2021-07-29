/**
 * NRF NFDiscovery Service
 * NRF NFDiscovery Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
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
 * ScpDomainRoutingInformation.h
 *
 * SCP Domain Routing Information
 */

#ifndef ScpDomainRoutingInformation_H_
#define ScpDomainRoutingInformation_H_

#include "ScpDomainConnectivity.h"
#include <map>
#include <nlohmann/json.hpp>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// SCP Domain Routing Information
/// </summary>
class ScpDomainRoutingInformation {
public:
  ScpDomainRoutingInformation();
  virtual ~ScpDomainRoutingInformation();

  void validate();

  /////////////////////////////////////////////
  /// ScpDomainRoutingInformation members

  /// <summary>
  /// This IE shall contain map of SCP domain interconnection information, where
  /// the key of the map is a SCP domain. The value of each entry shall be the
  /// interconnectivity information of the the SCP domain indicated by the key.
  /// An empty map indicates that there is no SCP domain currently registered in
  /// the NRF.
  /// </summary>
  std::map<std::string, ScpDomainConnectivity> &getScpDomainList();
  void
  setScpDomainList(std::map<std::string, ScpDomainConnectivity> const &value);

  friend void to_json(nlohmann::json &j, const ScpDomainRoutingInformation &o);
  friend void from_json(const nlohmann::json &j,
                        ScpDomainRoutingInformation &o);

protected:
  std::map<std::string, ScpDomainConnectivity> m_ScpDomainList;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ScpDomainRoutingInformation_H_ */