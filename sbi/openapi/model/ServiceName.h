/**
 * Npcf_UEPolicyControl
 * UE Policy Control Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ServiceName.h
 *
 * Service names known to NRF
 */

#ifndef ServiceName_H_
#define ServiceName_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Service names known to NRF
/// </summary>
class ServiceName {
public:
  ServiceName();
  virtual ~ServiceName();

  void validate();

  /////////////////////////////////////////////
  /// ServiceName members

  friend void to_json(nlohmann::json &j, const ServiceName &o);
  friend void from_json(const nlohmann::json &j, ServiceName &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ServiceName_H_ */
