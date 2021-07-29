/**
 * Nnef_SMContext
 * Nnef SMContext Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
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
 * SmContextConfiguration.h
 *
 * NIDD Configuration for the SM context.
 */

#ifndef SmContextConfiguration_H_
#define SmContextConfiguration_H_

#include "SmallDataRateControl.h"
#include "SmallDataRateStatus.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// NIDD Configuration for the SM context.
/// </summary>
class SmContextConfiguration {
public:
  SmContextConfiguration();
  virtual ~SmContextConfiguration();

  void validate();

  /////////////////////////////////////////////
  /// SmContextConfiguration members

  /// <summary>
  ///
  /// </summary>
  SmallDataRateControl getSmalDataRateControl() const;
  void setSmalDataRateControl(SmallDataRateControl const &value);
  bool smalDataRateControlIsSet() const;
  void unsetSmalDataRateControl();
  /// <summary>
  ///
  /// </summary>
  SmallDataRateStatus getSmallDataRateStatus() const;
  void setSmallDataRateStatus(SmallDataRateStatus const &value);
  bool smallDataRateStatusIsSet() const;
  void unsetSmallDataRateStatus();
  /// <summary>
  /// When present, this IE shall contain the maximum allowed number of Downlink
  /// NAS Data PDUs per deci hour of the serving PLMN, as specified in
  /// subclause 5.31.14.2 of 3GPP TS 23.501 [2].   Minimum  10
  /// </summary>
  int32_t getServPlmnDataRateCtl() const;
  void setServPlmnDataRateCtl(int32_t const value);
  bool servPlmnDataRateCtlIsSet() const;
  void unsetServPlmnDataRateCtl();

  friend void to_json(nlohmann::json &j, const SmContextConfiguration &o);
  friend void from_json(const nlohmann::json &j, SmContextConfiguration &o);

protected:
  SmallDataRateControl m_SmalDataRateControl;
  bool m_SmalDataRateControlIsSet;
  SmallDataRateStatus m_SmallDataRateStatus;
  bool m_SmallDataRateStatusIsSet;
  int32_t m_ServPlmnDataRateCtl;
  bool m_ServPlmnDataRateCtlIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* SmContextConfiguration_H_ */