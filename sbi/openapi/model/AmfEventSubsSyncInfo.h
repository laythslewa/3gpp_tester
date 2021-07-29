/**
 * Namf_EventExposure
 * AMF Event Exposure Service © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * AmfEventSubsSyncInfo.h
 *
 * AMF Event Subscriptions Information for synchronization
 */

#ifndef AmfEventSubsSyncInfo_H_
#define AmfEventSubsSyncInfo_H_

#include "AmfEventSubscriptionInfo.h"
#include <nlohmann/json.hpp>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// AMF Event Subscriptions Information for synchronization
/// </summary>
class AmfEventSubsSyncInfo {
public:
  AmfEventSubsSyncInfo();
  virtual ~AmfEventSubsSyncInfo();

  void validate();

  /////////////////////////////////////////////
  /// AmfEventSubsSyncInfo members

  /// <summary>
  ///
  /// </summary>
  std::vector<AmfEventSubscriptionInfo> &getSubscriptionList();
  void setSubscriptionList(std::vector<AmfEventSubscriptionInfo> const &value);

  friend void to_json(nlohmann::json &j, const AmfEventSubsSyncInfo &o);
  friend void from_json(const nlohmann::json &j, AmfEventSubsSyncInfo &o);

protected:
  std::vector<AmfEventSubscriptionInfo> m_SubscriptionList;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AmfEventSubsSyncInfo_H_ */
