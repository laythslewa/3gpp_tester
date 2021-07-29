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

#include "AnalyticsData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

AnalyticsData::AnalyticsData() {
  m_Expiry = "";
  m_ExpiryIsSet = false;
  m_UeMobilityInfosIsSet = false;
  m_UeCommInfosIsSet = false;
  m_NwPerfInfosIsSet = false;
  m_AbnormalInfosIsSet = false;
  m_CongestInfosIsSet = false;
  m_QosSustainInfosIsSet = false;
  m_SuppFeat = "";
}

AnalyticsData::~AnalyticsData() {}

void AnalyticsData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const AnalyticsData &o) {
  j = nlohmann::json();
  if (o.expiryIsSet())
    j["expiry"] = o.m_Expiry;
  if (o.ueMobilityInfosIsSet() || !o.m_UeMobilityInfos.empty())
    j["ueMobilityInfos"] = o.m_UeMobilityInfos;
  if (o.ueCommInfosIsSet() || !o.m_UeCommInfos.empty())
    j["ueCommInfos"] = o.m_UeCommInfos;
  if (o.nwPerfInfosIsSet() || !o.m_NwPerfInfos.empty())
    j["nwPerfInfos"] = o.m_NwPerfInfos;
  if (o.abnormalInfosIsSet() || !o.m_AbnormalInfos.empty())
    j["abnormalInfos"] = o.m_AbnormalInfos;
  if (o.congestInfosIsSet() || !o.m_CongestInfos.empty())
    j["congestInfos"] = o.m_CongestInfos;
  if (o.qosSustainInfosIsSet() || !o.m_QosSustainInfos.empty())
    j["qosSustainInfos"] = o.m_QosSustainInfos;
  j["suppFeat"] = o.m_SuppFeat;
}

void from_json(const nlohmann::json &j, AnalyticsData &o) {
  if (j.find("expiry") != j.end()) {
    j.at("expiry").get_to(o.m_Expiry);
    o.m_ExpiryIsSet = true;
  }
  if (j.find("ueMobilityInfos") != j.end()) {
    j.at("ueMobilityInfos").get_to(o.m_UeMobilityInfos);
    o.m_UeMobilityInfosIsSet = true;
  }
  if (j.find("ueCommInfos") != j.end()) {
    j.at("ueCommInfos").get_to(o.m_UeCommInfos);
    o.m_UeCommInfosIsSet = true;
  }
  if (j.find("nwPerfInfos") != j.end()) {
    j.at("nwPerfInfos").get_to(o.m_NwPerfInfos);
    o.m_NwPerfInfosIsSet = true;
  }
  if (j.find("abnormalInfos") != j.end()) {
    j.at("abnormalInfos").get_to(o.m_AbnormalInfos);
    o.m_AbnormalInfosIsSet = true;
  }
  if (j.find("congestInfos") != j.end()) {
    j.at("congestInfos").get_to(o.m_CongestInfos);
    o.m_CongestInfosIsSet = true;
  }
  if (j.find("qosSustainInfos") != j.end()) {
    j.at("qosSustainInfos").get_to(o.m_QosSustainInfos);
    o.m_QosSustainInfosIsSet = true;
  }
  j.at("suppFeat").get_to(o.m_SuppFeat);
}

std::string AnalyticsData::getExpiry() const { return m_Expiry; }
void AnalyticsData::setExpiry(std::string const &value) {
  m_Expiry = value;
  m_ExpiryIsSet = true;
}
bool AnalyticsData::expiryIsSet() const { return m_ExpiryIsSet; }
void AnalyticsData::unsetExpiry() { m_ExpiryIsSet = false; }
std::vector<UeMobilityExposure> &AnalyticsData::getUeMobilityInfos() {
  return m_UeMobilityInfos;
}
void AnalyticsData::setUeMobilityInfos(
    std::vector<UeMobilityExposure> const &value) {
  m_UeMobilityInfos = value;
  m_UeMobilityInfosIsSet = true;
}
bool AnalyticsData::ueMobilityInfosIsSet() const {
  return m_UeMobilityInfosIsSet;
}
void AnalyticsData::unsetUeMobilityInfos() { m_UeMobilityInfosIsSet = false; }
std::vector<UeCommunication> &AnalyticsData::getUeCommInfos() {
  return m_UeCommInfos;
}
void AnalyticsData::setUeCommInfos(std::vector<UeCommunication> const &value) {
  m_UeCommInfos = value;
  m_UeCommInfosIsSet = true;
}
bool AnalyticsData::ueCommInfosIsSet() const { return m_UeCommInfosIsSet; }
void AnalyticsData::unsetUeCommInfos() { m_UeCommInfosIsSet = false; }
std::vector<NetworkPerfExposure> &AnalyticsData::getNwPerfInfos() {
  return m_NwPerfInfos;
}
void AnalyticsData::setNwPerfInfos(
    std::vector<NetworkPerfExposure> const &value) {
  m_NwPerfInfos = value;
  m_NwPerfInfosIsSet = true;
}
bool AnalyticsData::nwPerfInfosIsSet() const { return m_NwPerfInfosIsSet; }
void AnalyticsData::unsetNwPerfInfos() { m_NwPerfInfosIsSet = false; }
std::vector<AbnormalExposure> &AnalyticsData::getAbnormalInfos() {
  return m_AbnormalInfos;
}
void AnalyticsData::setAbnormalInfos(
    std::vector<AbnormalExposure> const &value) {
  m_AbnormalInfos = value;
  m_AbnormalInfosIsSet = true;
}
bool AnalyticsData::abnormalInfosIsSet() const { return m_AbnormalInfosIsSet; }
void AnalyticsData::unsetAbnormalInfos() { m_AbnormalInfosIsSet = false; }
std::vector<CongestInfo> &AnalyticsData::getCongestInfos() {
  return m_CongestInfos;
}
void AnalyticsData::setCongestInfos(std::vector<CongestInfo> const &value) {
  m_CongestInfos = value;
  m_CongestInfosIsSet = true;
}
bool AnalyticsData::congestInfosIsSet() const { return m_CongestInfosIsSet; }
void AnalyticsData::unsetCongestInfos() { m_CongestInfosIsSet = false; }
std::vector<QosSustainabilityExposure> &AnalyticsData::getQosSustainInfos() {
  return m_QosSustainInfos;
}
void AnalyticsData::setQosSustainInfos(
    std::vector<QosSustainabilityExposure> const &value) {
  m_QosSustainInfos = value;
  m_QosSustainInfosIsSet = true;
}
bool AnalyticsData::qosSustainInfosIsSet() const {
  return m_QosSustainInfosIsSet;
}
void AnalyticsData::unsetQosSustainInfos() { m_QosSustainInfosIsSet = false; }
std::string AnalyticsData::getSuppFeat() const { return m_SuppFeat; }
void AnalyticsData::setSuppFeat(std::string const &value) {
  m_SuppFeat = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
