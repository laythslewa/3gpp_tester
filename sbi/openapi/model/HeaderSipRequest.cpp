/**
 * Nhss_imsSDM
 * Nhss Subscriber Data Management Service for IMS. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "HeaderSipRequest.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

HeaderSipRequest::HeaderSipRequest() {
  m_Header = "";
  m_Content = "";
  m_ContentIsSet = false;
}

HeaderSipRequest::~HeaderSipRequest() {}

void HeaderSipRequest::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const HeaderSipRequest &o) {
  j = nlohmann::json();
  j["header"] = o.m_Header;
  if (o.contentIsSet())
    j["content"] = o.m_Content;
}

void from_json(const nlohmann::json &j, HeaderSipRequest &o) {
  j.at("header").get_to(o.m_Header);
  if (j.find("content") != j.end()) {
    j.at("content").get_to(o.m_Content);
    o.m_ContentIsSet = true;
  }
}

std::string HeaderSipRequest::getHeader() const { return m_Header; }
void HeaderSipRequest::setHeader(std::string const &value) { m_Header = value; }
std::string HeaderSipRequest::getContent() const { return m_Content; }
void HeaderSipRequest::setContent(std::string const &value) {
  m_Content = value;
  m_ContentIsSet = true;
}
bool HeaderSipRequest::contentIsSet() const { return m_ContentIsSet; }
void HeaderSipRequest::unsetContent() { m_ContentIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
