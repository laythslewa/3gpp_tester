/**
 * Npcf_PolicyAuthorization Service API
 * PCF Policy Authorization Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * AccNetChargingAddress.h
 *
 * Describes the network entity within the access network performing charging
 */

#ifndef AccNetChargingAddress_H_
#define AccNetChargingAddress_H_

#include "Ipv6Addr.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Describes the network entity within the access network performing charging
/// </summary>
class AccNetChargingAddress {
public:
  AccNetChargingAddress();
  virtual ~AccNetChargingAddress();

  void validate();

  /////////////////////////////////////////////
  /// AccNetChargingAddress members

  /// <summary>
  /// String identifying a IPv4 address formatted in the \&quot;dotted
  /// decimal\&quot; notation as defined in RFC 1166.
  /// </summary>
  std::string getAnChargIpv4Addr() const;
  void setAnChargIpv4Addr(std::string const &value);
  bool anChargIpv4AddrIsSet() const;
  void unsetAnChargIpv4Addr();
  /// <summary>
  ///
  /// </summary>
  Ipv6Addr getAnChargIpv6Addr() const;
  void setAnChargIpv6Addr(Ipv6Addr const &value);
  bool anChargIpv6AddrIsSet() const;
  void unsetAnChargIpv6Addr();

  friend void to_json(nlohmann::json &j, const AccNetChargingAddress &o);
  friend void from_json(const nlohmann::json &j, AccNetChargingAddress &o);

protected:
  std::string m_AnChargIpv4Addr;
  bool m_AnChargIpv4AddrIsSet;
  Ipv6Addr m_AnChargIpv6Addr;
  bool m_AnChargIpv6AddrIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AccNetChargingAddress_H_ */
