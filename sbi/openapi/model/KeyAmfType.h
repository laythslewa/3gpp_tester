/**
 * Namf_Communication
 * AMF Communication Service © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * KeyAmfType.h
 *
 * Indicates the Kamf type
 */

#ifndef KeyAmfType_H_
#define KeyAmfType_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Indicates the Kamf type
/// </summary>
class KeyAmfType {
public:
  KeyAmfType();
  virtual ~KeyAmfType();

  void validate();

  /////////////////////////////////////////////
  /// KeyAmfType members

  friend void to_json(nlohmann::json &j, const KeyAmfType &o);
  friend void from_json(const nlohmann::json &j, KeyAmfType &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* KeyAmfType_H_ */