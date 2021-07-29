/**
 * Nudsf_Timer
 * Nudsf Timer Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA,
 * ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * PatchOperation.h
 *
 * Operations as defined in IETF RFC 6902.
 */

#ifndef PatchOperation_H_
#define PatchOperation_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Operations as defined in IETF RFC 6902.
/// </summary>
class PatchOperation {
public:
  PatchOperation();
  virtual ~PatchOperation();

  void validate();

  /////////////////////////////////////////////
  /// PatchOperation members

  friend void to_json(nlohmann::json &j, const PatchOperation &o);
  friend void from_json(const nlohmann::json &j, PatchOperation &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* PatchOperation_H_ */