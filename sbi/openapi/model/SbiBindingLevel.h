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
 * SbiBindingLevel.h
 *
 * SBI Binding Level
 */

#ifndef SbiBindingLevel_H_
#define SbiBindingLevel_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// SBI Binding Level
/// </summary>
class SbiBindingLevel {
public:
  SbiBindingLevel();
  virtual ~SbiBindingLevel();

  void validate();

  /////////////////////////////////////////////
  /// SbiBindingLevel members

  friend void to_json(nlohmann::json &j, const SbiBindingLevel &o);
  friend void from_json(const nlohmann::json &j, SbiBindingLevel &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* SbiBindingLevel_H_ */