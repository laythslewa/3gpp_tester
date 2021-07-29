/**
 * Nsmf_PDUSession
 * SMF PDU Session Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "DnaiInformation.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

DnaiInformation::DnaiInformation() {
  m_Dnai = "";
  m_NoDnaiChangeInd = false;
  m_NoDnaiChangeIndIsSet = false;
  m_NoLocalPsaChangeInd = false;
  m_NoLocalPsaChangeIndIsSet = false;
}

DnaiInformation::~DnaiInformation() {}

void DnaiInformation::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const DnaiInformation &o) {
  j = nlohmann::json();
  j["dnai"] = o.m_Dnai;
  if (o.noDnaiChangeIndIsSet())
    j["noDnaiChangeInd"] = o.m_NoDnaiChangeInd;
  if (o.noLocalPsaChangeIndIsSet())
    j["noLocalPsaChangeInd"] = o.m_NoLocalPsaChangeInd;
}

void from_json(const nlohmann::json &j, DnaiInformation &o) {
  j.at("dnai").get_to(o.m_Dnai);
  if (j.find("noDnaiChangeInd") != j.end()) {
    j.at("noDnaiChangeInd").get_to(o.m_NoDnaiChangeInd);
    o.m_NoDnaiChangeIndIsSet = true;
  }
  if (j.find("noLocalPsaChangeInd") != j.end()) {
    j.at("noLocalPsaChangeInd").get_to(o.m_NoLocalPsaChangeInd);
    o.m_NoLocalPsaChangeIndIsSet = true;
  }
}

std::string DnaiInformation::getDnai() const { return m_Dnai; }
void DnaiInformation::setDnai(std::string const &value) { m_Dnai = value; }
bool DnaiInformation::isNoDnaiChangeInd() const { return m_NoDnaiChangeInd; }
void DnaiInformation::setNoDnaiChangeInd(bool const value) {
  m_NoDnaiChangeInd = value;
  m_NoDnaiChangeIndIsSet = true;
}
bool DnaiInformation::noDnaiChangeIndIsSet() const {
  return m_NoDnaiChangeIndIsSet;
}
void DnaiInformation::unsetNoDnaiChangeInd() { m_NoDnaiChangeIndIsSet = false; }
bool DnaiInformation::isNoLocalPsaChangeInd() const {
  return m_NoLocalPsaChangeInd;
}
void DnaiInformation::setNoLocalPsaChangeInd(bool const value) {
  m_NoLocalPsaChangeInd = value;
  m_NoLocalPsaChangeIndIsSet = true;
}
bool DnaiInformation::noLocalPsaChangeIndIsSet() const {
  return m_NoLocalPsaChangeIndIsSet;
}
void DnaiInformation::unsetNoLocalPsaChangeInd() {
  m_NoLocalPsaChangeIndIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
