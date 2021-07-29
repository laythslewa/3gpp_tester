/**
 * 3gpp-as-session-with-qos
 * API for setting us an AS session with required QoS. © 2021, 3GPP
 * Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights
 * reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * UserPlaneEventReport.h
 *
 * Represents an event report for user plane.
 */

#ifndef UserPlaneEventReport_H_
#define UserPlaneEventReport_H_

#include "AccumulatedUsage.h"
#include "QosMonitoringReport.h"
#include "UserPlaneEvent.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents an event report for user plane.
/// </summary>
class UserPlaneEventReport {
public:
  UserPlaneEventReport();
  virtual ~UserPlaneEventReport();

  void validate();

  /////////////////////////////////////////////
  /// UserPlaneEventReport members

  /// <summary>
  ///
  /// </summary>
  UserPlaneEvent getEvent() const;
  void setEvent(UserPlaneEvent const &value);
  /// <summary>
  ///
  /// </summary>
  AccumulatedUsage getAccumulatedUsage() const;
  void setAccumulatedUsage(AccumulatedUsage const &value);
  bool accumulatedUsageIsSet() const;
  void unsetAccumulatedUsage();
  /// <summary>
  /// Identifies the IP flows that were sent during event subscription
  /// </summary>
  std::vector<int32_t> &getFlowIds();
  void setFlowIds(std::vector<int32_t> const value);
  bool flowIdsIsSet() const;
  void unsetFlowIds();
  /// <summary>
  /// The currently applied QoS reference. Applicable for event
  /// QOS_NOT_GUARANTEED or SUCCESSFUL_RESOURCES_ALLOCATION.
  /// </summary>
  std::string getAppliedQosRef() const;
  void setAppliedQosRef(std::string const &value);
  bool appliedQosRefIsSet() const;
  void unsetAppliedQosRef();
  /// <summary>
  /// Contains the QoS Monitoring Reporting information
  /// </summary>
  std::vector<QosMonitoringReport> &getQosMonReports();
  void setQosMonReports(std::vector<QosMonitoringReport> const &value);
  bool qosMonReportsIsSet() const;
  void unsetQosMonReports();

  friend void to_json(nlohmann::json &j, const UserPlaneEventReport &o);
  friend void from_json(const nlohmann::json &j, UserPlaneEventReport &o);

protected:
  UserPlaneEvent m_Event;

  AccumulatedUsage m_AccumulatedUsage;
  bool m_AccumulatedUsageIsSet;
  std::vector<int32_t> m_FlowIds;
  bool m_FlowIdsIsSet;
  std::string m_AppliedQosRef;
  bool m_AppliedQosRefIsSet;
  std::vector<QosMonitoringReport> m_QosMonReports;
  bool m_QosMonReportsIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* UserPlaneEventReport_H_ */