/**
 * Npcf_SMPolicyControl API
 * Session Management Policy Control Service © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "AccuUsageReport.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

AccuUsageReport::AccuUsageReport() {
  m_RefUmIds = "";
  m_VolUsage = 0L;
  m_VolUsageIsSet = false;
  m_VolUsageUplink = 0L;
  m_VolUsageUplinkIsSet = false;
  m_VolUsageDownlink = 0L;
  m_VolUsageDownlinkIsSet = false;
  m_TimeUsage = 0;
  m_TimeUsageIsSet = false;
  m_NextVolUsage = 0L;
  m_NextVolUsageIsSet = false;
  m_NextVolUsageUplink = 0L;
  m_NextVolUsageUplinkIsSet = false;
  m_NextVolUsageDownlink = 0L;
  m_NextVolUsageDownlinkIsSet = false;
  m_NextTimeUsage = 0;
  m_NextTimeUsageIsSet = false;
}

AccuUsageReport::~AccuUsageReport() {}

void AccuUsageReport::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const AccuUsageReport &o) {
  j = nlohmann::json();
  j["refUmIds"] = o.m_RefUmIds;
  if (o.volUsageIsSet())
    j["volUsage"] = o.m_VolUsage;
  if (o.volUsageUplinkIsSet())
    j["volUsageUplink"] = o.m_VolUsageUplink;
  if (o.volUsageDownlinkIsSet())
    j["volUsageDownlink"] = o.m_VolUsageDownlink;
  if (o.timeUsageIsSet())
    j["timeUsage"] = o.m_TimeUsage;
  if (o.nextVolUsageIsSet())
    j["nextVolUsage"] = o.m_NextVolUsage;
  if (o.nextVolUsageUplinkIsSet())
    j["nextVolUsageUplink"] = o.m_NextVolUsageUplink;
  if (o.nextVolUsageDownlinkIsSet())
    j["nextVolUsageDownlink"] = o.m_NextVolUsageDownlink;
  if (o.nextTimeUsageIsSet())
    j["nextTimeUsage"] = o.m_NextTimeUsage;
}

void from_json(const nlohmann::json &j, AccuUsageReport &o) {
  j.at("refUmIds").get_to(o.m_RefUmIds);
  if (j.find("volUsage") != j.end()) {
    j.at("volUsage").get_to(o.m_VolUsage);
    o.m_VolUsageIsSet = true;
  }
  if (j.find("volUsageUplink") != j.end()) {
    j.at("volUsageUplink").get_to(o.m_VolUsageUplink);
    o.m_VolUsageUplinkIsSet = true;
  }
  if (j.find("volUsageDownlink") != j.end()) {
    j.at("volUsageDownlink").get_to(o.m_VolUsageDownlink);
    o.m_VolUsageDownlinkIsSet = true;
  }
  if (j.find("timeUsage") != j.end()) {
    j.at("timeUsage").get_to(o.m_TimeUsage);
    o.m_TimeUsageIsSet = true;
  }
  if (j.find("nextVolUsage") != j.end()) {
    j.at("nextVolUsage").get_to(o.m_NextVolUsage);
    o.m_NextVolUsageIsSet = true;
  }
  if (j.find("nextVolUsageUplink") != j.end()) {
    j.at("nextVolUsageUplink").get_to(o.m_NextVolUsageUplink);
    o.m_NextVolUsageUplinkIsSet = true;
  }
  if (j.find("nextVolUsageDownlink") != j.end()) {
    j.at("nextVolUsageDownlink").get_to(o.m_NextVolUsageDownlink);
    o.m_NextVolUsageDownlinkIsSet = true;
  }
  if (j.find("nextTimeUsage") != j.end()) {
    j.at("nextTimeUsage").get_to(o.m_NextTimeUsage);
    o.m_NextTimeUsageIsSet = true;
  }
}

std::string AccuUsageReport::getRefUmIds() const { return m_RefUmIds; }
void AccuUsageReport::setRefUmIds(std::string const &value) {
  m_RefUmIds = value;
}
int64_t AccuUsageReport::getVolUsage() const { return m_VolUsage; }
void AccuUsageReport::setVolUsage(int64_t const value) {
  m_VolUsage = value;
  m_VolUsageIsSet = true;
}
bool AccuUsageReport::volUsageIsSet() const { return m_VolUsageIsSet; }
void AccuUsageReport::unsetVolUsage() { m_VolUsageIsSet = false; }
int64_t AccuUsageReport::getVolUsageUplink() const { return m_VolUsageUplink; }
void AccuUsageReport::setVolUsageUplink(int64_t const value) {
  m_VolUsageUplink = value;
  m_VolUsageUplinkIsSet = true;
}
bool AccuUsageReport::volUsageUplinkIsSet() const {
  return m_VolUsageUplinkIsSet;
}
void AccuUsageReport::unsetVolUsageUplink() { m_VolUsageUplinkIsSet = false; }
int64_t AccuUsageReport::getVolUsageDownlink() const {
  return m_VolUsageDownlink;
}
void AccuUsageReport::setVolUsageDownlink(int64_t const value) {
  m_VolUsageDownlink = value;
  m_VolUsageDownlinkIsSet = true;
}
bool AccuUsageReport::volUsageDownlinkIsSet() const {
  return m_VolUsageDownlinkIsSet;
}
void AccuUsageReport::unsetVolUsageDownlink() {
  m_VolUsageDownlinkIsSet = false;
}
int32_t AccuUsageReport::getTimeUsage() const { return m_TimeUsage; }
void AccuUsageReport::setTimeUsage(int32_t const value) {
  m_TimeUsage = value;
  m_TimeUsageIsSet = true;
}
bool AccuUsageReport::timeUsageIsSet() const { return m_TimeUsageIsSet; }
void AccuUsageReport::unsetTimeUsage() { m_TimeUsageIsSet = false; }
int64_t AccuUsageReport::getNextVolUsage() const { return m_NextVolUsage; }
void AccuUsageReport::setNextVolUsage(int64_t const value) {
  m_NextVolUsage = value;
  m_NextVolUsageIsSet = true;
}
bool AccuUsageReport::nextVolUsageIsSet() const { return m_NextVolUsageIsSet; }
void AccuUsageReport::unsetNextVolUsage() { m_NextVolUsageIsSet = false; }
int64_t AccuUsageReport::getNextVolUsageUplink() const {
  return m_NextVolUsageUplink;
}
void AccuUsageReport::setNextVolUsageUplink(int64_t const value) {
  m_NextVolUsageUplink = value;
  m_NextVolUsageUplinkIsSet = true;
}
bool AccuUsageReport::nextVolUsageUplinkIsSet() const {
  return m_NextVolUsageUplinkIsSet;
}
void AccuUsageReport::unsetNextVolUsageUplink() {
  m_NextVolUsageUplinkIsSet = false;
}
int64_t AccuUsageReport::getNextVolUsageDownlink() const {
  return m_NextVolUsageDownlink;
}
void AccuUsageReport::setNextVolUsageDownlink(int64_t const value) {
  m_NextVolUsageDownlink = value;
  m_NextVolUsageDownlinkIsSet = true;
}
bool AccuUsageReport::nextVolUsageDownlinkIsSet() const {
  return m_NextVolUsageDownlinkIsSet;
}
void AccuUsageReport::unsetNextVolUsageDownlink() {
  m_NextVolUsageDownlinkIsSet = false;
}
int32_t AccuUsageReport::getNextTimeUsage() const { return m_NextTimeUsage; }
void AccuUsageReport::setNextTimeUsage(int32_t const value) {
  m_NextTimeUsage = value;
  m_NextTimeUsageIsSet = true;
}
bool AccuUsageReport::nextTimeUsageIsSet() const {
  return m_NextTimeUsageIsSet;
}
void AccuUsageReport::unsetNextTimeUsage() { m_NextTimeUsageIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
