/**
 * Nsmf_PDUSession
 * SMF PDU Session Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
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
 * QosMonitoringReq.h
 *
 * QoS monitoring request. Possible values are   - UL   - DL   - BOTH   - NONE
 */

#ifndef QosMonitoringReq_H_
#define QosMonitoringReq_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// QoS monitoring request. Possible values are   - UL   - DL   - BOTH   - NONE
/// </summary>
class QosMonitoringReq {
public:
  QosMonitoringReq();
  virtual ~QosMonitoringReq();

  void validate();

  /////////////////////////////////////////////
  /// QosMonitoringReq members

  friend void to_json(nlohmann::json &j, const QosMonitoringReq &o);
  friend void from_json(const nlohmann::json &j, QosMonitoringReq &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* QosMonitoringReq_H_ */
