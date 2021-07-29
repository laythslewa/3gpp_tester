/**
 * SEPP Telescopic FQDN Mapping API
 * SEPP Telescopic FQDN Mapping Service. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "TelescopicMapping.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

TelescopicMapping::TelescopicMapping() {
  m_TelescopicLabel = "";
  m_TelescopicLabelIsSet = false;
  m_SeppDomain = "";
  m_SeppDomainIsSet = false;
  m_ForeignFqdn = "";
  m_ForeignFqdnIsSet = false;
}

TelescopicMapping::~TelescopicMapping() {}

void TelescopicMapping::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const TelescopicMapping &o) {
  j = nlohmann::json();
  if (o.telescopicLabelIsSet())
    j["telescopicLabel"] = o.m_TelescopicLabel;
  if (o.seppDomainIsSet())
    j["seppDomain"] = o.m_SeppDomain;
  if (o.foreignFqdnIsSet())
    j["foreignFqdn"] = o.m_ForeignFqdn;
}

void from_json(const nlohmann::json &j, TelescopicMapping &o) {
  if (j.find("telescopicLabel") != j.end()) {
    j.at("telescopicLabel").get_to(o.m_TelescopicLabel);
    o.m_TelescopicLabelIsSet = true;
  }
  if (j.find("seppDomain") != j.end()) {
    j.at("seppDomain").get_to(o.m_SeppDomain);
    o.m_SeppDomainIsSet = true;
  }
  if (j.find("foreignFqdn") != j.end()) {
    j.at("foreignFqdn").get_to(o.m_ForeignFqdn);
    o.m_ForeignFqdnIsSet = true;
  }
}

std::string TelescopicMapping::getTelescopicLabel() const {
  return m_TelescopicLabel;
}
void TelescopicMapping::setTelescopicLabel(std::string const &value) {
  m_TelescopicLabel = value;
  m_TelescopicLabelIsSet = true;
}
bool TelescopicMapping::telescopicLabelIsSet() const {
  return m_TelescopicLabelIsSet;
}
void TelescopicMapping::unsetTelescopicLabel() {
  m_TelescopicLabelIsSet = false;
}
std::string TelescopicMapping::getSeppDomain() const { return m_SeppDomain; }
void TelescopicMapping::setSeppDomain(std::string const &value) {
  m_SeppDomain = value;
  m_SeppDomainIsSet = true;
}
bool TelescopicMapping::seppDomainIsSet() const { return m_SeppDomainIsSet; }
void TelescopicMapping::unsetSeppDomain() { m_SeppDomainIsSet = false; }
std::string TelescopicMapping::getForeignFqdn() const { return m_ForeignFqdn; }
void TelescopicMapping::setForeignFqdn(std::string const &value) {
  m_ForeignFqdn = value;
  m_ForeignFqdnIsSet = true;
}
bool TelescopicMapping::foreignFqdnIsSet() const { return m_ForeignFqdnIsSet; }
void TelescopicMapping::unsetForeignFqdn() { m_ForeignFqdnIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
