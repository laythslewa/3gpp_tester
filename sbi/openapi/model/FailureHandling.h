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
 * FailureHandling.h
 *
 *
 */

#ifndef FailureHandling_H_
#define FailureHandling_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class FailureHandling {
public:
  FailureHandling();
  virtual ~FailureHandling();

  void validate();

  /////////////////////////////////////////////
  /// FailureHandling members

  friend void to_json(nlohmann::json &j, const FailureHandling &o);
  friend void from_json(const nlohmann::json &j, FailureHandling &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* FailureHandling_H_ */