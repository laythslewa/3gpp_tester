/**
 * 3gpp-am-policyauthorization
 * API for AM policy authorization. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * AppAmContextExpUpdateData.h
 *
 * Contains the modification(s) to be applied to the Individual application AM
 * context exposure resource.
 */

#ifndef AppAmContextExpUpdateData_H_
#define AppAmContextExpUpdateData_H_

#include "AmEventsSubscDataRm.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Contains the modification(s) to be applied to the Individual application AM
/// context exposure resource.
/// </summary>
class AppAmContextExpUpdateData {
public:
  AppAmContextExpUpdateData();
  virtual ~AppAmContextExpUpdateData();

  void validate();

  /////////////////////////////////////////////
  /// AppAmContextExpUpdateData members

  /// <summary>
  ///
  /// </summary>
  AmEventsSubscDataRm getEvSubsc() const;
  void setEvSubsc(AmEventsSubscDataRm const &value);
  bool evSubscIsSet() const;
  void unsetEvSubsc();

  friend void to_json(nlohmann::json &j, const AppAmContextExpUpdateData &o);
  friend void from_json(const nlohmann::json &j, AppAmContextExpUpdateData &o);

protected:
  AmEventsSubscDataRm m_EvSubsc;
  bool m_EvSubscIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AppAmContextExpUpdateData_H_ */
