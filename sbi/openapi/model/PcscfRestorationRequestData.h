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
 * PcscfRestorationRequestData.h
 *
 * Indicates P-CSCF restoration.
 */

#ifndef PcscfRestorationRequestData_H_
#define PcscfRestorationRequestData_H_

#include "Ipv6Addr.h"
#include "Snssai.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Indicates P-CSCF restoration.
/// </summary>
class PcscfRestorationRequestData {
public:
  PcscfRestorationRequestData();
  virtual ~PcscfRestorationRequestData();

  void validate();

  /////////////////////////////////////////////
  /// PcscfRestorationRequestData members

  /// <summary>
  /// String representing a Data Network as defined in clause 9A of 3GPP
  /// TS 23.003; it shall contain either a DNN Network Identifier, or a full DNN
  /// with both the Network Identifier and Operator Identifier, as specified in
  /// 3GPP TS 23.003 clause 9.1.1 and 9.1.2. It shall be coded as string in
  /// which the labels are separated by dots (e.g.
  /// \&quot;Label1.Label2.Label3\&quot;).
  /// </summary>
  std::string getDnn() const;
  void setDnn(std::string const &value);
  bool dnnIsSet() const;
  void unsetDnn();
  /// <summary>
  ///
  /// </summary>
  std::string getIpDomain() const;
  void setIpDomain(std::string const &value);
  bool ipDomainIsSet() const;
  void unsetIpDomain();
  /// <summary>
  ///
  /// </summary>
  Snssai getSliceInfo() const;
  void setSliceInfo(Snssai const &value);
  bool sliceInfoIsSet() const;
  void unsetSliceInfo();
  /// <summary>
  /// String identifying a Supi that shall contain either an IMSI, a network
  /// specific identifier, a Global Cable Identifier (GCI) or a Global Line
  /// Identifier (GLI) as specified in clause 2.2A of 3GPP TS 23.003. It shall
  /// be formatted as follows  - for an IMSI \&quot;imsi-&lt;imsi&gt;\&quot;,
  /// where &lt;imsi&gt; shall be formatted according to clause 2.2 of 3GPP
  /// TS 23.003 that describes an IMSI.  - for a network specific identifier
  /// \&quot;nai-&lt;nai&gt;, where &lt;nai&gt; shall be formatted according to
  /// clause 28.7.2 of 3GPP TS 23.003 that describes an NAI.  - for a GCI
  /// \&quot;gci-&lt;gci&gt;\&quot;, where &lt;gci&gt; shall be formatted
  /// according to clause 28.15.2 of 3GPP TS 23.003.  - for a GLI
  /// \&quot;gli-&lt;gli&gt;\&quot;, where &lt;gli&gt; shall be formatted
  /// according to clause 28.16.2 of 3GPP TS 23.003.To enable that the value is
  /// used as part of an URI, the string shall only contain characters allowed
  /// according to the \&quot;lower-with-hyphen\&quot; naming convention defined
  /// in 3GPP TS 29.501.
  /// </summary>
  std::string getSupi() const;
  void setSupi(std::string const &value);
  bool supiIsSet() const;
  void unsetSupi();
  /// <summary>
  /// String identifying a IPv4 address formatted in the \&quot;dotted
  /// decimal\&quot; notation as defined in RFC 1166.
  /// </summary>
  std::string getUeIpv4() const;
  void setUeIpv4(std::string const &value);
  bool ueIpv4IsSet() const;
  void unsetUeIpv4();
  /// <summary>
  ///
  /// </summary>
  Ipv6Addr getUeIpv6() const;
  void setUeIpv6(Ipv6Addr const &value);
  bool ueIpv6IsSet() const;
  void unsetUeIpv6();

  friend void to_json(nlohmann::json &j, const PcscfRestorationRequestData &o);
  friend void from_json(const nlohmann::json &j,
                        PcscfRestorationRequestData &o);

protected:
  std::string m_Dnn;
  bool m_DnnIsSet;
  std::string m_IpDomain;
  bool m_IpDomainIsSet;
  Snssai m_SliceInfo;
  bool m_SliceInfoIsSet;
  std::string m_Supi;
  bool m_SupiIsSet;
  std::string m_UeIpv4;
  bool m_UeIpv4IsSet;
  Ipv6Addr m_UeIpv6;
  bool m_UeIpv6IsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* PcscfRestorationRequestData_H_ */