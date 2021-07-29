/**
 * M5_ConsumptionReporting
 * 5GMS AF M5 Consumption Reporting API © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ConsumptionReportingUnit.h
 *
 *
 */

#ifndef ConsumptionReportingUnit_H_
#define ConsumptionReportingUnit_H_

#include "TypedLocation.h"
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
class ConsumptionReportingUnit {
public:
  ConsumptionReportingUnit();
  virtual ~ConsumptionReportingUnit();

  void validate();

  /////////////////////////////////////////////
  /// ConsumptionReportingUnit members

  /// <summary>
  ///
  /// </summary>
  std::string getMediaConsumed() const;
  void setMediaConsumed(std::string const &value);
  /// <summary>
  /// string with format \&quot;date-time\&quot; as defined in OpenAPI.
  /// </summary>
  std::string getStartTime() const;
  void setStartTime(std::string const &value);
  /// <summary>
  /// indicating a time in seconds.
  /// </summary>
  int32_t getDuration() const;
  void setDuration(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  std::vector<TypedLocation> &getLocations();
  void setLocations(std::vector<TypedLocation> const &value);
  bool locationsIsSet() const;
  void unsetLocations();

  friend void to_json(nlohmann::json &j, const ConsumptionReportingUnit &o);
  friend void from_json(const nlohmann::json &j, ConsumptionReportingUnit &o);

protected:
  std::string m_MediaConsumed;

  std::string m_StartTime;

  int32_t m_Duration;

  std::vector<TypedLocation> m_Locations;
  bool m_LocationsIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ConsumptionReportingUnit_H_ */