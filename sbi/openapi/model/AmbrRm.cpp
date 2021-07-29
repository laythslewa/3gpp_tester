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

#include "AmbrRm.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

AmbrRm::AmbrRm() {
  m_Uplink = "";
  m_Downlink = "";
}

AmbrRm::~AmbrRm() {}

void AmbrRm::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const AmbrRm &o) {
  j = nlohmann::json();
  j["uplink"] = o.m_Uplink;
  j["downlink"] = o.m_Downlink;
}

void from_json(const nlohmann::json &j, AmbrRm &o) {
  j.at("uplink").get_to(o.m_Uplink);
  j.at("downlink").get_to(o.m_Downlink);
}

std::string AmbrRm::getUplink() const { return m_Uplink; }
void AmbrRm::setUplink(std::string const &value) { m_Uplink = value; }
std::string AmbrRm::getDownlink() const { return m_Downlink; }
void AmbrRm::setDownlink(std::string const &value) { m_Downlink = value; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
