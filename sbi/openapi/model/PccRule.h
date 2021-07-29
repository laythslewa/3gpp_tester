/**
 * Npcf_SMPolicyControl API
 * Session Management Policy Control Service © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * PccRule.h
 *
 * Contains a PCC rule information.
 */

#ifndef PccRule_H_
#define PccRule_H_

#include "AfSigProtocol.h"
#include "DownlinkDataNotificationControl.h"
#include "DownlinkDataNotificationControlRm.h"
#include "FlowInformation.h"
#include "TscaiInputContainer.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Contains a PCC rule information.
/// </summary>
class PccRule {
public:
  PccRule();
  virtual ~PccRule();

  void validate();

  /////////////////////////////////////////////
  /// PccRule members

  /// <summary>
  /// An array of IP flow packet filter information.
  /// </summary>
  std::vector<FlowInformation> &getFlowInfos();
  void setFlowInfos(std::vector<FlowInformation> const &value);
  bool flowInfosIsSet() const;
  void unsetFlowInfos();
  /// <summary>
  /// A reference to the application detection filter configured at the UPF.
  /// </summary>
  std::string getAppId() const;
  void setAppId(std::string const &value);
  bool appIdIsSet() const;
  void unsetAppId();
  /// <summary>
  /// string with format \&quot;bytes\&quot; as defined in OpenAPI
  /// </summary>
  std::string getAppDescriptor() const;
  void setAppDescriptor(std::string const &value);
  bool appDescriptorIsSet() const;
  void unsetAppDescriptor();
  /// <summary>
  /// Represents the content version of some content.
  /// </summary>
  int32_t getContVer() const;
  void setContVer(int32_t const value);
  bool contVerIsSet() const;
  void unsetContVer();
  /// <summary>
  /// Univocally identifies the PCC rule within a PDU session.
  /// </summary>
  std::string getPccRuleId() const;
  void setPccRuleId(std::string const &value);
  /// <summary>
  /// Unsigned Integer, i.e. only value 0 and integers above 0 are permissible.
  /// </summary>
  int32_t getPrecedence() const;
  void setPrecedence(int32_t const value);
  bool precedenceIsSet() const;
  void unsetPrecedence();
  /// <summary>
  ///
  /// </summary>
  AfSigProtocol getAfSigProtocol() const;
  void setAfSigProtocol(AfSigProtocol const &value);
  bool afSigProtocolIsSet() const;
  void unsetAfSigProtocol();
  /// <summary>
  /// Indication of application relocation possibility.
  /// </summary>
  bool isAppReloc() const;
  void setAppReloc(bool const value);
  bool appRelocIsSet() const;
  void unsetAppReloc();
  /// <summary>
  /// A reference to the QosData policy decision type. It is the qosId described
  /// in subclause 5.6.2.8.
  /// </summary>
  std::vector<std::string> &getRefQosData();
  void setRefQosData(std::vector<std::string> const &value);
  bool refQosDataIsSet() const;
  void unsetRefQosData();
  /// <summary>
  /// A Reference to the QosData policy decision type for the Alternative QoS
  /// parameter sets of the service data flow.
  /// </summary>
  std::vector<std::string> &getRefAltQosParams();
  void setRefAltQosParams(std::vector<std::string> const &value);
  bool refAltQosParamsIsSet() const;
  void unsetRefAltQosParams();
  /// <summary>
  /// A reference to the TrafficControlData policy decision type. It is the tcId
  /// described in subclause 5.6.2.10.
  /// </summary>
  std::vector<std::string> &getRefTcData();
  void setRefTcData(std::vector<std::string> const &value);
  bool refTcDataIsSet() const;
  void unsetRefTcData();
  /// <summary>
  /// A reference to the ChargingData policy decision type. It is the chgId
  /// described in subclause 5.6.2.11.
  /// </summary>
  std::vector<std::string> &getRefChgData();
  void setRefChgData(std::vector<std::string> const &value);
  bool refChgDataIsSet() const;
  void unsetRefChgData();
  /// <summary>
  /// A reference to the ChargingData policy decision type only applicable to
  /// Non-3GPP access if \&quot;ATSSS\&quot; feature is supported. It is the
  /// chgId described in subclause 5.6.2.11.
  /// </summary>
  std::vector<std::string> &getRefChgN3gData();
  void setRefChgN3gData(std::vector<std::string> const &value);
  bool refChgN3gDataIsSet() const;
  void unsetRefChgN3gData();
  /// <summary>
  /// A reference to UsageMonitoringData policy decision type. It is the umId
  /// described in subclause 5.6.2.12.
  /// </summary>
  std::vector<std::string> &getRefUmData();
  void setRefUmData(std::vector<std::string> const &value);
  bool refUmDataIsSet() const;
  void unsetRefUmData();
  /// <summary>
  /// A reference to UsageMonitoringData policy decision type only applicable to
  /// Non-3GPP access if \&quot;ATSSS\&quot; feature is supported. It is the
  /// umId described in subclause 5.6.2.12.
  /// </summary>
  std::vector<std::string> &getRefUmN3gData();
  void setRefUmN3gData(std::vector<std::string> const &value);
  bool refUmN3gDataIsSet() const;
  void unsetRefUmN3gData();
  /// <summary>
  /// A reference to the condition data. It is the condId described in
  /// subclause 5.6.2.9.
  /// </summary>
  std::string getRefCondData() const;
  void setRefCondData(std::string const &value);
  bool refCondDataIsSet() const;
  void unsetRefCondData();
  /// <summary>
  /// A reference to the QosMonitoringData policy decision type. It is the qmId
  /// described in subclause 5.6.2.40.
  /// </summary>
  std::vector<std::string> &getRefQosMon();
  void setRefQosMon(std::vector<std::string> const &value);
  bool refQosMonIsSet() const;
  void unsetRefQosMon();
  /// <summary>
  ///
  /// </summary>
  bool isAddrPreserInd() const;
  void setAddrPreserInd(bool const value);
  bool addrPreserIndIsSet() const;
  void unsetAddrPreserInd();
  /// <summary>
  ///
  /// </summary>
  TscaiInputContainer getTscaiInputDl() const;
  void setTscaiInputDl(TscaiInputContainer const &value);
  bool tscaiInputDlIsSet() const;
  void unsetTscaiInputDl();
  /// <summary>
  ///
  /// </summary>
  TscaiInputContainer getTscaiInputUl() const;
  void setTscaiInputUl(TscaiInputContainer const &value);
  bool tscaiInputUlIsSet() const;
  void unsetTscaiInputUl();
  /// <summary>
  /// Unsigned Integer, i.e. only value 0 and integers above 0 are permissible.
  /// </summary>
  int32_t getTscaiTimeDom() const;
  void setTscaiTimeDom(int32_t const value);
  bool tscaiTimeDomIsSet() const;
  void unsetTscaiTimeDom();
  /// <summary>
  ///
  /// </summary>
  DownlinkDataNotificationControl getDdNotifCtrl() const;
  void setDdNotifCtrl(DownlinkDataNotificationControl const &value);
  bool ddNotifCtrlIsSet() const;
  void unsetDdNotifCtrl();
  /// <summary>
  ///
  /// </summary>
  DownlinkDataNotificationControlRm getDdNotifCtrl2() const;
  void setDdNotifCtrl2(DownlinkDataNotificationControlRm const &value);
  bool ddNotifCtrl2IsSet() const;
  void unsetDdNotifCtrl2();
  /// <summary>
  ///
  /// </summary>
  bool isDisUeNotif() const;
  void setDisUeNotif(bool const value);
  bool disUeNotifIsSet() const;
  void unsetDisUeNotif();

  friend void to_json(nlohmann::json &j, const PccRule &o);
  friend void from_json(const nlohmann::json &j, PccRule &o);

protected:
  std::vector<FlowInformation> m_FlowInfos;
  bool m_FlowInfosIsSet;
  std::string m_AppId;
  bool m_AppIdIsSet;
  std::string m_AppDescriptor;
  bool m_AppDescriptorIsSet;
  int32_t m_ContVer;
  bool m_ContVerIsSet;
  std::string m_PccRuleId;

  int32_t m_Precedence;
  bool m_PrecedenceIsSet;
  AfSigProtocol m_AfSigProtocol;
  bool m_AfSigProtocolIsSet;
  bool m_AppReloc;
  bool m_AppRelocIsSet;
  std::vector<std::string> m_RefQosData;
  bool m_RefQosDataIsSet;
  std::vector<std::string> m_RefAltQosParams;
  bool m_RefAltQosParamsIsSet;
  std::vector<std::string> m_RefTcData;
  bool m_RefTcDataIsSet;
  std::vector<std::string> m_RefChgData;
  bool m_RefChgDataIsSet;
  std::vector<std::string> m_RefChgN3gData;
  bool m_RefChgN3gDataIsSet;
  std::vector<std::string> m_RefUmData;
  bool m_RefUmDataIsSet;
  std::vector<std::string> m_RefUmN3gData;
  bool m_RefUmN3gDataIsSet;
  std::string m_RefCondData;
  bool m_RefCondDataIsSet;
  std::vector<std::string> m_RefQosMon;
  bool m_RefQosMonIsSet;
  bool m_AddrPreserInd;
  bool m_AddrPreserIndIsSet;
  TscaiInputContainer m_TscaiInputDl;
  bool m_TscaiInputDlIsSet;
  TscaiInputContainer m_TscaiInputUl;
  bool m_TscaiInputUlIsSet;
  int32_t m_TscaiTimeDom;
  bool m_TscaiTimeDomIsSet;
  DownlinkDataNotificationControl m_DdNotifCtrl;
  bool m_DdNotifCtrlIsSet;
  DownlinkDataNotificationControlRm m_DdNotifCtrl2;
  bool m_DdNotifCtrl2IsSet;
  bool m_DisUeNotif;
  bool m_DisUeNotifIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* PccRule_H_ */
