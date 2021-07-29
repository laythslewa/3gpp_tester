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
 * NotificationControlIndication.h
 *
 * Indicates that the notification of DDD Status is requested and/or that the
 * notification of DDN Failure is requested.
 */

#ifndef NotificationControlIndication_H_
#define NotificationControlIndication_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Indicates that the notification of DDD Status is requested and/or that the
/// notification of DDN Failure is requested.
/// </summary>
class NotificationControlIndication {
public:
  NotificationControlIndication();
  virtual ~NotificationControlIndication();

  void validate();

  /////////////////////////////////////////////
  /// NotificationControlIndication members

  friend void to_json(nlohmann::json &j,
                      const NotificationControlIndication &o);
  friend void from_json(const nlohmann::json &j,
                        NotificationControlIndication &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* NotificationControlIndication_H_ */