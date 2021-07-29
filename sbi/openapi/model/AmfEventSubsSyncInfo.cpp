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

#include "AmfEventSubsSyncInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

AmfEventSubsSyncInfo::AmfEventSubsSyncInfo() {}

AmfEventSubsSyncInfo::~AmfEventSubsSyncInfo() {}

void AmfEventSubsSyncInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const AmfEventSubsSyncInfo &o) {
  j = nlohmann::json();
  j["subscriptionList"] = o.m_SubscriptionList;
}

void from_json(const nlohmann::json &j, AmfEventSubsSyncInfo &o) {
  j.at("subscriptionList").get_to(o.m_SubscriptionList);
}

std::vector<AmfEventSubscriptionInfo> &
AmfEventSubsSyncInfo::getSubscriptionList() {
  return m_SubscriptionList;
}
void AmfEventSubsSyncInfo::setSubscriptionList(
    std::vector<AmfEventSubscriptionInfo> const &value) {
  m_SubscriptionList = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org