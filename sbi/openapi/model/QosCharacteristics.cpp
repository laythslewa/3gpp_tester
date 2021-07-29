/**
 * Nchf_OfflineOnlyCharging
 * OfflineOnlyCharging Service © 2020, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "QosCharacteristics.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

QosCharacteristics::QosCharacteristics() {
  m_r_5qi = 0;
  m_PriorityLevel = 0;
  m_PacketDelayBudget = 0;
  m_PacketErrorRate = "";
  m_AveragingWindow = 0;
  m_AveragingWindowIsSet = false;
  m_MaxDataBurstVol = 0;
  m_MaxDataBurstVolIsSet = false;
  m_ExtMaxDataBurstVol = 0;
  m_ExtMaxDataBurstVolIsSet = false;
}

QosCharacteristics::~QosCharacteristics() {}

void QosCharacteristics::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const QosCharacteristics &o) {
  j = nlohmann::json();
  j["5qi"] = o.m_r_5qi;
  j["resourceType"] = o.m_ResourceType;
  j["priorityLevel"] = o.m_PriorityLevel;
  j["packetDelayBudget"] = o.m_PacketDelayBudget;
  j["packetErrorRate"] = o.m_PacketErrorRate;
  if (o.averagingWindowIsSet())
    j["averagingWindow"] = o.m_AveragingWindow;
  if (o.maxDataBurstVolIsSet())
    j["maxDataBurstVol"] = o.m_MaxDataBurstVol;
  if (o.extMaxDataBurstVolIsSet())
    j["extMaxDataBurstVol"] = o.m_ExtMaxDataBurstVol;
}

void from_json(const nlohmann::json &j, QosCharacteristics &o) {
  j.at("5qi").get_to(o.m_r_5qi);
  j.at("resourceType").get_to(o.m_ResourceType);
  j.at("priorityLevel").get_to(o.m_PriorityLevel);
  j.at("packetDelayBudget").get_to(o.m_PacketDelayBudget);
  j.at("packetErrorRate").get_to(o.m_PacketErrorRate);
  if (j.find("averagingWindow") != j.end()) {
    j.at("averagingWindow").get_to(o.m_AveragingWindow);
    o.m_AveragingWindowIsSet = true;
  }
  if (j.find("maxDataBurstVol") != j.end()) {
    j.at("maxDataBurstVol").get_to(o.m_MaxDataBurstVol);
    o.m_MaxDataBurstVolIsSet = true;
  }
  if (j.find("extMaxDataBurstVol") != j.end()) {
    j.at("extMaxDataBurstVol").get_to(o.m_ExtMaxDataBurstVol);
    o.m_ExtMaxDataBurstVolIsSet = true;
  }
}

int32_t QosCharacteristics::getR5qi() const { return m_r_5qi; }
void QosCharacteristics::setR5qi(int32_t const value) { m_r_5qi = value; }
QosResourceType QosCharacteristics::getResourceType() const {
  return m_ResourceType;
}
void QosCharacteristics::setResourceType(QosResourceType const &value) {
  m_ResourceType = value;
}
int32_t QosCharacteristics::getPriorityLevel() const { return m_PriorityLevel; }
void QosCharacteristics::setPriorityLevel(int32_t const value) {
  m_PriorityLevel = value;
}
int32_t QosCharacteristics::getPacketDelayBudget() const {
  return m_PacketDelayBudget;
}
void QosCharacteristics::setPacketDelayBudget(int32_t const value) {
  m_PacketDelayBudget = value;
}
std::string QosCharacteristics::getPacketErrorRate() const {
  return m_PacketErrorRate;
}
void QosCharacteristics::setPacketErrorRate(std::string const &value) {
  m_PacketErrorRate = value;
}
int32_t QosCharacteristics::getAveragingWindow() const {
  return m_AveragingWindow;
}
void QosCharacteristics::setAveragingWindow(int32_t const value) {
  m_AveragingWindow = value;
  m_AveragingWindowIsSet = true;
}
bool QosCharacteristics::averagingWindowIsSet() const {
  return m_AveragingWindowIsSet;
}
void QosCharacteristics::unsetAveragingWindow() {
  m_AveragingWindowIsSet = false;
}
int32_t QosCharacteristics::getMaxDataBurstVol() const {
  return m_MaxDataBurstVol;
}
void QosCharacteristics::setMaxDataBurstVol(int32_t const value) {
  m_MaxDataBurstVol = value;
  m_MaxDataBurstVolIsSet = true;
}
bool QosCharacteristics::maxDataBurstVolIsSet() const {
  return m_MaxDataBurstVolIsSet;
}
void QosCharacteristics::unsetMaxDataBurstVol() {
  m_MaxDataBurstVolIsSet = false;
}
int32_t QosCharacteristics::getExtMaxDataBurstVol() const {
  return m_ExtMaxDataBurstVol;
}
void QosCharacteristics::setExtMaxDataBurstVol(int32_t const value) {
  m_ExtMaxDataBurstVol = value;
  m_ExtMaxDataBurstVolIsSet = true;
}
bool QosCharacteristics::extMaxDataBurstVolIsSet() const {
  return m_ExtMaxDataBurstVolIsSet;
}
void QosCharacteristics::unsetExtMaxDataBurstVol() {
  m_ExtMaxDataBurstVolIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org