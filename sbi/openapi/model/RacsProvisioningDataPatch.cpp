/**
 * 3gpp-racs-parameter-provisioning
 * API for provisioning UE radio capability parameters. © 2021, 3GPP
 * Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights
 * reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "RacsProvisioningDataPatch.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

RacsProvisioningDataPatch::RacsProvisioningDataPatch() {
  m_RacsConfigsIsSet = false;
}

RacsProvisioningDataPatch::~RacsProvisioningDataPatch() {}

void RacsProvisioningDataPatch::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const RacsProvisioningDataPatch &o) {
  j = nlohmann::json();
  if (o.racsConfigsIsSet() || !o.m_RacsConfigs.empty())
    j["racsConfigs"] = o.m_RacsConfigs;
}

void from_json(const nlohmann::json &j, RacsProvisioningDataPatch &o) {
  if (j.find("racsConfigs") != j.end()) {
    j.at("racsConfigs").get_to(o.m_RacsConfigs);
    o.m_RacsConfigsIsSet = true;
  }
}

std::map<std::string, RacsConfigurationRm> &
RacsProvisioningDataPatch::getRacsConfigs() {
  return m_RacsConfigs;
}
void RacsProvisioningDataPatch::setRacsConfigs(
    std::map<std::string, RacsConfigurationRm> const &value) {
  m_RacsConfigs = value;
  m_RacsConfigsIsSet = true;
}
bool RacsProvisioningDataPatch::racsConfigsIsSet() const {
  return m_RacsConfigsIsSet;
}
void RacsProvisioningDataPatch::unsetRacsConfigs() {
  m_RacsConfigsIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
