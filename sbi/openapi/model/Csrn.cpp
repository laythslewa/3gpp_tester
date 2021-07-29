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

#include "Csrn.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

Csrn::Csrn() { m_Csrn = ""; }

Csrn::~Csrn() {}

void Csrn::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const Csrn &o) {
  j = nlohmann::json();
  j["csrn"] = o.m_Csrn;
}

void from_json(const nlohmann::json &j, Csrn &o) {
  j.at("csrn").get_to(o.m_Csrn);
}

std::string Csrn::getCsrn() const { return m_Csrn; }
void Csrn::setCsrn(std::string const &value) { m_Csrn = value; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
