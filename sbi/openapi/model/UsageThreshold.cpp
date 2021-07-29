/**
 * Npcf_BDTPolicyControl Service API
 * PCF BDT Policy Control Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "UsageThreshold.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

UsageThreshold::UsageThreshold() {
  m_Duration = 0;
  m_DurationIsSet = false;
  m_TotalVolume = 0L;
  m_TotalVolumeIsSet = false;
  m_DownlinkVolume = 0L;
  m_DownlinkVolumeIsSet = false;
  m_UplinkVolume = 0L;
  m_UplinkVolumeIsSet = false;
}

UsageThreshold::~UsageThreshold() {}

void UsageThreshold::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const UsageThreshold &o) {
  j = nlohmann::json();
  if (o.durationIsSet())
    j["duration"] = o.m_Duration;
  if (o.totalVolumeIsSet())
    j["totalVolume"] = o.m_TotalVolume;
  if (o.downlinkVolumeIsSet())
    j["downlinkVolume"] = o.m_DownlinkVolume;
  if (o.uplinkVolumeIsSet())
    j["uplinkVolume"] = o.m_UplinkVolume;
}

void from_json(const nlohmann::json &j, UsageThreshold &o) {
  if (j.find("duration") != j.end()) {
    j.at("duration").get_to(o.m_Duration);
    o.m_DurationIsSet = true;
  }
  if (j.find("totalVolume") != j.end()) {
    j.at("totalVolume").get_to(o.m_TotalVolume);
    o.m_TotalVolumeIsSet = true;
  }
  if (j.find("downlinkVolume") != j.end()) {
    j.at("downlinkVolume").get_to(o.m_DownlinkVolume);
    o.m_DownlinkVolumeIsSet = true;
  }
  if (j.find("uplinkVolume") != j.end()) {
    j.at("uplinkVolume").get_to(o.m_UplinkVolume);
    o.m_UplinkVolumeIsSet = true;
  }
}

int32_t UsageThreshold::getDuration() const { return m_Duration; }
void UsageThreshold::setDuration(int32_t const value) {
  m_Duration = value;
  m_DurationIsSet = true;
}
bool UsageThreshold::durationIsSet() const { return m_DurationIsSet; }
void UsageThreshold::unsetDuration() { m_DurationIsSet = false; }
int64_t UsageThreshold::getTotalVolume() const { return m_TotalVolume; }
void UsageThreshold::setTotalVolume(int64_t const value) {
  m_TotalVolume = value;
  m_TotalVolumeIsSet = true;
}
bool UsageThreshold::totalVolumeIsSet() const { return m_TotalVolumeIsSet; }
void UsageThreshold::unsetTotalVolume() { m_TotalVolumeIsSet = false; }
int64_t UsageThreshold::getDownlinkVolume() const { return m_DownlinkVolume; }
void UsageThreshold::setDownlinkVolume(int64_t const value) {
  m_DownlinkVolume = value;
  m_DownlinkVolumeIsSet = true;
}
bool UsageThreshold::downlinkVolumeIsSet() const {
  return m_DownlinkVolumeIsSet;
}
void UsageThreshold::unsetDownlinkVolume() { m_DownlinkVolumeIsSet = false; }
int64_t UsageThreshold::getUplinkVolume() const { return m_UplinkVolume; }
void UsageThreshold::setUplinkVolume(int64_t const value) {
  m_UplinkVolume = value;
  m_UplinkVolumeIsSet = true;
}
bool UsageThreshold::uplinkVolumeIsSet() const { return m_UplinkVolumeIsSet; }
void UsageThreshold::unsetUplinkVolume() { m_UplinkVolumeIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org