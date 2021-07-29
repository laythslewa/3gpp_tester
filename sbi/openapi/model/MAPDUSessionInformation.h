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
 * MAPDUSessionInformation.h
 *
 *
 */

#ifndef MAPDUSessionInformation_H_
#define MAPDUSessionInformation_H_

#include "AtsssCapability.h"
#include "MaPduIndication.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class MAPDUSessionInformation {
public:
  MAPDUSessionInformation();
  virtual ~MAPDUSessionInformation();

  void validate();

  /////////////////////////////////////////////
  /// MAPDUSessionInformation members

  /// <summary>
  ///
  /// </summary>
  MaPduIndication getMAPDUSessionIndicator() const;
  void setMAPDUSessionIndicator(MaPduIndication const &value);
  bool mAPDUSessionIndicatorIsSet() const;
  void unsetMAPDUSessionIndicator();
  /// <summary>
  ///
  /// </summary>
  AtsssCapability getATSSSCapability() const;
  void setATSSSCapability(AtsssCapability const &value);
  bool aTSSSCapabilityIsSet() const;
  void unsetATSSSCapability();

  friend void to_json(nlohmann::json &j, const MAPDUSessionInformation &o);
  friend void from_json(const nlohmann::json &j, MAPDUSessionInformation &o);

protected:
  MaPduIndication m_MAPDUSessionIndicator;
  bool m_MAPDUSessionIndicatorIsSet;
  AtsssCapability m_ATSSSCapability;
  bool m_ATSSSCapabilityIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* MAPDUSessionInformation_H_ */