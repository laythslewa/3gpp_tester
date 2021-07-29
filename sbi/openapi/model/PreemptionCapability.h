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
 * PreemptionCapability.h
 *
 * The enumeration PreemptionCapability indicates the pre-emption capability of
 * a request on other QoS flows. See clause 5.7.2.2 of 3GPP TS 23.501. It shall
 * comply with the provisions defined in table 5.5.3.1-1.
 */

#ifndef PreemptionCapability_H_
#define PreemptionCapability_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// The enumeration PreemptionCapability indicates the pre-emption capability of
/// a request on other QoS flows. See clause 5.7.2.2 of 3GPP TS 23.501. It shall
/// comply with the provisions defined in table 5.5.3.1-1.
/// </summary>
class PreemptionCapability {
public:
  PreemptionCapability();
  virtual ~PreemptionCapability();

  void validate();

  /////////////////////////////////////////////
  /// PreemptionCapability members

  friend void to_json(nlohmann::json &j, const PreemptionCapability &o);
  friend void from_json(const nlohmann::json &j, PreemptionCapability &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* PreemptionCapability_H_ */
