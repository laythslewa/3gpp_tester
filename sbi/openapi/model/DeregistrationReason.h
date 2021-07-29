/**
 * Nhss_UECM
 * HSS UE Context Management © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * DeregistrationReason.h
 *
 * The reason that triggers that the serving node needs to be deregistered by
 * HSS
 */

#ifndef DeregistrationReason_H_
#define DeregistrationReason_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// The reason that triggers that the serving node needs to be deregistered by
/// HSS
/// </summary>
class DeregistrationReason {
public:
  DeregistrationReason();
  virtual ~DeregistrationReason();

  void validate();

  /////////////////////////////////////////////
  /// DeregistrationReason members

  friend void to_json(nlohmann::json &j, const DeregistrationReason &o);
  friend void from_json(const nlohmann::json &j, DeregistrationReason &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* DeregistrationReason_H_ */
