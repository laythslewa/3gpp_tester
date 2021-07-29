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

#include "NrV2xAuth.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

NrV2xAuth::NrV2xAuth() {
  m_VehicleUeAuthIsSet = false;
  m_PedestrianUeAuthIsSet = false;
}

NrV2xAuth::~NrV2xAuth() {}

void NrV2xAuth::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const NrV2xAuth &o) {
  j = nlohmann::json();
  if (o.vehicleUeAuthIsSet())
    j["vehicleUeAuth"] = o.m_VehicleUeAuth;
  if (o.pedestrianUeAuthIsSet())
    j["pedestrianUeAuth"] = o.m_PedestrianUeAuth;
}

void from_json(const nlohmann::json &j, NrV2xAuth &o) {
  if (j.find("vehicleUeAuth") != j.end()) {
    j.at("vehicleUeAuth").get_to(o.m_VehicleUeAuth);
    o.m_VehicleUeAuthIsSet = true;
  }
  if (j.find("pedestrianUeAuth") != j.end()) {
    j.at("pedestrianUeAuth").get_to(o.m_PedestrianUeAuth);
    o.m_PedestrianUeAuthIsSet = true;
  }
}

UeAuth NrV2xAuth::getVehicleUeAuth() const { return m_VehicleUeAuth; }
void NrV2xAuth::setVehicleUeAuth(UeAuth const &value) {
  m_VehicleUeAuth = value;
  m_VehicleUeAuthIsSet = true;
}
bool NrV2xAuth::vehicleUeAuthIsSet() const { return m_VehicleUeAuthIsSet; }
void NrV2xAuth::unsetVehicleUeAuth() { m_VehicleUeAuthIsSet = false; }
UeAuth NrV2xAuth::getPedestrianUeAuth() const { return m_PedestrianUeAuth; }
void NrV2xAuth::setPedestrianUeAuth(UeAuth const &value) {
  m_PedestrianUeAuth = value;
  m_PedestrianUeAuthIsSet = true;
}
bool NrV2xAuth::pedestrianUeAuthIsSet() const {
  return m_PedestrianUeAuthIsSet;
}
void NrV2xAuth::unsetPedestrianUeAuth() { m_PedestrianUeAuthIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org