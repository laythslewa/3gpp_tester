/**
 * 3gpp-analyticsexposure
 * API for Analytics Exposure. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "TrafficCharacterization.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

TrafficCharacterization::TrafficCharacterization() {
  m_Dnn = "";
  m_DnnIsSet = false;
  m_SnssaiIsSet = false;
  m_AppId = "";
  m_AppIdIsSet = false;
  m_FDescsIsSet = false;
  m_UlVol = 0L;
  m_UlVolIsSet = false;
  m_UlVolVariance = 0.0f;
  m_UlVolVarianceIsSet = false;
  m_DlVol = 0L;
  m_DlVolIsSet = false;
  m_DlVolVariance = 0.0f;
  m_DlVolVarianceIsSet = false;
}

TrafficCharacterization::~TrafficCharacterization() {}

void TrafficCharacterization::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const TrafficCharacterization &o) {
  j = nlohmann::json();
  if (o.dnnIsSet())
    j["dnn"] = o.m_Dnn;
  if (o.snssaiIsSet())
    j["snssai"] = o.m_Snssai;
  if (o.appIdIsSet())
    j["appId"] = o.m_AppId;
  if (o.fDescsIsSet() || !o.m_FDescs.empty())
    j["fDescs"] = o.m_FDescs;
  if (o.ulVolIsSet())
    j["ulVol"] = o.m_UlVol;
  if (o.ulVolVarianceIsSet())
    j["ulVolVariance"] = o.m_UlVolVariance;
  if (o.dlVolIsSet())
    j["dlVol"] = o.m_DlVol;
  if (o.dlVolVarianceIsSet())
    j["dlVolVariance"] = o.m_DlVolVariance;
}

void from_json(const nlohmann::json &j, TrafficCharacterization &o) {
  if (j.find("dnn") != j.end()) {
    j.at("dnn").get_to(o.m_Dnn);
    o.m_DnnIsSet = true;
  }
  if (j.find("snssai") != j.end()) {
    j.at("snssai").get_to(o.m_Snssai);
    o.m_SnssaiIsSet = true;
  }
  if (j.find("appId") != j.end()) {
    j.at("appId").get_to(o.m_AppId);
    o.m_AppIdIsSet = true;
  }
  if (j.find("fDescs") != j.end()) {
    j.at("fDescs").get_to(o.m_FDescs);
    o.m_FDescsIsSet = true;
  }
  if (j.find("ulVol") != j.end()) {
    j.at("ulVol").get_to(o.m_UlVol);
    o.m_UlVolIsSet = true;
  }
  if (j.find("ulVolVariance") != j.end()) {
    j.at("ulVolVariance").get_to(o.m_UlVolVariance);
    o.m_UlVolVarianceIsSet = true;
  }
  if (j.find("dlVol") != j.end()) {
    j.at("dlVol").get_to(o.m_DlVol);
    o.m_DlVolIsSet = true;
  }
  if (j.find("dlVolVariance") != j.end()) {
    j.at("dlVolVariance").get_to(o.m_DlVolVariance);
    o.m_DlVolVarianceIsSet = true;
  }
}

std::string TrafficCharacterization::getDnn() const { return m_Dnn; }
void TrafficCharacterization::setDnn(std::string const &value) {
  m_Dnn = value;
  m_DnnIsSet = true;
}
bool TrafficCharacterization::dnnIsSet() const { return m_DnnIsSet; }
void TrafficCharacterization::unsetDnn() { m_DnnIsSet = false; }
Snssai TrafficCharacterization::getSnssai() const { return m_Snssai; }
void TrafficCharacterization::setSnssai(Snssai const &value) {
  m_Snssai = value;
  m_SnssaiIsSet = true;
}
bool TrafficCharacterization::snssaiIsSet() const { return m_SnssaiIsSet; }
void TrafficCharacterization::unsetSnssai() { m_SnssaiIsSet = false; }
std::string TrafficCharacterization::getAppId() const { return m_AppId; }
void TrafficCharacterization::setAppId(std::string const &value) {
  m_AppId = value;
  m_AppIdIsSet = true;
}
bool TrafficCharacterization::appIdIsSet() const { return m_AppIdIsSet; }
void TrafficCharacterization::unsetAppId() { m_AppIdIsSet = false; }
std::vector<IpEthFlowDescription> &TrafficCharacterization::getFDescs() {
  return m_FDescs;
}
void TrafficCharacterization::setFDescs(
    std::vector<IpEthFlowDescription> const &value) {
  m_FDescs = value;
  m_FDescsIsSet = true;
}
bool TrafficCharacterization::fDescsIsSet() const { return m_FDescsIsSet; }
void TrafficCharacterization::unsetFDescs() { m_FDescsIsSet = false; }
int64_t TrafficCharacterization::getUlVol() const { return m_UlVol; }
void TrafficCharacterization::setUlVol(int64_t const value) {
  m_UlVol = value;
  m_UlVolIsSet = true;
}
bool TrafficCharacterization::ulVolIsSet() const { return m_UlVolIsSet; }
void TrafficCharacterization::unsetUlVol() { m_UlVolIsSet = false; }
float TrafficCharacterization::getUlVolVariance() const {
  return m_UlVolVariance;
}
void TrafficCharacterization::setUlVolVariance(float const value) {
  m_UlVolVariance = value;
  m_UlVolVarianceIsSet = true;
}
bool TrafficCharacterization::ulVolVarianceIsSet() const {
  return m_UlVolVarianceIsSet;
}
void TrafficCharacterization::unsetUlVolVariance() {
  m_UlVolVarianceIsSet = false;
}
int64_t TrafficCharacterization::getDlVol() const { return m_DlVol; }
void TrafficCharacterization::setDlVol(int64_t const value) {
  m_DlVol = value;
  m_DlVolIsSet = true;
}
bool TrafficCharacterization::dlVolIsSet() const { return m_DlVolIsSet; }
void TrafficCharacterization::unsetDlVol() { m_DlVolIsSet = false; }
float TrafficCharacterization::getDlVolVariance() const {
  return m_DlVolVariance;
}
void TrafficCharacterization::setDlVolVariance(float const value) {
  m_DlVolVariance = value;
  m_DlVolVarianceIsSet = true;
}
bool TrafficCharacterization::dlVolVarianceIsSet() const {
  return m_DlVolVarianceIsSet;
}
void TrafficCharacterization::unsetDlVolVariance() {
  m_DlVolVarianceIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org