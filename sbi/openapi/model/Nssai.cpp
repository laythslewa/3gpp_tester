/**
 * Unified Data Repository Service API file for subscription data
 * Unified Data Repository Service (subscription data). The API version is
 * defined in 3GPP TS 29.504. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "Nssai.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

Nssai::Nssai() {
  m_SupportedFeatures = "";
  m_SupportedFeaturesIsSet = false;
  m_SingleNssaisIsSet = false;
  m_ProvisioningTime = "";
  m_ProvisioningTimeIsSet = false;
  m_AdditionalSnssaiDataIsSet = false;
}

Nssai::~Nssai() {}

void Nssai::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const Nssai &o) {
  j = nlohmann::json();
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
  j["defaultSingleNssais"] = o.m_DefaultSingleNssais;
  if (o.singleNssaisIsSet() || !o.m_SingleNssais.empty())
    j["singleNssais"] = o.m_SingleNssais;
  if (o.provisioningTimeIsSet())
    j["provisioningTime"] = o.m_ProvisioningTime;
  if (o.additionalSnssaiDataIsSet() || !o.m_AdditionalSnssaiData.empty())
    j["additionalSnssaiData"] = o.m_AdditionalSnssaiData;
}

void from_json(const nlohmann::json &j, Nssai &o) {
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
  j.at("defaultSingleNssais").get_to(o.m_DefaultSingleNssais);
  if (j.find("singleNssais") != j.end()) {
    j.at("singleNssais").get_to(o.m_SingleNssais);
    o.m_SingleNssaisIsSet = true;
  }
  if (j.find("provisioningTime") != j.end()) {
    j.at("provisioningTime").get_to(o.m_ProvisioningTime);
    o.m_ProvisioningTimeIsSet = true;
  }
  if (j.find("additionalSnssaiData") != j.end()) {
    j.at("additionalSnssaiData").get_to(o.m_AdditionalSnssaiData);
    o.m_AdditionalSnssaiDataIsSet = true;
  }
}

std::string Nssai::getSupportedFeatures() const { return m_SupportedFeatures; }
void Nssai::setSupportedFeatures(std::string const &value) {
  m_SupportedFeatures = value;
  m_SupportedFeaturesIsSet = true;
}
bool Nssai::supportedFeaturesIsSet() const { return m_SupportedFeaturesIsSet; }
void Nssai::unsetSupportedFeatures() { m_SupportedFeaturesIsSet = false; }
std::vector<Snssai> &Nssai::getDefaultSingleNssais() {
  return m_DefaultSingleNssais;
}
void Nssai::setDefaultSingleNssais(std::vector<Snssai> const &value) {
  m_DefaultSingleNssais = value;
}
std::vector<Snssai> &Nssai::getSingleNssais() { return m_SingleNssais; }
void Nssai::setSingleNssais(std::vector<Snssai> const &value) {
  m_SingleNssais = value;
  m_SingleNssaisIsSet = true;
}
bool Nssai::singleNssaisIsSet() const { return m_SingleNssaisIsSet; }
void Nssai::unsetSingleNssais() { m_SingleNssaisIsSet = false; }
std::string Nssai::getProvisioningTime() const { return m_ProvisioningTime; }
void Nssai::setProvisioningTime(std::string const &value) {
  m_ProvisioningTime = value;
  m_ProvisioningTimeIsSet = true;
}
bool Nssai::provisioningTimeIsSet() const { return m_ProvisioningTimeIsSet; }
void Nssai::unsetProvisioningTime() { m_ProvisioningTimeIsSet = false; }
std::map<std::string, AdditionalSnssaiData> &Nssai::getAdditionalSnssaiData() {
  return m_AdditionalSnssaiData;
}
void Nssai::setAdditionalSnssaiData(
    std::map<std::string, AdditionalSnssaiData> const &value) {
  m_AdditionalSnssaiData = value;
  m_AdditionalSnssaiDataIsSet = true;
}
bool Nssai::additionalSnssaiDataIsSet() const {
  return m_AdditionalSnssaiDataIsSet;
}
void Nssai::unsetAdditionalSnssaiData() { m_AdditionalSnssaiDataIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
