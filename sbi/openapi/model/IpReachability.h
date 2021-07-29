/**
 * NRF NFManagement Service
 * NRF NFManagement Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
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
 * IpReachability.h
 *
 * Indicates the type(s) of IP addresses reachable via an SCP
 */

#ifndef IpReachability_H_
#define IpReachability_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Indicates the type(s) of IP addresses reachable via an SCP
/// </summary>
class IpReachability {
public:
  IpReachability();
  virtual ~IpReachability();

  void validate();

  /////////////////////////////////////////////
  /// IpReachability members

  friend void to_json(nlohmann::json &j, const IpReachability &o);
  friend void from_json(const nlohmann::json &j, IpReachability &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* IpReachability_H_ */
