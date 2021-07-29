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
 * ScpDomainRoutingInfoNotification.h
 *
 * SCP Domain Routing Information Notification
 */

#ifndef ScpDomainRoutingInfoNotification_H_
#define ScpDomainRoutingInfoNotification_H_

#include "ScpDomainRoutingInformation.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// SCP Domain Routing Information Notification
/// </summary>
class ScpDomainRoutingInfoNotification {
public:
  ScpDomainRoutingInfoNotification();
  virtual ~ScpDomainRoutingInfoNotification();

  void validate();

  /////////////////////////////////////////////
  /// ScpDomainRoutingInfoNotification members

  /// <summary>
  ///
  /// </summary>
  ScpDomainRoutingInformation getRoutingInfo() const;
  void setRoutingInfo(ScpDomainRoutingInformation const &value);
  /// <summary>
  ///
  /// </summary>
  bool isLocalInd() const;
  void setLocalInd(bool const value);
  bool localIndIsSet() const;
  void unsetLocalInd();

  friend void to_json(nlohmann::json &j,
                      const ScpDomainRoutingInfoNotification &o);
  friend void from_json(const nlohmann::json &j,
                        ScpDomainRoutingInfoNotification &o);

protected:
  ScpDomainRoutingInformation m_RoutingInfo;

  bool m_LocalInd;
  bool m_LocalIndIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ScpDomainRoutingInfoNotification_H_ */