/**
 * N5g-ddnmf_Discovery API
 * N5g-ddnmf_Discovery Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * MatchInfoForRestricted.h
 *
 * Represents a report including a matching result, and the information that can
 * be used for charging purpose for the restricted discovery type.
 */

#ifndef MatchInfoForRestricted_H_
#define MatchInfoForRestricted_H_

#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents a report including a matching result, and the information that
/// can be used for charging purpose for the restricted discovery type.
/// </summary>
class MatchInfoForRestricted {
public:
  MatchInfoForRestricted();
  virtual ~MatchInfoForRestricted();

  void validate();

  /////////////////////////////////////////////
  /// MatchInfoForRestricted members

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
  /// <summary>
  /// Contains the RPAUID.
  /// </summary>
  std::string getRpauid() const;
  void setRpauid(std::string const &value);
  /// <summary>
  /// Contains the PDUID.
  /// </summary>
  std::string getTargetPduid() const;
  void setTargetPduid(std::string const &value);
  /// <summary>
  /// Contains the ProSe Restricted Code.
  /// </summary>
  std::string getProseRestrictedCode() const;
  void setProseRestrictedCode(std::string const &value);

  friend void to_json(nlohmann::json &j, const MatchInfoForRestricted &o);
  friend void from_json(const nlohmann::json &j, MatchInfoForRestricted &o);

protected:
  std::string m_Supi;

  std::string m_Rpauid;

  std::string m_TargetPduid;

  std::string m_ProseRestrictedCode;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* MatchInfoForRestricted_H_ */
