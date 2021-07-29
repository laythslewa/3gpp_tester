/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.3.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "EcsServerAddr.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

EcsServerAddr::EcsServerAddr() {
  m_EcsFqdnListIsSet = false;
  m_EcsIpAddressListIsSet = false;
}

EcsServerAddr::~EcsServerAddr() {}

void EcsServerAddr::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const EcsServerAddr &o) {
  j = nlohmann::json();
  if (o.ecsFqdnListIsSet() || !o.m_EcsFqdnList.empty())
    j["ecsFqdnList"] = o.m_EcsFqdnList;
  if (o.ecsIpAddressListIsSet() || !o.m_EcsIpAddressList.empty())
    j["ecsIpAddressList"] = o.m_EcsIpAddressList;
}

void from_json(const nlohmann::json &j, EcsServerAddr &o) {
  if (j.find("ecsFqdnList") != j.end()) {
    j.at("ecsFqdnList").get_to(o.m_EcsFqdnList);
    o.m_EcsFqdnListIsSet = true;
  }
  if (j.find("ecsIpAddressList") != j.end()) {
    j.at("ecsIpAddressList").get_to(o.m_EcsIpAddressList);
    o.m_EcsIpAddressListIsSet = true;
  }
}

std::vector<std::string> &EcsServerAddr::getEcsFqdnList() {
  return m_EcsFqdnList;
}
void EcsServerAddr::setEcsFqdnList(std::vector<std::string> const &value) {
  m_EcsFqdnList = value;
  m_EcsFqdnListIsSet = true;
}
bool EcsServerAddr::ecsFqdnListIsSet() const { return m_EcsFqdnListIsSet; }
void EcsServerAddr::unsetEcsFqdnList() { m_EcsFqdnListIsSet = false; }
std::vector<IpAddr> &EcsServerAddr::getEcsIpAddressList() {
  return m_EcsIpAddressList;
}
void EcsServerAddr::setEcsIpAddressList(std::vector<IpAddr> const &value) {
  m_EcsIpAddressList = value;
  m_EcsIpAddressListIsSet = true;
}
bool EcsServerAddr::ecsIpAddressListIsSet() const {
  return m_EcsIpAddressListIsSet;
}
void EcsServerAddr::unsetEcsIpAddressList() { m_EcsIpAddressListIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
