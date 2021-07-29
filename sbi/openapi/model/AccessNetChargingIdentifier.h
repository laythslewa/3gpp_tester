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
 * AccessNetChargingIdentifier.h
 *
 * Describes the access network charging identifier.
 */

#ifndef AccessNetChargingIdentifier_H_
#define AccessNetChargingIdentifier_H_

#include "Flows.h"
#include <nlohmann/json.hpp>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Describes the access network charging identifier.
/// </summary>
class AccessNetChargingIdentifier {
public:
  AccessNetChargingIdentifier();
  virtual ~AccessNetChargingIdentifier();

  void validate();

  /////////////////////////////////////////////
  /// AccessNetChargingIdentifier members

  /// <summary>
  /// Integer where the allowed values correspond to the value range of an
  /// unsigned 32-bit integer.
  /// </summary>
  int32_t getAccNetChaIdValue() const;
  void setAccNetChaIdValue(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  std::vector<Flows> &getFlows();
  void setFlows(std::vector<Flows> const &value);
  bool flowsIsSet() const;
  void unsetFlows();

  friend void to_json(nlohmann::json &j, const AccessNetChargingIdentifier &o);
  friend void from_json(const nlohmann::json &j,
                        AccessNetChargingIdentifier &o);

protected:
  int32_t m_AccNetChaIdValue;

  std::vector<Flows> m_Flows;
  bool m_FlowsIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AccessNetChargingIdentifier_H_ */