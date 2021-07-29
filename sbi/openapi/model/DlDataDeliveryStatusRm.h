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
 * DlDataDeliveryStatusRm.h
 *
 *
 */

#ifndef DlDataDeliveryStatusRm_H_
#define DlDataDeliveryStatusRm_H_

#include "DlDataDeliveryStatus.h"
#include "NullValue.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class DlDataDeliveryStatusRm {
public:
  DlDataDeliveryStatusRm();
  virtual ~DlDataDeliveryStatusRm();

  void validate();

  /////////////////////////////////////////////
  /// DlDataDeliveryStatusRm members

  friend void to_json(nlohmann::json &j, const DlDataDeliveryStatusRm &o);
  friend void from_json(const nlohmann::json &j, DlDataDeliveryStatusRm &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* DlDataDeliveryStatusRm_H_ */
