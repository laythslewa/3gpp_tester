/**
 * 3gpp-network-parameter-configuration
 * API for network parameter configuration. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * NpConfiguration.h
 *
 * Represents a network parameters configuration.
 */

#ifndef NpConfiguration_H_
#define NpConfiguration_H_

#include "WebsockNotifConfig.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents a network parameters configuration.
/// </summary>
class NpConfiguration {
public:
  NpConfiguration();
  virtual ~NpConfiguration();

  void validate();

  /////////////////////////////////////////////
  /// NpConfiguration members

  /// <summary>
  /// string formatted according to IETF RFC 3986 identifying a referenced
  /// resource.
  /// </summary>
  std::string getSelf() const;
  void setSelf(std::string const &value);
  bool selfIsSet() const;
  void unsetSelf();
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
  /// Identifies the MTC Service Provider and/or MTC Application.
  /// </summary>
  std::string getMtcProviderId() const;
  void setMtcProviderId(std::string const &value);
  bool mtcProviderIdIsSet() const;
  void unsetMtcProviderId();
  /// <summary>
  /// string containing a local identifier followed by \&quot;@\&quot; and a
  /// domain identifier. Both the local identifier and the domain identifier
  /// shall be encoded as strings that do not contain any \&quot;@\&quot;
  /// characters. See Clause 4.6.2 of 3GPP TS 23.682 for more information.
  /// </summary>
  std::string getExternalId() const;
  void setExternalId(std::string const &value);
  bool externalIdIsSet() const;
  void unsetExternalId();
  /// <summary>
  /// string formatted according to subclause 3.3 of 3GPP TS 23.003 that
  /// describes an MSISDN.
  /// </summary>
  std::string getMsisdn() const;
  void setMsisdn(std::string const &value);
  bool msisdnIsSet() const;
  void unsetMsisdn();
  /// <summary>
  /// string containing a local identifier followed by \&quot;@\&quot; and a
  /// domain identifier. Both the local identifier and the domain identifier
  /// shall be encoded as strings that do not contain any \&quot;@\&quot;
  /// characters. See Clauses 4.6.2 and 4.6.3 of 3GPP TS 23.682 for more
  /// information.
  /// </summary>
  std::string getExternalGroupId() const;
  void setExternalGroupId(std::string const &value);
  bool externalGroupIdIsSet() const;
  void unsetExternalGroupId();
  /// <summary>
  /// Unsigned integer identifying a period of time in units of seconds.
  /// </summary>
  int32_t getMaximumLatency() const;
  void setMaximumLatency(int32_t const value);
  bool maximumLatencyIsSet() const;
  void unsetMaximumLatency();
  /// <summary>
  /// Unsigned integer identifying a period of time in units of seconds.
  /// </summary>
  int32_t getMaximumResponseTime() const;
  void setMaximumResponseTime(int32_t const value);
  bool maximumResponseTimeIsSet() const;
  void unsetMaximumResponseTime();
  /// <summary>
  /// This parameter may be included to identify the number of packets that the
  /// serving gateway shall buffer in case that the UE is not reachable.
  /// </summary>
  int32_t getSuggestedNumberOfDlPackets() const;
  void setSuggestedNumberOfDlPackets(int32_t const value);
  bool suggestedNumberOfDlPacketsIsSet() const;
  void unsetSuggestedNumberOfDlPackets();
  /// <summary>
  /// Unsigned integer identifying a period of time in units of seconds.
  /// </summary>
  int32_t getGroupReportingGuardTime() const;
  void setGroupReportingGuardTime(int32_t const value);
  bool groupReportingGuardTimeIsSet() const;
  void unsetGroupReportingGuardTime();
  /// <summary>
  /// string formatted according to IETF RFC 3986 identifying a referenced
  /// resource.
  /// </summary>
  std::string getNotificationDestination() const;
  void setNotificationDestination(std::string const &value);
  bool notificationDestinationIsSet() const;
  void unsetNotificationDestination();
  /// <summary>
  /// Set to true by the SCS/AS to request the SCEF to send a test notification
  /// as defined in subclause 5.2.5.3. Set to false or omitted otherwise.
  /// </summary>
  bool isRequestTestNotification() const;
  void setRequestTestNotification(bool const value);
  bool requestTestNotificationIsSet() const;
  void unsetRequestTestNotification();
  /// <summary>
  ///
  /// </summary>
  WebsockNotifConfig getWebsockNotifConfig() const;
  void setWebsockNotifConfig(WebsockNotifConfig const &value);
  bool websockNotifConfigIsSet() const;
  void unsetWebsockNotifConfig();
  /// <summary>
  /// string with format \&quot;date-time\&quot; as defined in OpenAPI.
  /// </summary>
  std::string getValidityTime() const;
  void setValidityTime(std::string const &value);
  bool validityTimeIsSet() const;
  void unsetValidityTime();

  friend void to_json(nlohmann::json &j, const NpConfiguration &o);
  friend void from_json(const nlohmann::json &j, NpConfiguration &o);

protected:
  std::string m_Self;
  bool m_SelfIsSet;
  std::string m_SupportedFeatures;
  bool m_SupportedFeaturesIsSet;
  std::string m_MtcProviderId;
  bool m_MtcProviderIdIsSet;
  std::string m_ExternalId;
  bool m_ExternalIdIsSet;
  std::string m_Msisdn;
  bool m_MsisdnIsSet;
  std::string m_ExternalGroupId;
  bool m_ExternalGroupIdIsSet;
  int32_t m_MaximumLatency;
  bool m_MaximumLatencyIsSet;
  int32_t m_MaximumResponseTime;
  bool m_MaximumResponseTimeIsSet;
  int32_t m_SuggestedNumberOfDlPackets;
  bool m_SuggestedNumberOfDlPacketsIsSet;
  int32_t m_GroupReportingGuardTime;
  bool m_GroupReportingGuardTimeIsSet;
  std::string m_NotificationDestination;
  bool m_NotificationDestinationIsSet;
  bool m_RequestTestNotification;
  bool m_RequestTestNotificationIsSet;
  WebsockNotifConfig m_WebsockNotifConfig;
  bool m_WebsockNotifConfigIsSet;
  std::string m_ValidityTime;
  bool m_ValidityTimeIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* NpConfiguration_H_ */