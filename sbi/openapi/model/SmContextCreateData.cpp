/**
 * Nnef_SMContext
 * Nnef SMContext Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SmContextCreateData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

SmContextCreateData::SmContextCreateData() {
  m_Supi = "";
  m_PduSessionId = 0;
  m_Dnn = "";
  m_NefId = "";
  m_DlNiddEndPoint = "";
  m_NotificationUri = "";
  m_NiddInfoIsSet = false;
  m_RdsSupport = false;
  m_RdsSupportIsSet = false;
  m_SmContextConfigIsSet = false;
  m_SupportedFeatures = "";
  m_SupportedFeaturesIsSet = false;
}

SmContextCreateData::~SmContextCreateData() {}

void SmContextCreateData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const SmContextCreateData &o) {
  j = nlohmann::json();
  j["supi"] = o.m_Supi;
  j["pduSessionId"] = o.m_PduSessionId;
  j["dnn"] = o.m_Dnn;
  j["snssai"] = o.m_Snssai;
  j["nefId"] = o.m_NefId;
  j["dlNiddEndPoint"] = o.m_DlNiddEndPoint;
  j["notificationUri"] = o.m_NotificationUri;
  if (o.niddInfoIsSet())
    j["niddInfo"] = o.m_NiddInfo;
  if (o.rdsSupportIsSet())
    j["rdsSupport"] = o.m_RdsSupport;
  if (o.smContextConfigIsSet())
    j["smContextConfig"] = o.m_SmContextConfig;
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
}

void from_json(const nlohmann::json &j, SmContextCreateData &o) {
  j.at("supi").get_to(o.m_Supi);
  j.at("pduSessionId").get_to(o.m_PduSessionId);
  j.at("dnn").get_to(o.m_Dnn);
  j.at("snssai").get_to(o.m_Snssai);
  j.at("nefId").get_to(o.m_NefId);
  j.at("dlNiddEndPoint").get_to(o.m_DlNiddEndPoint);
  j.at("notificationUri").get_to(o.m_NotificationUri);
  if (j.find("niddInfo") != j.end()) {
    j.at("niddInfo").get_to(o.m_NiddInfo);
    o.m_NiddInfoIsSet = true;
  }
  if (j.find("rdsSupport") != j.end()) {
    j.at("rdsSupport").get_to(o.m_RdsSupport);
    o.m_RdsSupportIsSet = true;
  }
  if (j.find("smContextConfig") != j.end()) {
    j.at("smContextConfig").get_to(o.m_SmContextConfig);
    o.m_SmContextConfigIsSet = true;
  }
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
}

std::string SmContextCreateData::getSupi() const { return m_Supi; }
void SmContextCreateData::setSupi(std::string const &value) { m_Supi = value; }
int32_t SmContextCreateData::getPduSessionId() const { return m_PduSessionId; }
void SmContextCreateData::setPduSessionId(int32_t const value) {
  m_PduSessionId = value;
}
std::string SmContextCreateData::getDnn() const { return m_Dnn; }
void SmContextCreateData::setDnn(std::string const &value) { m_Dnn = value; }
Snssai SmContextCreateData::getSnssai() const { return m_Snssai; }
void SmContextCreateData::setSnssai(Snssai const &value) { m_Snssai = value; }
std::string SmContextCreateData::getNefId() const { return m_NefId; }
void SmContextCreateData::setNefId(std::string const &value) {
  m_NefId = value;
}
std::string SmContextCreateData::getDlNiddEndPoint() const {
  return m_DlNiddEndPoint;
}
void SmContextCreateData::setDlNiddEndPoint(std::string const &value) {
  m_DlNiddEndPoint = value;
}
std::string SmContextCreateData::getNotificationUri() const {
  return m_NotificationUri;
}
void SmContextCreateData::setNotificationUri(std::string const &value) {
  m_NotificationUri = value;
}
NiddInformation SmContextCreateData::getNiddInfo() const { return m_NiddInfo; }
void SmContextCreateData::setNiddInfo(NiddInformation const &value) {
  m_NiddInfo = value;
  m_NiddInfoIsSet = true;
}
bool SmContextCreateData::niddInfoIsSet() const { return m_NiddInfoIsSet; }
void SmContextCreateData::unsetNiddInfo() { m_NiddInfoIsSet = false; }
bool SmContextCreateData::isRdsSupport() const { return m_RdsSupport; }
void SmContextCreateData::setRdsSupport(bool const value) {
  m_RdsSupport = value;
  m_RdsSupportIsSet = true;
}
bool SmContextCreateData::rdsSupportIsSet() const { return m_RdsSupportIsSet; }
void SmContextCreateData::unsetRdsSupport() { m_RdsSupportIsSet = false; }
SmContextConfiguration SmContextCreateData::getSmContextConfig() const {
  return m_SmContextConfig;
}
void SmContextCreateData::setSmContextConfig(
    SmContextConfiguration const &value) {
  m_SmContextConfig = value;
  m_SmContextConfigIsSet = true;
}
bool SmContextCreateData::smContextConfigIsSet() const {
  return m_SmContextConfigIsSet;
}
void SmContextCreateData::unsetSmContextConfig() {
  m_SmContextConfigIsSet = false;
}
std::string SmContextCreateData::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void SmContextCreateData::setSupportedFeatures(std::string const &value) {
  m_SupportedFeatures = value;
  m_SupportedFeaturesIsSet = true;
}
bool SmContextCreateData::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void SmContextCreateData::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
