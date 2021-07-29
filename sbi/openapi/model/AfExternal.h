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
 * AfExternal.h
 *
 *
 */

#ifndef AfExternal_H_
#define AfExternal_H_

#include "GeographicArea.h"
#include "PrivacyCheckRelatedAction.h"
#include "ValidTimePeriod.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class AfExternal {
public:
  AfExternal();
  virtual ~AfExternal();

  void validate();

  /////////////////////////////////////////////
  /// AfExternal members

  /// <summary>
  ///
  /// </summary>
  std::string getAfId() const;
  void setAfId(std::string const &value);
  bool afIdIsSet() const;
  void unsetAfId();
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

  friend void to_json(nlohmann::json &j, const AfExternal &o);
  friend void from_json(const nlohmann::json &j, AfExternal &o);

protected:
  std::string m_AfId;
  bool m_AfIdIsSet;
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

#endif /* AfExternal_H_ */
