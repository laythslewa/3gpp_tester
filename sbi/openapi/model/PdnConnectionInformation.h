/**
 * 3gpp-monitoring-event
 * API for Monitoring Event. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * PdnConnectionInformation.h
 *
 * Represents the PDN connection information of the UE.
 */

#ifndef PdnConnectionInformation_H_
#define PdnConnectionInformation_H_

#include "InterfaceIndication.h"
#include "PdnConnectionStatus.h"
#include "PdnType.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents the PDN connection information of the UE.
/// </summary>
class PdnConnectionInformation {
public:
  PdnConnectionInformation();
  virtual ~PdnConnectionInformation();

  void validate();

  /////////////////////////////////////////////
  /// PdnConnectionInformation members

  /// <summary>
  ///
  /// </summary>
  PdnConnectionStatus getStatus() const;
  void setStatus(PdnConnectionStatus const &value);
  /// <summary>
  /// Identify the APN, it is depending on the SCEF local configuration whether
  /// or not this attribute is sent to the SCS/AS.
  /// </summary>
  std::string getApn() const;
  void setApn(std::string const &value);
  bool apnIsSet() const;
  void unsetApn();
  /// <summary>
  ///
  /// </summary>
  PdnType getPdnType() const;
  void setPdnType(PdnType const &value);
  /// <summary>
  ///
  /// </summary>
  InterfaceIndication getInterfaceInd() const;
  void setInterfaceInd(InterfaceIndication const &value);
  bool interfaceIndIsSet() const;
  void unsetInterfaceInd();
  /// <summary>
  /// string identifying a Ipv4 address formatted in the \&quot;dotted
  /// decimal\&quot; notation as defined in IETF RFC 1166.
  /// </summary>
  std::string getIpv4Addr() const;
  void setIpv4Addr(std::string const &value);
  bool ipv4AddrIsSet() const;
  void unsetIpv4Addr();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getIpv6Addrs();
  void setIpv6Addrs(std::vector<std::string> const &value);
  bool ipv6AddrsIsSet() const;
  void unsetIpv6Addrs();

  friend void to_json(nlohmann::json &j, const PdnConnectionInformation &o);
  friend void from_json(const nlohmann::json &j, PdnConnectionInformation &o);

protected:
  PdnConnectionStatus m_Status;

  std::string m_Apn;
  bool m_ApnIsSet;
  PdnType m_PdnType;

  InterfaceIndication m_InterfaceInd;
  bool m_InterfaceIndIsSet;
  std::string m_Ipv4Addr;
  bool m_Ipv4AddrIsSet;
  std::vector<std::string> m_Ipv6Addrs;
  bool m_Ipv6AddrsIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* PdnConnectionInformation_H_ */