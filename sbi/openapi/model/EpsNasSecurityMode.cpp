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

#include "EpsNasSecurityMode.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

EpsNasSecurityMode::EpsNasSecurityMode() {}

EpsNasSecurityMode::~EpsNasSecurityMode() {}

void EpsNasSecurityMode::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const EpsNasSecurityMode &o) {
  j = nlohmann::json();
  j["integrityAlgorithm"] = o.m_IntegrityAlgorithm;
  j["cipheringAlgorithm"] = o.m_CipheringAlgorithm;
}

void from_json(const nlohmann::json &j, EpsNasSecurityMode &o) {
  j.at("integrityAlgorithm").get_to(o.m_IntegrityAlgorithm);
  j.at("cipheringAlgorithm").get_to(o.m_CipheringAlgorithm);
}

EpsNasIntegrityAlgorithm EpsNasSecurityMode::getIntegrityAlgorithm() const {
  return m_IntegrityAlgorithm;
}
void EpsNasSecurityMode::setIntegrityAlgorithm(
    EpsNasIntegrityAlgorithm const &value) {
  m_IntegrityAlgorithm = value;
}
EpsNasCipheringAlgorithm EpsNasSecurityMode::getCipheringAlgorithm() const {
  return m_CipheringAlgorithm;
}
void EpsNasSecurityMode::setCipheringAlgorithm(
    EpsNasCipheringAlgorithm const &value) {
  m_CipheringAlgorithm = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
