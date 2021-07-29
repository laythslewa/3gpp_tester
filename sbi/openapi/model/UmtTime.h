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
/*
 * UmtTime.h
 *
 *
 */

#ifndef UmtTime_H_
#define UmtTime_H_

#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class UmtTime {
public:
  UmtTime();
  virtual ~UmtTime();

  void validate();

  /////////////////////////////////////////////
  /// UmtTime members

  /// <summary>
  /// String with format partial-time or full-time as defined in clause 5.6 of
  /// IETF RFC 3339. Examples, 20:15:00, 20:15:00-08:00 (for 8 hours behind
  /// UTC).
  /// </summary>
  std::string getTimeOfDay() const;
  void setTimeOfDay(std::string const &value);
  /// <summary>
  /// integer between and including 1 and 7 denoting a weekday. 1 shall indicate
  /// Monday, and the subsequent weekdays shall be indicated with the next
  /// higher numbers. 7 shall indicate Sunday.
  /// </summary>
  int32_t getDayOfWeek() const;
  void setDayOfWeek(int32_t const value);

  friend void to_json(nlohmann::json &j, const UmtTime &o);
  friend void from_json(const nlohmann::json &j, UmtTime &o);

protected:
  std::string m_TimeOfDay;

  int32_t m_DayOfWeek;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* UmtTime_H_ */
