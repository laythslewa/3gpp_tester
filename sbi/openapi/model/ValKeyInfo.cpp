/**
 * SS_KeyInfoRetrieval
 * API for SEAL Key Information Retrieval. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ValKeyInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ValKeyInfo::ValKeyInfo() {
  m_UserUri = "";
  m_SkmsId = "";
  m_SkmsIdIsSet = false;
  m_ValService = "";
  m_ValTgtUeIsSet = false;
  m_KeyInfo = "";
}

ValKeyInfo::~ValKeyInfo() {}

void ValKeyInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const ValKeyInfo &o) {
  j = nlohmann::json();
  j["userUri"] = o.m_UserUri;
  if (o.skmsIdIsSet())
    j["skmsId"] = o.m_SkmsId;
  j["valService"] = o.m_ValService;
  if (o.valTgtUeIsSet())
    j["valTgtUe"] = o.m_ValTgtUe;
  j["keyInfo"] = o.m_KeyInfo;
}

void from_json(const nlohmann::json &j, ValKeyInfo &o) {
  j.at("userUri").get_to(o.m_UserUri);
  if (j.find("skmsId") != j.end()) {
    j.at("skmsId").get_to(o.m_SkmsId);
    o.m_SkmsIdIsSet = true;
  }
  j.at("valService").get_to(o.m_ValService);
  if (j.find("valTgtUe") != j.end()) {
    j.at("valTgtUe").get_to(o.m_ValTgtUe);
    o.m_ValTgtUeIsSet = true;
  }
  j.at("keyInfo").get_to(o.m_KeyInfo);
}

std::string ValKeyInfo::getUserUri() const { return m_UserUri; }
void ValKeyInfo::setUserUri(std::string const &value) { m_UserUri = value; }
std::string ValKeyInfo::getSkmsId() const { return m_SkmsId; }
void ValKeyInfo::setSkmsId(std::string const &value) {
  m_SkmsId = value;
  m_SkmsIdIsSet = true;
}
bool ValKeyInfo::skmsIdIsSet() const { return m_SkmsIdIsSet; }
void ValKeyInfo::unsetSkmsId() { m_SkmsIdIsSet = false; }
std::string ValKeyInfo::getValService() const { return m_ValService; }
void ValKeyInfo::setValService(std::string const &value) {
  m_ValService = value;
}
ValTargetUe ValKeyInfo::getValTgtUe() const { return m_ValTgtUe; }
void ValKeyInfo::setValTgtUe(ValTargetUe const &value) {
  m_ValTgtUe = value;
  m_ValTgtUeIsSet = true;
}
bool ValKeyInfo::valTgtUeIsSet() const { return m_ValTgtUeIsSet; }
void ValKeyInfo::unsetValTgtUe() { m_ValTgtUeIsSet = false; }
std::string ValKeyInfo::getKeyInfo() const { return m_KeyInfo; }
void ValKeyInfo::setKeyInfo(std::string const &value) { m_KeyInfo = value; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org