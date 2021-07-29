/**
 * Unified Data Repository Service API file for subscription data
 * Unified Data Repository Service (subscription data). The API version is
 * defined in 3GPP TS 29.504. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SmfSubscriptionItem.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

SmfSubscriptionItem::SmfSubscriptionItem() {
  m_SmfInstanceId = "";
  m_SubscriptionId = "";
}

SmfSubscriptionItem::~SmfSubscriptionItem() {}

void SmfSubscriptionItem::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const SmfSubscriptionItem &o) {
  j = nlohmann::json();
  j["smfInstanceId"] = o.m_SmfInstanceId;
  j["subscriptionId"] = o.m_SubscriptionId;
}

void from_json(const nlohmann::json &j, SmfSubscriptionItem &o) {
  j.at("smfInstanceId").get_to(o.m_SmfInstanceId);
  j.at("subscriptionId").get_to(o.m_SubscriptionId);
}

std::string SmfSubscriptionItem::getSmfInstanceId() const {
  return m_SmfInstanceId;
}
void SmfSubscriptionItem::setSmfInstanceId(std::string const &value) {
  m_SmfInstanceId = value;
}
std::string SmfSubscriptionItem::getSubscriptionId() const {
  return m_SubscriptionId;
}
void SmfSubscriptionItem::setSubscriptionId(std::string const &value) {
  m_SubscriptionId = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
