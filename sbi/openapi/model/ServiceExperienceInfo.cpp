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

#include "ServiceExperienceInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ServiceExperienceInfo::ServiceExperienceInfo() {
  m_SvcExprcVariance = 0.0f;
  m_SvcExprcVarianceIsSet = false;
  m_SupisIsSet = false;
  m_SnssaiIsSet = false;
  m_AppId = "";
  m_AppIdIsSet = false;
  m_Confidence = 0;
  m_ConfidenceIsSet = false;
  m_Dnn = "";
  m_DnnIsSet = false;
  m_NetworkAreaIsSet = false;
  m_NsiId = "";
  m_NsiIdIsSet = false;
  m_Ratio = 0;
  m_RatioIsSet = false;
}

ServiceExperienceInfo::~ServiceExperienceInfo() {}

void ServiceExperienceInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const ServiceExperienceInfo &o) {
  j = nlohmann::json();
  j["svcExprc"] = o.m_SvcExprc;
  if (o.svcExprcVarianceIsSet())
    j["svcExprcVariance"] = o.m_SvcExprcVariance;
  if (o.supisIsSet() || !o.m_Supis.empty())
    j["supis"] = o.m_Supis;
  if (o.snssaiIsSet())
    j["snssai"] = o.m_Snssai;
  if (o.appIdIsSet())
    j["appId"] = o.m_AppId;
  if (o.confidenceIsSet())
    j["confidence"] = o.m_Confidence;
  if (o.dnnIsSet())
    j["dnn"] = o.m_Dnn;
  if (o.networkAreaIsSet())
    j["networkArea"] = o.m_NetworkArea;
  if (o.nsiIdIsSet())
    j["nsiId"] = o.m_NsiId;
  if (o.ratioIsSet())
    j["ratio"] = o.m_Ratio;
}

void from_json(const nlohmann::json &j, ServiceExperienceInfo &o) {
  j.at("svcExprc").get_to(o.m_SvcExprc);
  if (j.find("svcExprcVariance") != j.end()) {
    j.at("svcExprcVariance").get_to(o.m_SvcExprcVariance);
    o.m_SvcExprcVarianceIsSet = true;
  }
  if (j.find("supis") != j.end()) {
    j.at("supis").get_to(o.m_Supis);
    o.m_SupisIsSet = true;
  }
  if (j.find("snssai") != j.end()) {
    j.at("snssai").get_to(o.m_Snssai);
    o.m_SnssaiIsSet = true;
  }
  if (j.find("appId") != j.end()) {
    j.at("appId").get_to(o.m_AppId);
    o.m_AppIdIsSet = true;
  }
  if (j.find("confidence") != j.end()) {
    j.at("confidence").get_to(o.m_Confidence);
    o.m_ConfidenceIsSet = true;
  }
  if (j.find("dnn") != j.end()) {
    j.at("dnn").get_to(o.m_Dnn);
    o.m_DnnIsSet = true;
  }
  if (j.find("networkArea") != j.end()) {
    j.at("networkArea").get_to(o.m_NetworkArea);
    o.m_NetworkAreaIsSet = true;
  }
  if (j.find("nsiId") != j.end()) {
    j.at("nsiId").get_to(o.m_NsiId);
    o.m_NsiIdIsSet = true;
  }
  if (j.find("ratio") != j.end()) {
    j.at("ratio").get_to(o.m_Ratio);
    o.m_RatioIsSet = true;
  }
}

SvcExperience ServiceExperienceInfo::getSvcExprc() const { return m_SvcExprc; }
void ServiceExperienceInfo::setSvcExprc(SvcExperience const &value) {
  m_SvcExprc = value;
}
float ServiceExperienceInfo::getSvcExprcVariance() const {
  return m_SvcExprcVariance;
}
void ServiceExperienceInfo::setSvcExprcVariance(float const value) {
  m_SvcExprcVariance = value;
  m_SvcExprcVarianceIsSet = true;
}
bool ServiceExperienceInfo::svcExprcVarianceIsSet() const {
  return m_SvcExprcVarianceIsSet;
}
void ServiceExperienceInfo::unsetSvcExprcVariance() {
  m_SvcExprcVarianceIsSet = false;
}
std::vector<std::string> &ServiceExperienceInfo::getSupis() { return m_Supis; }
void ServiceExperienceInfo::setSupis(std::vector<std::string> const &value) {
  m_Supis = value;
  m_SupisIsSet = true;
}
bool ServiceExperienceInfo::supisIsSet() const { return m_SupisIsSet; }
void ServiceExperienceInfo::unsetSupis() { m_SupisIsSet = false; }
Snssai ServiceExperienceInfo::getSnssai() const { return m_Snssai; }
void ServiceExperienceInfo::setSnssai(Snssai const &value) {
  m_Snssai = value;
  m_SnssaiIsSet = true;
}
bool ServiceExperienceInfo::snssaiIsSet() const { return m_SnssaiIsSet; }
void ServiceExperienceInfo::unsetSnssai() { m_SnssaiIsSet = false; }
std::string ServiceExperienceInfo::getAppId() const { return m_AppId; }
void ServiceExperienceInfo::setAppId(std::string const &value) {
  m_AppId = value;
  m_AppIdIsSet = true;
}
bool ServiceExperienceInfo::appIdIsSet() const { return m_AppIdIsSet; }
void ServiceExperienceInfo::unsetAppId() { m_AppIdIsSet = false; }
int32_t ServiceExperienceInfo::getConfidence() const { return m_Confidence; }
void ServiceExperienceInfo::setConfidence(int32_t const value) {
  m_Confidence = value;
  m_ConfidenceIsSet = true;
}
bool ServiceExperienceInfo::confidenceIsSet() const {
  return m_ConfidenceIsSet;
}
void ServiceExperienceInfo::unsetConfidence() { m_ConfidenceIsSet = false; }
std::string ServiceExperienceInfo::getDnn() const { return m_Dnn; }
void ServiceExperienceInfo::setDnn(std::string const &value) {
  m_Dnn = value;
  m_DnnIsSet = true;
}
bool ServiceExperienceInfo::dnnIsSet() const { return m_DnnIsSet; }
void ServiceExperienceInfo::unsetDnn() { m_DnnIsSet = false; }
NetworkAreaInfo ServiceExperienceInfo::getNetworkArea() const {
  return m_NetworkArea;
}
void ServiceExperienceInfo::setNetworkArea(NetworkAreaInfo const &value) {
  m_NetworkArea = value;
  m_NetworkAreaIsSet = true;
}
bool ServiceExperienceInfo::networkAreaIsSet() const {
  return m_NetworkAreaIsSet;
}
void ServiceExperienceInfo::unsetNetworkArea() { m_NetworkAreaIsSet = false; }
std::string ServiceExperienceInfo::getNsiId() const { return m_NsiId; }
void ServiceExperienceInfo::setNsiId(std::string const &value) {
  m_NsiId = value;
  m_NsiIdIsSet = true;
}
bool ServiceExperienceInfo::nsiIdIsSet() const { return m_NsiIdIsSet; }
void ServiceExperienceInfo::unsetNsiId() { m_NsiIdIsSet = false; }
int32_t ServiceExperienceInfo::getRatio() const { return m_Ratio; }
void ServiceExperienceInfo::setRatio(int32_t const value) {
  m_Ratio = value;
  m_RatioIsSet = true;
}
bool ServiceExperienceInfo::ratioIsSet() const { return m_RatioIsSet; }
void ServiceExperienceInfo::unsetRatio() { m_RatioIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
