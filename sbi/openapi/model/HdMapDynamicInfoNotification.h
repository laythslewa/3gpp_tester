/**
 * VAE_HDMapDynamicInfo
 * API for VAE HDMapDynamicInfo Service © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * HdMapDynamicInfoNotification.h
 *
 * Represents a notificaton of HD map dynamic info corresponding to the
 * subscription.
 */

#ifndef HdMapDynamicInfoNotification_H_
#define HdMapDynamicInfoNotification_H_

#include "NearbyUeInfo.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents a notificaton of HD map dynamic info corresponding to the
/// subscription.
/// </summary>
class HdMapDynamicInfoNotification {
public:
  HdMapDynamicInfoNotification();
  virtual ~HdMapDynamicInfoNotification();

  void validate();

  /////////////////////////////////////////////
  /// HdMapDynamicInfoNotification members

  /// <summary>
  /// String providing an URI formatted according to RFC 3986
  /// </summary>
  std::string getResourceUri() const;
  void setResourceUri(std::string const &value);
  /// <summary>
  /// Contains the informaiotn of nearby UEs.
  /// </summary>
  std::vector<NearbyUeInfo> &getNearbyUeInfo();
  void setNearbyUeInfo(std::vector<NearbyUeInfo> const &value);

  friend void to_json(nlohmann::json &j, const HdMapDynamicInfoNotification &o);
  friend void from_json(const nlohmann::json &j,
                        HdMapDynamicInfoNotification &o);

protected:
  std::string m_ResourceUri;

  std::vector<NearbyUeInfo> m_NearbyUeInfo;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* HdMapDynamicInfoNotification_H_ */