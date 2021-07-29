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

#include "SubscribedSnssai.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

SubscribedSnssai::SubscribedSnssai() {
  m_DefaultIndication = false;
  m_DefaultIndicationIsSet = false;
}

SubscribedSnssai::~SubscribedSnssai() {}

void SubscribedSnssai::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const SubscribedSnssai &o) {
  j = nlohmann::json();
  j["subscribedSnssai"] = o.m_SubscribedSnssai;
  if (o.defaultIndicationIsSet())
    j["defaultIndication"] = o.m_DefaultIndication;
}

void from_json(const nlohmann::json &j, SubscribedSnssai &o) {
  j.at("subscribedSnssai").get_to(o.m_SubscribedSnssai);
  if (j.find("defaultIndication") != j.end()) {
    j.at("defaultIndication").get_to(o.m_DefaultIndication);
    o.m_DefaultIndicationIsSet = true;
  }
}

Snssai SubscribedSnssai::getSubscribedSnssai() const {
  return m_SubscribedSnssai;
}
void SubscribedSnssai::setSubscribedSnssai(Snssai const &value) {
  m_SubscribedSnssai = value;
}
bool SubscribedSnssai::isDefaultIndication() const {
  return m_DefaultIndication;
}
void SubscribedSnssai::setDefaultIndication(bool const value) {
  m_DefaultIndication = value;
  m_DefaultIndicationIsSet = true;
}
bool SubscribedSnssai::defaultIndicationIsSet() const {
  return m_DefaultIndicationIsSet;
}
void SubscribedSnssai::unsetDefaultIndication() {
  m_DefaultIndicationIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
