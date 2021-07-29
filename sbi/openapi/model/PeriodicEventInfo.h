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
 * PeriodicEventInfo.h
 *
 * Indicates the information of periodic event reporting.
 */

#ifndef PeriodicEventInfo_H_
#define PeriodicEventInfo_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Indicates the information of periodic event reporting.
/// </summary>
class PeriodicEventInfo {
public:
  PeriodicEventInfo();
  virtual ~PeriodicEventInfo();

  void validate();

  /////////////////////////////////////////////
  /// PeriodicEventInfo members

  /// <summary>
  /// Number of required periodic event reports.
  /// </summary>
  int32_t getReportingAmount() const;
  void setReportingAmount(int32_t const value);
  /// <summary>
  /// Event reporting periodic interval.
  /// </summary>
  int32_t getReportingInterval() const;
  void setReportingInterval(int32_t const value);

  friend void to_json(nlohmann::json &j, const PeriodicEventInfo &o);
  friend void from_json(const nlohmann::json &j, PeriodicEventInfo &o);

protected:
  int32_t m_ReportingAmount;

  int32_t m_ReportingInterval;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* PeriodicEventInfo_H_ */
