/**
 * 3gpp-iptvconfiguration
 * API for IPTV configuration. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * IptvConfigData.h
 *
 * Represents an individual IPTV Configuration resource.
 */

#ifndef IptvConfigData_H_
#define IptvConfigData_H_

#include "MulticastAccessControl.h"
#include "Snssai.h"
#include <map>
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents an individual IPTV Configuration resource.
/// </summary>
class IptvConfigData {
public:
  IptvConfigData();
  virtual ~IptvConfigData();

  void validate();

  /////////////////////////////////////////////
  /// IptvConfigData members

  /// <summary>
  /// string formatted according to IETF RFC 3986 identifying a referenced
  /// resource.
  /// </summary>
  std::string getSelf() const;
  void setSelf(std::string const &value);
  bool selfIsSet() const;
  void unsetSelf();
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
  /// string containing a local identifier followed by \&quot;@\&quot; and a
  /// domain identifier. Both the local identifier and the domain identifier
  /// shall be encoded as strings that do not contain any \&quot;@\&quot;
  /// characters. See Clauses 4.6.2 and 4.6.3 of 3GPP TS 23.682 for more
  /// information.
  /// </summary>
  std::string getExterGroupId() const;
  void setExterGroupId(std::string const &value);
  bool exterGroupIdIsSet() const;
  void unsetExterGroupId();
  /// <summary>
  ///
  /// </summary>
  std::string getAfAppId() const;
  void setAfAppId(std::string const &value);
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
  Snssai getSnssai() const;
  void setSnssai(Snssai const &value);
  bool snssaiIsSet() const;
  void unsetSnssai();
  /// <summary>
  /// Identifies a list of multicast address access control information. Any
  /// string value can be used as a key of the map.
  /// </summary>
  std::map<std::string, MulticastAccessControl> &getMultiAccCtrls();
  void
  setMultiAccCtrls(std::map<std::string, MulticastAccessControl> const &value);
  /// <summary>
  /// String uniquely identifying MTC provider information.
  /// </summary>
  std::string getMtcProviderId() const;
  void setMtcProviderId(std::string const &value);
  bool mtcProviderIdIsSet() const;
  void unsetMtcProviderId();
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

  friend void to_json(nlohmann::json &j, const IptvConfigData &o);
  friend void from_json(const nlohmann::json &j, IptvConfigData &o);

protected:
  std::string m_Self;
  bool m_SelfIsSet;
  std::string m_Gpsi;
  bool m_GpsiIsSet;
  std::string m_ExterGroupId;
  bool m_ExterGroupIdIsSet;
  std::string m_AfAppId;

  std::string m_Dnn;
  bool m_DnnIsSet;
  Snssai m_Snssai;
  bool m_SnssaiIsSet;
  std::map<std::string, MulticastAccessControl> m_MultiAccCtrls;

  std::string m_MtcProviderId;
  bool m_MtcProviderIdIsSet;
  std::string m_SuppFeat;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* IptvConfigData_H_ */
