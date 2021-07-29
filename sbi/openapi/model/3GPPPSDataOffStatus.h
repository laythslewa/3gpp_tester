/**
 * Nchf_OfflineOnlyCharging
 * OfflineOnlyCharging Service © 2020, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * 3GPPPSDataOffStatus.h
 *
 *
 */

#ifndef 3GPPPSDataOffStatus_H_
#define 3GPPPSDataOffStatus_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class 3GPPPSDataOffStatus {
public:
  3GPPPSDataOffStatus();
  virtual ~3GPPPSDataOffStatus();

  void validate();

  /////////////////////////////////////////////
  /// 3GPPPSDataOffStatus members

  friend void to_json(nlohmann::json & j, const 3GPPPSDataOffStatus & o);
  friend void from_json(const nlohmann::json &j, 3GPPPSDataOffStatus & o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* 3GPPPSDataOffStatus_H_ */
