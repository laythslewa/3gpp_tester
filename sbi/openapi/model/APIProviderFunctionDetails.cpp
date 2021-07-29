/**
 * CAPIF_API_Provider_Management_API
 * API for API provider domain functions management. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "APIProviderFunctionDetails.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

APIProviderFunctionDetails::APIProviderFunctionDetails() {
  m_ApiProvFuncId = "";
  m_ApiProvFuncIdIsSet = false;
  m_ApiProvFuncInfo = "";
  m_ApiProvFuncInfoIsSet = false;
}

APIProviderFunctionDetails::~APIProviderFunctionDetails() {}

void APIProviderFunctionDetails::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const APIProviderFunctionDetails &o) {
  j = nlohmann::json();
  if (o.apiProvFuncIdIsSet())
    j["apiProvFuncId"] = o.m_ApiProvFuncId;
  j["regInfo"] = o.m_RegInfo;
  j["apiProvFuncRole"] = o.m_ApiProvFuncRole;
  if (o.apiProvFuncInfoIsSet())
    j["apiProvFuncInfo"] = o.m_ApiProvFuncInfo;
}

void from_json(const nlohmann::json &j, APIProviderFunctionDetails &o) {
  if (j.find("apiProvFuncId") != j.end()) {
    j.at("apiProvFuncId").get_to(o.m_ApiProvFuncId);
    o.m_ApiProvFuncIdIsSet = true;
  }
  j.at("regInfo").get_to(o.m_RegInfo);
  j.at("apiProvFuncRole").get_to(o.m_ApiProvFuncRole);
  if (j.find("apiProvFuncInfo") != j.end()) {
    j.at("apiProvFuncInfo").get_to(o.m_ApiProvFuncInfo);
    o.m_ApiProvFuncInfoIsSet = true;
  }
}

std::string APIProviderFunctionDetails::getApiProvFuncId() const {
  return m_ApiProvFuncId;
}
void APIProviderFunctionDetails::setApiProvFuncId(std::string const &value) {
  m_ApiProvFuncId = value;
  m_ApiProvFuncIdIsSet = true;
}
bool APIProviderFunctionDetails::apiProvFuncIdIsSet() const {
  return m_ApiProvFuncIdIsSet;
}
void APIProviderFunctionDetails::unsetApiProvFuncId() {
  m_ApiProvFuncIdIsSet = false;
}
RegistrationInformation APIProviderFunctionDetails::getRegInfo() const {
  return m_RegInfo;
}
void APIProviderFunctionDetails::setRegInfo(
    RegistrationInformation const &value) {
  m_RegInfo = value;
}
ApiProviderFuncRole APIProviderFunctionDetails::getApiProvFuncRole() const {
  return m_ApiProvFuncRole;
}
void APIProviderFunctionDetails::setApiProvFuncRole(
    ApiProviderFuncRole const &value) {
  m_ApiProvFuncRole = value;
}
std::string APIProviderFunctionDetails::getApiProvFuncInfo() const {
  return m_ApiProvFuncInfo;
}
void APIProviderFunctionDetails::setApiProvFuncInfo(std::string const &value) {
  m_ApiProvFuncInfo = value;
  m_ApiProvFuncInfoIsSet = true;
}
bool APIProviderFunctionDetails::apiProvFuncInfoIsSet() const {
  return m_ApiProvFuncInfoIsSet;
}
void APIProviderFunctionDetails::unsetApiProvFuncInfo() {
  m_ApiProvFuncInfoIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
