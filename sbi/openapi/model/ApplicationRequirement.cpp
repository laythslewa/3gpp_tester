/**
 * VAE_ApplicationRequirement
 * API for VAE Application Requirement Service © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ApplicationRequirement.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ApplicationRequirement::ApplicationRequirement() {
  m_ServiceLevelIsSet = false;
}

ApplicationRequirement::~ApplicationRequirement() {}

void ApplicationRequirement::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const ApplicationRequirement &o) {
  j = nlohmann::json();
  if (o.serviceLevelIsSet())
    j["serviceLevel"] = o.m_ServiceLevel;
}

void from_json(const nlohmann::json &j, ApplicationRequirement &o) {
  if (j.find("serviceLevel") != j.end()) {
    j.at("serviceLevel").get_to(o.m_ServiceLevel);
    o.m_ServiceLevelIsSet = true;
  }
}

ServiceLevel ApplicationRequirement::getServiceLevel() const {
  return m_ServiceLevel;
}
void ApplicationRequirement::setServiceLevel(ServiceLevel const &value) {
  m_ServiceLevel = value;
  m_ServiceLevelIsSet = true;
}
bool ApplicationRequirement::serviceLevelIsSet() const {
  return m_ServiceLevelIsSet;
}
void ApplicationRequirement::unsetServiceLevel() {
  m_ServiceLevelIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org