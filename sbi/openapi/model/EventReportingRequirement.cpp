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

#include "EventReportingRequirement.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

EventReportingRequirement::EventReportingRequirement() {
  m_AccuracyIsSet = false;
  m_StartTs = "";
  m_StartTsIsSet = false;
  m_EndTs = "";
  m_EndTsIsSet = false;
  m_SampRatio = 0;
  m_SampRatioIsSet = false;
  m_MaxObjectNbr = 0;
  m_MaxObjectNbrIsSet = false;
  m_MaxSupiNbr = 0;
  m_MaxSupiNbrIsSet = false;
  m_TimeAnaNeeded = "";
  m_TimeAnaNeededIsSet = false;
}

EventReportingRequirement::~EventReportingRequirement() {}

void EventReportingRequirement::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const EventReportingRequirement &o) {
  j = nlohmann::json();
  if (o.accuracyIsSet())
    j["accuracy"] = o.m_Accuracy;
  if (o.startTsIsSet())
    j["startTs"] = o.m_StartTs;
  if (o.endTsIsSet())
    j["endTs"] = o.m_EndTs;
  if (o.sampRatioIsSet())
    j["sampRatio"] = o.m_SampRatio;
  if (o.maxObjectNbrIsSet())
    j["maxObjectNbr"] = o.m_MaxObjectNbr;
  if (o.maxSupiNbrIsSet())
    j["maxSupiNbr"] = o.m_MaxSupiNbr;
  if (o.timeAnaNeededIsSet())
    j["timeAnaNeeded"] = o.m_TimeAnaNeeded;
}

void from_json(const nlohmann::json &j, EventReportingRequirement &o) {
  if (j.find("accuracy") != j.end()) {
    j.at("accuracy").get_to(o.m_Accuracy);
    o.m_AccuracyIsSet = true;
  }
  if (j.find("startTs") != j.end()) {
    j.at("startTs").get_to(o.m_StartTs);
    o.m_StartTsIsSet = true;
  }
  if (j.find("endTs") != j.end()) {
    j.at("endTs").get_to(o.m_EndTs);
    o.m_EndTsIsSet = true;
  }
  if (j.find("sampRatio") != j.end()) {
    j.at("sampRatio").get_to(o.m_SampRatio);
    o.m_SampRatioIsSet = true;
  }
  if (j.find("maxObjectNbr") != j.end()) {
    j.at("maxObjectNbr").get_to(o.m_MaxObjectNbr);
    o.m_MaxObjectNbrIsSet = true;
  }
  if (j.find("maxSupiNbr") != j.end()) {
    j.at("maxSupiNbr").get_to(o.m_MaxSupiNbr);
    o.m_MaxSupiNbrIsSet = true;
  }
  if (j.find("timeAnaNeeded") != j.end()) {
    j.at("timeAnaNeeded").get_to(o.m_TimeAnaNeeded);
    o.m_TimeAnaNeededIsSet = true;
  }
}

Accuracy EventReportingRequirement::getAccuracy() const { return m_Accuracy; }
void EventReportingRequirement::setAccuracy(Accuracy const &value) {
  m_Accuracy = value;
  m_AccuracyIsSet = true;
}
bool EventReportingRequirement::accuracyIsSet() const {
  return m_AccuracyIsSet;
}
void EventReportingRequirement::unsetAccuracy() { m_AccuracyIsSet = false; }
std::string EventReportingRequirement::getStartTs() const { return m_StartTs; }
void EventReportingRequirement::setStartTs(std::string const &value) {
  m_StartTs = value;
  m_StartTsIsSet = true;
}
bool EventReportingRequirement::startTsIsSet() const { return m_StartTsIsSet; }
void EventReportingRequirement::unsetStartTs() { m_StartTsIsSet = false; }
std::string EventReportingRequirement::getEndTs() const { return m_EndTs; }
void EventReportingRequirement::setEndTs(std::string const &value) {
  m_EndTs = value;
  m_EndTsIsSet = true;
}
bool EventReportingRequirement::endTsIsSet() const { return m_EndTsIsSet; }
void EventReportingRequirement::unsetEndTs() { m_EndTsIsSet = false; }
int32_t EventReportingRequirement::getSampRatio() const { return m_SampRatio; }
void EventReportingRequirement::setSampRatio(int32_t const value) {
  m_SampRatio = value;
  m_SampRatioIsSet = true;
}
bool EventReportingRequirement::sampRatioIsSet() const {
  return m_SampRatioIsSet;
}
void EventReportingRequirement::unsetSampRatio() { m_SampRatioIsSet = false; }
int32_t EventReportingRequirement::getMaxObjectNbr() const {
  return m_MaxObjectNbr;
}
void EventReportingRequirement::setMaxObjectNbr(int32_t const value) {
  m_MaxObjectNbr = value;
  m_MaxObjectNbrIsSet = true;
}
bool EventReportingRequirement::maxObjectNbrIsSet() const {
  return m_MaxObjectNbrIsSet;
}
void EventReportingRequirement::unsetMaxObjectNbr() {
  m_MaxObjectNbrIsSet = false;
}
int32_t EventReportingRequirement::getMaxSupiNbr() const {
  return m_MaxSupiNbr;
}
void EventReportingRequirement::setMaxSupiNbr(int32_t const value) {
  m_MaxSupiNbr = value;
  m_MaxSupiNbrIsSet = true;
}
bool EventReportingRequirement::maxSupiNbrIsSet() const {
  return m_MaxSupiNbrIsSet;
}
void EventReportingRequirement::unsetMaxSupiNbr() { m_MaxSupiNbrIsSet = false; }
std::string EventReportingRequirement::getTimeAnaNeeded() const {
  return m_TimeAnaNeeded;
}
void EventReportingRequirement::setTimeAnaNeeded(std::string const &value) {
  m_TimeAnaNeeded = value;
  m_TimeAnaNeededIsSet = true;
}
bool EventReportingRequirement::timeAnaNeededIsSet() const {
  return m_TimeAnaNeededIsSet;
}
void EventReportingRequirement::unsetTimeAnaNeeded() {
  m_TimeAnaNeededIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
