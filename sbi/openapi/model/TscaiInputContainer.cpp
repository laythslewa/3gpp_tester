/**
 * Npcf_PolicyAuthorization Service API
 * PCF Policy Authorization Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "TscaiInputContainer.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

TscaiInputContainer::TscaiInputContainer() {
  m_Periodicity = 0;
  m_PeriodicityIsSet = false;
  m_BurstArrivalTime = "";
  m_BurstArrivalTimeIsSet = false;
  m_SurTimeInNumMsg = 0;
  m_SurTimeInNumMsgIsSet = false;
  m_SurTimeInTime = 0;
  m_SurTimeInTimeIsSet = false;
}

TscaiInputContainer::~TscaiInputContainer() {}

void TscaiInputContainer::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const TscaiInputContainer &o) {
  j = nlohmann::json();
  if (o.periodicityIsSet())
    j["periodicity"] = o.m_Periodicity;
  if (o.burstArrivalTimeIsSet())
    j["burstArrivalTime"] = o.m_BurstArrivalTime;
  if (o.surTimeInNumMsgIsSet())
    j["surTimeInNumMsg"] = o.m_SurTimeInNumMsg;
  if (o.surTimeInTimeIsSet())
    j["surTimeInTime"] = o.m_SurTimeInTime;
}

void from_json(const nlohmann::json &j, TscaiInputContainer &o) {
  if (j.find("periodicity") != j.end()) {
    j.at("periodicity").get_to(o.m_Periodicity);
    o.m_PeriodicityIsSet = true;
  }
  if (j.find("burstArrivalTime") != j.end()) {
    j.at("burstArrivalTime").get_to(o.m_BurstArrivalTime);
    o.m_BurstArrivalTimeIsSet = true;
  }
  if (j.find("surTimeInNumMsg") != j.end()) {
    j.at("surTimeInNumMsg").get_to(o.m_SurTimeInNumMsg);
    o.m_SurTimeInNumMsgIsSet = true;
  }
  if (j.find("surTimeInTime") != j.end()) {
    j.at("surTimeInTime").get_to(o.m_SurTimeInTime);
    o.m_SurTimeInTimeIsSet = true;
  }
}

int32_t TscaiInputContainer::getPeriodicity() const { return m_Periodicity; }
void TscaiInputContainer::setPeriodicity(int32_t const value) {
  m_Periodicity = value;
  m_PeriodicityIsSet = true;
}
bool TscaiInputContainer::periodicityIsSet() const {
  return m_PeriodicityIsSet;
}
void TscaiInputContainer::unsetPeriodicity() { m_PeriodicityIsSet = false; }
std::string TscaiInputContainer::getBurstArrivalTime() const {
  return m_BurstArrivalTime;
}
void TscaiInputContainer::setBurstArrivalTime(std::string const &value) {
  m_BurstArrivalTime = value;
  m_BurstArrivalTimeIsSet = true;
}
bool TscaiInputContainer::burstArrivalTimeIsSet() const {
  return m_BurstArrivalTimeIsSet;
}
void TscaiInputContainer::unsetBurstArrivalTime() {
  m_BurstArrivalTimeIsSet = false;
}
int32_t TscaiInputContainer::getSurTimeInNumMsg() const {
  return m_SurTimeInNumMsg;
}
void TscaiInputContainer::setSurTimeInNumMsg(int32_t const value) {
  m_SurTimeInNumMsg = value;
  m_SurTimeInNumMsgIsSet = true;
}
bool TscaiInputContainer::surTimeInNumMsgIsSet() const {
  return m_SurTimeInNumMsgIsSet;
}
void TscaiInputContainer::unsetSurTimeInNumMsg() {
  m_SurTimeInNumMsgIsSet = false;
}
int32_t TscaiInputContainer::getSurTimeInTime() const {
  return m_SurTimeInTime;
}
void TscaiInputContainer::setSurTimeInTime(int32_t const value) {
  m_SurTimeInTime = value;
  m_SurTimeInTimeIsSet = true;
}
bool TscaiInputContainer::surTimeInTimeIsSet() const {
  return m_SurTimeInTimeIsSet;
}
void TscaiInputContainer::unsetSurTimeInTime() { m_SurTimeInTimeIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
