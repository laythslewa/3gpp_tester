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
 * RedirectInformation.h
 *
 * Contains the redirect information.
 */

#ifndef RedirectInformation_H_
#define RedirectInformation_H_

#include "RedirectAddressType.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Contains the redirect information.
/// </summary>
class RedirectInformation {
public:
  RedirectInformation();
  virtual ~RedirectInformation();

  void validate();

  /////////////////////////////////////////////
  /// RedirectInformation members

  /// <summary>
  /// Indicates the redirect is enable.
  /// </summary>
  bool isRedirectEnabled() const;
  void setRedirectEnabled(bool const value);
  bool redirectEnabledIsSet() const;
  void unsetRedirectEnabled();
  /// <summary>
  ///
  /// </summary>
  RedirectAddressType getRedirectAddressType() const;
  void setRedirectAddressType(RedirectAddressType const &value);
  bool redirectAddressTypeIsSet() const;
  void unsetRedirectAddressType();
  /// <summary>
  /// Indicates the address of the redirect server. If
  /// \&quot;redirectAddressType\&quot; attribute indicates the IPV4_ADDR, the
  /// encoding is the same as the Ipv4Addr data type defined in 3GPP
  /// TS 29.571.If \&quot;redirectAddressType\&quot; attribute indicates the
  /// IPV6_ADDR, the encoding is the same as the Ipv6Addr data type defined in
  /// 3GPP TS 29.571.If \&quot;redirectAddressType\&quot; attribute indicates
  /// the URL or SIP_URI, the encoding is the same as the Uri data type defined
  /// in 3GPP TS 29.571.
  /// </summary>
  std::string getRedirectServerAddress() const;
  void setRedirectServerAddress(std::string const &value);
  bool redirectServerAddressIsSet() const;
  void unsetRedirectServerAddress();

  friend void to_json(nlohmann::json &j, const RedirectInformation &o);
  friend void from_json(const nlohmann::json &j, RedirectInformation &o);

protected:
  bool m_RedirectEnabled;
  bool m_RedirectEnabledIsSet;
  RedirectAddressType m_RedirectAddressType;
  bool m_RedirectAddressTypeIsSet;
  std::string m_RedirectServerAddress;
  bool m_RedirectServerAddressIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* RedirectInformation_H_ */
