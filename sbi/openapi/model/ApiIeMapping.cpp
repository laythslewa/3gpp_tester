/**
 * N32 Handshake API
 * N32-c Handshake Service.  © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC).  All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ApiIeMapping.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ApiIeMapping::ApiIeMapping() {}

ApiIeMapping::~ApiIeMapping() {}

void ApiIeMapping::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const ApiIeMapping &o) {
  j = nlohmann::json();
  j["apiSignature"] = o.m_ApiSignature;
  j["apiMethod"] = o.m_ApiMethod;
  j["IeList"] = o.m_IeList;
}

void from_json(const nlohmann::json &j, ApiIeMapping &o) {
  j.at("apiSignature").get_to(o.m_ApiSignature);
  j.at("apiMethod").get_to(o.m_ApiMethod);
  j.at("IeList").get_to(o.m_IeList);
}

ApiSignature ApiIeMapping::getApiSignature() const { return m_ApiSignature; }
void ApiIeMapping::setApiSignature(ApiSignature const &value) {
  m_ApiSignature = value;
}
HttpMethod ApiIeMapping::getApiMethod() const { return m_ApiMethod; }
void ApiIeMapping::setApiMethod(HttpMethod const &value) {
  m_ApiMethod = value;
}
std::vector<IeInfo> &ApiIeMapping::getIeList() { return m_IeList; }
void ApiIeMapping::setIeList(std::vector<IeInfo> const &value) {
  m_IeList = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
