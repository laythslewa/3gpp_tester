/**
 * Npcf_EventExposure
 * PCF Event Exposure Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
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
 * AnGwAddress.h
 *
 * describes the address of the access network gateway control node
 */

#ifndef AnGwAddress_H_
#define AnGwAddress_H_

#include "Ipv6Addr.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// describes the address of the access network gateway control node
/// </summary>
class AnGwAddress {
public:
  AnGwAddress();
  virtual ~AnGwAddress();

  void validate();

  /////////////////////////////////////////////
  /// AnGwAddress members

  /// <summary>
  /// String identifying a IPv4 address formatted in the \&quot;dotted
  /// decimal\&quot; notation as defined in RFC 1166.
  /// </summary>
  std::string getAnGwIpv4Addr() const;
  void setAnGwIpv4Addr(std::string const &value);
  bool anGwIpv4AddrIsSet() const;
  void unsetAnGwIpv4Addr();
  /// <summary>
  ///
  /// </summary>
  Ipv6Addr getAnGwIpv6Addr() const;
  void setAnGwIpv6Addr(Ipv6Addr const &value);
  bool anGwIpv6AddrIsSet() const;
  void unsetAnGwIpv6Addr();

  friend void to_json(nlohmann::json &j, const AnGwAddress &o);
  friend void from_json(const nlohmann::json &j, AnGwAddress &o);

protected:
  std::string m_AnGwIpv4Addr;
  bool m_AnGwIpv4AddrIsSet;
  Ipv6Addr m_AnGwIpv6Addr;
  bool m_AnGwIpv6AddrIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AnGwAddress_H_ */
