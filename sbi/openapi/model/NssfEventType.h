/**
 * NSSF NSSAI Availability
 * NSSF NSSAI Availability Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * NssfEventType.h
 *
 * This contains the event for the subscription
 */

#ifndef NssfEventType_H_
#define NssfEventType_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// This contains the event for the subscription
/// </summary>
class NssfEventType {
public:
  NssfEventType();
  virtual ~NssfEventType();

  void validate();

  /////////////////////////////////////////////
  /// NssfEventType members

  friend void to_json(nlohmann::json &j, const NssfEventType &o);
  friend void from_json(const nlohmann::json &j, NssfEventType &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* NssfEventType_H_ */