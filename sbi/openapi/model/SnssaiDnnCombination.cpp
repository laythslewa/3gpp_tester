/**
 * Npcf_EventExposure
 * PCF Event Exposure Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SnssaiDnnCombination.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

SnssaiDnnCombination::SnssaiDnnCombination() {
  m_SnssaiIsSet = false;
  m_DnnsIsSet = false;
}

SnssaiDnnCombination::~SnssaiDnnCombination() {}

void SnssaiDnnCombination::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const SnssaiDnnCombination &o) {
  j = nlohmann::json();
  if (o.snssaiIsSet())
    j["snssai"] = o.m_Snssai;
  if (o.dnnsIsSet() || !o.m_Dnns.empty())
    j["dnns"] = o.m_Dnns;
}

void from_json(const nlohmann::json &j, SnssaiDnnCombination &o) {
  if (j.find("snssai") != j.end()) {
    j.at("snssai").get_to(o.m_Snssai);
    o.m_SnssaiIsSet = true;
  }
  if (j.find("dnns") != j.end()) {
    j.at("dnns").get_to(o.m_Dnns);
    o.m_DnnsIsSet = true;
  }
}

Snssai SnssaiDnnCombination::getSnssai() const { return m_Snssai; }
void SnssaiDnnCombination::setSnssai(Snssai const &value) {
  m_Snssai = value;
  m_SnssaiIsSet = true;
}
bool SnssaiDnnCombination::snssaiIsSet() const { return m_SnssaiIsSet; }
void SnssaiDnnCombination::unsetSnssai() { m_SnssaiIsSet = false; }
std::vector<std::string> &SnssaiDnnCombination::getDnns() { return m_Dnns; }
void SnssaiDnnCombination::setDnns(std::vector<std::string> const &value) {
  m_Dnns = value;
  m_DnnsIsSet = true;
}
bool SnssaiDnnCombination::dnnsIsSet() const { return m_DnnsIsSet; }
void SnssaiDnnCombination::unsetDnns() { m_DnnsIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org