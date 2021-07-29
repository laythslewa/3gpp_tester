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
 * UeIdentityInfo.h
 *
 * Represents 5GS-Level UE identities.
 */

#ifndef UeIdentityInfo_H_
#define UeIdentityInfo_H_

#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents 5GS-Level UE identities.
/// </summary>
class UeIdentityInfo {
public:
  UeIdentityInfo();
  virtual ~UeIdentityInfo();

  void validate();

  /////////////////////////////////////////////
  /// UeIdentityInfo members

  /// <summary>
  /// String identifying a Gpsi shall contain either an External Id or an
  /// MSISDN. It shall be formatted as follows -External Identifier&#x3D;
  /// \&quot;extid-&lt;extid&gt;, where &lt;extid&gt; shall be formatted
  /// according to clause 19.7.2 of 3GPP TS 23.003 that describes an External
  /// Identifier.
  /// </summary>
  std::string getGpsi() const;
  void setGpsi(std::string const &value);
  bool gpsiIsSet() const;
  void unsetGpsi();
  /// <summary>
  /// String representing a Permanent Equipment Identifier that may contain - an
  /// IMEI or IMEISV, as specified in clause 6.2 of 3GPP TS 23.003; a MAC
  /// address for a 5G-RG or FN-RG via wireline access, with an indication that
  /// this address cannot be trusted for regulatory purpose if this address
  /// cannot be used as an Equipment Identifier of the FN-RG, as specified in
  /// clause 4.7.7 of 3GPP TS23.316. Examples are imei-012345678901234 or
  /// imeisv-0123456789012345.
  /// </summary>
  std::string getPei() const;
  void setPei(std::string const &value);
  bool peiIsSet() const;
  void unsetPei();
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

  friend void to_json(nlohmann::json &j, const UeIdentityInfo &o);
  friend void from_json(const nlohmann::json &j, UeIdentityInfo &o);

protected:
  std::string m_Gpsi;
  bool m_GpsiIsSet;
  std::string m_Pei;
  bool m_PeiIsSet;
  std::string m_Supi;
  bool m_SupiIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* UeIdentityInfo_H_ */