/**
 * Nsmsf_SMService Service API
 * SMSF SMService. © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI,
 * TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * SmsDeliveryStatus.h
 *
 * Represents the Status of an SMS delivery attempt.
 */

#ifndef SmsDeliveryStatus_H_
#define SmsDeliveryStatus_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents the Status of an SMS delivery attempt.
/// </summary>
class SmsDeliveryStatus {
public:
  SmsDeliveryStatus();
  virtual ~SmsDeliveryStatus();

  void validate();

  /////////////////////////////////////////////
  /// SmsDeliveryStatus members

  friend void to_json(nlohmann::json &j, const SmsDeliveryStatus &o);
  friend void from_json(const nlohmann::json &j, SmsDeliveryStatus &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* SmsDeliveryStatus_H_ */
