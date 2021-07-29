/**
 * Unified Data Repository Service API file for policy data
 * The API version is defined in 3GPP TS 29.504 © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "OperatorSpecificDataContainer.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

OperatorSpecificDataContainer::OperatorSpecificDataContainer() {
  m_DataType = "";
  m_DataTypeDefinition = "";
  m_DataTypeDefinitionIsSet = false;
  m_SupportedFeatures = "";
  m_SupportedFeaturesIsSet = false;
}

OperatorSpecificDataContainer::~OperatorSpecificDataContainer() {}

void OperatorSpecificDataContainer::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const OperatorSpecificDataContainer &o) {
  j = nlohmann::json();
  j["dataType"] = o.m_DataType;
  if (o.dataTypeDefinitionIsSet())
    j["dataTypeDefinition"] = o.m_DataTypeDefinition;
  j["value"] = o.m_Value;
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
}

void from_json(const nlohmann::json &j, OperatorSpecificDataContainer &o) {
  j.at("dataType").get_to(o.m_DataType);
  if (j.find("dataTypeDefinition") != j.end()) {
    j.at("dataTypeDefinition").get_to(o.m_DataTypeDefinition);
    o.m_DataTypeDefinitionIsSet = true;
  }
  j.at("value").get_to(o.m_Value);
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
}

std::string OperatorSpecificDataContainer::getDataType() const {
  return m_DataType;
}
void OperatorSpecificDataContainer::setDataType(std::string const &value) {
  m_DataType = value;
}
std::string OperatorSpecificDataContainer::getDataTypeDefinition() const {
  return m_DataTypeDefinition;
}
void OperatorSpecificDataContainer::setDataTypeDefinition(
    std::string const &value) {
  m_DataTypeDefinition = value;
  m_DataTypeDefinitionIsSet = true;
}
bool OperatorSpecificDataContainer::dataTypeDefinitionIsSet() const {
  return m_DataTypeDefinitionIsSet;
}
void OperatorSpecificDataContainer::unsetDataTypeDefinition() {
  m_DataTypeDefinitionIsSet = false;
}
OneOfstringintegernumberbooleanobject
OperatorSpecificDataContainer::getValue() const {
  return m_Value;
}
void OperatorSpecificDataContainer::setValue(
    OneOfstringintegernumberbooleanobject const &value) {
  m_Value = value;
}
std::string OperatorSpecificDataContainer::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void OperatorSpecificDataContainer::setSupportedFeatures(
    std::string const &value) {
  m_SupportedFeatures = value;
  m_SupportedFeaturesIsSet = true;
}
bool OperatorSpecificDataContainer::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void OperatorSpecificDataContainer::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org