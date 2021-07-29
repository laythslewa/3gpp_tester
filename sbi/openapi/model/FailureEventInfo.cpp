/**
 * Nnwdaf_EventsSubscription
 * Nnwdaf_EventsSubscription Service API. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "FailureEventInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

FailureEventInfo::FailureEventInfo() {}

FailureEventInfo::~FailureEventInfo() {}

void FailureEventInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const FailureEventInfo &o) {
  j = nlohmann::json();
  j["event"] = o.m_Event;
  j["failureCode"] = o.m_FailureCode;
}

void from_json(const nlohmann::json &j, FailureEventInfo &o) {
  j.at("event").get_to(o.m_Event);
  j.at("failureCode").get_to(o.m_FailureCode);
}

NwdafEvent FailureEventInfo::getEvent() const { return m_Event; }
void FailureEventInfo::setEvent(NwdafEvent const &value) { m_Event = value; }
NwdafFailureCode FailureEventInfo::getFailureCode() const {
  return m_FailureCode;
}
void FailureEventInfo::setFailureCode(NwdafFailureCode const &value) {
  m_FailureCode = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
