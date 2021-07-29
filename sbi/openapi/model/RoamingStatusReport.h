/**
 * Nudm_EE
 * Nudm Event Exposure Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * RoamingStatusReport.h
 *
 *
 */

#ifndef RoamingStatusReport_H_
#define RoamingStatusReport_H_

#include "PlmnId.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class RoamingStatusReport {
public:
  RoamingStatusReport();
  virtual ~RoamingStatusReport();

  void validate();

  /////////////////////////////////////////////
  /// RoamingStatusReport members

  /// <summary>
  ///
  /// </summary>
  bool isRoaming() const;
  void setRoaming(bool const value);
  /// <summary>
  ///
  /// </summary>
  PlmnId getNewServingPlmn() const;
  void setNewServingPlmn(PlmnId const &value);

  friend void to_json(nlohmann::json &j, const RoamingStatusReport &o);
  friend void from_json(const nlohmann::json &j, RoamingStatusReport &o);

protected:
  bool m_Roaming;

  PlmnId m_NewServingPlmn;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* RoamingStatusReport_H_ */
