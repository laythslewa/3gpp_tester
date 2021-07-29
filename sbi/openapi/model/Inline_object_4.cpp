/**
 * Namf_Communication
 * AMF Communication Service © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "Inline_object_4.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

Inline_object_4::Inline_object_4() {
  m_JsonDataIsSet = false;
  m_BinaryDataN1MessageIsSet = false;
  m_BinaryDataN2InformationIsSet = false;
}

Inline_object_4::~Inline_object_4() {}

void Inline_object_4::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const Inline_object_4 &o) {
  j = nlohmann::json();
  if (o.jsonDataIsSet())
    j["jsonData"] = o.m_JsonData;
  if (o.binaryDataN1MessageIsSet())
    j["binaryDataN1Message"] = o.m_BinaryDataN1Message;
  if (o.binaryDataN2InformationIsSet())
    j["binaryDataN2Information"] = o.m_BinaryDataN2Information;
}

void from_json(const nlohmann::json &j, Inline_object_4 &o) {
  if (j.find("jsonData") != j.end()) {
    j.at("jsonData").get_to(o.m_JsonData);
    o.m_JsonDataIsSet = true;
  }
  if (j.find("binaryDataN1Message") != j.end()) {
    j.at("binaryDataN1Message").get_to(o.m_BinaryDataN1Message);
    o.m_BinaryDataN1MessageIsSet = true;
  }
  if (j.find("binaryDataN2Information") != j.end()) {
    j.at("binaryDataN2Information").get_to(o.m_BinaryDataN2Information);
    o.m_BinaryDataN2InformationIsSet = true;
  }
}

N2InformationNotification Inline_object_4::getJsonData() const {
  return m_JsonData;
}
void Inline_object_4::setJsonData(N2InformationNotification const &value) {
  m_JsonData = value;
  m_JsonDataIsSet = true;
}
bool Inline_object_4::jsonDataIsSet() const { return m_JsonDataIsSet; }
void Inline_object_4::unsetJsonData() { m_JsonDataIsSet = false; }
std::string Inline_object_4::getBinaryDataN1Message() const {
  return m_BinaryDataN1Message;
}
void Inline_object_4::setBinaryDataN1Message(std::string const &value) {
  m_BinaryDataN1Message = value;
  m_BinaryDataN1MessageIsSet = true;
}
bool Inline_object_4::binaryDataN1MessageIsSet() const {
  return m_BinaryDataN1MessageIsSet;
}
void Inline_object_4::unsetBinaryDataN1Message() {
  m_BinaryDataN1MessageIsSet = false;
}
std::string Inline_object_4::getBinaryDataN2Information() const {
  return m_BinaryDataN2Information;
}
void Inline_object_4::setBinaryDataN2Information(std::string const &value) {
  m_BinaryDataN2Information = value;
  m_BinaryDataN2InformationIsSet = true;
}
bool Inline_object_4::binaryDataN2InformationIsSet() const {
  return m_BinaryDataN2InformationIsSet;
}
void Inline_object_4::unsetBinaryDataN2Information() {
  m_BinaryDataN2InformationIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
