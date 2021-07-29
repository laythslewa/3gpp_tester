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
 * TsnBridgeInfo.h
 *
 * Contains parameters that describe and identify the TSC user plane node.
 */

#ifndef TsnBridgeInfo_H_
#define TsnBridgeInfo_H_

#include "Ipv6Addr.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Contains parameters that describe and identify the TSC user plane node.
/// </summary>
class TsnBridgeInfo {
public:
  TsnBridgeInfo();
  virtual ~TsnBridgeInfo();

  void validate();

  /////////////////////////////////////////////
  /// TsnBridgeInfo members

  /// <summary>
  /// Integer where the allowed values correspond to the value range of an
  /// unsigned 64-bit integer.
  /// </summary>
  int32_t getBridgeId() const;
  void setBridgeId(int32_t const value);
  bool bridgeIdIsSet() const;
  void unsetBridgeId();
  /// <summary>
  /// String identifying a MAC address formatted in the hexadecimal notation
  /// according to clause 1.1 and clause 2.1 of RFC 7042
  /// </summary>
  std::string getDsttAddr() const;
  void setDsttAddr(std::string const &value);
  bool dsttAddrIsSet() const;
  void unsetDsttAddr();
  /// <summary>
  /// String identifying a IPv4 address formatted in the \&quot;dotted
  /// decimal\&quot; notation as defined in RFC 1166.
  /// </summary>
  std::string getDsttIpv4Addr() const;
  void setDsttIpv4Addr(std::string const &value);
  bool dsttIpv4AddrIsSet() const;
  void unsetDsttIpv4Addr();
  /// <summary>
  ///
  /// </summary>
  Ipv6Addr getDsttIpv6Addr() const;
  void setDsttIpv6Addr(Ipv6Addr const &value);
  bool dsttIpv6AddrIsSet() const;
  void unsetDsttIpv6Addr();
  /// <summary>
  /// Unsigned Integer, i.e. only value 0 and integers above 0 are permissible.
  /// </summary>
  int32_t getDsttPortNum() const;
  void setDsttPortNum(int32_t const value);
  bool dsttPortNumIsSet() const;
  void unsetDsttPortNum();
  /// <summary>
  /// Unsigned Integer, i.e. only value 0 and integers above 0 are permissible.
  /// </summary>
  int32_t getDsttResidTime() const;
  void setDsttResidTime(int32_t const value);
  bool dsttResidTimeIsSet() const;
  void unsetDsttResidTime();

  friend void to_json(nlohmann::json &j, const TsnBridgeInfo &o);
  friend void from_json(const nlohmann::json &j, TsnBridgeInfo &o);

protected:
  int32_t m_BridgeId;
  bool m_BridgeIdIsSet;
  std::string m_DsttAddr;
  bool m_DsttAddrIsSet;
  std::string m_DsttIpv4Addr;
  bool m_DsttIpv4AddrIsSet;
  Ipv6Addr m_DsttIpv6Addr;
  bool m_DsttIpv6AddrIsSet;
  int32_t m_DsttPortNum;
  bool m_DsttPortNumIsSet;
  int32_t m_DsttResidTime;
  bool m_DsttResidTimeIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* TsnBridgeInfo_H_ */