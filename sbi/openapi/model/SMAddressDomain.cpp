/**
 * Nchf_ConvergedCharging
 * ConvergedCharging Service    © 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 3.0.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SMAddressDomain.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

SMAddressDomain::SMAddressDomain() {
  m_DomainName = "";
  m_DomainNameIsSet = false;
  m_r_3GPPIMSIMCCMNC = "";
  m_r_3GPPIMSIMCCMNCIsSet = false;
}

SMAddressDomain::~SMAddressDomain() {}

void SMAddressDomain::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const SMAddressDomain &o) {
  j = nlohmann::json();
  if (o.domainNameIsSet())
    j["domainName"] = o.m_DomainName;
  if (o.r3GPPIMSIMCCMNCIsSet())
    j["3GPPIMSIMCCMNC"] = o.m_r_3GPPIMSIMCCMNC;
}

void from_json(const nlohmann::json &j, SMAddressDomain &o) {
  if (j.find("domainName") != j.end()) {
    j.at("domainName").get_to(o.m_DomainName);
    o.m_DomainNameIsSet = true;
  }
  if (j.find("3GPPIMSIMCCMNC") != j.end()) {
    j.at("3GPPIMSIMCCMNC").get_to(o.m_r_3GPPIMSIMCCMNC);
    o.m_r_3GPPIMSIMCCMNCIsSet = true;
  }
}

std::string SMAddressDomain::getDomainName() const { return m_DomainName; }
void SMAddressDomain::setDomainName(std::string const &value) {
  m_DomainName = value;
  m_DomainNameIsSet = true;
}
bool SMAddressDomain::domainNameIsSet() const { return m_DomainNameIsSet; }
void SMAddressDomain::unsetDomainName() { m_DomainNameIsSet = false; }
std::string SMAddressDomain::getR3GPPIMSIMCCMNC() const {
  return m_r_3GPPIMSIMCCMNC;
}
void SMAddressDomain::setR3GPPIMSIMCCMNC(std::string const &value) {
  m_r_3GPPIMSIMCCMNC = value;
  m_r_3GPPIMSIMCCMNCIsSet = true;
}
bool SMAddressDomain::r3GPPIMSIMCCMNCIsSet() const {
  return m_r_3GPPIMSIMCCMNCIsSet;
}
void SMAddressDomain::unsetr_3GPPIMSIMCCMNC() {
  m_r_3GPPIMSIMCCMNCIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org