/**
 * TS 29.122 Common Data Types
 * Data types applicable to several APIs. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "EventReport.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

EventReport::EventReport() {
  m_AccumulatedUsageIsSet = false;
  m_FlowIdsIsSet = false;
}

EventReport::~EventReport() {}

void EventReport::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const EventReport &o) {
  j = nlohmann::json();
  j["event"] = o.m_Event;
  if (o.accumulatedUsageIsSet())
    j["accumulatedUsage"] = o.m_AccumulatedUsage;
  if (o.flowIdsIsSet() || !o.m_FlowIds.empty())
    j["flowIds"] = o.m_FlowIds;
}

void from_json(const nlohmann::json &j, EventReport &o) {
  j.at("event").get_to(o.m_Event);
  if (j.find("accumulatedUsage") != j.end()) {
    j.at("accumulatedUsage").get_to(o.m_AccumulatedUsage);
    o.m_AccumulatedUsageIsSet = true;
  }
  if (j.find("flowIds") != j.end()) {
    j.at("flowIds").get_to(o.m_FlowIds);
    o.m_FlowIdsIsSet = true;
  }
}

Event EventReport::getEvent() const { return m_Event; }
void EventReport::setEvent(Event const &value) { m_Event = value; }
AccumulatedUsage EventReport::getAccumulatedUsage() const {
  return m_AccumulatedUsage;
}
void EventReport::setAccumulatedUsage(AccumulatedUsage const &value) {
  m_AccumulatedUsage = value;
  m_AccumulatedUsageIsSet = true;
}
bool EventReport::accumulatedUsageIsSet() const {
  return m_AccumulatedUsageIsSet;
}
void EventReport::unsetAccumulatedUsage() { m_AccumulatedUsageIsSet = false; }
std::vector<int32_t> &EventReport::getFlowIds() { return m_FlowIds; }
void EventReport::setFlowIds(std::vector<int32_t> const value) {
  m_FlowIds = value;
  m_FlowIdsIsSet = true;
}
bool EventReport::flowIdsIsSet() const { return m_FlowIdsIsSet; }
void EventReport::unsetFlowIds() { m_FlowIdsIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
