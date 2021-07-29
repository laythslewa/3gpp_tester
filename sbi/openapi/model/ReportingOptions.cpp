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

#include "ReportingOptions.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ReportingOptions::ReportingOptions() {
  m_MaxNumOfReports = 0;
  m_MaxNumOfReportsIsSet = false;
  m_Expiry = "";
  m_ExpiryIsSet = false;
  m_ReportPeriod = 0;
  m_ReportPeriodIsSet = false;
}

ReportingOptions::~ReportingOptions() {}

void ReportingOptions::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const ReportingOptions &o) {
  j = nlohmann::json();
  if (o.maxNumOfReportsIsSet())
    j["maxNumOfReports"] = o.m_MaxNumOfReports;
  if (o.expiryIsSet())
    j["expiry"] = o.m_Expiry;
  if (o.reportPeriodIsSet())
    j["reportPeriod"] = o.m_ReportPeriod;
}

void from_json(const nlohmann::json &j, ReportingOptions &o) {
  if (j.find("maxNumOfReports") != j.end()) {
    j.at("maxNumOfReports").get_to(o.m_MaxNumOfReports);
    o.m_MaxNumOfReportsIsSet = true;
  }
  if (j.find("expiry") != j.end()) {
    j.at("expiry").get_to(o.m_Expiry);
    o.m_ExpiryIsSet = true;
  }
  if (j.find("reportPeriod") != j.end()) {
    j.at("reportPeriod").get_to(o.m_ReportPeriod);
    o.m_ReportPeriodIsSet = true;
  }
}

int32_t ReportingOptions::getMaxNumOfReports() const {
  return m_MaxNumOfReports;
}
void ReportingOptions::setMaxNumOfReports(int32_t const value) {
  m_MaxNumOfReports = value;
  m_MaxNumOfReportsIsSet = true;
}
bool ReportingOptions::maxNumOfReportsIsSet() const {
  return m_MaxNumOfReportsIsSet;
}
void ReportingOptions::unsetMaxNumOfReports() {
  m_MaxNumOfReportsIsSet = false;
}
std::string ReportingOptions::getExpiry() const { return m_Expiry; }
void ReportingOptions::setExpiry(std::string const &value) {
  m_Expiry = value;
  m_ExpiryIsSet = true;
}
bool ReportingOptions::expiryIsSet() const { return m_ExpiryIsSet; }
void ReportingOptions::unsetExpiry() { m_ExpiryIsSet = false; }
int32_t ReportingOptions::getReportPeriod() const { return m_ReportPeriod; }
void ReportingOptions::setReportPeriod(int32_t const value) {
  m_ReportPeriod = value;
  m_ReportPeriodIsSet = true;
}
bool ReportingOptions::reportPeriodIsSet() const { return m_ReportPeriodIsSet; }
void ReportingOptions::unsetReportPeriod() { m_ReportPeriodIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org