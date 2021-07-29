/**
 * 3gpp-iptvconfiguration
 * API for IPTV configuration. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "IptvConfigDataPatch.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

IptvConfigDataPatch::IptvConfigDataPatch() { m_MultiAccCtrlsIsSet = false; }

IptvConfigDataPatch::~IptvConfigDataPatch() {}

void IptvConfigDataPatch::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const IptvConfigDataPatch &o) {
  j = nlohmann::json();
  if (o.multiAccCtrlsIsSet() || !o.m_MultiAccCtrls.empty())
    j["multiAccCtrls"] = o.m_MultiAccCtrls;
}

void from_json(const nlohmann::json &j, IptvConfigDataPatch &o) {
  if (j.find("multiAccCtrls") != j.end()) {
    j.at("multiAccCtrls").get_to(o.m_MultiAccCtrls);
    o.m_MultiAccCtrlsIsSet = true;
  }
}

std::map<std::string, MulticastAccessControl> &
IptvConfigDataPatch::getMultiAccCtrls() {
  return m_MultiAccCtrls;
}
void IptvConfigDataPatch::setMultiAccCtrls(
    std::map<std::string, MulticastAccessControl> const &value) {
  m_MultiAccCtrls = value;
  m_MultiAccCtrlsIsSet = true;
}
bool IptvConfigDataPatch::multiAccCtrlsIsSet() const {
  return m_MultiAccCtrlsIsSet;
}
void IptvConfigDataPatch::unsetMultiAccCtrls() { m_MultiAccCtrlsIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
