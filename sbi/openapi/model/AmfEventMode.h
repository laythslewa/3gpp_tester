/**
 * Namf_EventExposure
 * AMF Event Exposure Service © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * AmfEventMode.h
 *
 * Describes how the reports shall be generated by a subscribed event
 */

#ifndef AmfEventMode_H_
#define AmfEventMode_H_

#include "AmfEventTrigger.h"
#include "NotificationFlag.h"
#include "PartitioningCriteria.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Describes how the reports shall be generated by a subscribed event
/// </summary>
class AmfEventMode {
public:
  AmfEventMode();
  virtual ~AmfEventMode();

  void validate();

  /////////////////////////////////////////////
  /// AmfEventMode members

  /// <summary>
  ///
  /// </summary>
  AmfEventTrigger getTrigger() const;
  void setTrigger(AmfEventTrigger const &value);
  /// <summary>
  ///
  /// </summary>
  int32_t getMaxReports() const;
  void setMaxReports(int32_t const value);
  bool maxReportsIsSet() const;
  void unsetMaxReports();
  /// <summary>
  /// string with format \&quot;date-time\&quot; as defined in OpenAPI.
  /// </summary>
  std::string getExpiry() const;
  void setExpiry(std::string const &value);
  bool expiryIsSet() const;
  void unsetExpiry();
  /// <summary>
  /// indicating a time in seconds.
  /// </summary>
  int32_t getRepPeriod() const;
  void setRepPeriod(int32_t const value);
  bool repPeriodIsSet() const;
  void unsetRepPeriod();
  /// <summary>
  /// Unsigned integer indicating Sampling Ratio (see clauses 4.15.1 of 3GPP
  /// TS 23.502), expressed in percent.
  /// </summary>
  int32_t getSampRatio() const;
  void setSampRatio(int32_t const value);
  bool sampRatioIsSet() const;
  void unsetSampRatio();
  /// <summary>
  ///
  /// </summary>
  std::vector<PartitioningCriteria> &getPartitioningCriteria();
  void setPartitioningCriteria(std::vector<PartitioningCriteria> const &value);
  bool partitioningCriteriaIsSet() const;
  void unsetPartitioningCriteria();
  /// <summary>
  ///
  /// </summary>
  NotificationFlag getNotifFlag() const;
  void setNotifFlag(NotificationFlag const &value);
  bool notifFlagIsSet() const;
  void unsetNotifFlag();

  friend void to_json(nlohmann::json &j, const AmfEventMode &o);
  friend void from_json(const nlohmann::json &j, AmfEventMode &o);

protected:
  AmfEventTrigger m_Trigger;

  int32_t m_MaxReports;
  bool m_MaxReportsIsSet;
  std::string m_Expiry;
  bool m_ExpiryIsSet;
  int32_t m_RepPeriod;
  bool m_RepPeriodIsSet;
  int32_t m_SampRatio;
  bool m_SampRatioIsSet;
  std::vector<PartitioningCriteria> m_PartitioningCriteria;
  bool m_PartitioningCriteriaIsSet;
  NotificationFlag m_NotifFlag;
  bool m_NotifFlagIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AmfEventMode_H_ */