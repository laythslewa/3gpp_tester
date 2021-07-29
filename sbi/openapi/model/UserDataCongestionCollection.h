/**
 * Nnef_EventExposure
 * NEF Event Exposure Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * UserDataCongestionCollection.h
 *
 * Contains User Data Congestion Analytics related information collection.
 */

#ifndef UserDataCongestionCollection_H_
#define UserDataCongestionCollection_H_

#include "FlowInfo.h"
#include "TimeWindow.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Contains User Data Congestion Analytics related information collection.
/// </summary>
class UserDataCongestionCollection {
public:
  UserDataCongestionCollection();
  virtual ~UserDataCongestionCollection();

  void validate();

  /////////////////////////////////////////////
  /// UserDataCongestionCollection members

  /// <summary>
  /// String providing an application identifier.
  /// </summary>
  std::string getAppId() const;
  void setAppId(std::string const &value);
  bool appIdIsSet() const;
  void unsetAppId();
  /// <summary>
  ///
  /// </summary>
  FlowInfo getIpTrafficFilter() const;
  void setIpTrafficFilter(FlowInfo const &value);
  bool ipTrafficFilterIsSet() const;
  void unsetIpTrafficFilter();
  /// <summary>
  ///
  /// </summary>
  TimeWindow getTimeInterv() const;
  void setTimeInterv(TimeWindow const &value);
  bool timeIntervIsSet() const;
  void unsetTimeInterv();
  /// <summary>
  /// String representing a bit rate that shall be formatted as follows.
  /// </summary>
  std::string getThrputUl() const;
  void setThrputUl(std::string const &value);
  bool thrputUlIsSet() const;
  void unsetThrputUl();
  /// <summary>
  /// String representing a bit rate that shall be formatted as follows.
  /// </summary>
  std::string getThrputDl() const;
  void setThrputDl(std::string const &value);
  bool thrputDlIsSet() const;
  void unsetThrputDl();
  /// <summary>
  /// String representing a bit rate that shall be formatted as follows.
  /// </summary>
  std::string getThrputPkUl() const;
  void setThrputPkUl(std::string const &value);
  bool thrputPkUlIsSet() const;
  void unsetThrputPkUl();
  /// <summary>
  /// String representing a bit rate that shall be formatted as follows.
  /// </summary>
  std::string getThrputPkDl() const;
  void setThrputPkDl(std::string const &value);
  bool thrputPkDlIsSet() const;
  void unsetThrputPkDl();

  friend void to_json(nlohmann::json &j, const UserDataCongestionCollection &o);
  friend void from_json(const nlohmann::json &j,
                        UserDataCongestionCollection &o);

protected:
  std::string m_AppId;
  bool m_AppIdIsSet;
  FlowInfo m_IpTrafficFilter;
  bool m_IpTrafficFilterIsSet;
  TimeWindow m_TimeInterv;
  bool m_TimeIntervIsSet;
  std::string m_ThrputUl;
  bool m_ThrputUlIsSet;
  std::string m_ThrputDl;
  bool m_ThrputDlIsSet;
  std::string m_ThrputPkUl;
  bool m_ThrputPkUlIsSet;
  std::string m_ThrputPkDl;
  bool m_ThrputPkDlIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* UserDataCongestionCollection_H_ */
