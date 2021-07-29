/**
 * Nchf_OfflineOnlyCharging
 * OfflineOnlyCharging Service © 2020, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * NFType.h
 *
 * NF types known to NRF
 */

#ifndef NFType_H_
#define NFType_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// NF types known to NRF
/// </summary>
class NFType {
public:
  NFType();
  virtual ~NFType();

  void validate();

  /////////////////////////////////////////////
  /// NFType members

  friend void to_json(nlohmann::json &j, const NFType &o);
  friend void from_json(const nlohmann::json &j, NFType &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* NFType_H_ */
