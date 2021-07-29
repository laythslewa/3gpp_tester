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
 * UsageMonData.h
 *
 * Contains remain allowed usage data for a subscriber.
 */

#ifndef UsageMonData_H_
#define UsageMonData_H_

#include "TimePeriod.h"
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
/// Contains remain allowed usage data for a subscriber.
/// </summary>
class UsageMonData {
public:
  UsageMonData();
  virtual ~UsageMonData();

  void validate();

  /////////////////////////////////////////////
  /// UsageMonData members

  /// <summary>
  ///
  /// </summary>
  std::string getLimitId() const;
  void setLimitId(std::string const &value);
  /// <summary>
  /// Identifies the SNSSAI and DNN combinations for remain allowed usage data
  /// for a subscriber. The S-NSSAI is the key of the map.
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
  ///
  /// </summary>
  UsageThreshold getAllowedUsage() const;
  void setAllowedUsage(UsageThreshold const &value);
  bool allowedUsageIsSet() const;
  void unsetAllowedUsage();
  /// <summary>
  ///
  /// </summary>
  TimePeriod getResetTime() const;
  void setResetTime(TimePeriod const &value);
  bool resetTimeIsSet() const;
  void unsetResetTime();
  /// <summary>
  /// A string used to indicate the features supported by an API that is used as
  /// defined in clause 6.6 in 3GPP TS 29.500. The string shall contain a
  /// bitmask indicating supported features in hexadecimal representation Each
  /// character in the string shall take a value of \&quot;0\&quot; to
  /// \&quot;9\&quot;, \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to
  /// \&quot;F\&quot; and shall represent the support of 4 features as described
  /// in table 5.2.2-3. The most significant character representing the
  /// highest-numbered features shall appear first in the string, and the
  /// character representing features 1 to 4 shall appear last in the string.
  /// The list of features and their numbering (starting with 1) are defined
  /// separately for each API. If the string contains a lower number of
  /// characters than there are defined features for an API, all features that
  /// would be represented by characters that are not present in the string are
  /// not supported
  /// </summary>
  std::string getSuppFeat() const;
  void setSuppFeat(std::string const &value);
  bool suppFeatIsSet() const;
  void unsetSuppFeat();

  friend void to_json(nlohmann::json &j, const UsageMonData &o);
  friend void from_json(const nlohmann::json &j, UsageMonData &o);

protected:
  std::string m_LimitId;

  std::map<std::string, UsageMonDataScope> m_Scopes;
  bool m_ScopesIsSet;
  UsageMonLevel m_UmLevel;
  bool m_UmLevelIsSet;
  UsageThreshold m_AllowedUsage;
  bool m_AllowedUsageIsSet;
  TimePeriod m_ResetTime;
  bool m_ResetTimeIsSet;
  std::string m_SuppFeat;
  bool m_SuppFeatIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* UsageMonData_H_ */