/**
 * Nsmf_EventExposure
 * Session Management Event Exposure Service. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * SmfEvent.h
 *
 * Possible values are - AC_TY_CH: Access Type Change - UP_PATH_CH: UP Path
 * Change - PDU_SES_REL: PDU Session Release - PLMN_CH: PLMN Change - UE_IP_CH:
 * UE IP address change - RAT_TY_CH: RAT Type Change - DDDS: Downlink data
 * delivery status - COMM_FAIL: Communication Failure - PDU_SES_EST: PDU Session
 * Establishment - QFI_ALLOC: QFI allocation - QOS_MON: QoS Monitoring
 */

#ifndef SmfEvent_H_
#define SmfEvent_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Possible values are - AC_TY_CH: Access Type Change - UP_PATH_CH: UP Path
/// Change - PDU_SES_REL: PDU Session Release - PLMN_CH: PLMN Change - UE_IP_CH:
/// UE IP address change - RAT_TY_CH: RAT Type Change - DDDS: Downlink data
/// delivery status - COMM_FAIL: Communication Failure - PDU_SES_EST: PDU
/// Session Establishment - QFI_ALLOC: QFI allocation - QOS_MON: QoS Monitoring
/// </summary>
class SmfEvent {
public:
  SmfEvent();
  virtual ~SmfEvent();

  void validate();

  /////////////////////////////////////////////
  /// SmfEvent members

  friend void to_json(nlohmann::json &j, const SmfEvent &o);
  friend void from_json(const nlohmann::json &j, SmfEvent &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* SmfEvent_H_ */