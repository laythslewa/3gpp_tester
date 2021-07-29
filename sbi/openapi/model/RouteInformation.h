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
 * RouteInformation.h
 *
 * At least one of the \&quot;ipv4Addr\&quot; attribute and the
 * \&quot;ipv6Addr\&quot; attribute shall be included in the
 * \&quot;RouteInformation\&quot; data type.
 */

#ifndef RouteInformation_H_
#define RouteInformation_H_

#include "Ipv6Addr.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// At least one of the \&quot;ipv4Addr\&quot; attribute and the
/// \&quot;ipv6Addr\&quot; attribute shall be included in the
/// \&quot;RouteInformation\&quot; data type.
/// </summary>
class RouteInformation {
public:
  RouteInformation();
  virtual ~RouteInformation();

  void validate();

  /////////////////////////////////////////////
  /// RouteInformation members

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

  friend void to_json(nlohmann::json &j, const RouteInformation &o);
  friend void from_json(const nlohmann::json &j, RouteInformation &o);

protected:
  std::string m_Ipv4Addr;
  bool m_Ipv4AddrIsSet;
  Ipv6Addr m_Ipv6Addr;
  bool m_Ipv6AddrIsSet;
  int32_t m_PortNumber;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* RouteInformation_H_ */
