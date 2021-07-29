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
 * PDUSessionInformation.h
 *
 *
 */

#ifndef PDUSessionInformation_H_
#define PDUSessionInformation_H_

#include "3GPPPSDataOffStatus.h"
#include "Ambr.h"
#include "AuthorizedDefaultQos.h"
#include "ChargingCharacteristicsSelectionMode.h"
#include "MAPDUSessionInformation.h"
#include "NetworkSlicingInfo.h"
#include "PDUAddress.h"
#include "PduSessionType.h"
#include "PlmnId.h"
#include "RanNasRelCause.h"
#include "RatType.h"
#include "ServingNetworkFunctionID.h"
#include "SscMode.h"
#include "SubscribedDefaultQos.h"
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
class PDUSessionInformation {
public:
  PDUSessionInformation();
  virtual ~PDUSessionInformation();

  void validate();

  /////////////////////////////////////////////
  /// PDUSessionInformation members

  /// <summary>
  ///
  /// </summary>
  NetworkSlicingInfo getNetworkSlicingInfo() const;
  void setNetworkSlicingInfo(NetworkSlicingInfo const &value);
  bool networkSlicingInfoIsSet() const;
  void unsetNetworkSlicingInfo();
  /// <summary>
  /// Unsigned integer identifying a PDU session, within the range 0 to 255, as
  /// specified in clause 11.2.3.1b, bits 1 to 8, of 3GPP TS 24.007. If the PDU
  /// Session ID is allocated by the Core Network for UEs not supporting N1
  /// mode, reserved range 64 to 95 is used. PDU Session ID within the reserved
  /// range is only visible in the Core Network.
  /// </summary>
  int32_t getPduSessionID() const;
  void setPduSessionID(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  PduSessionType getPduType() const;
  void setPduType(PduSessionType const &value);
  bool pduTypeIsSet() const;
  void unsetPduType();
  /// <summary>
  ///
  /// </summary>
  SscMode getSscMode() const;
  void setSscMode(SscMode const &value);
  bool sscModeIsSet() const;
  void unsetSscMode();
  /// <summary>
  ///
  /// </summary>
  PlmnId getHPlmnId() const;
  void setHPlmnId(PlmnId const &value);
  bool hPlmnIdIsSet() const;
  void unsetHPlmnId();
  /// <summary>
  ///
  /// </summary>
  ServingNetworkFunctionID getServingNetworkFunctionID() const;
  void setServingNetworkFunctionID(ServingNetworkFunctionID const &value);
  bool servingNetworkFunctionIDIsSet() const;
  void unsetServingNetworkFunctionID();
  /// <summary>
  ///
  /// </summary>
  RatType getRatType() const;
  void setRatType(RatType const &value);
  bool ratTypeIsSet() const;
  void unsetRatType();
  /// <summary>
  ///
  /// </summary>
  RatType getMAPDUNon3GPPRATType() const;
  void setMAPDUNon3GPPRATType(RatType const &value);
  bool mAPDUNon3GPPRATTypeIsSet() const;
  void unsetMAPDUNon3GPPRATType();
  /// <summary>
  /// String representing a Data Network as defined in clause 9A of 3GPP
  /// TS 23.003; it shall contain either a DNN Network Identifier, or a full DNN
  /// with both the Network Identifier and Operator Identifier, as specified in
  /// 3GPP TS 23.003 clause 9.1.1 and 9.1.2. It shall be coded as string in
  /// which the labels are separated by dots (e.g.
  /// \&quot;Label1.Label2.Label3\&quot;).
  /// </summary>
  std::string getDnnId() const;
  void setDnnId(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  std::string getChargingCharacteristics() const;
  void setChargingCharacteristics(std::string const &value);
  bool chargingCharacteristicsIsSet() const;
  void unsetChargingCharacteristics();
  /// <summary>
  ///
  /// </summary>
  ChargingCharacteristicsSelectionMode
  getChargingCharacteristicsSelectionMode() const;
  void setChargingCharacteristicsSelectionMode(
      ChargingCharacteristicsSelectionMode const &value);
  bool chargingCharacteristicsSelectionModeIsSet() const;
  void unsetChargingCharacteristicsSelectionMode();
  /// <summary>
  /// string with format \&quot;date-time\&quot; as defined in OpenAPI.
  /// </summary>
  std::string getStartTime() const;
  void setStartTime(std::string const &value);
  bool startTimeIsSet() const;
  void unsetStartTime();
  /// <summary>
  /// string with format \&quot;date-time\&quot; as defined in OpenAPI.
  /// </summary>
  std::string getStopTime() const;
  void setStopTime(std::string const &value);
  bool stopTimeIsSet() const;
  void unsetStopTime();
  /// <summary>
  ///
  /// </summary>
  3GPPPSDataOffStatus getR3gppPSDataOffStatus() const;
  void setR3gppPSDataOffStatus(3GPPPSDataOffStatus const &value);
  bool r3gppPSDataOffStatusIsSet() const;
  void unsetr_3gppPSDataOffStatus();
  /// <summary>
  ///
  /// </summary>
  bool isSessionStopIndicator() const;
  void setSessionStopIndicator(bool const value);
  bool sessionStopIndicatorIsSet() const;
  void unsetSessionStopIndicator();
  /// <summary>
  ///
  /// </summary>
  PDUAddress getPduAddress() const;
  void setPduAddress(PDUAddress const &value);
  bool pduAddressIsSet() const;
  void unsetPduAddress();
  /// <summary>
  ///
  /// </summary>
  int32_t getDiagnostics() const;
  void setDiagnostics(int32_t const value);
  bool diagnosticsIsSet() const;
  void unsetDiagnostics();
  /// <summary>
  ///
  /// </summary>
  AuthorizedDefaultQos getAuthorizedQoSInformation() const;
  void setAuthorizedQoSInformation(AuthorizedDefaultQos const &value);
  bool authorizedQoSInformationIsSet() const;
  void unsetAuthorizedQoSInformation();
  /// <summary>
  ///
  /// </summary>
  SubscribedDefaultQos getSubscribedQoSInformation() const;
  void setSubscribedQoSInformation(SubscribedDefaultQos const &value);
  bool subscribedQoSInformationIsSet() const;
  void unsetSubscribedQoSInformation();
  /// <summary>
  ///
  /// </summary>
  Ambr getAuthorizedSessionAMBR() const;
  void setAuthorizedSessionAMBR(Ambr const &value);
  bool authorizedSessionAMBRIsSet() const;
  void unsetAuthorizedSessionAMBR();
  /// <summary>
  ///
  /// </summary>
  Ambr getSubscribedSessionAMBR() const;
  void setSubscribedSessionAMBR(Ambr const &value);
  bool subscribedSessionAMBRIsSet() const;
  void unsetSubscribedSessionAMBR();
  /// <summary>
  ///
  /// </summary>
  PlmnId getServingCNPlmnId() const;
  void setServingCNPlmnId(PlmnId const &value);
  bool servingCNPlmnIdIsSet() const;
  void unsetServingCNPlmnId();
  /// <summary>
  ///
  /// </summary>
  MAPDUSessionInformation getMAPDUSessionInformation() const;
  void setMAPDUSessionInformation(MAPDUSessionInformation const &value);
  bool mAPDUSessionInformationIsSet() const;
  void unsetMAPDUSessionInformation();
  /// <summary>
  ///
  /// </summary>
  std::vector<RanNasRelCause> &getEnhancedDiagnostics();
  void setEnhancedDiagnostics(std::vector<RanNasRelCause> const &value);
  bool enhancedDiagnosticsIsSet() const;
  void unsetEnhancedDiagnostics();

  friend void to_json(nlohmann::json &j, const PDUSessionInformation &o);
  friend void from_json(const nlohmann::json &j, PDUSessionInformation &o);

protected:
  NetworkSlicingInfo m_NetworkSlicingInfo;
  bool m_NetworkSlicingInfoIsSet;
  int32_t m_PduSessionID;

  PduSessionType m_PduType;
  bool m_PduTypeIsSet;
  SscMode m_SscMode;
  bool m_SscModeIsSet;
  PlmnId m_HPlmnId;
  bool m_HPlmnIdIsSet;
  ServingNetworkFunctionID m_ServingNetworkFunctionID;
  bool m_ServingNetworkFunctionIDIsSet;
  RatType m_RatType;
  bool m_RatTypeIsSet;
  RatType m_MAPDUNon3GPPRATType;
  bool m_MAPDUNon3GPPRATTypeIsSet;
  std::string m_DnnId;

  std::string m_ChargingCharacteristics;
  bool m_ChargingCharacteristicsIsSet;
  ChargingCharacteristicsSelectionMode m_ChargingCharacteristicsSelectionMode;
  bool m_ChargingCharacteristicsSelectionModeIsSet;
  std::string m_StartTime;
  bool m_StartTimeIsSet;
  std::string m_StopTime;
  bool m_StopTimeIsSet;
  3GPPPSDataOffStatus m_r_3gppPSDataOffStatus;
  bool m_r_3gppPSDataOffStatusIsSet;
  bool m_SessionStopIndicator;
  bool m_SessionStopIndicatorIsSet;
  PDUAddress m_PduAddress;
  bool m_PduAddressIsSet;
  int32_t m_Diagnostics;
  bool m_DiagnosticsIsSet;
  AuthorizedDefaultQos m_AuthorizedQoSInformation;
  bool m_AuthorizedQoSInformationIsSet;
  SubscribedDefaultQos m_SubscribedQoSInformation;
  bool m_SubscribedQoSInformationIsSet;
  Ambr m_AuthorizedSessionAMBR;
  bool m_AuthorizedSessionAMBRIsSet;
  Ambr m_SubscribedSessionAMBR;
  bool m_SubscribedSessionAMBRIsSet;
  PlmnId m_ServingCNPlmnId;
  bool m_ServingCNPlmnIdIsSet;
  MAPDUSessionInformation m_MAPDUSessionInformation;
  bool m_MAPDUSessionInformationIsSet;
  std::vector<RanNasRelCause> m_EnhancedDiagnostics;
  bool m_EnhancedDiagnosticsIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* PDUSessionInformation_H_ */
