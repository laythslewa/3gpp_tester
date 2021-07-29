/**
 * CAPIF_Routing_Info_API
 * API for Routing information. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * Ipv6AddressRange.h
 *
 * Represents IPv6 address range.
 */

#ifndef Ipv6AddressRange_H_
#define Ipv6AddressRange_H_

#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents IPv6 address range.
/// </summary>
class Ipv6AddressRange {
public:
  Ipv6AddressRange();
  virtual ~Ipv6AddressRange();

  void validate();

  /////////////////////////////////////////////
  /// Ipv6AddressRange members

  /// <summary>
  /// string identifying a Ipv6 address formatted according to clause 4 in IETF
  /// RFC 5952. The mixed Ipv4 Ipv6 notation according to clause 5 of IETF RFC
  /// 5952 shall not be used.
  /// </summary>
  std::string getStart() const;
  void setStart(std::string const &value);
  /// <summary>
  /// string identifying a Ipv6 address formatted according to clause 4 in IETF
  /// RFC 5952. The mixed Ipv4 Ipv6 notation according to clause 5 of IETF RFC
  /// 5952 shall not be used.
  /// </summary>
  std::string getEnd() const;
  void setEnd(std::string const &value);

  friend void to_json(nlohmann::json &j, const Ipv6AddressRange &o);
  friend void from_json(const nlohmann::json &j, Ipv6AddressRange &o);

protected:
  std::string m_Start;

  std::string m_End;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* Ipv6AddressRange_H_ */
