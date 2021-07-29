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
 * AmfEventNotification.h
 *
 * Data within a AMF Event Notification request
 */

#ifndef AmfEventNotification_H_
#define AmfEventNotification_H_

#include "AmfEventReport.h"
#include "AmfEventSubsSyncInfo.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Data within a AMF Event Notification request
/// </summary>
class AmfEventNotification {
public:
  AmfEventNotification();
  virtual ~AmfEventNotification();

  void validate();

  /////////////////////////////////////////////
  /// AmfEventNotification members

  /// <summary>
  ///
  /// </summary>
  std::string getNotifyCorrelationId() const;
  void setNotifyCorrelationId(std::string const &value);
  bool notifyCorrelationIdIsSet() const;
  void unsetNotifyCorrelationId();
  /// <summary>
  ///
  /// </summary>
  std::string getSubsChangeNotifyCorrelationId() const;
  void setSubsChangeNotifyCorrelationId(std::string const &value);
  bool subsChangeNotifyCorrelationIdIsSet() const;
  void unsetSubsChangeNotifyCorrelationId();
  /// <summary>
  ///
  /// </summary>
  std::vector<AmfEventReport> &getReportList();
  void setReportList(std::vector<AmfEventReport> const &value);
  bool reportListIsSet() const;
  void unsetReportList();
  /// <summary>
  ///
  /// </summary>
  AmfEventSubsSyncInfo getEventSubsSyncInfo() const;
  void setEventSubsSyncInfo(AmfEventSubsSyncInfo const &value);
  bool eventSubsSyncInfoIsSet() const;
  void unsetEventSubsSyncInfo();

  friend void to_json(nlohmann::json &j, const AmfEventNotification &o);
  friend void from_json(const nlohmann::json &j, AmfEventNotification &o);

protected:
  std::string m_NotifyCorrelationId;
  bool m_NotifyCorrelationIdIsSet;
  std::string m_SubsChangeNotifyCorrelationId;
  bool m_SubsChangeNotifyCorrelationIdIsSet;
  std::vector<AmfEventReport> m_ReportList;
  bool m_ReportListIsSet;
  AmfEventSubsSyncInfo m_EventSubsSyncInfo;
  bool m_EventSubsSyncInfoIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AmfEventNotification_H_ */
