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
 * N1MessageClass.h
 *
 * Enumeration for N1 Message Class
 */

#ifndef N1MessageClass_H_
#define N1MessageClass_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Enumeration for N1 Message Class
/// </summary>
class N1MessageClass {
public:
  N1MessageClass();
  virtual ~N1MessageClass();

  void validate();

  /////////////////////////////////////////////
  /// N1MessageClass members

  friend void to_json(nlohmann::json &j, const N1MessageClass &o);
  friend void from_json(const nlohmann::json &j, N1MessageClass &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* N1MessageClass_H_ */
