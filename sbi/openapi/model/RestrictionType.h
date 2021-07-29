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
 * RestrictionType.h
 *
 * It contains the restriction type ALLOWED_AREAS or NOT_ALLOWED_AREAS.
 */

#ifndef RestrictionType_H_
#define RestrictionType_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// It contains the restriction type ALLOWED_AREAS or NOT_ALLOWED_AREAS.
/// </summary>
class RestrictionType {
public:
  RestrictionType();
  virtual ~RestrictionType();

  void validate();

  /////////////////////////////////////////////
  /// RestrictionType members

  friend void to_json(nlohmann::json &j, const RestrictionType &o);
  friend void from_json(const nlohmann::json &j, RestrictionType &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* RestrictionType_H_ */
