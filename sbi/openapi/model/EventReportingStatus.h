/**
 * LMF Location
 * LMF Location Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA,
 * ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * EventReportingStatus.h
 *
 * Indicates the status of event reporting.
 */

#ifndef EventReportingStatus_H_
#define EventReportingStatus_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Indicates the status of event reporting.
/// </summary>
class EventReportingStatus {
public:
  EventReportingStatus();
  virtual ~EventReportingStatus();

  void validate();

  /////////////////////////////////////////////
  /// EventReportingStatus members

  /// <summary>
  /// Number of event reports received from the target UE.
  /// </summary>
  int32_t getEventReportCounter() const;
  void setEventReportCounter(int32_t const value);
  bool eventReportCounterIsSet() const;
  void unsetEventReportCounter();
  /// <summary>
  /// Duration of event reporting.
  /// </summary>
  int32_t getEventReportDuration() const;
  void setEventReportDuration(int32_t const value);
  bool eventReportDurationIsSet() const;
  void unsetEventReportDuration();

  friend void to_json(nlohmann::json &j, const EventReportingStatus &o);
  friend void from_json(const nlohmann::json &j, EventReportingStatus &o);

protected:
  int32_t m_EventReportCounter;
  bool m_EventReportCounterIsSet;
  int32_t m_EventReportDuration;
  bool m_EventReportDurationIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* EventReportingStatus_H_ */