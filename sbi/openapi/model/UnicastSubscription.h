/**
 * SS_NetworkResourceAdaptation
 * SS Network Resource Adaptation Service. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * UnicastSubscription.h
 *
 * Represents a unicast subscription.
 */

#ifndef UnicastSubscription_H_
#define UnicastSubscription_H_

#include "ValTargetUe.h"
#include "WebsockNotifConfig.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents a unicast subscription.
/// </summary>
class UnicastSubscription {
public:
  UnicastSubscription();
  virtual ~UnicastSubscription();

  void validate();

  /////////////////////////////////////////////
  /// UnicastSubscription members

  /// <summary>
  ///
  /// </summary>
  ValTargetUe getValTgtUe() const;
  void setValTgtUe(ValTargetUe const &value);
  /// <summary>
  ///
  /// </summary>
  std::string getUniQosReq() const;
  void setUniQosReq(std::string const &value);
  bool uniQosReqIsSet() const;
  void unsetUniQosReq();
  /// <summary>
  /// string with format \&quot;date-time\&quot; as defined in OpenAPI.
  /// </summary>
  std::string getDuration() const;
  void setDuration(std::string const &value);
  bool durationIsSet() const;
  void unsetDuration();
  /// <summary>
  /// String providing an URI formatted according to RFC 3986
  /// </summary>
  std::string getNotifUri() const;
  void setNotifUri(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  bool isReqTestNotif() const;
  void setReqTestNotif(bool const value);
  bool reqTestNotifIsSet() const;
  void unsetReqTestNotif();
  /// <summary>
  ///
  /// </summary>
  WebsockNotifConfig getWsNotifCfg() const;
  void setWsNotifCfg(WebsockNotifConfig const &value);
  bool wsNotifCfgIsSet() const;
  void unsetWsNotifCfg();
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

  friend void to_json(nlohmann::json &j, const UnicastSubscription &o);
  friend void from_json(const nlohmann::json &j, UnicastSubscription &o);

protected:
  ValTargetUe m_ValTgtUe;

  std::string m_UniQosReq;
  bool m_UniQosReqIsSet;
  std::string m_Duration;
  bool m_DurationIsSet;
  std::string m_NotifUri;

  bool m_ReqTestNotif;
  bool m_ReqTestNotifIsSet;
  WebsockNotifConfig m_WsNotifCfg;
  bool m_WsNotifCfgIsSet;
  std::string m_SuppFeat;
  bool m_SuppFeatIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* UnicastSubscription_H_ */