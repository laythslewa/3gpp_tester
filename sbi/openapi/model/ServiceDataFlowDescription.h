/**
 * M5_NetworkAssistance
 * 5GMS AF M5 Network Assistance API © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ServiceDataFlowDescription.h
 *
 *
 */

#ifndef ServiceDataFlowDescription_H_
#define ServiceDataFlowDescription_H_

#include "IpPacketFilterSet.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class ServiceDataFlowDescription {
public:
  ServiceDataFlowDescription();
  virtual ~ServiceDataFlowDescription();

  void validate();

  /////////////////////////////////////////////
  /// ServiceDataFlowDescription members

  /// <summary>
  ///
  /// </summary>
  IpPacketFilterSet getFlowDescription() const;
  void setFlowDescription(IpPacketFilterSet const &value);
  bool flowDescriptionIsSet() const;
  void unsetFlowDescription();
  /// <summary>
  ///
  /// </summary>
  std::string getDomainName() const;
  void setDomainName(std::string const &value);
  bool domainNameIsSet() const;
  void unsetDomainName();

  friend void to_json(nlohmann::json &j, const ServiceDataFlowDescription &o);
  friend void from_json(const nlohmann::json &j, ServiceDataFlowDescription &o);

protected:
  IpPacketFilterSet m_FlowDescription;
  bool m_FlowDescriptionIsSet;
  std::string m_DomainName;
  bool m_DomainNameIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ServiceDataFlowDescription_H_ */