/**
 * Nhss_imsSDM
 * Nhss Subscriber Data Management Service for IMS. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * PrivateIdentityType.h
 *
 *
 */

#ifndef PrivateIdentityType_H_
#define PrivateIdentityType_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class PrivateIdentityType {
public:
  PrivateIdentityType();
  virtual ~PrivateIdentityType();

  void validate();

  /////////////////////////////////////////////
  /// PrivateIdentityType members

  friend void to_json(nlohmann::json &j, const PrivateIdentityType &o);
  friend void from_json(const nlohmann::json &j, PrivateIdentityType &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* PrivateIdentityType_H_ */
