/**
 * Naf_EventExposure
 * AF Event Exposure Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "UeCommunicationCollection.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

UeCommunicationCollection::UeCommunicationCollection() {
  m_Gpsi = "";
  m_GpsiIsSet = false;
  m_Supi = "";
  m_SupiIsSet = false;
  m_ExterGroupId = "";
  m_ExterGroupIdIsSet = false;
  m_InterGroupId = "";
  m_InterGroupIdIsSet = false;
  m_AppId = "";
}

UeCommunicationCollection::~UeCommunicationCollection() {}

void UeCommunicationCollection::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const UeCommunicationCollection &o) {
  j = nlohmann::json();
  if (o.gpsiIsSet())
    j["gpsi"] = o.m_Gpsi;
  if (o.supiIsSet())
    j["supi"] = o.m_Supi;
  if (o.exterGroupIdIsSet())
    j["exterGroupId"] = o.m_ExterGroupId;
  if (o.interGroupIdIsSet())
    j["interGroupId"] = o.m_InterGroupId;
  j["appId"] = o.m_AppId;
  j["comms"] = o.m_Comms;
}

void from_json(const nlohmann::json &j, UeCommunicationCollection &o) {
  if (j.find("gpsi") != j.end()) {
    j.at("gpsi").get_to(o.m_Gpsi);
    o.m_GpsiIsSet = true;
  }
  if (j.find("supi") != j.end()) {
    j.at("supi").get_to(o.m_Supi);
    o.m_SupiIsSet = true;
  }
  if (j.find("exterGroupId") != j.end()) {
    j.at("exterGroupId").get_to(o.m_ExterGroupId);
    o.m_ExterGroupIdIsSet = true;
  }
  if (j.find("interGroupId") != j.end()) {
    j.at("interGroupId").get_to(o.m_InterGroupId);
    o.m_InterGroupIdIsSet = true;
  }
  j.at("appId").get_to(o.m_AppId);
  j.at("comms").get_to(o.m_Comms);
}

std::string UeCommunicationCollection::getGpsi() const { return m_Gpsi; }
void UeCommunicationCollection::setGpsi(std::string const &value) {
  m_Gpsi = value;
  m_GpsiIsSet = true;
}
bool UeCommunicationCollection::gpsiIsSet() const { return m_GpsiIsSet; }
void UeCommunicationCollection::unsetGpsi() { m_GpsiIsSet = false; }
std::string UeCommunicationCollection::getSupi() const { return m_Supi; }
void UeCommunicationCollection::setSupi(std::string const &value) {
  m_Supi = value;
  m_SupiIsSet = true;
}
bool UeCommunicationCollection::supiIsSet() const { return m_SupiIsSet; }
void UeCommunicationCollection::unsetSupi() { m_SupiIsSet = false; }
std::string UeCommunicationCollection::getExterGroupId() const {
  return m_ExterGroupId;
}
void UeCommunicationCollection::setExterGroupId(std::string const &value) {
  m_ExterGroupId = value;
  m_ExterGroupIdIsSet = true;
}
bool UeCommunicationCollection::exterGroupIdIsSet() const {
  return m_ExterGroupIdIsSet;
}
void UeCommunicationCollection::unsetExterGroupId() {
  m_ExterGroupIdIsSet = false;
}
std::string UeCommunicationCollection::getInterGroupId() const {
  return m_InterGroupId;
}
void UeCommunicationCollection::setInterGroupId(std::string const &value) {
  m_InterGroupId = value;
  m_InterGroupIdIsSet = true;
}
bool UeCommunicationCollection::interGroupIdIsSet() const {
  return m_InterGroupIdIsSet;
}
void UeCommunicationCollection::unsetInterGroupId() {
  m_InterGroupIdIsSet = false;
}
std::string UeCommunicationCollection::getAppId() const { return m_AppId; }
void UeCommunicationCollection::setAppId(std::string const &value) {
  m_AppId = value;
}
std::vector<CommunicationCollection> &UeCommunicationCollection::getComms() {
  return m_Comms;
}
void UeCommunicationCollection::setComms(
    std::vector<CommunicationCollection> const &value) {
  m_Comms = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
