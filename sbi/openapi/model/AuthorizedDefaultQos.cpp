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

#include "AuthorizedDefaultQos.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

AuthorizedDefaultQos::AuthorizedDefaultQos() {
  m_r_5qi = 0;
  m_r_5qiIsSet = false;
  m_ArpIsSet = false;
  m_PriorityLevel = 0;
  m_PriorityLevelIsSet = false;
  m_AverWindow = 0;
  m_AverWindowIsSet = false;
  m_MaxDataBurstVol = 0;
  m_MaxDataBurstVolIsSet = false;
  m_MaxbrUl = "";
  m_MaxbrUlIsSet = false;
  m_MaxbrDl = "";
  m_MaxbrDlIsSet = false;
  m_GbrUl = "";
  m_GbrUlIsSet = false;
  m_GbrDl = "";
  m_GbrDlIsSet = false;
  m_ExtMaxDataBurstVol = 0;
  m_ExtMaxDataBurstVolIsSet = false;
}

AuthorizedDefaultQos::~AuthorizedDefaultQos() {}

void AuthorizedDefaultQos::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const AuthorizedDefaultQos &o) {
  j = nlohmann::json();
  if (o.r5qiIsSet())
    j["5qi"] = o.m_r_5qi;
  if (o.arpIsSet())
    j["arp"] = o.m_Arp;
  if (o.priorityLevelIsSet())
    j["priorityLevel"] = o.m_PriorityLevel;
  if (o.averWindowIsSet())
    j["averWindow"] = o.m_AverWindow;
  if (o.maxDataBurstVolIsSet())
    j["maxDataBurstVol"] = o.m_MaxDataBurstVol;
  if (o.maxbrUlIsSet())
    j["maxbrUl"] = o.m_MaxbrUl;
  if (o.maxbrDlIsSet())
    j["maxbrDl"] = o.m_MaxbrDl;
  if (o.gbrUlIsSet())
    j["gbrUl"] = o.m_GbrUl;
  if (o.gbrDlIsSet())
    j["gbrDl"] = o.m_GbrDl;
  if (o.extMaxDataBurstVolIsSet())
    j["extMaxDataBurstVol"] = o.m_ExtMaxDataBurstVol;
}

void from_json(const nlohmann::json &j, AuthorizedDefaultQos &o) {
  if (j.find("5qi") != j.end()) {
    j.at("5qi").get_to(o.m_r_5qi);
    o.m_r_5qiIsSet = true;
  }
  if (j.find("arp") != j.end()) {
    j.at("arp").get_to(o.m_Arp);
    o.m_ArpIsSet = true;
  }
  if (j.find("priorityLevel") != j.end()) {
    j.at("priorityLevel").get_to(o.m_PriorityLevel);
    o.m_PriorityLevelIsSet = true;
  }
  if (j.find("averWindow") != j.end()) {
    j.at("averWindow").get_to(o.m_AverWindow);
    o.m_AverWindowIsSet = true;
  }
  if (j.find("maxDataBurstVol") != j.end()) {
    j.at("maxDataBurstVol").get_to(o.m_MaxDataBurstVol);
    o.m_MaxDataBurstVolIsSet = true;
  }
  if (j.find("maxbrUl") != j.end()) {
    j.at("maxbrUl").get_to(o.m_MaxbrUl);
    o.m_MaxbrUlIsSet = true;
  }
  if (j.find("maxbrDl") != j.end()) {
    j.at("maxbrDl").get_to(o.m_MaxbrDl);
    o.m_MaxbrDlIsSet = true;
  }
  if (j.find("gbrUl") != j.end()) {
    j.at("gbrUl").get_to(o.m_GbrUl);
    o.m_GbrUlIsSet = true;
  }
  if (j.find("gbrDl") != j.end()) {
    j.at("gbrDl").get_to(o.m_GbrDl);
    o.m_GbrDlIsSet = true;
  }
  if (j.find("extMaxDataBurstVol") != j.end()) {
    j.at("extMaxDataBurstVol").get_to(o.m_ExtMaxDataBurstVol);
    o.m_ExtMaxDataBurstVolIsSet = true;
  }
}

int32_t AuthorizedDefaultQos::getR5qi() const { return m_r_5qi; }
void AuthorizedDefaultQos::setR5qi(int32_t const value) {
  m_r_5qi = value;
  m_r_5qiIsSet = true;
}
bool AuthorizedDefaultQos::r5qiIsSet() const { return m_r_5qiIsSet; }
void AuthorizedDefaultQos::unsetr_5qi() { m_r_5qiIsSet = false; }
Arp AuthorizedDefaultQos::getArp() const { return m_Arp; }
void AuthorizedDefaultQos::setArp(Arp const &value) {
  m_Arp = value;
  m_ArpIsSet = true;
}
bool AuthorizedDefaultQos::arpIsSet() const { return m_ArpIsSet; }
void AuthorizedDefaultQos::unsetArp() { m_ArpIsSet = false; }
int32_t AuthorizedDefaultQos::getPriorityLevel() const {
  return m_PriorityLevel;
}
void AuthorizedDefaultQos::setPriorityLevel(int32_t const value) {
  m_PriorityLevel = value;
  m_PriorityLevelIsSet = true;
}
bool AuthorizedDefaultQos::priorityLevelIsSet() const {
  return m_PriorityLevelIsSet;
}
void AuthorizedDefaultQos::unsetPriorityLevel() {
  m_PriorityLevelIsSet = false;
}
int32_t AuthorizedDefaultQos::getAverWindow() const { return m_AverWindow; }
void AuthorizedDefaultQos::setAverWindow(int32_t const value) {
  m_AverWindow = value;
  m_AverWindowIsSet = true;
}
bool AuthorizedDefaultQos::averWindowIsSet() const { return m_AverWindowIsSet; }
void AuthorizedDefaultQos::unsetAverWindow() { m_AverWindowIsSet = false; }
int32_t AuthorizedDefaultQos::getMaxDataBurstVol() const {
  return m_MaxDataBurstVol;
}
void AuthorizedDefaultQos::setMaxDataBurstVol(int32_t const value) {
  m_MaxDataBurstVol = value;
  m_MaxDataBurstVolIsSet = true;
}
bool AuthorizedDefaultQos::maxDataBurstVolIsSet() const {
  return m_MaxDataBurstVolIsSet;
}
void AuthorizedDefaultQos::unsetMaxDataBurstVol() {
  m_MaxDataBurstVolIsSet = false;
}
std::string AuthorizedDefaultQos::getMaxbrUl() const { return m_MaxbrUl; }
void AuthorizedDefaultQos::setMaxbrUl(std::string const &value) {
  m_MaxbrUl = value;
  m_MaxbrUlIsSet = true;
}
bool AuthorizedDefaultQos::maxbrUlIsSet() const { return m_MaxbrUlIsSet; }
void AuthorizedDefaultQos::unsetMaxbrUl() { m_MaxbrUlIsSet = false; }
std::string AuthorizedDefaultQos::getMaxbrDl() const { return m_MaxbrDl; }
void AuthorizedDefaultQos::setMaxbrDl(std::string const &value) {
  m_MaxbrDl = value;
  m_MaxbrDlIsSet = true;
}
bool AuthorizedDefaultQos::maxbrDlIsSet() const { return m_MaxbrDlIsSet; }
void AuthorizedDefaultQos::unsetMaxbrDl() { m_MaxbrDlIsSet = false; }
std::string AuthorizedDefaultQos::getGbrUl() const { return m_GbrUl; }
void AuthorizedDefaultQos::setGbrUl(std::string const &value) {
  m_GbrUl = value;
  m_GbrUlIsSet = true;
}
bool AuthorizedDefaultQos::gbrUlIsSet() const { return m_GbrUlIsSet; }
void AuthorizedDefaultQos::unsetGbrUl() { m_GbrUlIsSet = false; }
std::string AuthorizedDefaultQos::getGbrDl() const { return m_GbrDl; }
void AuthorizedDefaultQos::setGbrDl(std::string const &value) {
  m_GbrDl = value;
  m_GbrDlIsSet = true;
}
bool AuthorizedDefaultQos::gbrDlIsSet() const { return m_GbrDlIsSet; }
void AuthorizedDefaultQos::unsetGbrDl() { m_GbrDlIsSet = false; }
int32_t AuthorizedDefaultQos::getExtMaxDataBurstVol() const {
  return m_ExtMaxDataBurstVol;
}
void AuthorizedDefaultQos::setExtMaxDataBurstVol(int32_t const value) {
  m_ExtMaxDataBurstVol = value;
  m_ExtMaxDataBurstVolIsSet = true;
}
bool AuthorizedDefaultQos::extMaxDataBurstVolIsSet() const {
  return m_ExtMaxDataBurstVolIsSet;
}
void AuthorizedDefaultQos::unsetExtMaxDataBurstVol() {
  m_ExtMaxDataBurstVolIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org