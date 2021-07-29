/**
 * NRF NFManagement Service
 * NRF NFManagement Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * NwdafCond.h
 *
 * Subscription to a set of NF Instances (NWDAFs), identified by Analytics
 * ID(s), S-NSSAI(s) or NWDAF Serving Area information, i.e. list of TAIs for
 * which the NWDAF can provide analytics.
 */

#ifndef NwdafCond_H_
#define NwdafCond_H_

#include "Snssai.h"
#include "Tai.h"
#include "TaiRange.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Subscription to a set of NF Instances (NWDAFs), identified by Analytics
/// ID(s), S-NSSAI(s) or NWDAF Serving Area information, i.e. list of TAIs for
/// which the NWDAF can provide analytics.
/// </summary>
class NwdafCond {
public:
  NwdafCond();
  virtual ~NwdafCond();

  void validate();

  /////////////////////////////////////////////
  /// NwdafCond members

  /// <summary>
  ///
  /// </summary>
  std::string getConditionType() const;
  void setConditionType(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getAnalyticsIds();
  void setAnalyticsIds(std::vector<std::string> const &value);
  bool analyticsIdsIsSet() const;
  void unsetAnalyticsIds();
  /// <summary>
  ///
  /// </summary>
  std::vector<Snssai> &getSnssaiList();
  void setSnssaiList(std::vector<Snssai> const &value);
  bool snssaiListIsSet() const;
  void unsetSnssaiList();
  /// <summary>
  ///
  /// </summary>
  std::vector<Tai> &getTaiList();
  void setTaiList(std::vector<Tai> const &value);
  bool taiListIsSet() const;
  void unsetTaiList();
  /// <summary>
  ///
  /// </summary>
  std::vector<TaiRange> &getTaiRangeList();
  void setTaiRangeList(std::vector<TaiRange> const &value);
  bool taiRangeListIsSet() const;
  void unsetTaiRangeList();

  friend void to_json(nlohmann::json &j, const NwdafCond &o);
  friend void from_json(const nlohmann::json &j, NwdafCond &o);

protected:
  std::string m_ConditionType;

  std::vector<std::string> m_AnalyticsIds;
  bool m_AnalyticsIdsIsSet;
  std::vector<Snssai> m_SnssaiList;
  bool m_SnssaiListIsSet;
  std::vector<Tai> m_TaiList;
  bool m_TaiListIsSet;
  std::vector<TaiRange> m_TaiRangeList;
  bool m_TaiRangeListIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* NwdafCond_H_ */
