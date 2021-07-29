/**
 * Npcf_PolicyAuthorization Service API
 * PCF Policy Authorization Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * RequiredAccessInfo.h
 *
 * Indicates the access network information required for an AF session.
 */

#ifndef RequiredAccessInfo_H_
#define RequiredAccessInfo_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Indicates the access network information required for an AF session.
/// </summary>
class RequiredAccessInfo {
public:
  RequiredAccessInfo();
  virtual ~RequiredAccessInfo();

  void validate();

  /////////////////////////////////////////////
  /// RequiredAccessInfo members

  friend void to_json(nlohmann::json &j, const RequiredAccessInfo &o);
  friend void from_json(const nlohmann::json &j, RequiredAccessInfo &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* RequiredAccessInfo_H_ */