/**
 * Nsmf_EventExposure
 * Session Management Event Exposure Service. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * NsmfEventExposure.h
 *
 * Represents an Individual SMF Notification Subscription resource. The
 * serviveName property corresponds to the serviceName in the main body of the
 * specification.
 */

#ifndef NsmfEventExposure_H_
#define NsmfEventExposure_H_

#include "EventSubscription.h"
#include "Guami.h"
#include "Ipv6Addr.h"
#include "NotificationFlag.h"
#include "NotificationMethod.h"
#include "PartitioningCriteria.h"
#include "ServiceName.h"
#include "Snssai.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents an Individual SMF Notification Subscription resource. The
/// serviveName property corresponds to the serviceName in the main body of the
/// specification.
/// </summary>
class NsmfEventExposure {
public:
  NsmfEventExposure();
  virtual ~NsmfEventExposure();

  void validate();

  /////////////////////////////////////////////
  /// NsmfEventExposure members

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
  /// Any UE indication. This IE shall be present if the event subscription is
  /// applicable to any UE. Default value \&quot;false\&quot; is used, if not
  /// present.
  /// </summary>
  bool isAnyUeInd() const;
  void setAnyUeInd(bool const value);
  bool anyUeIndIsSet() const;
  void unsetAnyUeInd();
  /// <summary>
  /// String identifying a group of devices network internal globally unique ID
  /// which identifies a set of IMSIs, as specified in clause 19.9 of 3GPP
  /// TS 23.003.
  /// </summary>
  std::string getGroupId() const;
  void setGroupId(std::string const &value);
  bool groupIdIsSet() const;
  void unsetGroupId();
  /// <summary>
  /// Unsigned integer identifying a PDU session, within the range 0 to 255, as
  /// specified in clause 11.2.3.1b, bits 1 to 8, of 3GPP TS 24.007. If the PDU
  /// Session ID is allocated by the Core Network for UEs not supporting N1
  /// mode, reserved range 64 to 95 is used. PDU Session ID within the reserved
  /// range is only visible in the Core Network.
  /// </summary>
  int32_t getPduSeId() const;
  void setPduSeId(int32_t const value);
  bool pduSeIdIsSet() const;
  void unsetPduSeId();
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
  /// Identifies an Individual SMF Notification Subscription. To enable that the
  /// value is used as part of a URI, the string shall only contain characters
  /// allowed according to the \&quot;lower-with-hyphen\&quot; naming convention
  /// defined in 3GPP TS 29.501. In an OpenAPI schema, the format shall be
  /// designated as \&quot;SubId\&quot;.
  /// </summary>
  std::string getSubId() const;
  void setSubId(std::string const &value);
  bool subIdIsSet() const;
  void unsetSubId();
  /// <summary>
  /// Notification Correlation ID assigned by the NF service consumer.
  /// </summary>
  std::string getNotifId() const;
  void setNotifId(std::string const &value);
  /// <summary>
  /// String providing an URI formatted according to RFC 3986
  /// </summary>
  std::string getNotifUri() const;
  void setNotifUri(std::string const &value);
  /// <summary>
  /// Alternate or backup IPv4 address(es) where to send Notifications.
  /// </summary>
  std::vector<std::string> &getAltNotifIpv4Addrs();
  void setAltNotifIpv4Addrs(std::vector<std::string> const &value);
  bool altNotifIpv4AddrsIsSet() const;
  void unsetAltNotifIpv4Addrs();
  /// <summary>
  /// Alternate or backup IPv6 address(es) where to send Notifications.
  /// </summary>
  std::vector<Ipv6Addr> &getAltNotifIpv6Addrs();
  void setAltNotifIpv6Addrs(std::vector<Ipv6Addr> const &value);
  bool altNotifIpv6AddrsIsSet() const;
  void unsetAltNotifIpv6Addrs();
  /// <summary>
  /// Alternate or backup FQDN(s) where to send Notifications.
  /// </summary>
  std::vector<std::string> &getAltNotifFqdns();
  void setAltNotifFqdns(std::vector<std::string> const &value);
  bool altNotifFqdnsIsSet() const;
  void unsetAltNotifFqdns();
  /// <summary>
  /// Subscribed events
  /// </summary>
  std::vector<EventSubscription> &getEventSubs();
  void setEventSubs(std::vector<EventSubscription> const &value);
  /// <summary>
  ///
  /// </summary>
  bool isImmeRep() const;
  void setImmeRep(bool const value);
  bool immeRepIsSet() const;
  void unsetImmeRep();
  /// <summary>
  ///
  /// </summary>
  NotificationMethod getNotifMethod() const;
  void setNotifMethod(NotificationMethod const &value);
  bool notifMethodIsSet() const;
  void unsetNotifMethod();
  /// <summary>
  /// Unsigned Integer, i.e. only value 0 and integers above 0 are permissible.
  /// </summary>
  int32_t getMaxReportNbr() const;
  void setMaxReportNbr(int32_t const value);
  bool maxReportNbrIsSet() const;
  void unsetMaxReportNbr();
  /// <summary>
  /// string with format \&quot;date-time\&quot; as defined in OpenAPI.
  /// </summary>
  std::string getExpiry() const;
  void setExpiry(std::string const &value);
  bool expiryIsSet() const;
  void unsetExpiry();
  /// <summary>
  /// indicating a time in seconds.
  /// </summary>
  int32_t getRepPeriod() const;
  void setRepPeriod(int32_t const value);
  bool repPeriodIsSet() const;
  void unsetRepPeriod();
  /// <summary>
  ///
  /// </summary>
  Guami getGuami() const;
  void setGuami(Guami const &value);
  bool guamiIsSet() const;
  void unsetGuami();
  /// <summary>
  ///
  /// </summary>
  ServiceName getServiveName() const;
  void setServiveName(ServiceName const &value);
  bool serviveNameIsSet() const;
  void unsetServiveName();
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
  std::string getSupportedFeatures() const;
  void setSupportedFeatures(std::string const &value);
  bool supportedFeaturesIsSet() const;
  void unsetSupportedFeatures();
  /// <summary>
  /// Unsigned integer indicating Sampling Ratio (see clauses 4.15.1 of 3GPP
  /// TS 23.502), expressed in percent.
  /// </summary>
  int32_t getSampRatio() const;
  void setSampRatio(int32_t const value);
  bool sampRatioIsSet() const;
  void unsetSampRatio();
  /// <summary>
  /// Criteria for partitioning the UEs before applying the sampling ratio.
  /// </summary>
  std::vector<PartitioningCriteria> &getPartitionCriteria();
  void setPartitionCriteria(std::vector<PartitioningCriteria> const &value);
  bool partitionCriteriaIsSet() const;
  void unsetPartitionCriteria();
  /// <summary>
  /// indicating a time in seconds.
  /// </summary>
  int32_t getGrpRepTime() const;
  void setGrpRepTime(int32_t const value);
  bool grpRepTimeIsSet() const;
  void unsetGrpRepTime();
  /// <summary>
  ///
  /// </summary>
  NotificationFlag getNotifFlag() const;
  void setNotifFlag(NotificationFlag const &value);
  bool notifFlagIsSet() const;
  void unsetNotifFlag();

  friend void to_json(nlohmann::json &j, const NsmfEventExposure &o);
  friend void from_json(const nlohmann::json &j, NsmfEventExposure &o);

protected:
  std::string m_Supi;
  bool m_SupiIsSet;
  std::string m_Gpsi;
  bool m_GpsiIsSet;
  bool m_AnyUeInd;
  bool m_AnyUeIndIsSet;
  std::string m_GroupId;
  bool m_GroupIdIsSet;
  int32_t m_PduSeId;
  bool m_PduSeIdIsSet;
  std::string m_Dnn;
  bool m_DnnIsSet;
  Snssai m_Snssai;
  bool m_SnssaiIsSet;
  std::string m_SubId;
  bool m_SubIdIsSet;
  std::string m_NotifId;

  std::string m_NotifUri;

  std::vector<std::string> m_AltNotifIpv4Addrs;
  bool m_AltNotifIpv4AddrsIsSet;
  std::vector<Ipv6Addr> m_AltNotifIpv6Addrs;
  bool m_AltNotifIpv6AddrsIsSet;
  std::vector<std::string> m_AltNotifFqdns;
  bool m_AltNotifFqdnsIsSet;
  std::vector<EventSubscription> m_EventSubs;

  bool m_ImmeRep;
  bool m_ImmeRepIsSet;
  NotificationMethod m_NotifMethod;
  bool m_NotifMethodIsSet;
  int32_t m_MaxReportNbr;
  bool m_MaxReportNbrIsSet;
  std::string m_Expiry;
  bool m_ExpiryIsSet;
  int32_t m_RepPeriod;
  bool m_RepPeriodIsSet;
  Guami m_Guami;
  bool m_GuamiIsSet;
  ServiceName m_ServiveName;
  bool m_ServiveNameIsSet;
  std::string m_SupportedFeatures;
  bool m_SupportedFeaturesIsSet;
  int32_t m_SampRatio;
  bool m_SampRatioIsSet;
  std::vector<PartitioningCriteria> m_PartitionCriteria;
  bool m_PartitionCriteriaIsSet;
  int32_t m_GrpRepTime;
  bool m_GrpRepTimeIsSet;
  NotificationFlag m_NotifFlag;
  bool m_NotifFlagIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* NsmfEventExposure_H_ */