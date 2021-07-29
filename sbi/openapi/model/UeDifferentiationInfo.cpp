/**
 * Namf_Communication
 * AMF Communication Service © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "UeDifferentiationInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

UeDifferentiationInfo::UeDifferentiationInfo() {
  m_PeriodicComIndIsSet = false;
  m_PeriodicTime = 0;
  m_PeriodicTimeIsSet = false;
  m_ScheduledComTimeIsSet = false;
  m_StationaryIndIsSet = false;
  m_TrafficProfileIsSet = false;
  m_BatteryIndIsSet = false;
  m_ValidityTime = "";
  m_ValidityTimeIsSet = false;
}

UeDifferentiationInfo::~UeDifferentiationInfo() {}

void UeDifferentiationInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const UeDifferentiationInfo &o) {
  j = nlohmann::json();
  if (o.periodicComIndIsSet())
    j["periodicComInd"] = o.m_PeriodicComInd;
  if (o.periodicTimeIsSet())
    j["periodicTime"] = o.m_PeriodicTime;
  if (o.scheduledComTimeIsSet())
    j["scheduledComTime"] = o.m_ScheduledComTime;
  if (o.stationaryIndIsSet())
    j["stationaryInd"] = o.m_StationaryInd;
  if (o.trafficProfileIsSet())
    j["trafficProfile"] = o.m_TrafficProfile;
  if (o.batteryIndIsSet())
    j["batteryInd"] = o.m_BatteryInd;
  if (o.validityTimeIsSet())
    j["validityTime"] = o.m_ValidityTime;
}

void from_json(const nlohmann::json &j, UeDifferentiationInfo &o) {
  if (j.find("periodicComInd") != j.end()) {
    j.at("periodicComInd").get_to(o.m_PeriodicComInd);
    o.m_PeriodicComIndIsSet = true;
  }
  if (j.find("periodicTime") != j.end()) {
    j.at("periodicTime").get_to(o.m_PeriodicTime);
    o.m_PeriodicTimeIsSet = true;
  }
  if (j.find("scheduledComTime") != j.end()) {
    j.at("scheduledComTime").get_to(o.m_ScheduledComTime);
    o.m_ScheduledComTimeIsSet = true;
  }
  if (j.find("stationaryInd") != j.end()) {
    j.at("stationaryInd").get_to(o.m_StationaryInd);
    o.m_StationaryIndIsSet = true;
  }
  if (j.find("trafficProfile") != j.end()) {
    j.at("trafficProfile").get_to(o.m_TrafficProfile);
    o.m_TrafficProfileIsSet = true;
  }
  if (j.find("batteryInd") != j.end()) {
    j.at("batteryInd").get_to(o.m_BatteryInd);
    o.m_BatteryIndIsSet = true;
  }
  if (j.find("validityTime") != j.end()) {
    j.at("validityTime").get_to(o.m_ValidityTime);
    o.m_ValidityTimeIsSet = true;
  }
}

PeriodicCommunicationIndicator
UeDifferentiationInfo::getPeriodicComInd() const {
  return m_PeriodicComInd;
}
void UeDifferentiationInfo::setPeriodicComInd(
    PeriodicCommunicationIndicator const &value) {
  m_PeriodicComInd = value;
  m_PeriodicComIndIsSet = true;
}
bool UeDifferentiationInfo::periodicComIndIsSet() const {
  return m_PeriodicComIndIsSet;
}
void UeDifferentiationInfo::unsetPeriodicComInd() {
  m_PeriodicComIndIsSet = false;
}
int32_t UeDifferentiationInfo::getPeriodicTime() const {
  return m_PeriodicTime;
}
void UeDifferentiationInfo::setPeriodicTime(int32_t const value) {
  m_PeriodicTime = value;
  m_PeriodicTimeIsSet = true;
}
bool UeDifferentiationInfo::periodicTimeIsSet() const {
  return m_PeriodicTimeIsSet;
}
void UeDifferentiationInfo::unsetPeriodicTime() { m_PeriodicTimeIsSet = false; }
ScheduledCommunicationTime UeDifferentiationInfo::getScheduledComTime() const {
  return m_ScheduledComTime;
}
void UeDifferentiationInfo::setScheduledComTime(
    ScheduledCommunicationTime const &value) {
  m_ScheduledComTime = value;
  m_ScheduledComTimeIsSet = true;
}
bool UeDifferentiationInfo::scheduledComTimeIsSet() const {
  return m_ScheduledComTimeIsSet;
}
void UeDifferentiationInfo::unsetScheduledComTime() {
  m_ScheduledComTimeIsSet = false;
}
StationaryIndication UeDifferentiationInfo::getStationaryInd() const {
  return m_StationaryInd;
}
void UeDifferentiationInfo::setStationaryInd(
    StationaryIndication const &value) {
  m_StationaryInd = value;
  m_StationaryIndIsSet = true;
}
bool UeDifferentiationInfo::stationaryIndIsSet() const {
  return m_StationaryIndIsSet;
}
void UeDifferentiationInfo::unsetStationaryInd() {
  m_StationaryIndIsSet = false;
}
TrafficProfile UeDifferentiationInfo::getTrafficProfile() const {
  return m_TrafficProfile;
}
void UeDifferentiationInfo::setTrafficProfile(TrafficProfile const &value) {
  m_TrafficProfile = value;
  m_TrafficProfileIsSet = true;
}
bool UeDifferentiationInfo::trafficProfileIsSet() const {
  return m_TrafficProfileIsSet;
}
void UeDifferentiationInfo::unsetTrafficProfile() {
  m_TrafficProfileIsSet = false;
}
BatteryIndication UeDifferentiationInfo::getBatteryInd() const {
  return m_BatteryInd;
}
void UeDifferentiationInfo::setBatteryInd(BatteryIndication const &value) {
  m_BatteryInd = value;
  m_BatteryIndIsSet = true;
}
bool UeDifferentiationInfo::batteryIndIsSet() const {
  return m_BatteryIndIsSet;
}
void UeDifferentiationInfo::unsetBatteryInd() { m_BatteryIndIsSet = false; }
std::string UeDifferentiationInfo::getValidityTime() const {
  return m_ValidityTime;
}
void UeDifferentiationInfo::setValidityTime(std::string const &value) {
  m_ValidityTime = value;
  m_ValidityTimeIsSet = true;
}
bool UeDifferentiationInfo::validityTimeIsSet() const {
  return m_ValidityTimeIsSet;
}
void UeDifferentiationInfo::unsetValidityTime() { m_ValidityTimeIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
