/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.3.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ChangeType.h
 *
 * Indicates the type of change to be performed.
 */

#ifndef ChangeType_H_
#define ChangeType_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Indicates the type of change to be performed.
/// </summary>
class ChangeType {
public:
  ChangeType();
  virtual ~ChangeType();

  void validate();

  /////////////////////////////////////////////
  /// ChangeType members

  friend void to_json(nlohmann::json &j, const ChangeType &o);
  friend void from_json(const nlohmann::json &j, ChangeType &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ChangeType_H_ */