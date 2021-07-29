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
 * DnnConfiguration.h
 *
 *
 */

#ifndef DnnConfiguration_H_
#define DnnConfiguration_H_

#include "AcsInfo.h"
#include "Ambr.h"
#include "EcsServerAddr.h"
#include "FrameRouteInfo.h"
#include "IpAddress.h"
#include "IpIndex.h"
#include "NiddInformation.h"
#include "PduSessionContinuityInd.h"
#include "PduSessionTypes.h"
#include "SscModes.h"
#include "SubscribedDefaultQos.h"
#include "UpSecurity.h"
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
class DnnConfiguration {
public:
  DnnConfiguration();
  virtual ~DnnConfiguration();

  void validate();

  /////////////////////////////////////////////
  /// DnnConfiguration members

  /// <summary>
  ///
  /// </summary>
  PduSessionTypes getPduSessionTypes() const;
  void setPduSessionTypes(PduSessionTypes const &value);
  /// <summary>
  ///
  /// </summary>
  SscModes getSscModes() const;
  void setSscModes(SscModes const &value);
  /// <summary>
  ///
  /// </summary>
  bool isIwkEpsInd() const;
  void setIwkEpsInd(bool const value);
  bool iwkEpsIndIsSet() const;
  void unsetIwkEpsInd();
  /// <summary>
  ///
  /// </summary>
  SubscribedDefaultQos getR5gQosProfile() const;
  void setR5gQosProfile(SubscribedDefaultQos const &value);
  bool r5gQosProfileIsSet() const;
  void unsetr_5gQosProfile();
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
  std::string getR3gppChargingCharacteristics() const;
  void setR3gppChargingCharacteristics(std::string const &value);
  bool r3gppChargingCharacteristicsIsSet() const;
  void unsetr_3gppChargingCharacteristics();
  /// <summary>
  ///
  /// </summary>
  std::vector<IpAddress> &getStaticIpAddress();
  void setStaticIpAddress(std::vector<IpAddress> const &value);
  bool staticIpAddressIsSet() const;
  void unsetStaticIpAddress();
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
  PduSessionContinuityInd getPduSessionContinuityInd() const;
  void setPduSessionContinuityInd(PduSessionContinuityInd const &value);
  bool pduSessionContinuityIndIsSet() const;
  void unsetPduSessionContinuityInd();
  /// <summary>
  /// Identity of the NEF
  /// </summary>
  std::string getNiddNefId() const;
  void setNiddNefId(std::string const &value);
  bool niddNefIdIsSet() const;
  void unsetNiddNefId();
  /// <summary>
  ///
  /// </summary>
  NiddInformation getNiddInfo() const;
  void setNiddInfo(NiddInformation const &value);
  bool niddInfoIsSet() const;
  void unsetNiddInfo();
  /// <summary>
  ///
  /// </summary>
  bool isRedundantSessionAllowed() const;
  void setRedundantSessionAllowed(bool const value);
  bool redundantSessionAllowedIsSet() const;
  void unsetRedundantSessionAllowed();
  /// <summary>
  ///
  /// </summary>
  AcsInfo getAcsInfo() const;
  void setAcsInfo(AcsInfo const &value);
  bool acsInfoIsSet() const;
  void unsetAcsInfo();
  /// <summary>
  ///
  /// </summary>
  std::vector<FrameRouteInfo> &getIpv4FrameRouteList();
  void setIpv4FrameRouteList(std::vector<FrameRouteInfo> const &value);
  bool ipv4FrameRouteListIsSet() const;
  void unsetIpv4FrameRouteList();
  /// <summary>
  ///
  /// </summary>
  std::vector<FrameRouteInfo> &getIpv6FrameRouteList();
  void setIpv6FrameRouteList(std::vector<FrameRouteInfo> const &value);
  bool ipv6FrameRouteListIsSet() const;
  void unsetIpv6FrameRouteList();
  /// <summary>
  ///
  /// </summary>
  bool isAtsssAllowed() const;
  void setAtsssAllowed(bool const value);
  bool atsssAllowedIsSet() const;
  void unsetAtsssAllowed();
  /// <summary>
  ///
  /// </summary>
  bool isSecondaryAuth() const;
  void setSecondaryAuth(bool const value);
  bool secondaryAuthIsSet() const;
  void unsetSecondaryAuth();
  /// <summary>
  ///
  /// </summary>
  bool isDnAaaIpAddressAllocation() const;
  void setDnAaaIpAddressAllocation(bool const value);
  bool dnAaaIpAddressAllocationIsSet() const;
  void unsetDnAaaIpAddressAllocation();
  /// <summary>
  ///
  /// </summary>
  IpAddress getDnAaaAddress() const;
  void setDnAaaAddress(IpAddress const &value);
  bool dnAaaAddressIsSet() const;
  void unsetDnAaaAddress();
  /// <summary>
  ///
  /// </summary>
  std::vector<IpAddress> &getAdditionalDnAaaAddresses();
  void setAdditionalDnAaaAddresses(std::vector<IpAddress> const &value);
  bool additionalDnAaaAddressesIsSet() const;
  void unsetAdditionalDnAaaAddresses();
  /// <summary>
  /// Fully Qualified Domain Name
  /// </summary>
  std::string getDnAaaFqdn() const;
  void setDnAaaFqdn(std::string const &value);
  bool dnAaaFqdnIsSet() const;
  void unsetDnAaaFqdn();
  /// <summary>
  ///
  /// </summary>
  std::string getIptvAccCtrlInfo() const;
  void setIptvAccCtrlInfo(std::string const &value);
  bool iptvAccCtrlInfoIsSet() const;
  void unsetIptvAccCtrlInfo();
  /// <summary>
  ///
  /// </summary>
  IpIndex getIpv4Index() const;
  void setIpv4Index(IpIndex const &value);
  bool ipv4IndexIsSet() const;
  void unsetIpv4Index();
  /// <summary>
  ///
  /// </summary>
  IpIndex getIpv6Index() const;
  void setIpv6Index(IpIndex const &value);
  bool ipv6IndexIsSet() const;
  void unsetIpv6Index();
  /// <summary>
  ///
  /// </summary>
  EcsServerAddr getEcsServerAddr() const;
  void setEcsServerAddr(EcsServerAddr const &value);
  bool ecsServerAddrIsSet() const;
  void unsetEcsServerAddr();

  friend void to_json(nlohmann::json &j, const DnnConfiguration &o);
  friend void from_json(const nlohmann::json &j, DnnConfiguration &o);

protected:
  PduSessionTypes m_PduSessionTypes;

  SscModes m_SscModes;

  bool m_IwkEpsInd;
  bool m_IwkEpsIndIsSet;
  SubscribedDefaultQos m_r_5gQosProfile;
  bool m_r_5gQosProfileIsSet;
  Ambr m_SessionAmbr;
  bool m_SessionAmbrIsSet;
  std::string m_r_3gppChargingCharacteristics;
  bool m_r_3gppChargingCharacteristicsIsSet;
  std::vector<IpAddress> m_StaticIpAddress;
  bool m_StaticIpAddressIsSet;
  UpSecurity m_UpSecurity;
  bool m_UpSecurityIsSet;
  PduSessionContinuityInd m_PduSessionContinuityInd;
  bool m_PduSessionContinuityIndIsSet;
  std::string m_NiddNefId;
  bool m_NiddNefIdIsSet;
  NiddInformation m_NiddInfo;
  bool m_NiddInfoIsSet;
  bool m_RedundantSessionAllowed;
  bool m_RedundantSessionAllowedIsSet;
  AcsInfo m_AcsInfo;
  bool m_AcsInfoIsSet;
  std::vector<FrameRouteInfo> m_Ipv4FrameRouteList;
  bool m_Ipv4FrameRouteListIsSet;
  std::vector<FrameRouteInfo> m_Ipv6FrameRouteList;
  bool m_Ipv6FrameRouteListIsSet;
  bool m_AtsssAllowed;
  bool m_AtsssAllowedIsSet;
  bool m_SecondaryAuth;
  bool m_SecondaryAuthIsSet;
  bool m_DnAaaIpAddressAllocation;
  bool m_DnAaaIpAddressAllocationIsSet;
  IpAddress m_DnAaaAddress;
  bool m_DnAaaAddressIsSet;
  std::vector<IpAddress> m_AdditionalDnAaaAddresses;
  bool m_AdditionalDnAaaAddressesIsSet;
  std::string m_DnAaaFqdn;
  bool m_DnAaaFqdnIsSet;
  std::string m_IptvAccCtrlInfo;
  bool m_IptvAccCtrlInfoIsSet;
  IpIndex m_Ipv4Index;
  bool m_Ipv4IndexIsSet;
  IpIndex m_Ipv6Index;
  bool m_Ipv6IndexIsSet;
  EcsServerAddr m_EcsServerAddr;
  bool m_EcsServerAddrIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* DnnConfiguration_H_ */