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
 * IpMulticastAddressInfo.h
 *
 * Contains the IP multicast addressing information.
 */

#ifndef IpMulticastAddressInfo_H_
#define IpMulticastAddressInfo_H_

#include "Ipv6Addr.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Contains the IP multicast addressing information.
/// </summary>
class IpMulticastAddressInfo {
public:
  IpMulticastAddressInfo();
  virtual ~IpMulticastAddressInfo();

  void validate();

  /////////////////////////////////////////////
  /// IpMulticastAddressInfo members

  /// <summary>
  /// String identifying a IPv4 address formatted in the \&quot;dotted
  /// decimal\&quot; notation as defined in RFC 1166.
  /// </summary>
  std::string getSrcIpv4Addr() const;
  void setSrcIpv4Addr(std::string const &value);
  bool srcIpv4AddrIsSet() const;
  void unsetSrcIpv4Addr();
  /// <summary>
  /// String identifying a IPv4 address formatted in the \&quot;dotted
  /// decimal\&quot; notation as defined in RFC 1166.
  /// </summary>
  std::string getIpv4MulAddr() const;
  void setIpv4MulAddr(std::string const &value);
  bool ipv4MulAddrIsSet() const;
  void unsetIpv4MulAddr();
  /// <summary>
  ///
  /// </summary>
  Ipv6Addr getSrcIpv6Addr() const;
  void setSrcIpv6Addr(Ipv6Addr const &value);
  bool srcIpv6AddrIsSet() const;
  void unsetSrcIpv6Addr();
  /// <summary>
  ///
  /// </summary>
  Ipv6Addr getIpv6MulAddr() const;
  void setIpv6MulAddr(Ipv6Addr const &value);
  bool ipv6MulAddrIsSet() const;
  void unsetIpv6MulAddr();

  friend void to_json(nlohmann::json &j, const IpMulticastAddressInfo &o);
  friend void from_json(const nlohmann::json &j, IpMulticastAddressInfo &o);

protected:
  std::string m_SrcIpv4Addr;
  bool m_SrcIpv4AddrIsSet;
  std::string m_Ipv4MulAddr;
  bool m_Ipv4MulAddrIsSet;
  Ipv6Addr m_SrcIpv6Addr;
  bool m_SrcIpv6AddrIsSet;
  Ipv6Addr m_Ipv6MulAddr;
  bool m_Ipv6MulAddrIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* IpMulticastAddressInfo_H_ */