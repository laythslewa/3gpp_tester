/**
 * Nudm_UEAU
 * UDM UE Authentication Service. © 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * HssAuthTypeInUri.h
 *
 *
 */

#ifndef HssAuthTypeInUri_H_
#define HssAuthTypeInUri_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class HssAuthTypeInUri {
public:
  HssAuthTypeInUri();
  virtual ~HssAuthTypeInUri();

  void validate();

  /////////////////////////////////////////////
  /// HssAuthTypeInUri members

  friend void to_json(nlohmann::json &j, const HssAuthTypeInUri &o);
  friend void from_json(const nlohmann::json &j, HssAuthTypeInUri &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* HssAuthTypeInUri_H_ */
