/**
 * Nhss_EE
 * HSS Event Exposure © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA,
 * ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "MonitoringReport.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

MonitoringReport::MonitoringReport() {
  m_ReferenceId = 0;
  m_TimeStamp = "";
  m_ReportIsSet = false;
}

MonitoringReport::~MonitoringReport() {}

void MonitoringReport::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const MonitoringReport &o) {
  j = nlohmann::json();
  j["referenceId"] = o.m_ReferenceId;
  j["eventType"] = o.m_EventType;
  j["timeStamp"] = o.m_TimeStamp;
  if (o.reportIsSet())
    j["report"] = o.m_Report;
}

void from_json(const nlohmann::json &j, MonitoringReport &o) {
  j.at("referenceId").get_to(o.m_ReferenceId);
  j.at("eventType").get_to(o.m_EventType);
  j.at("timeStamp").get_to(o.m_TimeStamp);
  if (j.find("report") != j.end()) {
    j.at("report").get_to(o.m_Report);
    o.m_ReportIsSet = true;
  }
}

int32_t MonitoringReport::getReferenceId() const { return m_ReferenceId; }
void MonitoringReport::setReferenceId(int32_t const value) {
  m_ReferenceId = value;
}
EventType MonitoringReport::getEventType() const { return m_EventType; }
void MonitoringReport::setEventType(EventType const &value) {
  m_EventType = value;
}
std::string MonitoringReport::getTimeStamp() const { return m_TimeStamp; }
void MonitoringReport::setTimeStamp(std::string const &value) {
  m_TimeStamp = value;
}
Report MonitoringReport::getReport() const { return m_Report; }
void MonitoringReport::setReport(Report const &value) {
  m_Report = value;
  m_ReportIsSet = true;
}
bool MonitoringReport::reportIsSet() const { return m_ReportIsSet; }
void MonitoringReport::unsetReport() { m_ReportIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org