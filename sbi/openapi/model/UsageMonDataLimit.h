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
 * UsageMonDataLimit.h
 *
 * Contains usage monitoring control data for a subscriber.
 */

#ifndef UsageMonDataLimit_H_
#define UsageMonDataLimit_H_

#include "UsageMonDataScope.h"
#include "UsageMonLevel.h"
#include "UsageThreshold.h"
#include <map>
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Contains usage monitoring control data for a subscriber.
/// </summary>
class UsageMonDataLimit {
public:
  UsageMonDataLimit();
  virtual ~UsageMonDataLimit();

  void validate();

  /////////////////////////////////////////////
  /// UsageMonDataLimit members

  /// <summary>
  ///
  /// </summary>
  std::string getLimitId() const;
  void setLimitId(std::string const &value);
  /// <summary>
  /// Identifies the SNSSAI and DNN combinations to which the usage monitoring
  /// data limit applies. The S-NSSAI is the key of the map.
  /// </summary>
  std::map<std::string, UsageMonDataScope> &getScopes();
  void setScopes(std::map<std::string, UsageMonDataScope> const &value);
  bool scopesIsSet() const;
  void unsetScopes();
  /// <summary>
  ///
  /// </summary>
  UsageMonLevel getUmLevel() const;
  void setUmLevel(UsageMonLevel const &value);
  bool umLevelIsSet() const;
  void unsetUmLevel();
  /// <summary>
  /// string with format \&quot;date-time\&quot; as defined in OpenAPI.
  /// </summary>
  std::string getStartDate() const;
  void setStartDate(std::string const &value);
  bool startDateIsSet() const;
  void unsetStartDate();
  /// <summary>
  /// string with format \&quot;date-time\&quot; as defined in OpenAPI.
  /// </summary>
  std::string getEndDate() const;
  void setEndDate(std::string const &value);
  bool endDateIsSet() const;
  void unsetEndDate();
  /// <summary>
  ///
  /// </summary>
  UsageThreshold getUsageLimit() const;
  void setUsageLimit(UsageThreshold const &value);
  bool usageLimitIsSet() const;
  void unsetUsageLimit();
  /// <summary>
  /// string with format \&quot;date-time\&quot; as defined in OpenAPI.
  /// </summary>
  std::string getResetPeriod() const;
  void setResetPeriod(std::string const &value);
  bool resetPeriodIsSet() const;
  void unsetResetPeriod();

  friend void to_json(nlohmann::json &j, const UsageMonDataLimit &o);
  friend void from_json(const nlohmann::json &j, UsageMonDataLimit &o);

protected:
  std::string m_LimitId;

  std::map<std::string, UsageMonDataScope> m_Scopes;
  bool m_ScopesIsSet;
  UsageMonLevel m_UmLevel;
  bool m_UmLevelIsSet;
  std::string m_StartDate;
  bool m_StartDateIsSet;
  std::string m_EndDate;
  bool m_EndDateIsSet;
  UsageThreshold m_UsageLimit;
  bool m_UsageLimitIsSet;
  std::string m_ResetPeriod;
  bool m_ResetPeriodIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* UsageMonDataLimit_H_ */
