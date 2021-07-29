/**
 * CAPIF_Security_API
 * API for CAPIF security management. © 2021, 3GPP Organizational Partners
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
 * ServiceSecurity.h
 *
 * Represents the details of the security method for each service API interface.
 * When included by the API invoker, it indicates the preferred method of
 * security. When included by the CAPIF core function, it indicates the security
 * method to be used for the service API interface.
 */

#ifndef ServiceSecurity_H_
#define ServiceSecurity_H_

#include "SecurityInformation.h"
#include "WebsockNotifConfig.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents the details of the security method for each service API
/// interface. When included by the API invoker, it indicates the preferred
/// method of security. When included by the CAPIF core function, it indicates
/// the security method to be used for the service API interface.
/// </summary>
class ServiceSecurity {
public:
  ServiceSecurity();
  virtual ~ServiceSecurity();

  void validate();

  /////////////////////////////////////////////
  /// ServiceSecurity members

  /// <summary>
  ///
  /// </summary>
  std::vector<SecurityInformation> &getSecurityInfo();
  void setSecurityInfo(std::vector<SecurityInformation> const &value);
  /// <summary>
  /// string providing an URI formatted according to IETF RFC 3986.
  /// </summary>
  std::string getNotificationDestination() const;
  void setNotificationDestination(std::string const &value);
  /// <summary>
  /// Set to true by API invoker to request the CAPIF core function to send a
  /// test notification as defined in in subclause 7.6. Set to false or omitted
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
  std::string getSupportedFeatures() const;
  void setSupportedFeatures(std::string const &value);
  bool supportedFeaturesIsSet() const;
  void unsetSupportedFeatures();

  friend void to_json(nlohmann::json &j, const ServiceSecurity &o);
  friend void from_json(const nlohmann::json &j, ServiceSecurity &o);

protected:
  std::vector<SecurityInformation> m_SecurityInfo;

  std::string m_NotificationDestination;

  bool m_RequestTestNotification;
  bool m_RequestTestNotificationIsSet;
  WebsockNotifConfig m_WebsockNotifConfig;
  bool m_WebsockNotifConfigIsSet;
  std::string m_SupportedFeatures;
  bool m_SupportedFeaturesIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ServiceSecurity_H_ */