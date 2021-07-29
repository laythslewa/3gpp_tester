/**
 * Nucmf_UECapabilityManagement
 * Nucmf_UECapabilityManagement Service. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "UeRadioCapaId.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

UeRadioCapaId::UeRadioCapaId() {
  m_PlmnAssiUeRadioCapIdIsSet = false;
  m_ManAssiUeRadioCapIdIsSet = false;
}

UeRadioCapaId::~UeRadioCapaId() {}

void UeRadioCapaId::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const UeRadioCapaId &o) {
  j = nlohmann::json();
  if (o.plmnAssiUeRadioCapIdIsSet())
    j["plmnAssiUeRadioCapId"] = o.m_PlmnAssiUeRadioCapId;
  if (o.manAssiUeRadioCapIdIsSet())
    j["manAssiUeRadioCapId"] = o.m_ManAssiUeRadioCapId;
}

void from_json(const nlohmann::json &j, UeRadioCapaId &o) {
  if (j.find("plmnAssiUeRadioCapId") != j.end()) {
    j.at("plmnAssiUeRadioCapId").get_to(o.m_PlmnAssiUeRadioCapId);
    o.m_PlmnAssiUeRadioCapIdIsSet = true;
  }
  if (j.find("manAssiUeRadioCapId") != j.end()) {
    j.at("manAssiUeRadioCapId").get_to(o.m_ManAssiUeRadioCapId);
    o.m_ManAssiUeRadioCapIdIsSet = true;
  }
}

std::string UeRadioCapaId::getPlmnAssiUeRadioCapId() const {
  return m_PlmnAssiUeRadioCapId;
}
void UeRadioCapaId::setPlmnAssiUeRadioCapId(std::string const &value) {
  m_PlmnAssiUeRadioCapId = value;
  m_PlmnAssiUeRadioCapIdIsSet = true;
}
bool UeRadioCapaId::plmnAssiUeRadioCapIdIsSet() const {
  return m_PlmnAssiUeRadioCapIdIsSet;
}
void UeRadioCapaId::unsetPlmnAssiUeRadioCapId() {
  m_PlmnAssiUeRadioCapIdIsSet = false;
}
std::string UeRadioCapaId::getManAssiUeRadioCapId() const {
  return m_ManAssiUeRadioCapId;
}
void UeRadioCapaId::setManAssiUeRadioCapId(std::string const &value) {
  m_ManAssiUeRadioCapId = value;
  m_ManAssiUeRadioCapIdIsSet = true;
}
bool UeRadioCapaId::manAssiUeRadioCapIdIsSet() const {
  return m_ManAssiUeRadioCapIdIsSet;
}
void UeRadioCapaId::unsetManAssiUeRadioCapId() {
  m_ManAssiUeRadioCapIdIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
