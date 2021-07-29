/**
 * Nausf_UPUProtection Service
 * AUSF UPU Protection Service © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "UpuSecurityInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

UpuSecurityInfo::UpuSecurityInfo() {
  m_UpuMacIausf = "";
  m_CounterUpu = "";
  m_UpuXmacIue = "";
  m_UpuXmacIueIsSet = false;
}

UpuSecurityInfo::~UpuSecurityInfo() {}

void UpuSecurityInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const UpuSecurityInfo &o) {
  j = nlohmann::json();
  j["upuMacIausf"] = o.m_UpuMacIausf;
  j["counterUpu"] = o.m_CounterUpu;
  if (o.upuXmacIueIsSet())
    j["upuXmacIue"] = o.m_UpuXmacIue;
}

void from_json(const nlohmann::json &j, UpuSecurityInfo &o) {
  j.at("upuMacIausf").get_to(o.m_UpuMacIausf);
  j.at("counterUpu").get_to(o.m_CounterUpu);
  if (j.find("upuXmacIue") != j.end()) {
    j.at("upuXmacIue").get_to(o.m_UpuXmacIue);
    o.m_UpuXmacIueIsSet = true;
  }
}

std::string UpuSecurityInfo::getUpuMacIausf() const { return m_UpuMacIausf; }
void UpuSecurityInfo::setUpuMacIausf(std::string const &value) {
  m_UpuMacIausf = value;
}
std::string UpuSecurityInfo::getCounterUpu() const { return m_CounterUpu; }
void UpuSecurityInfo::setCounterUpu(std::string const &value) {
  m_CounterUpu = value;
}
std::string UpuSecurityInfo::getUpuXmacIue() const { return m_UpuXmacIue; }
void UpuSecurityInfo::setUpuXmacIue(std::string const &value) {
  m_UpuXmacIue = value;
  m_UpuXmacIueIsSet = true;
}
bool UpuSecurityInfo::upuXmacIueIsSet() const { return m_UpuXmacIueIsSet; }
void UpuSecurityInfo::unsetUpuXmacIue() { m_UpuXmacIueIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
