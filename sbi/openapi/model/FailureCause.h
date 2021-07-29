/**
 * Ngmlc_Location
 * Ngmlc_Location Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * FailureCause.h
 *
 * Positioning failure cause
 */

#ifndef FailureCause_H_
#define FailureCause_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Positioning failure cause
/// </summary>
class FailureCause {
public:
  FailureCause();
  virtual ~FailureCause();

  void validate();

  /////////////////////////////////////////////
  /// FailureCause members

  friend void to_json(nlohmann::json &j, const FailureCause &o);
  friend void from_json(const nlohmann::json &j, FailureCause &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* FailureCause_H_ */