/**
 * Nnwdaf_EventsSubscription
 * Nnwdaf_EventsSubscription Service API. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * NotificationMethod_2.h
 *
 * Possible values are - PERIODIC - ONE_TIME - ON_EVENT_DETECTION
 */

#ifndef NotificationMethod_2_H_
#define NotificationMethod_2_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Possible values are - PERIODIC - ONE_TIME - ON_EVENT_DETECTION
/// </summary>
class NotificationMethod_2 {
public:
  NotificationMethod_2();
  virtual ~NotificationMethod_2();

  void validate();

  /////////////////////////////////////////////
  /// NotificationMethod_2 members

  friend void to_json(nlohmann::json &j, const NotificationMethod_2 &o);
  friend void from_json(const nlohmann::json &j, NotificationMethod_2 &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* NotificationMethod_2_H_ */
