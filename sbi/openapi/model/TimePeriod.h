/**
 * Unified Data Repository Service API file for policy data
 * The API version is defined in 3GPP TS 29.504 © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * TimePeriod.h
 *
 * Contains the periodicity for the defined usage monitoring data limits.
 */

#ifndef TimePeriod_H_
#define TimePeriod_H_

#include "Periodicity.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Contains the periodicity for the defined usage monitoring data limits.
/// </summary>
class TimePeriod {
public:
  TimePeriod();
  virtual ~TimePeriod();

  void validate();

  /////////////////////////////////////////////
  /// TimePeriod members

  /// <summary>
  ///
  /// </summary>
  Periodicity getPeriod() const;
  void setPeriod(Periodicity const &value);
  /// <summary>
  /// Unsigned Integer, i.e. only value 0 and integers above 0 are permissible.
  /// </summary>
  int32_t getMaxNumPeriod() const;
  void setMaxNumPeriod(int32_t const value);
  bool maxNumPeriodIsSet() const;
  void unsetMaxNumPeriod();

  friend void to_json(nlohmann::json &j, const TimePeriod &o);
  friend void from_json(const nlohmann::json &j, TimePeriod &o);

protected:
  Periodicity m_Period;

  int32_t m_MaxNumPeriod;
  bool m_MaxNumPeriodIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* TimePeriod_H_ */
