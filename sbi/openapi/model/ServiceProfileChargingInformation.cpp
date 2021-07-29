/**
 * Nchf_ConvergedCharging
 * ConvergedCharging Service    © 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 3.0.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ServiceProfileChargingInformation.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ServiceProfileChargingInformation::ServiceProfileChargingInformation() {
  m_ServiceProfileIdentifier = "";
  m_ServiceProfileIdentifierIsSet = false;
  m_SNSSAIListIsSet = false;
  m_Latency = 0;
  m_LatencyIsSet = false;
  m_Availability = 0.0;
  m_AvailabilityIsSet = false;
  m_Jitter = 0;
  m_JitterIsSet = false;
  m_Reliability = "";
  m_ReliabilityIsSet = false;
  m_MaxNumberofUEs = 0;
  m_MaxNumberofUEsIsSet = false;
  m_CoverageArea = "";
  m_CoverageAreaIsSet = false;
  m_DLThptPerSliceIsSet = false;
  m_DLThptPerUEIsSet = false;
  m_ULThptPerSliceIsSet = false;
  m_ULThptPerUEIsSet = false;
  m_MaxNumberofPDUsessions = 0;
  m_MaxNumberofPDUsessionsIsSet = false;
  m_KPIMonitoringList = "";
  m_KPIMonitoringListIsSet = false;
  m_SupportedAccessTechnology = 0;
  m_SupportedAccessTechnologyIsSet = false;
  m_AddServiceProfileInfo = "";
  m_AddServiceProfileInfoIsSet = false;
}

ServiceProfileChargingInformation::~ServiceProfileChargingInformation() {}

void ServiceProfileChargingInformation::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const ServiceProfileChargingInformation &o) {
  j = nlohmann::json();
  if (o.serviceProfileIdentifierIsSet())
    j["serviceProfileIdentifier"] = o.m_ServiceProfileIdentifier;
  if (o.sNSSAIListIsSet() || !o.m_SNSSAIList.empty())
    j["sNSSAIList"] = o.m_SNSSAIList;
  if (o.latencyIsSet())
    j["latency"] = o.m_Latency;
  if (o.availabilityIsSet())
    j["availability"] = o.m_Availability;
  if (o.jitterIsSet())
    j["jitter"] = o.m_Jitter;
  if (o.reliabilityIsSet())
    j["reliability"] = o.m_Reliability;
  if (o.maxNumberofUEsIsSet())
    j["maxNumberofUEs"] = o.m_MaxNumberofUEs;
  if (o.coverageAreaIsSet())
    j["coverageArea"] = o.m_CoverageArea;
  if (o.dLThptPerSliceIsSet())
    j["dLThptPerSlice"] = o.m_DLThptPerSlice;
  if (o.dLThptPerUEIsSet())
    j["dLThptPerUE"] = o.m_DLThptPerUE;
  if (o.uLThptPerSliceIsSet())
    j["uLThptPerSlice"] = o.m_ULThptPerSlice;
  if (o.uLThptPerUEIsSet())
    j["uLThptPerUE"] = o.m_ULThptPerUE;
  if (o.maxNumberofPDUsessionsIsSet())
    j["maxNumberofPDUsessions"] = o.m_MaxNumberofPDUsessions;
  if (o.kPIMonitoringListIsSet())
    j["kPIMonitoringList"] = o.m_KPIMonitoringList;
  if (o.supportedAccessTechnologyIsSet())
    j["supportedAccessTechnology"] = o.m_SupportedAccessTechnology;
  if (o.addServiceProfileInfoIsSet())
    j["addServiceProfileInfo"] = o.m_AddServiceProfileInfo;
}

void from_json(const nlohmann::json &j, ServiceProfileChargingInformation &o) {
  if (j.find("serviceProfileIdentifier") != j.end()) {
    j.at("serviceProfileIdentifier").get_to(o.m_ServiceProfileIdentifier);
    o.m_ServiceProfileIdentifierIsSet = true;
  }
  if (j.find("sNSSAIList") != j.end()) {
    j.at("sNSSAIList").get_to(o.m_SNSSAIList);
    o.m_SNSSAIListIsSet = true;
  }
  if (j.find("latency") != j.end()) {
    j.at("latency").get_to(o.m_Latency);
    o.m_LatencyIsSet = true;
  }
  if (j.find("availability") != j.end()) {
    j.at("availability").get_to(o.m_Availability);
    o.m_AvailabilityIsSet = true;
  }
  if (j.find("jitter") != j.end()) {
    j.at("jitter").get_to(o.m_Jitter);
    o.m_JitterIsSet = true;
  }
  if (j.find("reliability") != j.end()) {
    j.at("reliability").get_to(o.m_Reliability);
    o.m_ReliabilityIsSet = true;
  }
  if (j.find("maxNumberofUEs") != j.end()) {
    j.at("maxNumberofUEs").get_to(o.m_MaxNumberofUEs);
    o.m_MaxNumberofUEsIsSet = true;
  }
  if (j.find("coverageArea") != j.end()) {
    j.at("coverageArea").get_to(o.m_CoverageArea);
    o.m_CoverageAreaIsSet = true;
  }
  if (j.find("dLThptPerSlice") != j.end()) {
    j.at("dLThptPerSlice").get_to(o.m_DLThptPerSlice);
    o.m_DLThptPerSliceIsSet = true;
  }
  if (j.find("dLThptPerUE") != j.end()) {
    j.at("dLThptPerUE").get_to(o.m_DLThptPerUE);
    o.m_DLThptPerUEIsSet = true;
  }
  if (j.find("uLThptPerSlice") != j.end()) {
    j.at("uLThptPerSlice").get_to(o.m_ULThptPerSlice);
    o.m_ULThptPerSliceIsSet = true;
  }
  if (j.find("uLThptPerUE") != j.end()) {
    j.at("uLThptPerUE").get_to(o.m_ULThptPerUE);
    o.m_ULThptPerUEIsSet = true;
  }
  if (j.find("maxNumberofPDUsessions") != j.end()) {
    j.at("maxNumberofPDUsessions").get_to(o.m_MaxNumberofPDUsessions);
    o.m_MaxNumberofPDUsessionsIsSet = true;
  }
  if (j.find("kPIMonitoringList") != j.end()) {
    j.at("kPIMonitoringList").get_to(o.m_KPIMonitoringList);
    o.m_KPIMonitoringListIsSet = true;
  }
  if (j.find("supportedAccessTechnology") != j.end()) {
    j.at("supportedAccessTechnology").get_to(o.m_SupportedAccessTechnology);
    o.m_SupportedAccessTechnologyIsSet = true;
  }
  if (j.find("addServiceProfileInfo") != j.end()) {
    j.at("addServiceProfileInfo").get_to(o.m_AddServiceProfileInfo);
    o.m_AddServiceProfileInfoIsSet = true;
  }
}

std::string
ServiceProfileChargingInformation::getServiceProfileIdentifier() const {
  return m_ServiceProfileIdentifier;
}
void ServiceProfileChargingInformation::setServiceProfileIdentifier(
    std::string const &value) {
  m_ServiceProfileIdentifier = value;
  m_ServiceProfileIdentifierIsSet = true;
}
bool ServiceProfileChargingInformation::serviceProfileIdentifierIsSet() const {
  return m_ServiceProfileIdentifierIsSet;
}
void ServiceProfileChargingInformation::unsetServiceProfileIdentifier() {
  m_ServiceProfileIdentifierIsSet = false;
}
std::vector<Snssai> &ServiceProfileChargingInformation::getSNSSAIList() {
  return m_SNSSAIList;
}
void ServiceProfileChargingInformation::setSNSSAIList(
    std::vector<Snssai> const &value) {
  m_SNSSAIList = value;
  m_SNSSAIListIsSet = true;
}
bool ServiceProfileChargingInformation::sNSSAIListIsSet() const {
  return m_SNSSAIListIsSet;
}
void ServiceProfileChargingInformation::unsetSNSSAIList() {
  m_SNSSAIListIsSet = false;
}
int32_t ServiceProfileChargingInformation::getLatency() const {
  return m_Latency;
}
void ServiceProfileChargingInformation::setLatency(int32_t const value) {
  m_Latency = value;
  m_LatencyIsSet = true;
}
bool ServiceProfileChargingInformation::latencyIsSet() const {
  return m_LatencyIsSet;
}
void ServiceProfileChargingInformation::unsetLatency() {
  m_LatencyIsSet = false;
}
double ServiceProfileChargingInformation::getAvailability() const {
  return m_Availability;
}
void ServiceProfileChargingInformation::setAvailability(double const value) {
  m_Availability = value;
  m_AvailabilityIsSet = true;
}
bool ServiceProfileChargingInformation::availabilityIsSet() const {
  return m_AvailabilityIsSet;
}
void ServiceProfileChargingInformation::unsetAvailability() {
  m_AvailabilityIsSet = false;
}
int32_t ServiceProfileChargingInformation::getJitter() const {
  return m_Jitter;
}
void ServiceProfileChargingInformation::setJitter(int32_t const value) {
  m_Jitter = value;
  m_JitterIsSet = true;
}
bool ServiceProfileChargingInformation::jitterIsSet() const {
  return m_JitterIsSet;
}
void ServiceProfileChargingInformation::unsetJitter() { m_JitterIsSet = false; }
std::string ServiceProfileChargingInformation::getReliability() const {
  return m_Reliability;
}
void ServiceProfileChargingInformation::setReliability(
    std::string const &value) {
  m_Reliability = value;
  m_ReliabilityIsSet = true;
}
bool ServiceProfileChargingInformation::reliabilityIsSet() const {
  return m_ReliabilityIsSet;
}
void ServiceProfileChargingInformation::unsetReliability() {
  m_ReliabilityIsSet = false;
}
int32_t ServiceProfileChargingInformation::getMaxNumberofUEs() const {
  return m_MaxNumberofUEs;
}
void ServiceProfileChargingInformation::setMaxNumberofUEs(int32_t const value) {
  m_MaxNumberofUEs = value;
  m_MaxNumberofUEsIsSet = true;
}
bool ServiceProfileChargingInformation::maxNumberofUEsIsSet() const {
  return m_MaxNumberofUEsIsSet;
}
void ServiceProfileChargingInformation::unsetMaxNumberofUEs() {
  m_MaxNumberofUEsIsSet = false;
}
std::string ServiceProfileChargingInformation::getCoverageArea() const {
  return m_CoverageArea;
}
void ServiceProfileChargingInformation::setCoverageArea(
    std::string const &value) {
  m_CoverageArea = value;
  m_CoverageAreaIsSet = true;
}
bool ServiceProfileChargingInformation::coverageAreaIsSet() const {
  return m_CoverageAreaIsSet;
}
void ServiceProfileChargingInformation::unsetCoverageArea() {
  m_CoverageAreaIsSet = false;
}
Throughput ServiceProfileChargingInformation::getDLThptPerSlice() const {
  return m_DLThptPerSlice;
}
void ServiceProfileChargingInformation::setDLThptPerSlice(
    Throughput const &value) {
  m_DLThptPerSlice = value;
  m_DLThptPerSliceIsSet = true;
}
bool ServiceProfileChargingInformation::dLThptPerSliceIsSet() const {
  return m_DLThptPerSliceIsSet;
}
void ServiceProfileChargingInformation::unsetDLThptPerSlice() {
  m_DLThptPerSliceIsSet = false;
}
Throughput ServiceProfileChargingInformation::getDLThptPerUE() const {
  return m_DLThptPerUE;
}
void ServiceProfileChargingInformation::setDLThptPerUE(
    Throughput const &value) {
  m_DLThptPerUE = value;
  m_DLThptPerUEIsSet = true;
}
bool ServiceProfileChargingInformation::dLThptPerUEIsSet() const {
  return m_DLThptPerUEIsSet;
}
void ServiceProfileChargingInformation::unsetDLThptPerUE() {
  m_DLThptPerUEIsSet = false;
}
Throughput ServiceProfileChargingInformation::getULThptPerSlice() const {
  return m_ULThptPerSlice;
}
void ServiceProfileChargingInformation::setULThptPerSlice(
    Throughput const &value) {
  m_ULThptPerSlice = value;
  m_ULThptPerSliceIsSet = true;
}
bool ServiceProfileChargingInformation::uLThptPerSliceIsSet() const {
  return m_ULThptPerSliceIsSet;
}
void ServiceProfileChargingInformation::unsetULThptPerSlice() {
  m_ULThptPerSliceIsSet = false;
}
Throughput ServiceProfileChargingInformation::getULThptPerUE() const {
  return m_ULThptPerUE;
}
void ServiceProfileChargingInformation::setULThptPerUE(
    Throughput const &value) {
  m_ULThptPerUE = value;
  m_ULThptPerUEIsSet = true;
}
bool ServiceProfileChargingInformation::uLThptPerUEIsSet() const {
  return m_ULThptPerUEIsSet;
}
void ServiceProfileChargingInformation::unsetULThptPerUE() {
  m_ULThptPerUEIsSet = false;
}
int32_t ServiceProfileChargingInformation::getMaxNumberofPDUsessions() const {
  return m_MaxNumberofPDUsessions;
}
void ServiceProfileChargingInformation::setMaxNumberofPDUsessions(
    int32_t const value) {
  m_MaxNumberofPDUsessions = value;
  m_MaxNumberofPDUsessionsIsSet = true;
}
bool ServiceProfileChargingInformation::maxNumberofPDUsessionsIsSet() const {
  return m_MaxNumberofPDUsessionsIsSet;
}
void ServiceProfileChargingInformation::unsetMaxNumberofPDUsessions() {
  m_MaxNumberofPDUsessionsIsSet = false;
}
std::string ServiceProfileChargingInformation::getKPIMonitoringList() const {
  return m_KPIMonitoringList;
}
void ServiceProfileChargingInformation::setKPIMonitoringList(
    std::string const &value) {
  m_KPIMonitoringList = value;
  m_KPIMonitoringListIsSet = true;
}
bool ServiceProfileChargingInformation::kPIMonitoringListIsSet() const {
  return m_KPIMonitoringListIsSet;
}
void ServiceProfileChargingInformation::unsetKPIMonitoringList() {
  m_KPIMonitoringListIsSet = false;
}
int32_t
ServiceProfileChargingInformation::getSupportedAccessTechnology() const {
  return m_SupportedAccessTechnology;
}
void ServiceProfileChargingInformation::setSupportedAccessTechnology(
    int32_t const value) {
  m_SupportedAccessTechnology = value;
  m_SupportedAccessTechnologyIsSet = true;
}
bool ServiceProfileChargingInformation::supportedAccessTechnologyIsSet() const {
  return m_SupportedAccessTechnologyIsSet;
}
void ServiceProfileChargingInformation::unsetSupportedAccessTechnology() {
  m_SupportedAccessTechnologyIsSet = false;
}
std::string
ServiceProfileChargingInformation::getAddServiceProfileInfo() const {
  return m_AddServiceProfileInfo;
}
void ServiceProfileChargingInformation::setAddServiceProfileInfo(
    std::string const &value) {
  m_AddServiceProfileInfo = value;
  m_AddServiceProfileInfoIsSet = true;
}
bool ServiceProfileChargingInformation::addServiceProfileInfoIsSet() const {
  return m_AddServiceProfileInfoIsSet;
}
void ServiceProfileChargingInformation::unsetAddServiceProfileInfo() {
  m_AddServiceProfileInfoIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org