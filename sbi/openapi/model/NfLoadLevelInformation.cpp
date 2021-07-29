/**
 * Nnwdaf_EventsSubscription
 * Nnwdaf_EventsSubscription Service API. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "NfLoadLevelInformation.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

NfLoadLevelInformation::NfLoadLevelInformation() {
  m_NfInstanceId = "";
  m_NfSetId = "";
  m_NfSetIdIsSet = false;
  m_NfStatusIsSet = false;
  m_NfCpuUsage = 0;
  m_NfCpuUsageIsSet = false;
  m_NfMemoryUsage = 0;
  m_NfMemoryUsageIsSet = false;
  m_NfStorageUsage = 0;
  m_NfStorageUsageIsSet = false;
  m_NfLoadLevelAverage = 0;
  m_NfLoadLevelAverageIsSet = false;
  m_NfLoadLevelpeak = 0;
  m_NfLoadLevelpeakIsSet = false;
  m_SnssaiIsSet = false;
  m_Confidence = 0;
  m_ConfidenceIsSet = false;
}

NfLoadLevelInformation::~NfLoadLevelInformation() {}

void NfLoadLevelInformation::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const NfLoadLevelInformation &o) {
  j = nlohmann::json();
  j["nfType"] = o.m_NfType;
  j["nfInstanceId"] = o.m_NfInstanceId;
  if (o.nfSetIdIsSet())
    j["nfSetId"] = o.m_NfSetId;
  if (o.nfStatusIsSet())
    j["nfStatus"] = o.m_NfStatus;
  if (o.nfCpuUsageIsSet())
    j["nfCpuUsage"] = o.m_NfCpuUsage;
  if (o.nfMemoryUsageIsSet())
    j["nfMemoryUsage"] = o.m_NfMemoryUsage;
  if (o.nfStorageUsageIsSet())
    j["nfStorageUsage"] = o.m_NfStorageUsage;
  if (o.nfLoadLevelAverageIsSet())
    j["nfLoadLevelAverage"] = o.m_NfLoadLevelAverage;
  if (o.nfLoadLevelpeakIsSet())
    j["nfLoadLevelpeak"] = o.m_NfLoadLevelpeak;
  if (o.snssaiIsSet())
    j["snssai"] = o.m_Snssai;
  if (o.confidenceIsSet())
    j["confidence"] = o.m_Confidence;
}

void from_json(const nlohmann::json &j, NfLoadLevelInformation &o) {
  j.at("nfType").get_to(o.m_NfType);
  j.at("nfInstanceId").get_to(o.m_NfInstanceId);
  if (j.find("nfSetId") != j.end()) {
    j.at("nfSetId").get_to(o.m_NfSetId);
    o.m_NfSetIdIsSet = true;
  }
  if (j.find("nfStatus") != j.end()) {
    j.at("nfStatus").get_to(o.m_NfStatus);
    o.m_NfStatusIsSet = true;
  }
  if (j.find("nfCpuUsage") != j.end()) {
    j.at("nfCpuUsage").get_to(o.m_NfCpuUsage);
    o.m_NfCpuUsageIsSet = true;
  }
  if (j.find("nfMemoryUsage") != j.end()) {
    j.at("nfMemoryUsage").get_to(o.m_NfMemoryUsage);
    o.m_NfMemoryUsageIsSet = true;
  }
  if (j.find("nfStorageUsage") != j.end()) {
    j.at("nfStorageUsage").get_to(o.m_NfStorageUsage);
    o.m_NfStorageUsageIsSet = true;
  }
  if (j.find("nfLoadLevelAverage") != j.end()) {
    j.at("nfLoadLevelAverage").get_to(o.m_NfLoadLevelAverage);
    o.m_NfLoadLevelAverageIsSet = true;
  }
  if (j.find("nfLoadLevelpeak") != j.end()) {
    j.at("nfLoadLevelpeak").get_to(o.m_NfLoadLevelpeak);
    o.m_NfLoadLevelpeakIsSet = true;
  }
  if (j.find("snssai") != j.end()) {
    j.at("snssai").get_to(o.m_Snssai);
    o.m_SnssaiIsSet = true;
  }
  if (j.find("confidence") != j.end()) {
    j.at("confidence").get_to(o.m_Confidence);
    o.m_ConfidenceIsSet = true;
  }
}

NFType NfLoadLevelInformation::getNfType() const { return m_NfType; }
void NfLoadLevelInformation::setNfType(NFType const &value) {
  m_NfType = value;
}
std::string NfLoadLevelInformation::getNfInstanceId() const {
  return m_NfInstanceId;
}
void NfLoadLevelInformation::setNfInstanceId(std::string const &value) {
  m_NfInstanceId = value;
}
std::string NfLoadLevelInformation::getNfSetId() const { return m_NfSetId; }
void NfLoadLevelInformation::setNfSetId(std::string const &value) {
  m_NfSetId = value;
  m_NfSetIdIsSet = true;
}
bool NfLoadLevelInformation::nfSetIdIsSet() const { return m_NfSetIdIsSet; }
void NfLoadLevelInformation::unsetNfSetId() { m_NfSetIdIsSet = false; }
NfStatus NfLoadLevelInformation::getNfStatus() const { return m_NfStatus; }
void NfLoadLevelInformation::setNfStatus(NfStatus const &value) {
  m_NfStatus = value;
  m_NfStatusIsSet = true;
}
bool NfLoadLevelInformation::nfStatusIsSet() const { return m_NfStatusIsSet; }
void NfLoadLevelInformation::unsetNfStatus() { m_NfStatusIsSet = false; }
int32_t NfLoadLevelInformation::getNfCpuUsage() const { return m_NfCpuUsage; }
void NfLoadLevelInformation::setNfCpuUsage(int32_t const value) {
  m_NfCpuUsage = value;
  m_NfCpuUsageIsSet = true;
}
bool NfLoadLevelInformation::nfCpuUsageIsSet() const {
  return m_NfCpuUsageIsSet;
}
void NfLoadLevelInformation::unsetNfCpuUsage() { m_NfCpuUsageIsSet = false; }
int32_t NfLoadLevelInformation::getNfMemoryUsage() const {
  return m_NfMemoryUsage;
}
void NfLoadLevelInformation::setNfMemoryUsage(int32_t const value) {
  m_NfMemoryUsage = value;
  m_NfMemoryUsageIsSet = true;
}
bool NfLoadLevelInformation::nfMemoryUsageIsSet() const {
  return m_NfMemoryUsageIsSet;
}
void NfLoadLevelInformation::unsetNfMemoryUsage() {
  m_NfMemoryUsageIsSet = false;
}
int32_t NfLoadLevelInformation::getNfStorageUsage() const {
  return m_NfStorageUsage;
}
void NfLoadLevelInformation::setNfStorageUsage(int32_t const value) {
  m_NfStorageUsage = value;
  m_NfStorageUsageIsSet = true;
}
bool NfLoadLevelInformation::nfStorageUsageIsSet() const {
  return m_NfStorageUsageIsSet;
}
void NfLoadLevelInformation::unsetNfStorageUsage() {
  m_NfStorageUsageIsSet = false;
}
int32_t NfLoadLevelInformation::getNfLoadLevelAverage() const {
  return m_NfLoadLevelAverage;
}
void NfLoadLevelInformation::setNfLoadLevelAverage(int32_t const value) {
  m_NfLoadLevelAverage = value;
  m_NfLoadLevelAverageIsSet = true;
}
bool NfLoadLevelInformation::nfLoadLevelAverageIsSet() const {
  return m_NfLoadLevelAverageIsSet;
}
void NfLoadLevelInformation::unsetNfLoadLevelAverage() {
  m_NfLoadLevelAverageIsSet = false;
}
int32_t NfLoadLevelInformation::getNfLoadLevelpeak() const {
  return m_NfLoadLevelpeak;
}
void NfLoadLevelInformation::setNfLoadLevelpeak(int32_t const value) {
  m_NfLoadLevelpeak = value;
  m_NfLoadLevelpeakIsSet = true;
}
bool NfLoadLevelInformation::nfLoadLevelpeakIsSet() const {
  return m_NfLoadLevelpeakIsSet;
}
void NfLoadLevelInformation::unsetNfLoadLevelpeak() {
  m_NfLoadLevelpeakIsSet = false;
}
Snssai NfLoadLevelInformation::getSnssai() const { return m_Snssai; }
void NfLoadLevelInformation::setSnssai(Snssai const &value) {
  m_Snssai = value;
  m_SnssaiIsSet = true;
}
bool NfLoadLevelInformation::snssaiIsSet() const { return m_SnssaiIsSet; }
void NfLoadLevelInformation::unsetSnssai() { m_SnssaiIsSet = false; }
int32_t NfLoadLevelInformation::getConfidence() const { return m_Confidence; }
void NfLoadLevelInformation::setConfidence(int32_t const value) {
  m_Confidence = value;
  m_ConfidenceIsSet = true;
}
bool NfLoadLevelInformation::confidenceIsSet() const {
  return m_ConfidenceIsSet;
}
void NfLoadLevelInformation::unsetConfidence() { m_ConfidenceIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
