/**
 * CAPIF_Publish_Service_API
 * API for publishing service APIs. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ServiceAPIDescription.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ServiceAPIDescription::ServiceAPIDescription() {
  m_ApiName = "";
  m_ApiId = "";
  m_ApiIdIsSet = false;
  m_AefProfilesIsSet = false;
  m_Description = "";
  m_DescriptionIsSet = false;
  m_SupportedFeatures = "";
  m_SupportedFeaturesIsSet = false;
  m_ShareableInfoIsSet = false;
  m_ServiceAPICategory = "";
  m_ServiceAPICategoryIsSet = false;
  m_ApiSuppFeats = "";
  m_ApiSuppFeatsIsSet = false;
  m_PubApiPathIsSet = false;
  m_CcfId = "";
  m_CcfIdIsSet = false;
}

ServiceAPIDescription::~ServiceAPIDescription() {}

void ServiceAPIDescription::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const ServiceAPIDescription &o) {
  j = nlohmann::json();
  j["apiName"] = o.m_ApiName;
  if (o.apiIdIsSet())
    j["apiId"] = o.m_ApiId;
  if (o.aefProfilesIsSet() || !o.m_AefProfiles.empty())
    j["aefProfiles"] = o.m_AefProfiles;
  if (o.descriptionIsSet())
    j["description"] = o.m_Description;
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
  if (o.shareableInfoIsSet())
    j["shareableInfo"] = o.m_ShareableInfo;
  if (o.serviceAPICategoryIsSet())
    j["serviceAPICategory"] = o.m_ServiceAPICategory;
  if (o.apiSuppFeatsIsSet())
    j["apiSuppFeats"] = o.m_ApiSuppFeats;
  if (o.pubApiPathIsSet())
    j["pubApiPath"] = o.m_PubApiPath;
  if (o.ccfIdIsSet())
    j["ccfId"] = o.m_CcfId;
}

void from_json(const nlohmann::json &j, ServiceAPIDescription &o) {
  j.at("apiName").get_to(o.m_ApiName);
  if (j.find("apiId") != j.end()) {
    j.at("apiId").get_to(o.m_ApiId);
    o.m_ApiIdIsSet = true;
  }
  if (j.find("aefProfiles") != j.end()) {
    j.at("aefProfiles").get_to(o.m_AefProfiles);
    o.m_AefProfilesIsSet = true;
  }
  if (j.find("description") != j.end()) {
    j.at("description").get_to(o.m_Description);
    o.m_DescriptionIsSet = true;
  }
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
  if (j.find("shareableInfo") != j.end()) {
    j.at("shareableInfo").get_to(o.m_ShareableInfo);
    o.m_ShareableInfoIsSet = true;
  }
  if (j.find("serviceAPICategory") != j.end()) {
    j.at("serviceAPICategory").get_to(o.m_ServiceAPICategory);
    o.m_ServiceAPICategoryIsSet = true;
  }
  if (j.find("apiSuppFeats") != j.end()) {
    j.at("apiSuppFeats").get_to(o.m_ApiSuppFeats);
    o.m_ApiSuppFeatsIsSet = true;
  }
  if (j.find("pubApiPath") != j.end()) {
    j.at("pubApiPath").get_to(o.m_PubApiPath);
    o.m_PubApiPathIsSet = true;
  }
  if (j.find("ccfId") != j.end()) {
    j.at("ccfId").get_to(o.m_CcfId);
    o.m_CcfIdIsSet = true;
  }
}

std::string ServiceAPIDescription::getApiName() const { return m_ApiName; }
void ServiceAPIDescription::setApiName(std::string const &value) {
  m_ApiName = value;
}
std::string ServiceAPIDescription::getApiId() const { return m_ApiId; }
void ServiceAPIDescription::setApiId(std::string const &value) {
  m_ApiId = value;
  m_ApiIdIsSet = true;
}
bool ServiceAPIDescription::apiIdIsSet() const { return m_ApiIdIsSet; }
void ServiceAPIDescription::unsetApiId() { m_ApiIdIsSet = false; }
std::vector<AefProfile> &ServiceAPIDescription::getAefProfiles() {
  return m_AefProfiles;
}
void ServiceAPIDescription::setAefProfiles(
    std::vector<AefProfile> const &value) {
  m_AefProfiles = value;
  m_AefProfilesIsSet = true;
}
bool ServiceAPIDescription::aefProfilesIsSet() const {
  return m_AefProfilesIsSet;
}
void ServiceAPIDescription::unsetAefProfiles() { m_AefProfilesIsSet = false; }
std::string ServiceAPIDescription::getDescription() const {
  return m_Description;
}
void ServiceAPIDescription::setDescription(std::string const &value) {
  m_Description = value;
  m_DescriptionIsSet = true;
}
bool ServiceAPIDescription::descriptionIsSet() const {
  return m_DescriptionIsSet;
}
void ServiceAPIDescription::unsetDescription() { m_DescriptionIsSet = false; }
std::string ServiceAPIDescription::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void ServiceAPIDescription::setSupportedFeatures(std::string const &value) {
  m_SupportedFeatures = value;
  m_SupportedFeaturesIsSet = true;
}
bool ServiceAPIDescription::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void ServiceAPIDescription::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}
ShareableInformation ServiceAPIDescription::getShareableInfo() const {
  return m_ShareableInfo;
}
void ServiceAPIDescription::setShareableInfo(
    ShareableInformation const &value) {
  m_ShareableInfo = value;
  m_ShareableInfoIsSet = true;
}
bool ServiceAPIDescription::shareableInfoIsSet() const {
  return m_ShareableInfoIsSet;
}
void ServiceAPIDescription::unsetShareableInfo() {
  m_ShareableInfoIsSet = false;
}
std::string ServiceAPIDescription::getServiceAPICategory() const {
  return m_ServiceAPICategory;
}
void ServiceAPIDescription::setServiceAPICategory(std::string const &value) {
  m_ServiceAPICategory = value;
  m_ServiceAPICategoryIsSet = true;
}
bool ServiceAPIDescription::serviceAPICategoryIsSet() const {
  return m_ServiceAPICategoryIsSet;
}
void ServiceAPIDescription::unsetServiceAPICategory() {
  m_ServiceAPICategoryIsSet = false;
}
std::string ServiceAPIDescription::getApiSuppFeats() const {
  return m_ApiSuppFeats;
}
void ServiceAPIDescription::setApiSuppFeats(std::string const &value) {
  m_ApiSuppFeats = value;
  m_ApiSuppFeatsIsSet = true;
}
bool ServiceAPIDescription::apiSuppFeatsIsSet() const {
  return m_ApiSuppFeatsIsSet;
}
void ServiceAPIDescription::unsetApiSuppFeats() { m_ApiSuppFeatsIsSet = false; }
PublishedApiPath ServiceAPIDescription::getPubApiPath() const {
  return m_PubApiPath;
}
void ServiceAPIDescription::setPubApiPath(PublishedApiPath const &value) {
  m_PubApiPath = value;
  m_PubApiPathIsSet = true;
}
bool ServiceAPIDescription::pubApiPathIsSet() const {
  return m_PubApiPathIsSet;
}
void ServiceAPIDescription::unsetPubApiPath() { m_PubApiPathIsSet = false; }
std::string ServiceAPIDescription::getCcfId() const { return m_CcfId; }
void ServiceAPIDescription::setCcfId(std::string const &value) {
  m_CcfId = value;
  m_CcfIdIsSet = true;
}
bool ServiceAPIDescription::ccfIdIsSet() const { return m_CcfIdIsSet; }
void ServiceAPIDescription::unsetCcfId() { m_CcfIdIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
