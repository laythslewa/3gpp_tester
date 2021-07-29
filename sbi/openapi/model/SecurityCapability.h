/**
 * N32 Handshake API
 * N32-c Handshake Service.  © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC).  All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * SecurityCapability.h
 *
 * Enumeration of security capabilities
 */

#ifndef SecurityCapability_H_
#define SecurityCapability_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Enumeration of security capabilities
/// </summary>
class SecurityCapability {
public:
  SecurityCapability();
  virtual ~SecurityCapability();

  void validate();

  /////////////////////////////////////////////
  /// SecurityCapability members

  friend void to_json(nlohmann::json &j, const SecurityCapability &o);
  friend void from_json(const nlohmann::json &j, SecurityCapability &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* SecurityCapability_H_ */
