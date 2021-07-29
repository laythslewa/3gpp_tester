/**
 * Nucmf_Provisioning
 * UCMF_Provisioning Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "RacsConfiguration.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

RacsConfiguration::RacsConfiguration() {
  m_RacsId = "";
  m_RacsParamEps = "";
  m_RacsParamEpsIsSet = false;
  m_RacsParam5Gs = "";
  m_RacsParam5GsIsSet = false;
}

RacsConfiguration::~RacsConfiguration() {}

void RacsConfiguration::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const RacsConfiguration &o) {
  j = nlohmann::json();
  j["racsId"] = o.m_RacsId;
  if (o.racsParamEpsIsSet())
    j["racsParamEps"] = o.m_RacsParamEps;
  if (o.racsParam5GsIsSet())
    j["racsParam5Gs"] = o.m_RacsParam5Gs;
  j["imeiTacs"] = o.m_ImeiTacs;
}

void from_json(const nlohmann::json &j, RacsConfiguration &o) {
  j.at("racsId").get_to(o.m_RacsId);
  if (j.find("racsParamEps") != j.end()) {
    j.at("racsParamEps").get_to(o.m_RacsParamEps);
    o.m_RacsParamEpsIsSet = true;
  }
  if (j.find("racsParam5Gs") != j.end()) {
    j.at("racsParam5Gs").get_to(o.m_RacsParam5Gs);
    o.m_RacsParam5GsIsSet = true;
  }
  j.at("imeiTacs").get_to(o.m_ImeiTacs);
}

std::string RacsConfiguration::getRacsId() const { return m_RacsId; }
void RacsConfiguration::setRacsId(std::string const &value) {
  m_RacsId = value;
}
std::string RacsConfiguration::getRacsParamEps() const {
  return m_RacsParamEps;
}
void RacsConfiguration::setRacsParamEps(std::string const &value) {
  m_RacsParamEps = value;
  m_RacsParamEpsIsSet = true;
}
bool RacsConfiguration::racsParamEpsIsSet() const {
  return m_RacsParamEpsIsSet;
}
void RacsConfiguration::unsetRacsParamEps() { m_RacsParamEpsIsSet = false; }
std::string RacsConfiguration::getRacsParam5Gs() const {
  return m_RacsParam5Gs;
}
void RacsConfiguration::setRacsParam5Gs(std::string const &value) {
  m_RacsParam5Gs = value;
  m_RacsParam5GsIsSet = true;
}
bool RacsConfiguration::racsParam5GsIsSet() const {
  return m_RacsParam5GsIsSet;
}
void RacsConfiguration::unsetRacsParam5Gs() { m_RacsParam5GsIsSet = false; }
std::vector<std::string> &RacsConfiguration::getImeiTacs() {
  return m_ImeiTacs;
}
void RacsConfiguration::setImeiTacs(std::vector<std::string> const &value) {
  m_ImeiTacs = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org