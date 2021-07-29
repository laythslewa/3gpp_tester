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
 * PduSessionTypeRm.h
 *
 * PduSessionType indicates the type of a PDU session. It shall comply with the
 * provisions defined in table 5.4.3.3-1 but with the OpenAPI
 * \&quot;nullable&#x3D; true\&quot; property.
 */

#ifndef PduSessionTypeRm_H_
#define PduSessionTypeRm_H_

#include "NullValue.h"
#include "PduSessionType.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// PduSessionType indicates the type of a PDU session. It shall comply with the
/// provisions defined in table 5.4.3.3-1 but with the OpenAPI
/// \&quot;nullable&#x3D; true\&quot; property.
/// </summary>
class PduSessionTypeRm {
public:
  PduSessionTypeRm();
  virtual ~PduSessionTypeRm();

  void validate();

  /////////////////////////////////////////////
  /// PduSessionTypeRm members

  friend void to_json(nlohmann::json &j, const PduSessionTypeRm &o);
  friend void from_json(const nlohmann::json &j, PduSessionTypeRm &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* PduSessionTypeRm_H_ */
