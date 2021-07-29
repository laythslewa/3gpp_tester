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

#include "Inline_object.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

Inline_object::Inline_object() {
  m_JsonDataIsSet = false;
  m_BinaryDataUeRadioCapability5GSIsSet = false;
  m_BinaryDataUeRadioCapabilityEPSIsSet = false;
}

Inline_object::~Inline_object() {}

void Inline_object::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const Inline_object &o) {
  j = nlohmann::json();
  if (o.jsonDataIsSet())
    j["jsonData"] = o.m_JsonData;
  if (o.binaryDataUeRadioCapability5GSIsSet())
    j["binaryDataUeRadioCapability5GS"] = o.m_BinaryDataUeRadioCapability5GS;
  if (o.binaryDataUeRadioCapabilityEPSIsSet())
    j["binaryDataUeRadioCapabilityEPS"] = o.m_BinaryDataUeRadioCapabilityEPS;
}

void from_json(const nlohmann::json &j, Inline_object &o) {
  if (j.find("jsonData") != j.end()) {
    j.at("jsonData").get_to(o.m_JsonData);
    o.m_JsonDataIsSet = true;
  }
  if (j.find("binaryDataUeRadioCapability5GS") != j.end()) {
    j.at("binaryDataUeRadioCapability5GS")
        .get_to(o.m_BinaryDataUeRadioCapability5GS);
    o.m_BinaryDataUeRadioCapability5GSIsSet = true;
  }
  if (j.find("binaryDataUeRadioCapabilityEPS") != j.end()) {
    j.at("binaryDataUeRadioCapabilityEPS")
        .get_to(o.m_BinaryDataUeRadioCapabilityEPS);
    o.m_BinaryDataUeRadioCapabilityEPSIsSet = true;
  }
}

DicEntryCreateData Inline_object::getJsonData() const { return m_JsonData; }
void Inline_object::setJsonData(DicEntryCreateData const &value) {
  m_JsonData = value;
  m_JsonDataIsSet = true;
}
bool Inline_object::jsonDataIsSet() const { return m_JsonDataIsSet; }
void Inline_object::unsetJsonData() { m_JsonDataIsSet = false; }
std::string Inline_object::getBinaryDataUeRadioCapability5GS() const {
  return m_BinaryDataUeRadioCapability5GS;
}
void Inline_object::setBinaryDataUeRadioCapability5GS(
    std::string const &value) {
  m_BinaryDataUeRadioCapability5GS = value;
  m_BinaryDataUeRadioCapability5GSIsSet = true;
}
bool Inline_object::binaryDataUeRadioCapability5GSIsSet() const {
  return m_BinaryDataUeRadioCapability5GSIsSet;
}
void Inline_object::unsetBinaryDataUeRadioCapability5GS() {
  m_BinaryDataUeRadioCapability5GSIsSet = false;
}
std::string Inline_object::getBinaryDataUeRadioCapabilityEPS() const {
  return m_BinaryDataUeRadioCapabilityEPS;
}
void Inline_object::setBinaryDataUeRadioCapabilityEPS(
    std::string const &value) {
  m_BinaryDataUeRadioCapabilityEPS = value;
  m_BinaryDataUeRadioCapabilityEPSIsSet = true;
}
bool Inline_object::binaryDataUeRadioCapabilityEPSIsSet() const {
  return m_BinaryDataUeRadioCapabilityEPSIsSet;
}
void Inline_object::unsetBinaryDataUeRadioCapabilityEPS() {
  m_BinaryDataUeRadioCapabilityEPSIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
