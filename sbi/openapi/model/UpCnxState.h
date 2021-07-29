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
 * UpCnxState.h
 *
 * User Plane Connection State. Possible values are - ACTIVATED - DEACTIVATED -
 * ACTIVATING - SUSPENDED
 */

#ifndef UpCnxState_H_
#define UpCnxState_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// User Plane Connection State. Possible values are - ACTIVATED - DEACTIVATED -
/// ACTIVATING - SUSPENDED
/// </summary>
class UpCnxState {
public:
  UpCnxState();
  virtual ~UpCnxState();

  void validate();

  /////////////////////////////////////////////
  /// UpCnxState members

  friend void to_json(nlohmann::json &j, const UpCnxState &o);
  friend void from_json(const nlohmann::json &j, UpCnxState &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* UpCnxState_H_ */
