/**
 * 3gpp-5glan-pp
 * API for 5G LAN Parameter Provision. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "AppDescriptorRm.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

AppDescriptorRm::AppDescriptorRm() { m_AppIdsIsSet = false; }

AppDescriptorRm::~AppDescriptorRm() {}

void AppDescriptorRm::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const AppDescriptorRm &o) {
  j = nlohmann::json();
  if (o.appIdsIsSet() || !o.m_AppIds.empty())
    j["appIds"] = o.m_AppIds;
}

void from_json(const nlohmann::json &j, AppDescriptorRm &o) {
  if (j.find("appIds") != j.end()) {
    j.at("appIds").get_to(o.m_AppIds);
    o.m_AppIdsIsSet = true;
  }
}

std::map<std::string, std::string> &AppDescriptorRm::getAppIds() {
  return m_AppIds;
}
void AppDescriptorRm::setAppIds(
    std::map<std::string, std::string> const &value) {
  m_AppIds = value;
  m_AppIdsIsSet = true;
}
bool AppDescriptorRm::appIdsIsSet() const { return m_AppIdsIsSet; }
void AppDescriptorRm::unsetAppIds() { m_AppIdsIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
