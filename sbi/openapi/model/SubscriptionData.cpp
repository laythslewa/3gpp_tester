/**
 * Nhss_SDM
 * HSS Subscriber Data Management. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SubscriptionData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

SubscriptionData::SubscriptionData() {
  m_NfInstanceId = "";
  m_CallbackReference = "";
  m_Expires = "";
  m_ExpiresIsSet = false;
  m_ImmediateReport = false;
  m_ImmediateReportIsSet = false;
  m_ReportIsSet = false;
}

SubscriptionData::~SubscriptionData() {}

void SubscriptionData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const SubscriptionData &o) {
  j = nlohmann::json();
  j["nfInstanceId"] = o.m_NfInstanceId;
  j["callbackReference"] = o.m_CallbackReference;
  j["monitoredResourceUris"] = o.m_MonitoredResourceUris;
  if (o.expiresIsSet())
    j["expires"] = o.m_Expires;
  if (o.immediateReportIsSet())
    j["immediateReport"] = o.m_ImmediateReport;
  if (o.reportIsSet())
    j["report"] = o.m_Report;
}

void from_json(const nlohmann::json &j, SubscriptionData &o) {
  j.at("nfInstanceId").get_to(o.m_NfInstanceId);
  j.at("callbackReference").get_to(o.m_CallbackReference);
  j.at("monitoredResourceUris").get_to(o.m_MonitoredResourceUris);
  if (j.find("expires") != j.end()) {
    j.at("expires").get_to(o.m_Expires);
    o.m_ExpiresIsSet = true;
  }
  if (j.find("immediateReport") != j.end()) {
    j.at("immediateReport").get_to(o.m_ImmediateReport);
    o.m_ImmediateReportIsSet = true;
  }
  if (j.find("report") != j.end()) {
    j.at("report").get_to(o.m_Report);
    o.m_ReportIsSet = true;
  }
}

std::string SubscriptionData::getNfInstanceId() const { return m_NfInstanceId; }
void SubscriptionData::setNfInstanceId(std::string const &value) {
  m_NfInstanceId = value;
}
std::string SubscriptionData::getCallbackReference() const {
  return m_CallbackReference;
}
void SubscriptionData::setCallbackReference(std::string const &value) {
  m_CallbackReference = value;
}
std::vector<std::string> &SubscriptionData::getMonitoredResourceUris() {
  return m_MonitoredResourceUris;
}
void SubscriptionData::setMonitoredResourceUris(
    std::vector<std::string> const &value) {
  m_MonitoredResourceUris = value;
}
std::string SubscriptionData::getExpires() const { return m_Expires; }
void SubscriptionData::setExpires(std::string const &value) {
  m_Expires = value;
  m_ExpiresIsSet = true;
}
bool SubscriptionData::expiresIsSet() const { return m_ExpiresIsSet; }
void SubscriptionData::unsetExpires() { m_ExpiresIsSet = false; }
bool SubscriptionData::isImmediateReport() const { return m_ImmediateReport; }
void SubscriptionData::setImmediateReport(bool const value) {
  m_ImmediateReport = value;
  m_ImmediateReportIsSet = true;
}
bool SubscriptionData::immediateReportIsSet() const {
  return m_ImmediateReportIsSet;
}
void SubscriptionData::unsetImmediateReport() {
  m_ImmediateReportIsSet = false;
}
SubscriptionDataSets SubscriptionData::getReport() const { return m_Report; }
void SubscriptionData::setReport(SubscriptionDataSets const &value) {
  m_Report = value;
  m_ReportIsSet = true;
}
bool SubscriptionData::reportIsSet() const { return m_ReportIsSet; }
void SubscriptionData::unsetReport() { m_ReportIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
