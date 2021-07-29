/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.3.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ScheduledCommunicationTime.h
 *
 *
 */

#ifndef ScheduledCommunicationTime_H_
#define ScheduledCommunicationTime_H_

#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class ScheduledCommunicationTime {
public:
  ScheduledCommunicationTime();
  virtual ~ScheduledCommunicationTime();

  void validate();

  /////////////////////////////////////////////
  /// ScheduledCommunicationTime members

  /// <summary>
  /// Identifies the day(s) of the week. If absent, it indicates every day of
  /// the week.
  /// </summary>
  std::vector<int32_t> &getDaysOfWeek();
  void setDaysOfWeek(std::vector<int32_t> const value);
  bool daysOfWeekIsSet() const;
  void unsetDaysOfWeek();
  /// <summary>
  /// String with format partial-time or full-time as defined in clause 5.6 of
  /// IETF RFC 3339. Examples, 20:15:00, 20:15:00-08:00 (for 8 hours behind
  /// UTC).
  /// </summary>
  std::string getTimeOfDayStart() const;
  void setTimeOfDayStart(std::string const &value);
  bool timeOfDayStartIsSet() const;
  void unsetTimeOfDayStart();
  /// <summary>
  /// String with format partial-time or full-time as defined in clause 5.6 of
  /// IETF RFC 3339. Examples, 20:15:00, 20:15:00-08:00 (for 8 hours behind
  /// UTC).
  /// </summary>
  std::string getTimeOfDayEnd() const;
  void setTimeOfDayEnd(std::string const &value);
  bool timeOfDayEndIsSet() const;
  void unsetTimeOfDayEnd();

  friend void to_json(nlohmann::json &j, const ScheduledCommunicationTime &o);
  friend void from_json(const nlohmann::json &j, ScheduledCommunicationTime &o);

protected:
  std::vector<int32_t> m_DaysOfWeek;
  bool m_DaysOfWeekIsSet;
  std::string m_TimeOfDayStart;
  bool m_TimeOfDayStartIsSet;
  std::string m_TimeOfDayEnd;
  bool m_TimeOfDayEndIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ScheduledCommunicationTime_H_ */