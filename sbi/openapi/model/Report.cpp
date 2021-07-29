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

#include "Report.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

Report::Report() { m_ReachabilityForSmsReportIsSet = false; }

Report::~Report() {}

void Report::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const Report &o) {
  j = nlohmann::json();
  if (o.reachabilityForSmsReportIsSet())
    j["reachabilityForSmsReport"] = o.m_ReachabilityForSmsReport;
}

void from_json(const nlohmann::json &j, Report &o) {
  if (j.find("reachabilityForSmsReport") != j.end()) {
    j.at("reachabilityForSmsReport").get_to(o.m_ReachabilityForSmsReport);
    o.m_ReachabilityForSmsReportIsSet = true;
  }
}

ReachabilityForSmsReport Report::getReachabilityForSmsReport() const {
  return m_ReachabilityForSmsReport;
}
void Report::setReachabilityForSmsReport(
    ReachabilityForSmsReport const &value) {
  m_ReachabilityForSmsReport = value;
  m_ReachabilityForSmsReportIsSet = true;
}
bool Report::reachabilityForSmsReportIsSet() const {
  return m_ReachabilityForSmsReportIsSet;
}
void Report::unsetReachabilityForSmsReport() {
  m_ReachabilityForSmsReportIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
