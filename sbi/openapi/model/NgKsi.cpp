/**
 * Namf_Communication
 * AMF Communication Service © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "NgKsi.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

NgKsi::NgKsi() { m_Ksi = 0; }

NgKsi::~NgKsi() {}

void NgKsi::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const NgKsi &o) {
  j = nlohmann::json();
  j["tsc"] = o.m_Tsc;
  j["ksi"] = o.m_Ksi;
}

void from_json(const nlohmann::json &j, NgKsi &o) {
  j.at("tsc").get_to(o.m_Tsc);
  j.at("ksi").get_to(o.m_Ksi);
}

ScType NgKsi::getTsc() const { return m_Tsc; }
void NgKsi::setTsc(ScType const &value) { m_Tsc = value; }
int32_t NgKsi::getKsi() const { return m_Ksi; }
void NgKsi::setKsi(int32_t const value) { m_Ksi = value; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org