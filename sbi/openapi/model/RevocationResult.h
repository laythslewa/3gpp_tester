/**
 * N5g-ddnmf_Discovery API
 * N5g-ddnmf_Discovery Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * RevocationResult.h
 *
 * Possible values are - SUCCESSFUL: The Monitoring Revocation is successful. -
 * FAILED: The Monitoring Revocation is failed.
 */

#ifndef RevocationResult_H_
#define RevocationResult_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Possible values are - SUCCESSFUL: The Monitoring Revocation is successful. -
/// FAILED: The Monitoring Revocation is failed.
/// </summary>
class RevocationResult {
public:
  RevocationResult();
  virtual ~RevocationResult();

  void validate();

  /////////////////////////////////////////////
  /// RevocationResult members

  friend void to_json(nlohmann::json &j, const RevocationResult &o);
  friend void from_json(const nlohmann::json &j, RevocationResult &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* RevocationResult_H_ */
