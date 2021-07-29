/**
 * 3gpp-chargeable-party
 * API for Chargeable Party management. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ChargeablePartyPatch.h
 *
 * Represents a modification request of a chargeable party resource.
 */

#ifndef ChargeablePartyPatch_H_
#define ChargeablePartyPatch_H_

#include "EthFlowDescription.h"
#include "FlowInfo.h"
#include "UsageThresholdRm.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents a modification request of a chargeable party resource.
/// </summary>
class ChargeablePartyPatch {
public:
  ChargeablePartyPatch();
  virtual ~ChargeablePartyPatch();

  void validate();

  /////////////////////////////////////////////
  /// ChargeablePartyPatch members

  /// <summary>
  /// Describes the IP flows.
  /// </summary>
  std::vector<FlowInfo> &getFlowInfo();
  void setFlowInfo(std::vector<FlowInfo> const &value);
  bool flowInfoIsSet() const;
  void unsetFlowInfo();
  /// <summary>
  /// Identifies the external Application Identifier.
  /// </summary>
  std::string getExterAppId() const;
  void setExterAppId(std::string const &value);
  bool exterAppIdIsSet() const;
  void unsetExterAppId();
  /// <summary>
  /// Identifies Ethernet packet flows.
  /// </summary>
  std::vector<EthFlowDescription> &getEthFlowInfo();
  void setEthFlowInfo(std::vector<EthFlowDescription> const &value);
  bool ethFlowInfoIsSet() const;
  void unsetEthFlowInfo();
  /// <summary>
  /// Indicates sponsoring status.
  /// </summary>
  bool isSponsoringEnabled() const;
  void setSponsoringEnabled(bool const value);
  bool sponsoringEnabledIsSet() const;
  void unsetSponsoringEnabled();
  /// <summary>
  /// string identifying a BDT Reference ID as defined in subclause 5.3.3 of
  /// 3GPP TS 29.154.
  /// </summary>
  std::string getReferenceId() const;
  void setReferenceId(std::string const &value);
  bool referenceIdIsSet() const;
  void unsetReferenceId();
  /// <summary>
  ///
  /// </summary>
  UsageThresholdRm getUsageThreshold() const;
  void setUsageThreshold(UsageThresholdRm const &value);
  bool usageThresholdIsSet() const;
  void unsetUsageThreshold();
  /// <summary>
  /// string formatted according to IETF RFC 3986 identifying a referenced
  /// resource.
  /// </summary>
  std::string getNotificationDestination() const;
  void setNotificationDestination(std::string const &value);
  bool notificationDestinationIsSet() const;
  void unsetNotificationDestination();

  friend void to_json(nlohmann::json &j, const ChargeablePartyPatch &o);
  friend void from_json(const nlohmann::json &j, ChargeablePartyPatch &o);

protected:
  std::vector<FlowInfo> m_FlowInfo;
  bool m_FlowInfoIsSet;
  std::string m_ExterAppId;
  bool m_ExterAppIdIsSet;
  std::vector<EthFlowDescription> m_EthFlowInfo;
  bool m_EthFlowInfoIsSet;
  bool m_SponsoringEnabled;
  bool m_SponsoringEnabledIsSet;
  std::string m_ReferenceId;
  bool m_ReferenceIdIsSet;
  UsageThresholdRm m_UsageThreshold;
  bool m_UsageThresholdIsSet;
  std::string m_NotificationDestination;
  bool m_NotificationDestinationIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ChargeablePartyPatch_H_ */
