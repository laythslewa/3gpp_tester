/**
 * Nchf_ConvergedCharging
 * ConvergedCharging Service    © 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 3.0.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * SMPriority.h
 *
 *
 */

#ifndef SMPriority_H_
#define SMPriority_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class SMPriority {
public:
  SMPriority();
  virtual ~SMPriority();

  void validate();

  /////////////////////////////////////////////
  /// SMPriority members

  friend void to_json(nlohmann::json &j, const SMPriority &o);
  friend void from_json(const nlohmann::json &j, SMPriority &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* SMPriority_H_ */