/**
 * Nnef_EventExposure
 * NEF Event Exposure Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "TimeWindow.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

TimeWindow::TimeWindow() {
  m_StartTime = "";
  m_StopTime = "";
}

TimeWindow::~TimeWindow() {}

void TimeWindow::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const TimeWindow &o) {
  j = nlohmann::json();
  j["startTime"] = o.m_StartTime;
  j["stopTime"] = o.m_StopTime;
}

void from_json(const nlohmann::json &j, TimeWindow &o) {
  j.at("startTime").get_to(o.m_StartTime);
  j.at("stopTime").get_to(o.m_StopTime);
}

std::string TimeWindow::getStartTime() const { return m_StartTime; }
void TimeWindow::setStartTime(std::string const &value) { m_StartTime = value; }
std::string TimeWindow::getStopTime() const { return m_StopTime; }
void TimeWindow::setStopTime(std::string const &value) { m_StopTime = value; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
