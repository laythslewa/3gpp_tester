/**
 * NhssUEAU
 * HSS UE Authentication Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * AuthType.h
 *
 *
 */

#ifndef AuthType_H_
#define AuthType_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class AuthType {
public:
  AuthType();
  virtual ~AuthType();

  void validate();

  /////////////////////////////////////////////
  /// AuthType members

  friend void to_json(nlohmann::json &j, const AuthType &o);
  friend void from_json(const nlohmann::json &j, AuthType &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AuthType_H_ */