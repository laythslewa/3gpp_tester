/**
 * 3gpp-nidd
 * API for non IP data delivery. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "NiddConfigurationPatch.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

NiddConfigurationPatch::NiddConfigurationPatch() {
  m_Duration = "";
  m_DurationIsSet = false;
  m_ReliableDataService = false;
  m_ReliableDataServiceIsSet = false;
  m_RdsPortsIsSet = false;
  m_PdnEstablishmentOptionIsSet = false;
  m_NotificationDestination = "";
  m_NotificationDestinationIsSet = false;
}

NiddConfigurationPatch::~NiddConfigurationPatch() {}

void NiddConfigurationPatch::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const NiddConfigurationPatch &o) {
  j = nlohmann::json();
  if (o.durationIsSet())
    j["duration"] = o.m_Duration;
  if (o.reliableDataServiceIsSet())
    j["reliableDataService"] = o.m_ReliableDataService;
  if (o.rdsPortsIsSet() || !o.m_RdsPorts.empty())
    j["rdsPorts"] = o.m_RdsPorts;
  if (o.pdnEstablishmentOptionIsSet())
    j["pdnEstablishmentOption"] = o.m_PdnEstablishmentOption;
  if (o.notificationDestinationIsSet())
    j["notificationDestination"] = o.m_NotificationDestination;
}

void from_json(const nlohmann::json &j, NiddConfigurationPatch &o) {
  if (j.find("duration") != j.end()) {
    j.at("duration").get_to(o.m_Duration);
    o.m_DurationIsSet = true;
  }
  if (j.find("reliableDataService") != j.end()) {
    j.at("reliableDataService").get_to(o.m_ReliableDataService);
    o.m_ReliableDataServiceIsSet = true;
  }
  if (j.find("rdsPorts") != j.end()) {
    j.at("rdsPorts").get_to(o.m_RdsPorts);
    o.m_RdsPortsIsSet = true;
  }
  if (j.find("pdnEstablishmentOption") != j.end()) {
    j.at("pdnEstablishmentOption").get_to(o.m_PdnEstablishmentOption);
    o.m_PdnEstablishmentOptionIsSet = true;
  }
  if (j.find("notificationDestination") != j.end()) {
    j.at("notificationDestination").get_to(o.m_NotificationDestination);
    o.m_NotificationDestinationIsSet = true;
  }
}

std::string NiddConfigurationPatch::getDuration() const { return m_Duration; }
void NiddConfigurationPatch::setDuration(std::string const &value) {
  m_Duration = value;
  m_DurationIsSet = true;
}
bool NiddConfigurationPatch::durationIsSet() const { return m_DurationIsSet; }
void NiddConfigurationPatch::unsetDuration() { m_DurationIsSet = false; }
bool NiddConfigurationPatch::isReliableDataService() const {
  return m_ReliableDataService;
}
void NiddConfigurationPatch::setReliableDataService(bool const value) {
  m_ReliableDataService = value;
  m_ReliableDataServiceIsSet = true;
}
bool NiddConfigurationPatch::reliableDataServiceIsSet() const {
  return m_ReliableDataServiceIsSet;
}
void NiddConfigurationPatch::unsetReliableDataService() {
  m_ReliableDataServiceIsSet = false;
}
std::vector<RdsPort> &NiddConfigurationPatch::getRdsPorts() {
  return m_RdsPorts;
}
void NiddConfigurationPatch::setRdsPorts(std::vector<RdsPort> const &value) {
  m_RdsPorts = value;
  m_RdsPortsIsSet = true;
}
bool NiddConfigurationPatch::rdsPortsIsSet() const { return m_RdsPortsIsSet; }
void NiddConfigurationPatch::unsetRdsPorts() { m_RdsPortsIsSet = false; }
PdnEstablishmentOptionsRm
NiddConfigurationPatch::getPdnEstablishmentOption() const {
  return m_PdnEstablishmentOption;
}
void NiddConfigurationPatch::setPdnEstablishmentOption(
    PdnEstablishmentOptionsRm const &value) {
  m_PdnEstablishmentOption = value;
  m_PdnEstablishmentOptionIsSet = true;
}
bool NiddConfigurationPatch::pdnEstablishmentOptionIsSet() const {
  return m_PdnEstablishmentOptionIsSet;
}
void NiddConfigurationPatch::unsetPdnEstablishmentOption() {
  m_PdnEstablishmentOptionIsSet = false;
}
std::string NiddConfigurationPatch::getNotificationDestination() const {
  return m_NotificationDestination;
}
void NiddConfigurationPatch::setNotificationDestination(
    std::string const &value) {
  m_NotificationDestination = value;
  m_NotificationDestinationIsSet = true;
}
bool NiddConfigurationPatch::notificationDestinationIsSet() const {
  return m_NotificationDestinationIsSet;
}
void NiddConfigurationPatch::unsetNotificationDestination() {
  m_NotificationDestinationIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
