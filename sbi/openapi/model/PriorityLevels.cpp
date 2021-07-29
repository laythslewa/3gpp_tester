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

#include "PriorityLevels.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

PriorityLevels::PriorityLevels() {}

PriorityLevels::~PriorityLevels() {}

void PriorityLevels::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const PriorityLevels &o) {
  j = nlohmann::json();
  j["servicePriorityLevelList"] = o.m_ServicePriorityLevelList;
}

void from_json(const nlohmann::json &j, PriorityLevels &o) {
  j.at("servicePriorityLevelList").get_to(o.m_ServicePriorityLevelList);
}

std::vector<std::string> &PriorityLevels::getServicePriorityLevelList() {
  return m_ServicePriorityLevelList;
}
void PriorityLevels::setServicePriorityLevelList(
    std::vector<std::string> const &value) {
  m_ServicePriorityLevelList = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
