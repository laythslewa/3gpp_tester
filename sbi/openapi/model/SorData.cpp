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

#include "SorData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

SorData::SorData() {
  m_ProvisioningTime = "";
  m_SorXmacIue = "";
  m_SorXmacIueIsSet = false;
  m_SorMacIue = "";
  m_SorMacIueIsSet = false;
}

SorData::~SorData() {}

void SorData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const SorData &o) {
  j = nlohmann::json();
  j["provisioningTime"] = o.m_ProvisioningTime;
  j["ueUpdateStatus"] = o.m_UeUpdateStatus;
  if (o.sorXmacIueIsSet())
    j["sorXmacIue"] = o.m_SorXmacIue;
  if (o.sorMacIueIsSet())
    j["sorMacIue"] = o.m_SorMacIue;
}

void from_json(const nlohmann::json &j, SorData &o) {
  j.at("provisioningTime").get_to(o.m_ProvisioningTime);
  j.at("ueUpdateStatus").get_to(o.m_UeUpdateStatus);
  if (j.find("sorXmacIue") != j.end()) {
    j.at("sorXmacIue").get_to(o.m_SorXmacIue);
    o.m_SorXmacIueIsSet = true;
  }
  if (j.find("sorMacIue") != j.end()) {
    j.at("sorMacIue").get_to(o.m_SorMacIue);
    o.m_SorMacIueIsSet = true;
  }
}

std::string SorData::getProvisioningTime() const { return m_ProvisioningTime; }
void SorData::setProvisioningTime(std::string const &value) {
  m_ProvisioningTime = value;
}
UeUpdateStatus SorData::getUeUpdateStatus() const { return m_UeUpdateStatus; }
void SorData::setUeUpdateStatus(UeUpdateStatus const &value) {
  m_UeUpdateStatus = value;
}
std::string SorData::getSorXmacIue() const { return m_SorXmacIue; }
void SorData::setSorXmacIue(std::string const &value) {
  m_SorXmacIue = value;
  m_SorXmacIueIsSet = true;
}
bool SorData::sorXmacIueIsSet() const { return m_SorXmacIueIsSet; }
void SorData::unsetSorXmacIue() { m_SorXmacIueIsSet = false; }
std::string SorData::getSorMacIue() const { return m_SorMacIue; }
void SorData::setSorMacIue(std::string const &value) {
  m_SorMacIue = value;
  m_SorMacIueIsSet = true;
}
bool SorData::sorMacIueIsSet() const { return m_SorMacIueIsSet; }
void SorData::unsetSorMacIue() { m_SorMacIueIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org