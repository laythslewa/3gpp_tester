/**
 * 3gpp-ecs-address-provision
 * API for ECS Address Provisioning. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "EcsAddressProvision.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

EcsAddressProvision::EcsAddressProvision() {
  m_Self = "";
  m_SelfIsSet = false;
  m_SuppFeat = "";
}

EcsAddressProvision::~EcsAddressProvision() {}

void EcsAddressProvision::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const EcsAddressProvision &o) {
  j = nlohmann::json();
  if (o.selfIsSet())
    j["self"] = o.m_Self;
  j["ecsServerAddr"] = o.m_EcsServerAddr;
  j["suppFeat"] = o.m_SuppFeat;
}

void from_json(const nlohmann::json &j, EcsAddressProvision &o) {
  if (j.find("self") != j.end()) {
    j.at("self").get_to(o.m_Self);
    o.m_SelfIsSet = true;
  }
  j.at("ecsServerAddr").get_to(o.m_EcsServerAddr);
  j.at("suppFeat").get_to(o.m_SuppFeat);
}

std::string EcsAddressProvision::getSelf() const { return m_Self; }
void EcsAddressProvision::setSelf(std::string const &value) {
  m_Self = value;
  m_SelfIsSet = true;
}
bool EcsAddressProvision::selfIsSet() const { return m_SelfIsSet; }
void EcsAddressProvision::unsetSelf() { m_SelfIsSet = false; }
EcsServerAddr EcsAddressProvision::getEcsServerAddr() const {
  return m_EcsServerAddr;
}
void EcsAddressProvision::setEcsServerAddr(EcsServerAddr const &value) {
  m_EcsServerAddr = value;
}
std::string EcsAddressProvision::getSuppFeat() const { return m_SuppFeat; }
void EcsAddressProvision::setSuppFeat(std::string const &value) {
  m_SuppFeat = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
