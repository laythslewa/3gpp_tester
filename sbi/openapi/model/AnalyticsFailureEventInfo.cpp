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

#include "AnalyticsFailureEventInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

AnalyticsFailureEventInfo::AnalyticsFailureEventInfo() {}

AnalyticsFailureEventInfo::~AnalyticsFailureEventInfo() {}

void AnalyticsFailureEventInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const AnalyticsFailureEventInfo &o) {
  j = nlohmann::json();
  j["event"] = o.m_Event;
  j["failureCode"] = o.m_FailureCode;
}

void from_json(const nlohmann::json &j, AnalyticsFailureEventInfo &o) {
  j.at("event").get_to(o.m_Event);
  j.at("failureCode").get_to(o.m_FailureCode);
}

AnalyticsEvent AnalyticsFailureEventInfo::getEvent() const { return m_Event; }
void AnalyticsFailureEventInfo::setEvent(AnalyticsEvent const &value) {
  m_Event = value;
}
AnalyticsFailureCode AnalyticsFailureEventInfo::getFailureCode() const {
  return m_FailureCode;
}
void AnalyticsFailureEventInfo::setFailureCode(
    AnalyticsFailureCode const &value) {
  m_FailureCode = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org