/**
 * Nchf_OfflineOnlyCharging
 * OfflineOnlyCharging Service © 2020, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "Tai.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

Tai::Tai() {
  m_Tac = "";
  m_Nid = "";
  m_NidIsSet = false;
}

Tai::~Tai() {}

void Tai::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const Tai &o) {
  j = nlohmann::json();
  j["plmnId"] = o.m_PlmnId;
  j["tac"] = o.m_Tac;
  if (o.nidIsSet())
    j["nid"] = o.m_Nid;
}

void from_json(const nlohmann::json &j, Tai &o) {
  j.at("plmnId").get_to(o.m_PlmnId);
  j.at("tac").get_to(o.m_Tac);
  if (j.find("nid") != j.end()) {
    j.at("nid").get_to(o.m_Nid);
    o.m_NidIsSet = true;
  }
}

PlmnId Tai::getPlmnId() const { return m_PlmnId; }
void Tai::setPlmnId(PlmnId const &value) { m_PlmnId = value; }
std::string Tai::getTac() const { return m_Tac; }
void Tai::setTac(std::string const &value) { m_Tac = value; }
std::string Tai::getNid() const { return m_Nid; }
void Tai::setNid(std::string const &value) {
  m_Nid = value;
  m_NidIsSet = true;
}
bool Tai::nidIsSet() const { return m_NidIsSet; }
void Tai::unsetNid() { m_NidIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org