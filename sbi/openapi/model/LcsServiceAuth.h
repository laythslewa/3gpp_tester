/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.3.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * LcsServiceAuth.h
 *
 * Possible values are - \&quot;LOCATION_ALLOWED_WITH_NOTIFICATION\&quot;:
 * Location allowed with notification -
 * \&quot;LOCATION_ALLOWED_WITHOUT_NOTIFICATION\&quot;: Location allowed without
 * notification - \&quot;LOCATION_ALLOWED_WITHOUT_RESPONSE\&quot;: Location with
 * notification and privacy verification; location allowed if no response -
 * \&quot;LOCATION_RESTRICTED_WITHOUT_RESPONSE\&quot;: Location with
 * notification and privacy verification; location restricted if no response -
 * \&quot;NOTIFICATION_ONLY\&quot;: Notification only -
 * \&quot;NOTIFICATION_AND_VERIFICATION_ONLY\&quot;: Notification and privacy
 * verification only
 */

#ifndef LcsServiceAuth_H_
#define LcsServiceAuth_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Possible values are - \&quot;LOCATION_ALLOWED_WITH_NOTIFICATION\&quot;:
/// Location allowed with notification -
/// \&quot;LOCATION_ALLOWED_WITHOUT_NOTIFICATION\&quot;: Location allowed
/// without notification - \&quot;LOCATION_ALLOWED_WITHOUT_RESPONSE\&quot;:
/// Location with notification and privacy verification; location allowed if no
/// response - \&quot;LOCATION_RESTRICTED_WITHOUT_RESPONSE\&quot;: Location with
/// notification and privacy verification; location restricted if no response -
/// \&quot;NOTIFICATION_ONLY\&quot;: Notification only -
/// \&quot;NOTIFICATION_AND_VERIFICATION_ONLY\&quot;: Notification and privacy
/// verification only
/// </summary>
class LcsServiceAuth {
public:
  LcsServiceAuth();
  virtual ~LcsServiceAuth();

  void validate();

  /////////////////////////////////////////////
  /// LcsServiceAuth members

  friend void to_json(nlohmann::json &j, const LcsServiceAuth &o);
  friend void from_json(const nlohmann::json &j, LcsServiceAuth &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* LcsServiceAuth_H_ */