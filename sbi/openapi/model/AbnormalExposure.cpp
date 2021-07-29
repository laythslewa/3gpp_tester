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

#include "AbnormalExposure.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

AbnormalExposure::AbnormalExposure() {
  m_GpsisIsSet = false;
  m_AppId = "";
  m_AppIdIsSet = false;
  m_Ratio = 0;
  m_RatioIsSet = false;
  m_Confidence = 0;
  m_ConfidenceIsSet = false;
  m_AddtMeasInfoIsSet = false;
}

AbnormalExposure::~AbnormalExposure() {}

void AbnormalExposure::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const AbnormalExposure &o) {
  j = nlohmann::json();
  if (o.gpsisIsSet() || !o.m_Gpsis.empty())
    j["gpsis"] = o.m_Gpsis;
  if (o.appIdIsSet())
    j["appId"] = o.m_AppId;
  j["excep"] = o.m_Excep;
  if (o.ratioIsSet())
    j["ratio"] = o.m_Ratio;
  if (o.confidenceIsSet())
    j["confidence"] = o.m_Confidence;
  if (o.addtMeasInfoIsSet())
    j["addtMeasInfo"] = o.m_AddtMeasInfo;
}

void from_json(const nlohmann::json &j, AbnormalExposure &o) {
  if (j.find("gpsis") != j.end()) {
    j.at("gpsis").get_to(o.m_Gpsis);
    o.m_GpsisIsSet = true;
  }
  if (j.find("appId") != j.end()) {
    j.at("appId").get_to(o.m_AppId);
    o.m_AppIdIsSet = true;
  }
  j.at("excep").get_to(o.m_Excep);
  if (j.find("ratio") != j.end()) {
    j.at("ratio").get_to(o.m_Ratio);
    o.m_RatioIsSet = true;
  }
  if (j.find("confidence") != j.end()) {
    j.at("confidence").get_to(o.m_Confidence);
    o.m_ConfidenceIsSet = true;
  }
  if (j.find("addtMeasInfo") != j.end()) {
    j.at("addtMeasInfo").get_to(o.m_AddtMeasInfo);
    o.m_AddtMeasInfoIsSet = true;
  }
}

std::vector<std::string> &AbnormalExposure::getGpsis() { return m_Gpsis; }
void AbnormalExposure::setGpsis(std::vector<std::string> const &value) {
  m_Gpsis = value;
  m_GpsisIsSet = true;
}
bool AbnormalExposure::gpsisIsSet() const { return m_GpsisIsSet; }
void AbnormalExposure::unsetGpsis() { m_GpsisIsSet = false; }
std::string AbnormalExposure::getAppId() const { return m_AppId; }
void AbnormalExposure::setAppId(std::string const &value) {
  m_AppId = value;
  m_AppIdIsSet = true;
}
bool AbnormalExposure::appIdIsSet() const { return m_AppIdIsSet; }
void AbnormalExposure::unsetAppId() { m_AppIdIsSet = false; }
Exception AbnormalExposure::getExcep() const { return m_Excep; }
void AbnormalExposure::setExcep(Exception const &value) { m_Excep = value; }
int32_t AbnormalExposure::getRatio() const { return m_Ratio; }
void AbnormalExposure::setRatio(int32_t const value) {
  m_Ratio = value;
  m_RatioIsSet = true;
}
bool AbnormalExposure::ratioIsSet() const { return m_RatioIsSet; }
void AbnormalExposure::unsetRatio() { m_RatioIsSet = false; }
int32_t AbnormalExposure::getConfidence() const { return m_Confidence; }
void AbnormalExposure::setConfidence(int32_t const value) {
  m_Confidence = value;
  m_ConfidenceIsSet = true;
}
bool AbnormalExposure::confidenceIsSet() const { return m_ConfidenceIsSet; }
void AbnormalExposure::unsetConfidence() { m_ConfidenceIsSet = false; }
AdditionalMeasurement AbnormalExposure::getAddtMeasInfo() const {
  return m_AddtMeasInfo;
}
void AbnormalExposure::setAddtMeasInfo(AdditionalMeasurement const &value) {
  m_AddtMeasInfo = value;
  m_AddtMeasInfoIsSet = true;
}
bool AbnormalExposure::addtMeasInfoIsSet() const { return m_AddtMeasInfoIsSet; }
void AbnormalExposure::unsetAddtMeasInfo() { m_AddtMeasInfoIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org