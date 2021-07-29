/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.3.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "HalTemplate.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

HalTemplate::HalTemplate() {
  m_Title = "";
  m_TitleIsSet = false;
  m_ContentType = "";
  m_ContentTypeIsSet = false;
  m_PropertiesIsSet = false;
}

HalTemplate::~HalTemplate() {}

void HalTemplate::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const HalTemplate &o) {
  j = nlohmann::json();
  if (o.titleIsSet())
    j["title"] = o.m_Title;
  j["method"] = o.m_Method;
  if (o.contentTypeIsSet())
    j["contentType"] = o.m_ContentType;
  if (o.propertiesIsSet() || !o.m_Properties.empty())
    j["properties"] = o.m_Properties;
}

void from_json(const nlohmann::json &j, HalTemplate &o) {
  if (j.find("title") != j.end()) {
    j.at("title").get_to(o.m_Title);
    o.m_TitleIsSet = true;
  }
  j.at("method").get_to(o.m_Method);
  if (j.find("contentType") != j.end()) {
    j.at("contentType").get_to(o.m_ContentType);
    o.m_ContentTypeIsSet = true;
  }
  if (j.find("properties") != j.end()) {
    j.at("properties").get_to(o.m_Properties);
    o.m_PropertiesIsSet = true;
  }
}

std::string HalTemplate::getTitle() const { return m_Title; }
void HalTemplate::setTitle(std::string const &value) {
  m_Title = value;
  m_TitleIsSet = true;
}
bool HalTemplate::titleIsSet() const { return m_TitleIsSet; }
void HalTemplate::unsetTitle() { m_TitleIsSet = false; }
HttpMethod HalTemplate::getMethod() const { return m_Method; }
void HalTemplate::setMethod(HttpMethod const &value) { m_Method = value; }
std::string HalTemplate::getContentType() const { return m_ContentType; }
void HalTemplate::setContentType(std::string const &value) {
  m_ContentType = value;
  m_ContentTypeIsSet = true;
}
bool HalTemplate::contentTypeIsSet() const { return m_ContentTypeIsSet; }
void HalTemplate::unsetContentType() { m_ContentTypeIsSet = false; }
std::vector<Property> &HalTemplate::getProperties() { return m_Properties; }
void HalTemplate::setProperties(std::vector<Property> const &value) {
  m_Properties = value;
  m_PropertiesIsSet = true;
}
bool HalTemplate::propertiesIsSet() const { return m_PropertiesIsSet; }
void HalTemplate::unsetProperties() { m_PropertiesIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
