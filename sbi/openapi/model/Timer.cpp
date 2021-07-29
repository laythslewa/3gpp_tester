/**
 * Nudsf_Timer
 * Nudsf Timer Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA,
 * ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "Timer.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

Timer::Timer() {
  m_TimerId = "";
  m_TimerIdIsSet = false;
  m_Expires = "";
  m_MetaTagsIsSet = false;
  m_CallbackReference = "";
  m_CallbackReferenceIsSet = false;
  m_DeleteAfter = 0;
  m_DeleteAfterIsSet = false;
}

Timer::~Timer() {}

void Timer::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const Timer &o) {
  j = nlohmann::json();
  if (o.timerIdIsSet())
    j["timerId"] = o.m_TimerId;
  j["expires"] = o.m_Expires;
  if (o.metaTagsIsSet() || !o.m_MetaTags.empty())
    j["metaTags"] = o.m_MetaTags;
  if (o.callbackReferenceIsSet())
    j["callbackReference"] = o.m_CallbackReference;
  if (o.deleteAfterIsSet())
    j["deleteAfter"] = o.m_DeleteAfter;
}

void from_json(const nlohmann::json &j, Timer &o) {
  if (j.find("timerId") != j.end()) {
    j.at("timerId").get_to(o.m_TimerId);
    o.m_TimerIdIsSet = true;
  }
  j.at("expires").get_to(o.m_Expires);
  if (j.find("metaTags") != j.end()) {
    j.at("metaTags").get_to(o.m_MetaTags);
    o.m_MetaTagsIsSet = true;
  }
  if (j.find("callbackReference") != j.end()) {
    j.at("callbackReference").get_to(o.m_CallbackReference);
    o.m_CallbackReferenceIsSet = true;
  }
  if (j.find("deleteAfter") != j.end()) {
    j.at("deleteAfter").get_to(o.m_DeleteAfter);
    o.m_DeleteAfterIsSet = true;
  }
}

std::string Timer::getTimerId() const { return m_TimerId; }
void Timer::setTimerId(std::string const &value) {
  m_TimerId = value;
  m_TimerIdIsSet = true;
}
bool Timer::timerIdIsSet() const { return m_TimerIdIsSet; }
void Timer::unsetTimerId() { m_TimerIdIsSet = false; }
std::string Timer::getExpires() const { return m_Expires; }
void Timer::setExpires(std::string const &value) { m_Expires = value; }
std::map<std::string, std::vector<std::string>> &Timer::getMetaTags() {
  return m_MetaTags;
}
void Timer::setMetaTags(
    std::map<std::string, std::vector<std::string>> const &value) {
  m_MetaTags = value;
  m_MetaTagsIsSet = true;
}
bool Timer::metaTagsIsSet() const { return m_MetaTagsIsSet; }
void Timer::unsetMetaTags() { m_MetaTagsIsSet = false; }
std::string Timer::getCallbackReference() const { return m_CallbackReference; }
void Timer::setCallbackReference(std::string const &value) {
  m_CallbackReference = value;
  m_CallbackReferenceIsSet = true;
}
bool Timer::callbackReferenceIsSet() const { return m_CallbackReferenceIsSet; }
void Timer::unsetCallbackReference() { m_CallbackReferenceIsSet = false; }
int32_t Timer::getDeleteAfter() const { return m_DeleteAfter; }
void Timer::setDeleteAfter(int32_t const value) {
  m_DeleteAfter = value;
  m_DeleteAfterIsSet = true;
}
bool Timer::deleteAfterIsSet() const { return m_DeleteAfterIsSet; }
void Timer::unsetDeleteAfter() { m_DeleteAfterIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
