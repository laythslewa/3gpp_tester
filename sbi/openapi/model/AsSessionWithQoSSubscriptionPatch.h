/**
 * 3gpp-as-session-with-qos
 * API for setting us an AS session with required QoS. © 2021, 3GPP
 * Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights
 * reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * AsSessionWithQoSSubscriptionPatch.h
 *
 * Represents parameters to modify an AS session with specific QoS subscription.
 */

#ifndef AsSessionWithQoSSubscriptionPatch_H_
#define AsSessionWithQoSSubscriptionPatch_H_

#include "EthFlowDescription.h"
#include "FlowInfo.h"
#include "QosMonitoringInformationRm.h"
#include "TscQosRequirementRm.h"
#include "UsageThresholdRm.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents parameters to modify an AS session with specific QoS
/// subscription.
/// </summary>
class AsSessionWithQoSSubscriptionPatch {
public:
  AsSessionWithQoSSubscriptionPatch();
  virtual ~AsSessionWithQoSSubscriptionPatch();

  void validate();

  /////////////////////////////////////////////
  /// AsSessionWithQoSSubscriptionPatch members

  /// <summary>
  /// Identifies the external Application Identifier.
  /// </summary>
  std::string getExterAppId() const;
  void setExterAppId(std::string const &value);
  bool exterAppIdIsSet() const;
  void unsetExterAppId();
  /// <summary>
  /// Describe the data flow which requires QoS.
  /// </summary>
  std::vector<FlowInfo> &getFlowInfo();
  void setFlowInfo(std::vector<FlowInfo> const &value);
  bool flowInfoIsSet() const;
  void unsetFlowInfo();
  /// <summary>
  /// Identifies Ethernet packet flows.
  /// </summary>
  std::vector<EthFlowDescription> &getEthFlowInfo();
  void setEthFlowInfo(std::vector<EthFlowDescription> const &value);
  bool ethFlowInfoIsSet() const;
  void unsetEthFlowInfo();
  /// <summary>
  /// Pre-defined QoS reference
  /// </summary>
  std::string getQosReference() const;
  void setQosReference(std::string const &value);
  bool qosReferenceIsSet() const;
  void unsetQosReference();
  /// <summary>
  /// Identifies an ordered list of pre-defined QoS information. The lower the
  /// index of the array for a given entry, the higher the priority.
  /// </summary>
  std::vector<std::string> &getAltQoSReferences();
  void setAltQoSReferences(std::vector<std::string> const &value);
  bool altQoSReferencesIsSet() const;
  void unsetAltQoSReferences();
  /// <summary>
  ///
  /// </summary>
  bool isDisUeNotif() const;
  void setDisUeNotif(bool const value);
  bool disUeNotifIsSet() const;
  void unsetDisUeNotif();
  /// <summary>
  ///
  /// </summary>
  UsageThresholdRm getUsageThreshold() const;
  void setUsageThreshold(UsageThresholdRm const &value);
  bool usageThresholdIsSet() const;
  void unsetUsageThreshold();
  /// <summary>
  ///
  /// </summary>
  QosMonitoringInformationRm getQosMonInfo() const;
  void setQosMonInfo(QosMonitoringInformationRm const &value);
  bool qosMonInfoIsSet() const;
  void unsetQosMonInfo();
  /// <summary>
  ///
  /// </summary>
  bool isLocalNotifInd() const;
  void setLocalNotifInd(bool const value);
  bool localNotifIndIsSet() const;
  void unsetLocalNotifInd();
  /// <summary>
  /// string formatted according to IETF RFC 3986 identifying a referenced
  /// resource.
  /// </summary>
  std::string getNotificationDestination() const;
  void setNotificationDestination(std::string const &value);
  bool notificationDestinationIsSet() const;
  void unsetNotificationDestination();
  /// <summary>
  ///
  /// </summary>
  TscQosRequirementRm getTscQosReq() const;
  void setTscQosReq(TscQosRequirementRm const &value);
  bool tscQosReqIsSet() const;
  void unsetTscQosReq();

  friend void to_json(nlohmann::json &j,
                      const AsSessionWithQoSSubscriptionPatch &o);
  friend void from_json(const nlohmann::json &j,
                        AsSessionWithQoSSubscriptionPatch &o);

protected:
  std::string m_ExterAppId;
  bool m_ExterAppIdIsSet;
  std::vector<FlowInfo> m_FlowInfo;
  bool m_FlowInfoIsSet;
  std::vector<EthFlowDescription> m_EthFlowInfo;
  bool m_EthFlowInfoIsSet;
  std::string m_QosReference;
  bool m_QosReferenceIsSet;
  std::vector<std::string> m_AltQoSReferences;
  bool m_AltQoSReferencesIsSet;
  bool m_DisUeNotif;
  bool m_DisUeNotifIsSet;
  UsageThresholdRm m_UsageThreshold;
  bool m_UsageThresholdIsSet;
  QosMonitoringInformationRm m_QosMonInfo;
  bool m_QosMonInfoIsSet;
  bool m_LocalNotifInd;
  bool m_LocalNotifIndIsSet;
  std::string m_NotificationDestination;
  bool m_NotificationDestinationIsSet;
  TscQosRequirementRm m_TscQosReq;
  bool m_TscQosReqIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AsSessionWithQoSSubscriptionPatch_H_ */
