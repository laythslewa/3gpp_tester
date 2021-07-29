/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.3.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * TrafficProfile.h
 *
 * Possible values are - SINGLE_TRANS_UL: Uplink single packet transmission. -
 * SINGLE_TRANS_DL: Downlink single packet transmission. - DUAL_TRANS_UL_FIRST:
 * Dual packet transmission, firstly uplink packet transmission with subsequent
 * downlink packet transmission. - DUAL_TRANS_DL_FIRST: Dual packet
 * transmission, firstly downlink packet transmission with subsequent uplink
 * packet transmission.
 */

#ifndef TrafficProfile_H_
#define TrafficProfile_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Possible values are - SINGLE_TRANS_UL: Uplink single packet transmission. -
/// SINGLE_TRANS_DL: Downlink single packet transmission. - DUAL_TRANS_UL_FIRST:
/// Dual packet transmission, firstly uplink packet transmission with subsequent
/// downlink packet transmission. - DUAL_TRANS_DL_FIRST: Dual packet
/// transmission, firstly downlink packet transmission with subsequent uplink
/// packet transmission.
/// </summary>
class TrafficProfile {
public:
  TrafficProfile();
  virtual ~TrafficProfile();

  void validate();

  /////////////////////////////////////////////
  /// TrafficProfile members

  friend void to_json(nlohmann::json &j, const TrafficProfile &o);
  friend void from_json(const nlohmann::json &j, TrafficProfile &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* TrafficProfile_H_ */
