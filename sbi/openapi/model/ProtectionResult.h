/**
 * Nsmf_PDUSession
 * SMF PDU Session Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ProtectionResult.h
 *
 * Protection Result of the security policy indicated as
 * \&quot;preferred\&quot;. Possible values are   - PERFORMED   - NOT_PERFORMED
 */

#ifndef ProtectionResult_H_
#define ProtectionResult_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Protection Result of the security policy indicated as
/// \&quot;preferred\&quot;. Possible values are   - PERFORMED   - NOT_PERFORMED
/// </summary>
class ProtectionResult {
public:
  ProtectionResult();
  virtual ~ProtectionResult();

  void validate();

  /////////////////////////////////////////////
  /// ProtectionResult members

  friend void to_json(nlohmann::json &j, const ProtectionResult &o);
  friend void from_json(const nlohmann::json &j, ProtectionResult &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ProtectionResult_H_ */
