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

#include "SmsSubscriptionData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

SmsSubscriptionData::SmsSubscriptionData() {
  m_SmsSubscribed = false;
  m_SmsSubscribedIsSet = false;
  m_SharedSmsSubsDataId = "";
  m_SharedSmsSubsDataIdIsSet = false;
}

SmsSubscriptionData::~SmsSubscriptionData() {}

void SmsSubscriptionData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const SmsSubscriptionData &o) {
  j = nlohmann::json();
  if (o.smsSubscribedIsSet())
    j["smsSubscribed"] = o.m_SmsSubscribed;
  if (o.sharedSmsSubsDataIdIsSet())
    j["sharedSmsSubsDataId"] = o.m_SharedSmsSubsDataId;
}

void from_json(const nlohmann::json &j, SmsSubscriptionData &o) {
  if (j.find("smsSubscribed") != j.end()) {
    j.at("smsSubscribed").get_to(o.m_SmsSubscribed);
    o.m_SmsSubscribedIsSet = true;
  }
  if (j.find("sharedSmsSubsDataId") != j.end()) {
    j.at("sharedSmsSubsDataId").get_to(o.m_SharedSmsSubsDataId);
    o.m_SharedSmsSubsDataIdIsSet = true;
  }
}

bool SmsSubscriptionData::isSmsSubscribed() const { return m_SmsSubscribed; }
void SmsSubscriptionData::setSmsSubscribed(bool const value) {
  m_SmsSubscribed = value;
  m_SmsSubscribedIsSet = true;
}
bool SmsSubscriptionData::smsSubscribedIsSet() const {
  return m_SmsSubscribedIsSet;
}
void SmsSubscriptionData::unsetSmsSubscribed() { m_SmsSubscribedIsSet = false; }
std::string SmsSubscriptionData::getSharedSmsSubsDataId() const {
  return m_SharedSmsSubsDataId;
}
void SmsSubscriptionData::setSharedSmsSubsDataId(std::string const &value) {
  m_SharedSmsSubsDataId = value;
  m_SharedSmsSubsDataIdIsSet = true;
}
bool SmsSubscriptionData::sharedSmsSubsDataIdIsSet() const {
  return m_SharedSmsSubsDataIdIsSet;
}
void SmsSubscriptionData::unsetSharedSmsSubsDataId() {
  m_SharedSmsSubsDataIdIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
