/**
 * VAE_MessageDelivery
 * API for VAE Message Delivery Service © 2021, 3GPP Organizational Partners
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
 * MessageDeliverySubscriptionData.h
 *
 * Represents the V2X message delivery subscription data.
 */

#ifndef MessageDeliverySubscriptionData_H_
#define MessageDeliverySubscriptionData_H_

#include "WebsockNotifConfig.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents the V2X message delivery subscription data.
/// </summary>
class MessageDeliverySubscriptionData {
public:
  MessageDeliverySubscriptionData();
  virtual ~MessageDeliverySubscriptionData();

  void validate();

  /////////////////////////////////////////////
  /// MessageDeliverySubscriptionData members

  /// <summary>
  /// Represents the V2X application specific server identifier.
  /// </summary>
  std::string getAppSerId() const;
  void setAppSerId(std::string const &value);
  /// <summary>
  /// Represents the V2X service ID to which a V2X message belongs.
  /// </summary>
  std::string getServiceId() const;
  void setServiceId(std::string const &value);
  /// <summary>
  /// Represents a geographical area identifier.
  /// </summary>
  std::string getGeoId() const;
  void setGeoId(std::string const &value);
  bool geoIdIsSet() const;
  void unsetGeoId();
  /// <summary>
  /// String providing an URI formatted according to RFC 3986
  /// </summary>
  std::string getNotifUri() const;
  void setNotifUri(std::string const &value);
  /// <summary>
  /// Set to true by the NF service consumer to request the VAE server to send a
  /// test notification as defined in clause 6.1.5.3. Set to false or omitted
  /// otherwise.
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

  friend void to_json(nlohmann::json &j,
                      const MessageDeliverySubscriptionData &o);
  friend void from_json(const nlohmann::json &j,
                        MessageDeliverySubscriptionData &o);

protected:
  std::string m_AppSerId;

  std::string m_ServiceId;

  std::string m_GeoId;
  bool m_GeoIdIsSet;
  std::string m_NotifUri;

  bool m_RequestTestNotification;
  bool m_RequestTestNotificationIsSet;
  WebsockNotifConfig m_WebsockNotifConfig;
  bool m_WebsockNotifConfigIsSet;
  std::string m_SuppFeat;
  bool m_SuppFeatIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* MessageDeliverySubscriptionData_H_ */