/**
 * Npcf_PolicyAuthorization Service API
 * PCF Policy Authorization Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "Flows.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

Flows::Flows() {
  m_ContVersIsSet = false;
  m_FNumsIsSet = false;
  m_MedCompN = 0;
}

Flows::~Flows() {}

void Flows::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const Flows &o) {
  j = nlohmann::json();
  if (o.contVersIsSet() || !o.m_ContVers.empty())
    j["contVers"] = o.m_ContVers;
  if (o.fNumsIsSet() || !o.m_FNums.empty())
    j["fNums"] = o.m_FNums;
  j["medCompN"] = o.m_MedCompN;
}

void from_json(const nlohmann::json &j, Flows &o) {
  if (j.find("contVers") != j.end()) {
    j.at("contVers").get_to(o.m_ContVers);
    o.m_ContVersIsSet = true;
  }
  if (j.find("fNums") != j.end()) {
    j.at("fNums").get_to(o.m_FNums);
    o.m_FNumsIsSet = true;
  }
  j.at("medCompN").get_to(o.m_MedCompN);
}

std::vector<int32_t> &Flows::getContVers() { return m_ContVers; }
void Flows::setContVers(std::vector<int32_t> const value) {
  m_ContVers = value;
  m_ContVersIsSet = true;
}
bool Flows::contVersIsSet() const { return m_ContVersIsSet; }
void Flows::unsetContVers() { m_ContVersIsSet = false; }
std::vector<int32_t> &Flows::getFNums() { return m_FNums; }
void Flows::setFNums(std::vector<int32_t> const value) {
  m_FNums = value;
  m_FNumsIsSet = true;
}
bool Flows::fNumsIsSet() const { return m_FNumsIsSet; }
void Flows::unsetFNums() { m_FNumsIsSet = false; }
int32_t Flows::getMedCompN() const { return m_MedCompN; }
void Flows::setMedCompN(int32_t const value) { m_MedCompN = value; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
