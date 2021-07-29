/**
 * NSSF NS Selection
 * NSSF Network Slice Selection Service. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "MappingOfSnssai.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

MappingOfSnssai::MappingOfSnssai() {}

MappingOfSnssai::~MappingOfSnssai() {}

void MappingOfSnssai::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const MappingOfSnssai &o) {
  j = nlohmann::json();
  j["servingSnssai"] = o.m_ServingSnssai;
  j["homeSnssai"] = o.m_HomeSnssai;
}

void from_json(const nlohmann::json &j, MappingOfSnssai &o) {
  j.at("servingSnssai").get_to(o.m_ServingSnssai);
  j.at("homeSnssai").get_to(o.m_HomeSnssai);
}

Snssai MappingOfSnssai::getServingSnssai() const { return m_ServingSnssai; }
void MappingOfSnssai::setServingSnssai(Snssai const &value) {
  m_ServingSnssai = value;
}
Snssai MappingOfSnssai::getHomeSnssai() const { return m_HomeSnssai; }
void MappingOfSnssai::setHomeSnssai(Snssai const &value) {
  m_HomeSnssai = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
