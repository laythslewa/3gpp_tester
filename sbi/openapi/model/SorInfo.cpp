/**
 * Nausf_SoRProtection Service
 * AUSF SoR Protection Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SorInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

SorInfo::SorInfo() {
  m_SteeringContainerIsSet = false;
  m_AckInd = false;
  m_SorHeaderIsSet = false;
  m_SorTransparentInfoIsSet = false;
  m_SupportedFeatures = "";
  m_SupportedFeaturesIsSet = false;
}

SorInfo::~SorInfo() {}

void SorInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const SorInfo &o) {
  j = nlohmann::json();
  if (o.steeringContainerIsSet())
    j["steeringContainer"] = o.m_SteeringContainer;
  j["ackInd"] = o.m_AckInd;
  if (o.sorHeaderIsSet())
    j["sorHeader"] = o.m_SorHeader;
  if (o.sorTransparentInfoIsSet())
    j["sorTransparentInfo"] = o.m_SorTransparentInfo;
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
}

void from_json(const nlohmann::json &j, SorInfo &o) {
  if (j.find("steeringContainer") != j.end()) {
    j.at("steeringContainer").get_to(o.m_SteeringContainer);
    o.m_SteeringContainerIsSet = true;
  }
  j.at("ackInd").get_to(o.m_AckInd);
  if (j.find("sorHeader") != j.end()) {
    j.at("sorHeader").get_to(o.m_SorHeader);
    o.m_SorHeaderIsSet = true;
  }
  if (j.find("sorTransparentInfo") != j.end()) {
    j.at("sorTransparentInfo").get_to(o.m_SorTransparentInfo);
    o.m_SorTransparentInfoIsSet = true;
  }
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
}

SteeringContainer SorInfo::getSteeringContainer() const {
  return m_SteeringContainer;
}
void SorInfo::setSteeringContainer(SteeringContainer const &value) {
  m_SteeringContainer = value;
  m_SteeringContainerIsSet = true;
}
bool SorInfo::steeringContainerIsSet() const {
  return m_SteeringContainerIsSet;
}
void SorInfo::unsetSteeringContainer() { m_SteeringContainerIsSet = false; }
bool SorInfo::isAckInd() const { return m_AckInd; }
void SorInfo::setAckInd(bool const value) { m_AckInd = value; }
std::string SorInfo::getSorHeader() const { return m_SorHeader; }
void SorInfo::setSorHeader(std::string const &value) {
  m_SorHeader = value;
  m_SorHeaderIsSet = true;
}
bool SorInfo::sorHeaderIsSet() const { return m_SorHeaderIsSet; }
void SorInfo::unsetSorHeader() { m_SorHeaderIsSet = false; }
std::string SorInfo::getSorTransparentInfo() const {
  return m_SorTransparentInfo;
}
void SorInfo::setSorTransparentInfo(std::string const &value) {
  m_SorTransparentInfo = value;
  m_SorTransparentInfoIsSet = true;
}
bool SorInfo::sorTransparentInfoIsSet() const {
  return m_SorTransparentInfoIsSet;
}
void SorInfo::unsetSorTransparentInfo() { m_SorTransparentInfoIsSet = false; }
std::string SorInfo::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void SorInfo::setSupportedFeatures(std::string const &value) {
  m_SupportedFeatures = value;
  m_SupportedFeaturesIsSet = true;
}
bool SorInfo::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void SorInfo::unsetSupportedFeatures() { m_SupportedFeaturesIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org