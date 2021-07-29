/**
 * M5_ServiceAccessInformation
 * 5GMS AF M5 Service Access Information API © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ServiceAccessInformationResource_ClientMetricsReportingConfiguration.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ServiceAccessInformationResource_ClientMetricsReportingConfiguration::
    ServiceAccessInformationResource_ClientMetricsReportingConfiguration() {
  m_DataNetworkName = "";
  m_DataNetworkNameIsSet = false;
  m_ReportingInterval = 0;
  m_ReportingIntervalIsSet = false;
  m_SamplePercentage = 0.0;
}

ServiceAccessInformationResource_ClientMetricsReportingConfiguration::
    ~ServiceAccessInformationResource_ClientMetricsReportingConfiguration() {}

void ServiceAccessInformationResource_ClientMetricsReportingConfiguration::
    validate() {
  // TODO: implement validation
}

void to_json(
    nlohmann::json &j,
    const ServiceAccessInformationResource_ClientMetricsReportingConfiguration
        &o) {
  j = nlohmann::json();
  j["serverAddresses"] = o.m_ServerAddresses;
  if (o.dataNetworkNameIsSet())
    j["dataNetworkName"] = o.m_DataNetworkName;
  if (o.reportingIntervalIsSet())
    j["reportingInterval"] = o.m_ReportingInterval;
  j["samplePercentage"] = o.m_SamplePercentage;
  j["urlFilters"] = o.m_UrlFilters;
  j["metrics"] = o.m_Metrics;
}

void from_json(
    const nlohmann::json &j,
    ServiceAccessInformationResource_ClientMetricsReportingConfiguration &o) {
  j.at("serverAddresses").get_to(o.m_ServerAddresses);
  if (j.find("dataNetworkName") != j.end()) {
    j.at("dataNetworkName").get_to(o.m_DataNetworkName);
    o.m_DataNetworkNameIsSet = true;
  }
  if (j.find("reportingInterval") != j.end()) {
    j.at("reportingInterval").get_to(o.m_ReportingInterval);
    o.m_ReportingIntervalIsSet = true;
  }
  j.at("samplePercentage").get_to(o.m_SamplePercentage);
  j.at("urlFilters").get_to(o.m_UrlFilters);
  j.at("metrics").get_to(o.m_Metrics);
}

std::vector<std::string> &
ServiceAccessInformationResource_ClientMetricsReportingConfiguration::
    getServerAddresses() {
  return m_ServerAddresses;
}
void ServiceAccessInformationResource_ClientMetricsReportingConfiguration::
    setServerAddresses(std::vector<std::string> const &value) {
  m_ServerAddresses = value;
}
std::string
ServiceAccessInformationResource_ClientMetricsReportingConfiguration::
    getDataNetworkName() const {
  return m_DataNetworkName;
}
void ServiceAccessInformationResource_ClientMetricsReportingConfiguration::
    setDataNetworkName(std::string const &value) {
  m_DataNetworkName = value;
  m_DataNetworkNameIsSet = true;
}
bool ServiceAccessInformationResource_ClientMetricsReportingConfiguration::
    dataNetworkNameIsSet() const {
  return m_DataNetworkNameIsSet;
}
void ServiceAccessInformationResource_ClientMetricsReportingConfiguration::
    unsetDataNetworkName() {
  m_DataNetworkNameIsSet = false;
}
int32_t ServiceAccessInformationResource_ClientMetricsReportingConfiguration::
    getReportingInterval() const {
  return m_ReportingInterval;
}
void ServiceAccessInformationResource_ClientMetricsReportingConfiguration::
    setReportingInterval(int32_t const value) {
  m_ReportingInterval = value;
  m_ReportingIntervalIsSet = true;
}
bool ServiceAccessInformationResource_ClientMetricsReportingConfiguration::
    reportingIntervalIsSet() const {
  return m_ReportingIntervalIsSet;
}
void ServiceAccessInformationResource_ClientMetricsReportingConfiguration::
    unsetReportingInterval() {
  m_ReportingIntervalIsSet = false;
}
double ServiceAccessInformationResource_ClientMetricsReportingConfiguration::
    getSamplePercentage() const {
  return m_SamplePercentage;
}
void ServiceAccessInformationResource_ClientMetricsReportingConfiguration::
    setSamplePercentage(double const value) {
  m_SamplePercentage = value;
}
std::vector<std::string> &
ServiceAccessInformationResource_ClientMetricsReportingConfiguration::
    getUrlFilters() {
  return m_UrlFilters;
}
void ServiceAccessInformationResource_ClientMetricsReportingConfiguration::
    setUrlFilters(std::vector<std::string> const &value) {
  m_UrlFilters = value;
}
std::vector<std::string> &
ServiceAccessInformationResource_ClientMetricsReportingConfiguration::
    getMetrics() {
  return m_Metrics;
}
void ServiceAccessInformationResource_ClientMetricsReportingConfiguration::
    setMetrics(std::vector<std::string> const &value) {
  m_Metrics = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
