/**
 * Nsmf_PDUSession
 * SMF PDU Session Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * HsmfUpdatedData.h
 *
 * Data within Update Response from H-SMF, or from SMF to I-SMF
 */

#ifndef HsmfUpdatedData_H_
#define HsmfUpdatedData_H_

#include "Ambr.h"
#include "EpsBearerInfo.h"
#include "EpsPdnCnxInfo.h"
#include "MaxIntegrityProtectedDataRate.h"
#include "N4Information.h"
#include "QosFlowSetupItem.h"
#include "RefToBinaryData.h"
#include "RoamingChargingProfile.h"
#include "UpSecurity.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Data within Update Response from H-SMF, or from SMF to I-SMF
/// </summary>
class HsmfUpdatedData {
public:
  HsmfUpdatedData();
  virtual ~HsmfUpdatedData();

  void validate();

  /////////////////////////////////////////////
  /// HsmfUpdatedData members

  /// <summary>
  ///
  /// </summary>
  RefToBinaryData getN1SmInfoToUe() const;
  void setN1SmInfoToUe(RefToBinaryData const &value);
  bool n1SmInfoToUeIsSet() const;
  void unsetN1SmInfoToUe();
  /// <summary>
  ///
  /// </summary>
  N4Information getN4Info() const;
  void setN4Info(N4Information const &value);
  bool n4InfoIsSet() const;
  void unsetN4Info();
  /// <summary>
  ///
  /// </summary>
  N4Information getN4InfoExt1() const;
  void setN4InfoExt1(N4Information const &value);
  bool n4InfoExt1IsSet() const;
  void unsetN4InfoExt1();
  /// <summary>
  ///
  /// </summary>
  N4Information getN4InfoExt2() const;
  void setN4InfoExt2(N4Information const &value);
  bool n4InfoExt2IsSet() const;
  void unsetN4InfoExt2();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getDnaiList();
  void setDnaiList(std::vector<std::string> const &value);
  bool dnaiListIsSet() const;
  void unsetDnaiList();
  /// <summary>
  /// A string used to indicate the features supported by an API that is used as
  /// defined in clause 6.6 in 3GPP TS 29.500. The string shall contain a
  /// bitmask indicating supported features in hexadecimal representation Each
  /// character in the string shall take a value of \&quot;0\&quot; to
  /// \&quot;9\&quot;, \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to
  /// \&quot;F\&quot; and shall represent the support of 4 features as described
  /// in table 5.2.2-3. The most significant character representing the
  /// highest-numbered features shall appear first in the string, and the
  /// character representing features 1 to 4 shall appear last in the string.
  /// The list of features and their numbering (starting with 1) are defined
  /// separately for each API. If the string contains a lower number of
  /// characters than there are defined features for an API, all features that
  /// would be represented by characters that are not present in the string are
  /// not supported
  /// </summary>
  std::string getSupportedFeatures() const;
  void setSupportedFeatures(std::string const &value);
  bool supportedFeaturesIsSet() const;
  void unsetSupportedFeatures();
  /// <summary>
  ///
  /// </summary>
  RoamingChargingProfile getRoamingChargingProfile() const;
  void setRoamingChargingProfile(RoamingChargingProfile const &value);
  bool roamingChargingProfileIsSet() const;
  void unsetRoamingChargingProfile();
  /// <summary>
  ///
  /// </summary>
  UpSecurity getUpSecurity() const;
  void setUpSecurity(UpSecurity const &value);
  bool upSecurityIsSet() const;
  void unsetUpSecurity();
  /// <summary>
  ///
  /// </summary>
  MaxIntegrityProtectedDataRate getMaxIntegrityProtectedDataRateUl() const;
  void setMaxIntegrityProtectedDataRateUl(
      MaxIntegrityProtectedDataRate const &value);
  bool maxIntegrityProtectedDataRateUlIsSet() const;
  void unsetMaxIntegrityProtectedDataRateUl();
  /// <summary>
  ///
  /// </summary>
  MaxIntegrityProtectedDataRate getMaxIntegrityProtectedDataRateDl() const;
  void setMaxIntegrityProtectedDataRateDl(
      MaxIntegrityProtectedDataRate const &value);
  bool maxIntegrityProtectedDataRateDlIsSet() const;
  void unsetMaxIntegrityProtectedDataRateDl();
  /// <summary>
  ///
  /// </summary>
  bool isIpv6MultiHomingInd() const;
  void setIpv6MultiHomingInd(bool const value);
  bool ipv6MultiHomingIndIsSet() const;
  void unsetIpv6MultiHomingInd();
  /// <summary>
  ///
  /// </summary>
  std::vector<QosFlowSetupItem> &getQosFlowsSetupList();
  void setQosFlowsSetupList(std::vector<QosFlowSetupItem> const &value);
  bool qosFlowsSetupListIsSet() const;
  void unsetQosFlowsSetupList();
  /// <summary>
  ///
  /// </summary>
  Ambr getSessionAmbr() const;
  void setSessionAmbr(Ambr const &value);
  bool sessionAmbrIsSet() const;
  void unsetSessionAmbr();
  /// <summary>
  ///
  /// </summary>
  EpsPdnCnxInfo getEpsPdnCnxInfo() const;
  void setEpsPdnCnxInfo(EpsPdnCnxInfo const &value);
  bool epsPdnCnxInfoIsSet() const;
  void unsetEpsPdnCnxInfo();
  /// <summary>
  ///
  /// </summary>
  std::vector<EpsBearerInfo> &getEpsBearerInfo();
  void setEpsBearerInfo(std::vector<EpsBearerInfo> const &value);
  bool epsBearerInfoIsSet() const;
  void unsetEpsBearerInfo();
  /// <summary>
  /// Procedure Transaction Identifier
  /// </summary>
  int32_t getPti() const;
  void setPti(int32_t const value);
  bool ptiIsSet() const;
  void unsetPti();

  friend void to_json(nlohmann::json &j, const HsmfUpdatedData &o);
  friend void from_json(const nlohmann::json &j, HsmfUpdatedData &o);

protected:
  RefToBinaryData m_N1SmInfoToUe;
  bool m_N1SmInfoToUeIsSet;
  N4Information m_N4Info;
  bool m_N4InfoIsSet;
  N4Information m_N4InfoExt1;
  bool m_N4InfoExt1IsSet;
  N4Information m_N4InfoExt2;
  bool m_N4InfoExt2IsSet;
  std::vector<std::string> m_DnaiList;
  bool m_DnaiListIsSet;
  std::string m_SupportedFeatures;
  bool m_SupportedFeaturesIsSet;
  RoamingChargingProfile m_RoamingChargingProfile;
  bool m_RoamingChargingProfileIsSet;
  UpSecurity m_UpSecurity;
  bool m_UpSecurityIsSet;
  MaxIntegrityProtectedDataRate m_MaxIntegrityProtectedDataRateUl;
  bool m_MaxIntegrityProtectedDataRateUlIsSet;
  MaxIntegrityProtectedDataRate m_MaxIntegrityProtectedDataRateDl;
  bool m_MaxIntegrityProtectedDataRateDlIsSet;
  bool m_Ipv6MultiHomingInd;
  bool m_Ipv6MultiHomingIndIsSet;
  std::vector<QosFlowSetupItem> m_QosFlowsSetupList;
  bool m_QosFlowsSetupListIsSet;
  Ambr m_SessionAmbr;
  bool m_SessionAmbrIsSet;
  EpsPdnCnxInfo m_EpsPdnCnxInfo;
  bool m_EpsPdnCnxInfoIsSet;
  std::vector<EpsBearerInfo> m_EpsBearerInfo;
  bool m_EpsBearerInfoIsSet;
  int32_t m_Pti;
  bool m_PtiIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* HsmfUpdatedData_H_ */
