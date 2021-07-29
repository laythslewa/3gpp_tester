/**
 * 3gpp-monitoring-event
 * API for Monitoring Event. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * InterfaceIndication.h
 *
 * Possible values are - EXPOSURE_FUNCTION: SCEF is used for the PDN connection
 * towards the SCS/AS. - PDN_GATEWAY: PDN gateway is used for the PDN connection
 * towards the SCS/AS.
 */

#ifndef InterfaceIndication_H_
#define InterfaceIndication_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Possible values are - EXPOSURE_FUNCTION: SCEF is used for the PDN connection
/// towards the SCS/AS. - PDN_GATEWAY: PDN gateway is used for the PDN
/// connection towards the SCS/AS.
/// </summary>
class InterfaceIndication {
public:
  InterfaceIndication();
  virtual ~InterfaceIndication();

  void validate();

  /////////////////////////////////////////////
  /// InterfaceIndication members

  friend void to_json(nlohmann::json &j, const InterfaceIndication &o);
  friend void from_json(const nlohmann::json &j, InterfaceIndication &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* InterfaceIndication_H_ */
