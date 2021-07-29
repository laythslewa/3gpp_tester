/**
 * 3gpp-analyticsexposure
 * API for Analytics Exposure. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ScheduledCommunicationTime_2.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ScheduledCommunicationTime_2::ScheduledCommunicationTime_2() {
  m_DaysOfWeekIsSet = false;
  m_TimeOfDayStart = "";
  m_TimeOfDayStartIsSet = false;
  m_TimeOfDayEnd = "";
  m_TimeOfDayEndIsSet = false;
}

ScheduledCommunicationTime_2::~ScheduledCommunicationTime_2() {}

void ScheduledCommunicationTime_2::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const ScheduledCommunicationTime_2 &o) {
  j = nlohmann::json();
  if (o.daysOfWeekIsSet() || !o.m_DaysOfWeek.empty())
    j["daysOfWeek"] = o.m_DaysOfWeek;
  if (o.timeOfDayStartIsSet())
    j["timeOfDayStart"] = o.m_TimeOfDayStart;
  if (o.timeOfDayEndIsSet())
    j["timeOfDayEnd"] = o.m_TimeOfDayEnd;
}

void from_json(const nlohmann::json &j, ScheduledCommunicationTime_2 &o) {
  if (j.find("daysOfWeek") != j.end()) {
    j.at("daysOfWeek").get_to(o.m_DaysOfWeek);
    o.m_DaysOfWeekIsSet = true;
  }
  if (j.find("timeOfDayStart") != j.end()) {
    j.at("timeOfDayStart").get_to(o.m_TimeOfDayStart);
    o.m_TimeOfDayStartIsSet = true;
  }
  if (j.find("timeOfDayEnd") != j.end()) {
    j.at("timeOfDayEnd").get_to(o.m_TimeOfDayEnd);
    o.m_TimeOfDayEndIsSet = true;
  }
}

std::vector<int32_t> &ScheduledCommunicationTime_2::getDaysOfWeek() {
  return m_DaysOfWeek;
}
void ScheduledCommunicationTime_2::setDaysOfWeek(
    std::vector<int32_t> const value) {
  m_DaysOfWeek = value;
  m_DaysOfWeekIsSet = true;
}
bool ScheduledCommunicationTime_2::daysOfWeekIsSet() const {
  return m_DaysOfWeekIsSet;
}
void ScheduledCommunicationTime_2::unsetDaysOfWeek() {
  m_DaysOfWeekIsSet = false;
}
std::string ScheduledCommunicationTime_2::getTimeOfDayStart() const {
  return m_TimeOfDayStart;
}
void ScheduledCommunicationTime_2::setTimeOfDayStart(std::string const &value) {
  m_TimeOfDayStart = value;
  m_TimeOfDayStartIsSet = true;
}
bool ScheduledCommunicationTime_2::timeOfDayStartIsSet() const {
  return m_TimeOfDayStartIsSet;
}
void ScheduledCommunicationTime_2::unsetTimeOfDayStart() {
  m_TimeOfDayStartIsSet = false;
}
std::string ScheduledCommunicationTime_2::getTimeOfDayEnd() const {
  return m_TimeOfDayEnd;
}
void ScheduledCommunicationTime_2::setTimeOfDayEnd(std::string const &value) {
  m_TimeOfDayEnd = value;
  m_TimeOfDayEndIsSet = true;
}
bool ScheduledCommunicationTime_2::timeOfDayEndIsSet() const {
  return m_TimeOfDayEndIsSet;
}
void ScheduledCommunicationTime_2::unsetTimeOfDayEnd() {
  m_TimeOfDayEndIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org