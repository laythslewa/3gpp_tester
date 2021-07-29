/**
 * Unified Data Repository Service API file for subscription data
 * Unified Data Repository Service (subscription data). The API version is
 * defined in 3GPP TS 29.504. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * LcsClientExternal.h
 *
 *
 */

#ifndef LcsClientExternal_H_
#define LcsClientExternal_H_

#include "GeographicArea.h"
#include "PrivacyCheckRelatedAction.h"
#include "ValidTimePeriod.h"
#include <nlohmann/json.hpp>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class LcsClientExternal {
public:
  LcsClientExternal();
  virtual ~LcsClientExternal();

  void validate();

  /////////////////////////////////////////////
  /// LcsClientExternal members

  /// <summary>
  ///
  /// </summary>
  std::vector<GeographicArea> &getAllowedGeographicArea();
  void setAllowedGeographicArea(std::vector<GeographicArea> const &value);
  bool allowedGeographicAreaIsSet() const;
  void unsetAllowedGeographicArea();
  /// <summary>
  ///
  /// </summary>
  PrivacyCheckRelatedAction getPrivacyCheckRelatedAction() const;
  void setPrivacyCheckRelatedAction(PrivacyCheckRelatedAction const &value);
  bool privacyCheckRelatedActionIsSet() const;
  void unsetPrivacyCheckRelatedAction();
  /// <summary>
  ///
  /// </summary>
  ValidTimePeriod getValidTimePeriod() const;
  void setValidTimePeriod(ValidTimePeriod const &value);
  bool validTimePeriodIsSet() const;
  void unsetValidTimePeriod();

  friend void to_json(nlohmann::json &j, const LcsClientExternal &o);
  friend void from_json(const nlohmann::json &j, LcsClientExternal &o);

protected:
  std::vector<GeographicArea> m_AllowedGeographicArea;
  bool m_AllowedGeographicAreaIsSet;
  PrivacyCheckRelatedAction m_PrivacyCheckRelatedAction;
  bool m_PrivacyCheckRelatedActionIsSet;
  ValidTimePeriod m_ValidTimePeriod;
  bool m_ValidTimePeriodIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* LcsClientExternal_H_ */
