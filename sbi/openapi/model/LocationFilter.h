/**
 * Namf_EventExposure
 * AMF Event Exposure Service © 2021, 3GPP Organizational Partners (ARIB, ATIS,
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
 * LocationFilter.h
 *
 * Describes the supported filters of LOCATION_REPORT event type
 */

#ifndef LocationFilter_H_
#define LocationFilter_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Describes the supported filters of LOCATION_REPORT event type
/// </summary>
class LocationFilter {
public:
  LocationFilter();
  virtual ~LocationFilter();

  void validate();

  /////////////////////////////////////////////
  /// LocationFilter members

  friend void to_json(nlohmann::json &j, const LocationFilter &o);
  friend void from_json(const nlohmann::json &j, LocationFilter &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* LocationFilter_H_ */
