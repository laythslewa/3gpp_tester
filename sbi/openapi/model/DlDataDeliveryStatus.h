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
 * DlDataDeliveryStatus.h
 *
 * Possible values are - BUFFERED: The first downlink data is buffered with
 * extended buffering matching the source of the downlink traffic. -
 * TRANSMITTED: The first downlink data matching the source of the downlink
 * traffic is transmitted after previous buffering or discarding of
 * corresponding packet(s) because the UE of the PDU Session becomes ACTIVE, and
 * buffered data can be delivered to UE. - DISCARDED: The first downlink data
 * matching the source of the downlink traffic is discarded because the Extended
 * Buffering time, as determined by the SMF, expires or the amount of downlink
 * data to be buffered is exceeded.
 */

#ifndef DlDataDeliveryStatus_H_
#define DlDataDeliveryStatus_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Possible values are - BUFFERED: The first downlink data is buffered with
/// extended buffering matching the source of the downlink traffic. -
/// TRANSMITTED: The first downlink data matching the source of the downlink
/// traffic is transmitted after previous buffering or discarding of
/// corresponding packet(s) because the UE of the PDU Session becomes ACTIVE,
/// and buffered data can be delivered to UE. - DISCARDED: The first downlink
/// data matching the source of the downlink traffic is discarded because the
/// Extended Buffering time, as determined by the SMF, expires or the amount of
/// downlink data to be buffered is exceeded.
/// </summary>
class DlDataDeliveryStatus {
public:
  DlDataDeliveryStatus();
  virtual ~DlDataDeliveryStatus();

  void validate();

  /////////////////////////////////////////////
  /// DlDataDeliveryStatus members

  friend void to_json(nlohmann::json &j, const DlDataDeliveryStatus &o);
  friend void from_json(const nlohmann::json &j, DlDataDeliveryStatus &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* DlDataDeliveryStatus_H_ */