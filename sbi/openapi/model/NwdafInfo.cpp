/**
 * NRF NFManagement Service
 * NRF NFManagement Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "NwdafInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

NwdafInfo::NwdafInfo() {
  m_EventIdsIsSet = false;
  m_NwdafEventsIsSet = false;
  m_TaiListIsSet = false;
  m_TaiRangeListIsSet = false;
  m_NwdafCapabilityIsSet = false;
  m_AnalyticsDelay = 0;
  m_AnalyticsDelayIsSet = false;
  m_ServingNfSetIdListIsSet = false;
  m_ServingNfTypeListIsSet = false;
  m_MlAnalyticsIdsIsSet = false;
}

NwdafInfo::~NwdafInfo() {}

void NwdafInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const NwdafInfo &o) {
  j = nlohmann::json();
  if (o.eventIdsIsSet() || !o.m_EventIds.empty())
    j["eventIds"] = o.m_EventIds;
  if (o.nwdafEventsIsSet() || !o.m_NwdafEvents.empty())
    j["nwdafEvents"] = o.m_NwdafEvents;
  if (o.taiListIsSet() || !o.m_TaiList.empty())
    j["taiList"] = o.m_TaiList;
  if (o.taiRangeListIsSet() || !o.m_TaiRangeList.empty())
    j["taiRangeList"] = o.m_TaiRangeList;
  if (o.nwdafCapabilityIsSet())
    j["nwdafCapability"] = o.m_NwdafCapability;
  if (o.analyticsDelayIsSet())
    j["analyticsDelay"] = o.m_AnalyticsDelay;
  if (o.servingNfSetIdListIsSet() || !o.m_ServingNfSetIdList.empty())
    j["servingNfSetIdList"] = o.m_ServingNfSetIdList;
  if (o.servingNfTypeListIsSet() || !o.m_ServingNfTypeList.empty())
    j["servingNfTypeList"] = o.m_ServingNfTypeList;
  if (o.mlAnalyticsIdsIsSet() || !o.m_MlAnalyticsIds.empty())
    j["mlAnalyticsIds"] = o.m_MlAnalyticsIds;
}

void from_json(const nlohmann::json &j, NwdafInfo &o) {
  if (j.find("eventIds") != j.end()) {
    j.at("eventIds").get_to(o.m_EventIds);
    o.m_EventIdsIsSet = true;
  }
  if (j.find("nwdafEvents") != j.end()) {
    j.at("nwdafEvents").get_to(o.m_NwdafEvents);
    o.m_NwdafEventsIsSet = true;
  }
  if (j.find("taiList") != j.end()) {
    j.at("taiList").get_to(o.m_TaiList);
    o.m_TaiListIsSet = true;
  }
  if (j.find("taiRangeList") != j.end()) {
    j.at("taiRangeList").get_to(o.m_TaiRangeList);
    o.m_TaiRangeListIsSet = true;
  }
  if (j.find("nwdafCapability") != j.end()) {
    j.at("nwdafCapability").get_to(o.m_NwdafCapability);
    o.m_NwdafCapabilityIsSet = true;
  }
  if (j.find("analyticsDelay") != j.end()) {
    j.at("analyticsDelay").get_to(o.m_AnalyticsDelay);
    o.m_AnalyticsDelayIsSet = true;
  }
  if (j.find("servingNfSetIdList") != j.end()) {
    j.at("servingNfSetIdList").get_to(o.m_ServingNfSetIdList);
    o.m_ServingNfSetIdListIsSet = true;
  }
  if (j.find("servingNfTypeList") != j.end()) {
    j.at("servingNfTypeList").get_to(o.m_ServingNfTypeList);
    o.m_ServingNfTypeListIsSet = true;
  }
  if (j.find("mlAnalyticsIds") != j.end()) {
    j.at("mlAnalyticsIds").get_to(o.m_MlAnalyticsIds);
    o.m_MlAnalyticsIdsIsSet = true;
  }
}

std::vector<EventId> &NwdafInfo::getEventIds() { return m_EventIds; }
void NwdafInfo::setEventIds(std::vector<EventId> const &value) {
  m_EventIds = value;
  m_EventIdsIsSet = true;
}
bool NwdafInfo::eventIdsIsSet() const { return m_EventIdsIsSet; }
void NwdafInfo::unsetEventIds() { m_EventIdsIsSet = false; }
std::vector<NwdafEvent> &NwdafInfo::getNwdafEvents() { return m_NwdafEvents; }
void NwdafInfo::setNwdafEvents(std::vector<NwdafEvent> const &value) {
  m_NwdafEvents = value;
  m_NwdafEventsIsSet = true;
}
bool NwdafInfo::nwdafEventsIsSet() const { return m_NwdafEventsIsSet; }
void NwdafInfo::unsetNwdafEvents() { m_NwdafEventsIsSet = false; }
std::vector<Tai> &NwdafInfo::getTaiList() { return m_TaiList; }
void NwdafInfo::setTaiList(std::vector<Tai> const &value) {
  m_TaiList = value;
  m_TaiListIsSet = true;
}
bool NwdafInfo::taiListIsSet() const { return m_TaiListIsSet; }
void NwdafInfo::unsetTaiList() { m_TaiListIsSet = false; }
std::vector<TaiRange> &NwdafInfo::getTaiRangeList() { return m_TaiRangeList; }
void NwdafInfo::setTaiRangeList(std::vector<TaiRange> const &value) {
  m_TaiRangeList = value;
  m_TaiRangeListIsSet = true;
}
bool NwdafInfo::taiRangeListIsSet() const { return m_TaiRangeListIsSet; }
void NwdafInfo::unsetTaiRangeList() { m_TaiRangeListIsSet = false; }
NwdafCapability NwdafInfo::getNwdafCapability() const {
  return m_NwdafCapability;
}
void NwdafInfo::setNwdafCapability(NwdafCapability const &value) {
  m_NwdafCapability = value;
  m_NwdafCapabilityIsSet = true;
}
bool NwdafInfo::nwdafCapabilityIsSet() const { return m_NwdafCapabilityIsSet; }
void NwdafInfo::unsetNwdafCapability() { m_NwdafCapabilityIsSet = false; }
int32_t NwdafInfo::getAnalyticsDelay() const { return m_AnalyticsDelay; }
void NwdafInfo::setAnalyticsDelay(int32_t const value) {
  m_AnalyticsDelay = value;
  m_AnalyticsDelayIsSet = true;
}
bool NwdafInfo::analyticsDelayIsSet() const { return m_AnalyticsDelayIsSet; }
void NwdafInfo::unsetAnalyticsDelay() { m_AnalyticsDelayIsSet = false; }
std::vector<std::string> &NwdafInfo::getServingNfSetIdList() {
  return m_ServingNfSetIdList;
}
void NwdafInfo::setServingNfSetIdList(std::vector<std::string> const &value) {
  m_ServingNfSetIdList = value;
  m_ServingNfSetIdListIsSet = true;
}
bool NwdafInfo::servingNfSetIdListIsSet() const {
  return m_ServingNfSetIdListIsSet;
}
void NwdafInfo::unsetServingNfSetIdList() { m_ServingNfSetIdListIsSet = false; }
std::vector<NFType> &NwdafInfo::getServingNfTypeList() {
  return m_ServingNfTypeList;
}
void NwdafInfo::setServingNfTypeList(std::vector<NFType> const &value) {
  m_ServingNfTypeList = value;
  m_ServingNfTypeListIsSet = true;
}
bool NwdafInfo::servingNfTypeListIsSet() const {
  return m_ServingNfTypeListIsSet;
}
void NwdafInfo::unsetServingNfTypeList() { m_ServingNfTypeListIsSet = false; }
std::vector<NwdafEvent> &NwdafInfo::getMlAnalyticsIds() {
  return m_MlAnalyticsIds;
}
void NwdafInfo::setMlAnalyticsIds(std::vector<NwdafEvent> const &value) {
  m_MlAnalyticsIds = value;
  m_MlAnalyticsIdsIsSet = true;
}
bool NwdafInfo::mlAnalyticsIdsIsSet() const { return m_MlAnalyticsIdsIsSet; }
void NwdafInfo::unsetMlAnalyticsIds() { m_MlAnalyticsIdsIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org