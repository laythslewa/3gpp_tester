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
 * QosMonitoringReport.h
 *
 * QoS Monitoring reporting information
 */

#ifndef QosMonitoringReport_H_
#define QosMonitoringReport_H_

#include "Flows.h"
#include <nlohmann/json.hpp>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// QoS Monitoring reporting information
/// </summary>
class QosMonitoringReport {
public:
  QosMonitoringReport();
  virtual ~QosMonitoringReport();

  void validate();

  /////////////////////////////////////////////
  /// QosMonitoringReport members

  /// <summary>
  ///
  /// </summary>
  std::vector<Flows> &getFlows();
  void setFlows(std::vector<Flows> const &value);
  bool flowsIsSet() const;
  void unsetFlows();
  /// <summary>
  ///
  /// </summary>
  std::vector<int32_t> &getUlDelays();
  void setUlDelays(std::vector<int32_t> const value);
  bool ulDelaysIsSet() const;
  void unsetUlDelays();
  /// <summary>
  ///
  /// </summary>
  std::vector<int32_t> &getDlDelays();
  void setDlDelays(std::vector<int32_t> const value);
  bool dlDelaysIsSet() const;
  void unsetDlDelays();
  /// <summary>
  ///
  /// </summary>
  std::vector<int32_t> &getRtDelays();
  void setRtDelays(std::vector<int32_t> const value);
  bool rtDelaysIsSet() const;
  void unsetRtDelays();

  friend void to_json(nlohmann::json &j, const QosMonitoringReport &o);
  friend void from_json(const nlohmann::json &j, QosMonitoringReport &o);

protected:
  std::vector<Flows> m_Flows;
  bool m_FlowsIsSet;
  std::vector<int32_t> m_UlDelays;
  bool m_UlDelaysIsSet;
  std::vector<int32_t> m_DlDelays;
  bool m_DlDelaysIsSet;
  std::vector<int32_t> m_RtDelays;
  bool m_RtDelaysIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* QosMonitoringReport_H_ */