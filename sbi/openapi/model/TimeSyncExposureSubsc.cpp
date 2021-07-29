/**
 * 3gpp-time-sync-exposure
 * API for time synchronization exposure. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "TimeSyncExposureSubsc.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

TimeSyncExposureSubsc::TimeSyncExposureSubsc() {
  m_ExterGroupId = "";
  m_ExterGroupIdIsSet = false;
  m_GpsisIsSet = false;
  m_ReqDisMethodIsSet = false;
  m_GmEnable = false;
  m_GmEnableIsSet = false;
  m_GmPrio = 0;
  m_GmPrioIsSet = false;
  m_TimeDom = 0;
  m_TimeDomIsSet = false;
  m_SuppFeat = "";
}

TimeSyncExposureSubsc::~TimeSyncExposureSubsc() {}

void TimeSyncExposureSubsc::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const TimeSyncExposureSubsc &o) {
  j = nlohmann::json();
  if (o.exterGroupIdIsSet())
    j["exterGroupId"] = o.m_ExterGroupId;
  if (o.gpsisIsSet() || !o.m_Gpsis.empty())
    j["gpsis"] = o.m_Gpsis;
  if (o.reqDisMethodIsSet())
    j["reqDisMethod"] = o.m_ReqDisMethod;
  if (o.gmEnableIsSet())
    j["gmEnable"] = o.m_GmEnable;
  if (o.gmPrioIsSet())
    j["gmPrio"] = o.m_GmPrio;
  if (o.timeDomIsSet())
    j["timeDom"] = o.m_TimeDom;
  j["suppFeat"] = o.m_SuppFeat;
}

void from_json(const nlohmann::json &j, TimeSyncExposureSubsc &o) {
  if (j.find("exterGroupId") != j.end()) {
    j.at("exterGroupId").get_to(o.m_ExterGroupId);
    o.m_ExterGroupIdIsSet = true;
  }
  if (j.find("gpsis") != j.end()) {
    j.at("gpsis").get_to(o.m_Gpsis);
    o.m_GpsisIsSet = true;
  }
  if (j.find("reqDisMethod") != j.end()) {
    j.at("reqDisMethod").get_to(o.m_ReqDisMethod);
    o.m_ReqDisMethodIsSet = true;
  }
  if (j.find("gmEnable") != j.end()) {
    j.at("gmEnable").get_to(o.m_GmEnable);
    o.m_GmEnableIsSet = true;
  }
  if (j.find("gmPrio") != j.end()) {
    j.at("gmPrio").get_to(o.m_GmPrio);
    o.m_GmPrioIsSet = true;
  }
  if (j.find("timeDom") != j.end()) {
    j.at("timeDom").get_to(o.m_TimeDom);
    o.m_TimeDomIsSet = true;
  }
  j.at("suppFeat").get_to(o.m_SuppFeat);
}

std::string TimeSyncExposureSubsc::getExterGroupId() const {
  return m_ExterGroupId;
}
void TimeSyncExposureSubsc::setExterGroupId(std::string const &value) {
  m_ExterGroupId = value;
  m_ExterGroupIdIsSet = true;
}
bool TimeSyncExposureSubsc::exterGroupIdIsSet() const {
  return m_ExterGroupIdIsSet;
}
void TimeSyncExposureSubsc::unsetExterGroupId() { m_ExterGroupIdIsSet = false; }
std::map<std::string, std::string> &TimeSyncExposureSubsc::getGpsis() {
  return m_Gpsis;
}
void TimeSyncExposureSubsc::setGpsis(
    std::map<std::string, std::string> const &value) {
  m_Gpsis = value;
  m_GpsisIsSet = true;
}
bool TimeSyncExposureSubsc::gpsisIsSet() const { return m_GpsisIsSet; }
void TimeSyncExposureSubsc::unsetGpsis() { m_GpsisIsSet = false; }
DistributionMethod TimeSyncExposureSubsc::getReqDisMethod() const {
  return m_ReqDisMethod;
}
void TimeSyncExposureSubsc::setReqDisMethod(DistributionMethod const &value) {
  m_ReqDisMethod = value;
  m_ReqDisMethodIsSet = true;
}
bool TimeSyncExposureSubsc::reqDisMethodIsSet() const {
  return m_ReqDisMethodIsSet;
}
void TimeSyncExposureSubsc::unsetReqDisMethod() { m_ReqDisMethodIsSet = false; }
bool TimeSyncExposureSubsc::isGmEnable() const { return m_GmEnable; }
void TimeSyncExposureSubsc::setGmEnable(bool const value) {
  m_GmEnable = value;
  m_GmEnableIsSet = true;
}
bool TimeSyncExposureSubsc::gmEnableIsSet() const { return m_GmEnableIsSet; }
void TimeSyncExposureSubsc::unsetGmEnable() { m_GmEnableIsSet = false; }
int32_t TimeSyncExposureSubsc::getGmPrio() const { return m_GmPrio; }
void TimeSyncExposureSubsc::setGmPrio(int32_t const value) {
  m_GmPrio = value;
  m_GmPrioIsSet = true;
}
bool TimeSyncExposureSubsc::gmPrioIsSet() const { return m_GmPrioIsSet; }
void TimeSyncExposureSubsc::unsetGmPrio() { m_GmPrioIsSet = false; }
int32_t TimeSyncExposureSubsc::getTimeDom() const { return m_TimeDom; }
void TimeSyncExposureSubsc::setTimeDom(int32_t const value) {
  m_TimeDom = value;
  m_TimeDomIsSet = true;
}
bool TimeSyncExposureSubsc::timeDomIsSet() const { return m_TimeDomIsSet; }
void TimeSyncExposureSubsc::unsetTimeDom() { m_TimeDomIsSet = false; }
std::string TimeSyncExposureSubsc::getSuppFeat() const { return m_SuppFeat; }
void TimeSyncExposureSubsc::setSuppFeat(std::string const &value) {
  m_SuppFeat = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
