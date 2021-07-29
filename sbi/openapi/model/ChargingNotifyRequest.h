/**
 * Nchf_ConvergedCharging
 * ConvergedCharging Service    © 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 3.0.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ChargingNotifyRequest.h
 *
 *
 */

#ifndef ChargingNotifyRequest_H_
#define ChargingNotifyRequest_H_

#include "NotificationType.h"
#include "ReauthorizationDetails.h"
#include <nlohmann/json.hpp>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class ChargingNotifyRequest {
public:
  ChargingNotifyRequest();
  virtual ~ChargingNotifyRequest();

  void validate();

  /////////////////////////////////////////////
  /// ChargingNotifyRequest members

  /// <summary>
  ///
  /// </summary>
  NotificationType getNotificationType() const;
  void setNotificationType(NotificationType const &value);
  /// <summary>
  ///
  /// </summary>
  std::vector<ReauthorizationDetails> &getReauthorizationDetails();
  void
  setReauthorizationDetails(std::vector<ReauthorizationDetails> const &value);
  bool reauthorizationDetailsIsSet() const;
  void unsetReauthorizationDetails();

  friend void to_json(nlohmann::json &j, const ChargingNotifyRequest &o);
  friend void from_json(const nlohmann::json &j, ChargingNotifyRequest &o);

protected:
  NotificationType m_NotificationType;

  std::vector<ReauthorizationDetails> m_ReauthorizationDetails;
  bool m_ReauthorizationDetailsIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ChargingNotifyRequest_H_ */