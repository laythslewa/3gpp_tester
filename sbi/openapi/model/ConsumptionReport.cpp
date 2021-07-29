/**
 * M5_ConsumptionReporting
 * 5GMS AF M5 Consumption Reporting API © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ConsumptionReport.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ConsumptionReport::ConsumptionReport() {
  m_MediaPlayerEntry = "";
  m_ReportingClientId = "";
}

ConsumptionReport::~ConsumptionReport() {}

void ConsumptionReport::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const ConsumptionReport &o) {
  j = nlohmann::json();
  j["mediaPlayerEntry"] = o.m_MediaPlayerEntry;
  j["reportingClientId"] = o.m_ReportingClientId;
  j["consumptionReportingUnits"] = o.m_ConsumptionReportingUnits;
}

void from_json(const nlohmann::json &j, ConsumptionReport &o) {
  j.at("mediaPlayerEntry").get_to(o.m_MediaPlayerEntry);
  j.at("reportingClientId").get_to(o.m_ReportingClientId);
  j.at("consumptionReportingUnits").get_to(o.m_ConsumptionReportingUnits);
}

std::string ConsumptionReport::getMediaPlayerEntry() const {
  return m_MediaPlayerEntry;
}
void ConsumptionReport::setMediaPlayerEntry(std::string const &value) {
  m_MediaPlayerEntry = value;
}
std::string ConsumptionReport::getReportingClientId() const {
  return m_ReportingClientId;
}
void ConsumptionReport::setReportingClientId(std::string const &value) {
  m_ReportingClientId = value;
}
std::vector<ConsumptionReportingUnit> &
ConsumptionReport::getConsumptionReportingUnits() {
  return m_ConsumptionReportingUnits;
}
void ConsumptionReport::setConsumptionReportingUnits(
    std::vector<ConsumptionReportingUnit> const &value) {
  m_ConsumptionReportingUnits = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
