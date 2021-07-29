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
/*
 * UeMobility.h
 *
 * Represents UE mobility information.
 */

#ifndef UeMobility_H_
#define UeMobility_H_

#include "LocationInfo.h"
#include "ScheduledCommunicationTime.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents UE mobility information.
/// </summary>
class UeMobility {
public:
  UeMobility();
  virtual ~UeMobility();

  void validate();

  /////////////////////////////////////////////
  /// UeMobility members

  /// <summary>
  /// string with format \&quot;date-time\&quot; as defined in OpenAPI.
  /// </summary>
  std::string getTs() const;
  void setTs(std::string const &value);
  bool tsIsSet() const;
  void unsetTs();
  /// <summary>
  ///
  /// </summary>
  ScheduledCommunicationTime getRecurringTime() const;
  void setRecurringTime(ScheduledCommunicationTime const &value);
  bool recurringTimeIsSet() const;
  void unsetRecurringTime();
  /// <summary>
  /// indicating a time in seconds.
  /// </summary>
  int32_t getDuration() const;
  void setDuration(int32_t const value);
  /// <summary>
  /// string with format \&quot;float\&quot; as defined in OpenAPI.
  /// </summary>
  float getDurationVariance() const;
  void setDurationVariance(float const value);
  bool durationVarianceIsSet() const;
  void unsetDurationVariance();
  /// <summary>
  ///
  /// </summary>
  std::vector<LocationInfo> &getLocInfos();
  void setLocInfos(std::vector<LocationInfo> const &value);

  friend void to_json(nlohmann::json &j, const UeMobility &o);
  friend void from_json(const nlohmann::json &j, UeMobility &o);

protected:
  std::string m_Ts;
  bool m_TsIsSet;
  ScheduledCommunicationTime m_RecurringTime;
  bool m_RecurringTimeIsSet;
  int32_t m_Duration;

  float m_DurationVariance;
  bool m_DurationVarianceIsSet;
  std::vector<LocationInfo> m_LocInfos;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* UeMobility_H_ */
