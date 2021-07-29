/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.3.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * DddTrafficDescriptor.h
 *
 *
 */

#ifndef DddTrafficDescriptor_H_
#define DddTrafficDescriptor_H_

#include "Ipv6Addr.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class DddTrafficDescriptor {
public:
  DddTrafficDescriptor();
  virtual ~DddTrafficDescriptor();

  void validate();

  /////////////////////////////////////////////
  /// DddTrafficDescriptor members

  /// <summary>
  /// String identifying a IPv4 address formatted in the \&quot;dotted
  /// decimal\&quot; notation as defined in RFC 1166.
  /// </summary>
  std::string getIpv4Addr() const;
  void setIpv4Addr(std::string const &value);
  bool ipv4AddrIsSet() const;
  void unsetIpv4Addr();
  /// <summary>
  ///
  /// </summary>
  Ipv6Addr getIpv6Addr() const;
  void setIpv6Addr(Ipv6Addr const &value);
  bool ipv6AddrIsSet() const;
  void unsetIpv6Addr();
  /// <summary>
  /// Unsigned Integer, i.e. only value 0 and integers above 0 are permissible.
  /// </summary>
  int32_t getPortNumber() const;
  void setPortNumber(int32_t const value);
  bool portNumberIsSet() const;
  void unsetPortNumber();
  /// <summary>
  /// String identifying a MAC address formatted in the hexadecimal notation
  /// according to clause 1.1 and clause 2.1 of RFC 7042
  /// </summary>
  std::string getMacAddr() const;
  void setMacAddr(std::string const &value);
  bool macAddrIsSet() const;
  void unsetMacAddr();

  friend void to_json(nlohmann::json &j, const DddTrafficDescriptor &o);
  friend void from_json(const nlohmann::json &j, DddTrafficDescriptor &o);

protected:
  std::string m_Ipv4Addr;
  bool m_Ipv4AddrIsSet;
  Ipv6Addr m_Ipv6Addr;
  bool m_Ipv6AddrIsSet;
  int32_t m_PortNumber;
  bool m_PortNumberIsSet;
  std::string m_MacAddr;
  bool m_MacAddrIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* DddTrafficDescriptor_H_ */
