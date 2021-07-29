/**
 * 3gpp-am-policyauthorization
 * API for AM policy authorization. © 2021, 3GPP Organizational Partners (ARIB,
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
 * AppAmContextExpRespData.h
 *
 * It represents a response to a modification or creation request of an
 * Individual Application AM resource. It may contain the notification of the
 * already met events
 */

#ifndef AppAmContextExpRespData_H_
#define AppAmContextExpRespData_H_

#include "AmEventsNotification.h"
#include "AmEventsSubscData.h"
#include "AppAmContextData.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// It represents a response to a modification or creation request of an
/// Individual Application AM resource. It may contain the notification of the
/// already met events
/// </summary>
class AppAmContextExpRespData {
public:
  AppAmContextExpRespData();
  virtual ~AppAmContextExpRespData();

  void validate();

  /////////////////////////////////////////////
  /// AppAmContextExpRespData members

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
  /// String providing an URI formatted according to RFC 3986
  /// </summary>
  std::string getTermNotifUri() const;
  void setTermNotifUri(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  AmEventsSubscData getEvSubsc() const;
  void setEvSubsc(AmEventsSubscData const &value);
  bool evSubscIsSet() const;
  void unsetEvSubsc();
  /// <summary>
  /// A string used to indicate the features supported by an API that is used as
  /// defined in clause 6.6 in 3GPP TS 29.500. The string shall contain a
  /// bitmask indicating supported features in hexadecimal representation Each
  /// character in the string shall take a value of \&quot;0\&quot; to
  /// \&quot;9\&quot;, \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to
  /// \&quot;F\&quot; and shall represent the support of 4 features as described
  /// in table 5.2.2-3. The most significant character representing the
  /// highest-numbered features shall appear first in the string, and the
  /// character representing features 1 to 4 shall appear last in the string.
  /// The list of features and their numbering (starting with 1) are defined
  /// separately for each API. If the string contains a lower number of
  /// characters than there are defined features for an API, all features that
  /// would be represented by characters that are not present in the string are
  /// not supported
  /// </summary>
  std::string getSuppFeat() const;
  void setSuppFeat(std::string const &value);
  bool suppFeatIsSet() const;
  void unsetSuppFeat();
  /// <summary>
  /// String providing an URI formatted according to RFC 3986
  /// </summary>
  std::string getEvSubsUri() const;
  void setEvSubsUri(std::string const &value);
  bool evSubsUriIsSet() const;
  void unsetEvSubsUri();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getEvNotifs();
  void setEvNotifs(std::vector<std::string> const &value);

  friend void to_json(nlohmann::json &j, const AppAmContextExpRespData &o);
  friend void from_json(const nlohmann::json &j, AppAmContextExpRespData &o);

protected:
  std::string m_Supi;

  std::string m_TermNotifUri;

  AmEventsSubscData m_EvSubsc;
  bool m_EvSubscIsSet;
  std::string m_SuppFeat;
  bool m_SuppFeatIsSet;
  std::string m_EvSubsUri;
  bool m_EvSubsUriIsSet;
  std::vector<std::string> m_EvNotifs;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AppAmContextExpRespData_H_ */
