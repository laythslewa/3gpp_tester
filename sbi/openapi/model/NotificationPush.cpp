/**
 * Nnef_PFDmanagement Service API
 * Packet Flow Description Management Service. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "NotificationPush.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

NotificationPush::NotificationPush() {
  m_AllowedDelay = 0;
  m_AllowedDelayIsSet = false;
  m_PfdOpIsSet = false;
}

NotificationPush::~NotificationPush() {}

void NotificationPush::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const NotificationPush &o) {
  j = nlohmann::json();
  j["appIds"] = o.m_AppIds;
  if (o.allowedDelayIsSet())
    j["allowedDelay"] = o.m_AllowedDelay;
  if (o.pfdOpIsSet())
    j["pfdOp"] = o.m_PfdOp;
}

void from_json(const nlohmann::json &j, NotificationPush &o) {
  j.at("appIds").get_to(o.m_AppIds);
  if (j.find("allowedDelay") != j.end()) {
    j.at("allowedDelay").get_to(o.m_AllowedDelay);
    o.m_AllowedDelayIsSet = true;
  }
  if (j.find("pfdOp") != j.end()) {
    j.at("pfdOp").get_to(o.m_PfdOp);
    o.m_PfdOpIsSet = true;
  }
}

std::vector<std::string> &NotificationPush::getAppIds() { return m_AppIds; }
void NotificationPush::setAppIds(std::vector<std::string> const &value) {
  m_AppIds = value;
}
int32_t NotificationPush::getAllowedDelay() const { return m_AllowedDelay; }
void NotificationPush::setAllowedDelay(int32_t const value) {
  m_AllowedDelay = value;
  m_AllowedDelayIsSet = true;
}
bool NotificationPush::allowedDelayIsSet() const { return m_AllowedDelayIsSet; }
void NotificationPush::unsetAllowedDelay() { m_AllowedDelayIsSet = false; }
PfdOperation NotificationPush::getPfdOp() const { return m_PfdOp; }
void NotificationPush::setPfdOp(PfdOperation const &value) {
  m_PfdOp = value;
  m_PfdOpIsSet = true;
}
bool NotificationPush::pfdOpIsSet() const { return m_PfdOpIsSet; }
void NotificationPush::unsetPfdOp() { m_PfdOpIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org