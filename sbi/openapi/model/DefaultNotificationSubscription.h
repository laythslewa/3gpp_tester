/**
 * NRF NFManagement Service
 * NRF NFManagement Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * DefaultNotificationSubscription.h
 *
 * Data structure for specifying the notifications the NF service subscribes by
 * default along with callback URI
 */

#ifndef DefaultNotificationSubscription_H_
#define DefaultNotificationSubscription_H_

#include "N1MessageClass.h"
#include "N2InformationClass.h"
#include "NotificationType.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Data structure for specifying the notifications the NF service subscribes by
/// default along with callback URI
/// </summary>
class DefaultNotificationSubscription {
public:
  DefaultNotificationSubscription();
  virtual ~DefaultNotificationSubscription();

  void validate();

  /////////////////////////////////////////////
  /// DefaultNotificationSubscription members

  /// <summary>
  ///
  /// </summary>
  NotificationType getNotificationType() const;
  void setNotificationType(NotificationType const &value);
  /// <summary>
  /// String providing an URI formatted according to RFC 3986
  /// </summary>
  std::string getCallbackUri() const;
  void setCallbackUri(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  N1MessageClass getN1MessageClass() const;
  void setN1MessageClass(N1MessageClass const &value);
  bool n1MessageClassIsSet() const;
  void unsetN1MessageClass();
  /// <summary>
  ///
  /// </summary>
  N2InformationClass getN2InformationClass() const;
  void setN2InformationClass(N2InformationClass const &value);
  bool n2InformationClassIsSet() const;
  void unsetN2InformationClass();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getVersions();
  void setVersions(std::vector<std::string> const &value);
  bool versionsIsSet() const;
  void unsetVersions();
  /// <summary>
  ///
  /// </summary>
  std::string getBinding() const;
  void setBinding(std::string const &value);
  bool bindingIsSet() const;
  void unsetBinding();
  /// <summary>
  ///
  /// </summary>
  std::string getAcceptedEncoding() const;
  void setAcceptedEncoding(std::string const &value);
  bool acceptedEncodingIsSet() const;
  void unsetAcceptedEncoding();
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

  friend void to_json(nlohmann::json &j,
                      const DefaultNotificationSubscription &o);
  friend void from_json(const nlohmann::json &j,
                        DefaultNotificationSubscription &o);

protected:
  NotificationType m_NotificationType;

  std::string m_CallbackUri;

  N1MessageClass m_N1MessageClass;
  bool m_N1MessageClassIsSet;
  N2InformationClass m_N2InformationClass;
  bool m_N2InformationClassIsSet;
  std::vector<std::string> m_Versions;
  bool m_VersionsIsSet;
  std::string m_Binding;
  bool m_BindingIsSet;
  std::string m_AcceptedEncoding;
  bool m_AcceptedEncodingIsSet;
  std::string m_SupportedFeatures;
  bool m_SupportedFeaturesIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* DefaultNotificationSubscription_H_ */
