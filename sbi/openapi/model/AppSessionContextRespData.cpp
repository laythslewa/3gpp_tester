/**
 * Npcf_PolicyAuthorization Service API
 * PCF Policy Authorization Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "AppSessionContextRespData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

AppSessionContextRespData::AppSessionContextRespData() {
  m_ServAuthInfoIsSet = false;
  m_UeIdsIsSet = false;
  m_SuppFeat = "";
  m_SuppFeatIsSet = false;
}

AppSessionContextRespData::~AppSessionContextRespData() {}

void AppSessionContextRespData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const AppSessionContextRespData &o) {
  j = nlohmann::json();
  if (o.servAuthInfoIsSet())
    j["servAuthInfo"] = o.m_ServAuthInfo;
  if (o.ueIdsIsSet() || !o.m_UeIds.empty())
    j["ueIds"] = o.m_UeIds;
  if (o.suppFeatIsSet())
    j["suppFeat"] = o.m_SuppFeat;
}

void from_json(const nlohmann::json &j, AppSessionContextRespData &o) {
  if (j.find("servAuthInfo") != j.end()) {
    j.at("servAuthInfo").get_to(o.m_ServAuthInfo);
    o.m_ServAuthInfoIsSet = true;
  }
  if (j.find("ueIds") != j.end()) {
    j.at("ueIds").get_to(o.m_UeIds);
    o.m_UeIdsIsSet = true;
  }
  if (j.find("suppFeat") != j.end()) {
    j.at("suppFeat").get_to(o.m_SuppFeat);
    o.m_SuppFeatIsSet = true;
  }
}

ServAuthInfo AppSessionContextRespData::getServAuthInfo() const {
  return m_ServAuthInfo;
}
void AppSessionContextRespData::setServAuthInfo(ServAuthInfo const &value) {
  m_ServAuthInfo = value;
  m_ServAuthInfoIsSet = true;
}
bool AppSessionContextRespData::servAuthInfoIsSet() const {
  return m_ServAuthInfoIsSet;
}
void AppSessionContextRespData::unsetServAuthInfo() {
  m_ServAuthInfoIsSet = false;
}
std::vector<UeIdentityInfo> &AppSessionContextRespData::getUeIds() {
  return m_UeIds;
}
void AppSessionContextRespData::setUeIds(
    std::vector<UeIdentityInfo> const &value) {
  m_UeIds = value;
  m_UeIdsIsSet = true;
}
bool AppSessionContextRespData::ueIdsIsSet() const { return m_UeIdsIsSet; }
void AppSessionContextRespData::unsetUeIds() { m_UeIdsIsSet = false; }
std::string AppSessionContextRespData::getSuppFeat() const {
  return m_SuppFeat;
}
void AppSessionContextRespData::setSuppFeat(std::string const &value) {
  m_SuppFeat = value;
  m_SuppFeatIsSet = true;
}
bool AppSessionContextRespData::suppFeatIsSet() const {
  return m_SuppFeatIsSet;
}
void AppSessionContextRespData::unsetSuppFeat() { m_SuppFeatIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
