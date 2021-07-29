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
 * DnaiChangeType.h
 *
 * Possible values are - EARLY: Early notification of UP path reconfiguration. -
 * EARLY_LATE: Early and late notification of UP path reconfiguration. This
 * value shall only be present in the subscription to the DNAI change event. -
 * LATE: Late notification of UP path reconfiguration.
 */

#ifndef DnaiChangeType_H_
#define DnaiChangeType_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Possible values are - EARLY: Early notification of UP path reconfiguration.
/// - EARLY_LATE: Early and late notification of UP path reconfiguration. This
/// value shall only be present in the subscription to the DNAI change event. -
/// LATE: Late notification of UP path reconfiguration.
/// </summary>
class DnaiChangeType {
public:
  DnaiChangeType();
  virtual ~DnaiChangeType();

  void validate();

  /////////////////////////////////////////////
  /// DnaiChangeType members

  friend void to_json(nlohmann::json &j, const DnaiChangeType &o);
  friend void from_json(const nlohmann::json &j, DnaiChangeType &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* DnaiChangeType_H_ */
