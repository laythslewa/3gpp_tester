/**
 * 3gpp-device-triggering
 * API for device trigger. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * DeviceTriggering.h
 *
 * Represents device triggering related information.
 */

#ifndef DeviceTriggering_H_
#define DeviceTriggering_H_

#include "DeliveryResult.h"
#include "Priority.h"
#include "WebsockNotifConfig.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents device triggering related information.
/// </summary>
class DeviceTriggering {
public:
  DeviceTriggering();
  virtual ~DeviceTriggering();

  void validate();

  /////////////////////////////////////////////
  /// DeviceTriggering members

  /// <summary>
  /// string formatted according to IETF RFC 3986 identifying a referenced
  /// resource.
  /// </summary>
  std::string getSelf() const;
  void setSelf(std::string const &value);
  bool selfIsSet() const;
  void unsetSelf();
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
  /// Unsigned integer identifying a period of time in units of seconds.
  /// </summary>
  int32_t getValidityPeriod() const;
  void setValidityPeriod(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  Priority getPriority() const;
  void setPriority(Priority const &value);
  /// <summary>
  /// Unsigned integer with valid values between 0 and 65535.
  /// </summary>
  int32_t getApplicationPortId() const;
  void setApplicationPortId(int32_t const value);
  /// <summary>
  /// Unsigned integer with valid values between 0 and 65535.
  /// </summary>
  int32_t getAppSrcPortId() const;
  void setAppSrcPortId(int32_t const value);
  bool appSrcPortIdIsSet() const;
  void unsetAppSrcPortId();
  /// <summary>
  /// String with format \&quot;byte\&quot; as defined in OpenAPI Specification,
  /// i.e, base64-encoded characters.
  /// </summary>
  std::string getTriggerPayload() const;
  void setTriggerPayload(std::string const &value);
  /// <summary>
  /// string formatted according to IETF RFC 3986 identifying a referenced
  /// resource.
  /// </summary>
  std::string getNotificationDestination() const;
  void setNotificationDestination(std::string const &value);
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
  ///
  /// </summary>
  DeliveryResult getDeliveryResult() const;
  void setDeliveryResult(DeliveryResult const &value);
  bool deliveryResultIsSet() const;
  void unsetDeliveryResult();

  friend void to_json(nlohmann::json &j, const DeviceTriggering &o);
  friend void from_json(const nlohmann::json &j, DeviceTriggering &o);

protected:
  std::string m_Self;
  bool m_SelfIsSet;
  std::string m_ExternalId;
  bool m_ExternalIdIsSet;
  std::string m_Msisdn;
  bool m_MsisdnIsSet;
  std::string m_SupportedFeatures;
  bool m_SupportedFeaturesIsSet;
  int32_t m_ValidityPeriod;

  Priority m_Priority;

  int32_t m_ApplicationPortId;

  int32_t m_AppSrcPortId;
  bool m_AppSrcPortIdIsSet;
  std::string m_TriggerPayload;

  std::string m_NotificationDestination;

  bool m_RequestTestNotification;
  bool m_RequestTestNotificationIsSet;
  WebsockNotifConfig m_WebsockNotifConfig;
  bool m_WebsockNotifConfigIsSet;
  DeliveryResult m_DeliveryResult;
  bool m_DeliveryResultIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* DeviceTriggering_H_ */