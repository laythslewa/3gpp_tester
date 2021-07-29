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
 * N2InformationClass.h
 *
 * Enumeration for N2 Information Class
 */

#ifndef N2InformationClass_H_
#define N2InformationClass_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Enumeration for N2 Information Class
/// </summary>
class N2InformationClass {
public:
  N2InformationClass();
  virtual ~N2InformationClass();

  void validate();

  /////////////////////////////////////////////
  /// N2InformationClass members

  friend void to_json(nlohmann::json &j, const N2InformationClass &o);
  friend void from_json(const nlohmann::json &j, N2InformationClass &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* N2InformationClass_H_ */