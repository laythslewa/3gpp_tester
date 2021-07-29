/**
 * Nhss_imsSDM
 * Nhss Subscriber Data Management Service for IMS. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * UpdatedUeReachabilitySubscription.h
 *
 *
 */

#ifndef UpdatedUeReachabilitySubscription_H_
#define UpdatedUeReachabilitySubscription_H_

#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class UpdatedUeReachabilitySubscription {
public:
  UpdatedUeReachabilitySubscription();
  virtual ~UpdatedUeReachabilitySubscription();

  void validate();

  /////////////////////////////////////////////
  /// UpdatedUeReachabilitySubscription members

  /// <summary>
  /// string with format \&quot;date-time\&quot; as defined in OpenAPI.
  /// </summary>
  std::string getExpiry() const;
  void setExpiry(std::string const &value);

  friend void to_json(nlohmann::json &j,
                      const UpdatedUeReachabilitySubscription &o);
  friend void from_json(const nlohmann::json &j,
                        UpdatedUeReachabilitySubscription &o);

protected:
  std::string m_Expiry;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* UpdatedUeReachabilitySubscription_H_ */
