/**
 * Nchf_OfflineOnlyCharging
 * OfflineOnlyCharging Service © 2020, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SubscribedDefaultQos.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

SubscribedDefaultQos::SubscribedDefaultQos() {
  m_r_5qi = 0;
  m_PriorityLevel = 0;
  m_PriorityLevelIsSet = false;
}

SubscribedDefaultQos::~SubscribedDefaultQos() {}

void SubscribedDefaultQos::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const SubscribedDefaultQos &o) {
  j = nlohmann::json();
  j["5qi"] = o.m_r_5qi;
  j["arp"] = o.m_Arp;
  if (o.priorityLevelIsSet())
    j["priorityLevel"] = o.m_PriorityLevel;
}

void from_json(const nlohmann::json &j, SubscribedDefaultQos &o) {
  j.at("5qi").get_to(o.m_r_5qi);
  j.at("arp").get_to(o.m_Arp);
  if (j.find("priorityLevel") != j.end()) {
    j.at("priorityLevel").get_to(o.m_PriorityLevel);
    o.m_PriorityLevelIsSet = true;
  }
}

int32_t SubscribedDefaultQos::getR5qi() const { return m_r_5qi; }
void SubscribedDefaultQos::setR5qi(int32_t const value) { m_r_5qi = value; }
Arp SubscribedDefaultQos::getArp() const { return m_Arp; }
void SubscribedDefaultQos::setArp(Arp const &value) { m_Arp = value; }
int32_t SubscribedDefaultQos::getPriorityLevel() const {
  return m_PriorityLevel;
}
void SubscribedDefaultQos::setPriorityLevel(int32_t const value) {
  m_PriorityLevel = value;
  m_PriorityLevelIsSet = true;
}
bool SubscribedDefaultQos::priorityLevelIsSet() const {
  return m_PriorityLevelIsSet;
}
void SubscribedDefaultQos::unsetPriorityLevel() {
  m_PriorityLevelIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
