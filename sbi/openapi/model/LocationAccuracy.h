/**
 * Nhss_EE
 * HSS Event Exposure © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA,
 * ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * LocationAccuracy.h
 *
 * Location accuracy used in the &#39;Location Reporting&#39; event type
 */

#ifndef LocationAccuracy_H_
#define LocationAccuracy_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Location accuracy used in the &#39;Location Reporting&#39; event type
/// </summary>
class LocationAccuracy {
public:
  LocationAccuracy();
  virtual ~LocationAccuracy();

  void validate();

  /////////////////////////////////////////////
  /// LocationAccuracy members

  friend void to_json(nlohmann::json &j, const LocationAccuracy &o);
  friend void from_json(const nlohmann::json &j, LocationAccuracy &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* LocationAccuracy_H_ */
