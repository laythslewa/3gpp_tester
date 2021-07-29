/**
 * Npcf_PolicyAuthorization Service API
 * PCF Policy Authorization Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * EventsSubscReqDataRm.h
 *
 * this data type is defined in the same way as the EventsSubscReqData data
 * type, but with the OpenAPI nullable property set to true.
 */

#ifndef EventsSubscReqDataRm_H_
#define EventsSubscReqDataRm_H_

#include "AfEventSubscription.h"
#include "QosMonitoringInformationRm.h"
#include "RequestedQosMonitoringParameter.h"
#include "RequiredAccessInfo.h"
#include "UsageThresholdRm.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// this data type is defined in the same way as the EventsSubscReqData data
/// type, but with the OpenAPI nullable property set to true.
/// </summary>
class EventsSubscReqDataRm {
public:
  EventsSubscReqDataRm();
  virtual ~EventsSubscReqDataRm();

  void validate();

  /////////////////////////////////////////////
  /// EventsSubscReqDataRm members

  /// <summary>
  ///
  /// </summary>
  std::vector<AfEventSubscription> &getEvents();
  void setEvents(std::vector<AfEventSubscription> const &value);
  /// <summary>
  /// String providing an URI formatted according to RFC 3986
  /// </summary>
  std::string getNotifUri() const;
  void setNotifUri(std::string const &value);
  bool notifUriIsSet() const;
  void unsetNotifUri();
  /// <summary>
  ///
  /// </summary>
  std::vector<RequestedQosMonitoringParameter> &getReqQosMonParams();
  void
  setReqQosMonParams(std::vector<RequestedQosMonitoringParameter> const &value);
  bool reqQosMonParamsIsSet() const;
  void unsetReqQosMonParams();
  /// <summary>
  ///
  /// </summary>
  QosMonitoringInformationRm getQosMon() const;
  void setQosMon(QosMonitoringInformationRm const &value);
  bool qosMonIsSet() const;
  void unsetQosMon();
  /// <summary>
  ///
  /// </summary>
  std::vector<RequiredAccessInfo> &getReqAnis();
  void setReqAnis(std::vector<RequiredAccessInfo> const &value);
  bool reqAnisIsSet() const;
  void unsetReqAnis();
  /// <summary>
  ///
  /// </summary>
  UsageThresholdRm getUsgThres() const;
  void setUsgThres(UsageThresholdRm const &value);
  bool usgThresIsSet() const;
  void unsetUsgThres();
  /// <summary>
  ///
  /// </summary>
  std::string getNotifCorreId() const;
  void setNotifCorreId(std::string const &value);
  bool notifCorreIdIsSet() const;
  void unsetNotifCorreId();
  /// <summary>
  ///
  /// </summary>
  bool isDirectNotifInd() const;
  void setDirectNotifInd(bool const value);
  bool directNotifIndIsSet() const;
  void unsetDirectNotifInd();

  friend void to_json(nlohmann::json &j, const EventsSubscReqDataRm &o);
  friend void from_json(const nlohmann::json &j, EventsSubscReqDataRm &o);

protected:
  std::vector<AfEventSubscription> m_Events;

  std::string m_NotifUri;
  bool m_NotifUriIsSet;
  std::vector<RequestedQosMonitoringParameter> m_ReqQosMonParams;
  bool m_ReqQosMonParamsIsSet;
  QosMonitoringInformationRm m_QosMon;
  bool m_QosMonIsSet;
  std::vector<RequiredAccessInfo> m_ReqAnis;
  bool m_ReqAnisIsSet;
  UsageThresholdRm m_UsgThres;
  bool m_UsgThresIsSet;
  std::string m_NotifCorreId;
  bool m_NotifCorreIdIsSet;
  bool m_DirectNotifInd;
  bool m_DirectNotifIndIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* EventsSubscReqDataRm_H_ */