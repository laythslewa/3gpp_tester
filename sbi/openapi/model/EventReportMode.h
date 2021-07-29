/**
 * Unified Data Repository Service API file for subscription data
 * Unified Data Repository Service (subscription data). The API version is
 * defined in 3GPP TS 29.504. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * EventReportMode.h
 *
 *
 */

#ifndef EventReportMode_H_
#define EventReportMode_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class EventReportMode {
public:
  EventReportMode();
  virtual ~EventReportMode();

  void validate();

  /////////////////////////////////////////////
  /// EventReportMode members

  friend void to_json(nlohmann::json &j, const EventReportMode &o);
  friend void from_json(const nlohmann::json &j, EventReportMode &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* EventReportMode_H_ */
