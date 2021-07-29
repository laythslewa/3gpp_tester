/**
 * 3gpp-time-sync-exposure
 * API for time synchronization exposure. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * Protocol.h
 *
 * Possible values are   - ETH: Ethernet is supported.   - UDP_IPV4: UDP over
 * IPv4 is supported.   - UDP_IPV6: UDP over IPv6 is supported.
 */

#ifndef Protocol_H_
#define Protocol_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Possible values are   - ETH: Ethernet is supported.   - UDP_IPV4: UDP over
/// IPv4 is supported.   - UDP_IPV6: UDP over IPv6 is supported.
/// </summary>
class Protocol {
public:
  Protocol();
  virtual ~Protocol();

  void validate();

  /////////////////////////////////////////////
  /// Protocol members

  friend void to_json(nlohmann::json &j, const Protocol &o);
  friend void from_json(const nlohmann::json &j, Protocol &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* Protocol_H_ */
