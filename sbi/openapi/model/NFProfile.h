/**
 * NRF NFManagement Service
 * NRF NFManagement Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * NFProfile.h
 *
 * Information of an NF Instance registered in the NRF
 */

#ifndef NFProfile_H_
#define NFProfile_H_

#include "5GDdnmfInfo.h"
#include "AanfInfo.h"
#include "AmfInfo.h"
#include "AusfInfo.h"
#include "BsfInfo.h"
#include "ChfInfo.h"
#include "DccfInfo.h"
#include "DefaultNotificationSubscription.h"
#include "EasdfInfo.h"
#include "ExtSnssai.h"
#include "GmlcInfo.h"
#include "HssInfo.h"
#include "Ipv6Addr.h"
#include "LmfInfo.h"
#include "MfafInfo.h"
#include "NFService.h"
#include "NFStatus.h"
#include "NFType.h"
#include "NefInfo.h"
#include "NrfInfo.h"
#include "NwdafInfo.h"
#include "Object.h"
#include "PcfInfo.h"
#include "PcscfInfo.h"
#include "PlmnId.h"
#include "PlmnIdNid.h"
#include "PlmnSnssai.h"
#include "ScpInfo.h"
#include "SeppInfo.h"
#include "SmfInfo.h"
#include "UdmInfo.h"
#include "UdrInfo.h"
#include "UdsfInfo.h"
#include "UpfInfo.h"
#include "VendorSpecificFeature.h"
#include <map>
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Information of an NF Instance registered in the NRF
/// </summary>
class NFProfile {
public:
  NFProfile();
  virtual ~NFProfile();

  void validate();

  /////////////////////////////////////////////
  /// NFProfile members

  /// <summary>
  /// String uniquely identifying a NF instance. The format of the NF Instance
  /// ID shall be a Universally Unique Identifier (UUID) version 4, as described
  /// in IETF RFC 4122.
  /// </summary>
  std::string getNfInstanceId() const;
  void setNfInstanceId(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  std::string getNfInstanceName() const;
  void setNfInstanceName(std::string const &value);
  bool nfInstanceNameIsSet() const;
  void unsetNfInstanceName();
  /// <summary>
  ///
  /// </summary>
  NFType getNfType() const;
  void setNfType(NFType const &value);
  /// <summary>
  ///
  /// </summary>
  NFStatus getNfStatus() const;
  void setNfStatus(NFStatus const &value);
  /// <summary>
  ///
  /// </summary>
  int32_t getHeartBeatTimer() const;
  void setHeartBeatTimer(int32_t const value);
  bool heartBeatTimerIsSet() const;
  void unsetHeartBeatTimer();
  /// <summary>
  ///
  /// </summary>
  std::vector<PlmnId> &getPlmnList();
  void setPlmnList(std::vector<PlmnId> const &value);
  bool plmnListIsSet() const;
  void unsetPlmnList();
  /// <summary>
  ///
  /// </summary>
  std::vector<PlmnIdNid> &getSnpnList();
  void setSnpnList(std::vector<PlmnIdNid> const &value);
  bool snpnListIsSet() const;
  void unsetSnpnList();
  /// <summary>
  ///
  /// </summary>
  std::vector<ExtSnssai> &getSNssais();
  void setSNssais(std::vector<ExtSnssai> const &value);
  bool sNssaisIsSet() const;
  void unsetSNssais();
  /// <summary>
  ///
  /// </summary>
  std::vector<PlmnSnssai> &getPerPlmnSnssaiList();
  void setPerPlmnSnssaiList(std::vector<PlmnSnssai> const &value);
  bool perPlmnSnssaiListIsSet() const;
  void unsetPerPlmnSnssaiList();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getNsiList();
  void setNsiList(std::vector<std::string> const &value);
  bool nsiListIsSet() const;
  void unsetNsiList();
  /// <summary>
  /// Fully Qualified Domain Name
  /// </summary>
  std::string getFqdn() const;
  void setFqdn(std::string const &value);
  bool fqdnIsSet() const;
  void unsetFqdn();
  /// <summary>
  /// Fully Qualified Domain Name
  /// </summary>
  std::string getInterPlmnFqdn() const;
  void setInterPlmnFqdn(std::string const &value);
  bool interPlmnFqdnIsSet() const;
  void unsetInterPlmnFqdn();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getIpv4Addresses();
  void setIpv4Addresses(std::vector<std::string> const &value);
  bool ipv4AddressesIsSet() const;
  void unsetIpv4Addresses();
  /// <summary>
  ///
  /// </summary>
  std::vector<Ipv6Addr> &getIpv6Addresses();
  void setIpv6Addresses(std::vector<Ipv6Addr> const &value);
  bool ipv6AddressesIsSet() const;
  void unsetIpv6Addresses();
  /// <summary>
  ///
  /// </summary>
  std::vector<PlmnId> &getAllowedPlmns();
  void setAllowedPlmns(std::vector<PlmnId> const &value);
  bool allowedPlmnsIsSet() const;
  void unsetAllowedPlmns();
  /// <summary>
  ///
  /// </summary>
  std::vector<PlmnIdNid> &getAllowedSnpns();
  void setAllowedSnpns(std::vector<PlmnIdNid> const &value);
  bool allowedSnpnsIsSet() const;
  void unsetAllowedSnpns();
  /// <summary>
  ///
  /// </summary>
  std::vector<NFType> &getAllowedNfTypes();
  void setAllowedNfTypes(std::vector<NFType> const &value);
  bool allowedNfTypesIsSet() const;
  void unsetAllowedNfTypes();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getAllowedNfDomains();
  void setAllowedNfDomains(std::vector<std::string> const &value);
  bool allowedNfDomainsIsSet() const;
  void unsetAllowedNfDomains();
  /// <summary>
  ///
  /// </summary>
  std::vector<ExtSnssai> &getAllowedNssais();
  void setAllowedNssais(std::vector<ExtSnssai> const &value);
  bool allowedNssaisIsSet() const;
  void unsetAllowedNssais();
  /// <summary>
  ///
  /// </summary>
  int32_t getPriority() const;
  void setPriority(int32_t const value);
  bool priorityIsSet() const;
  void unsetPriority();
  /// <summary>
  ///
  /// </summary>
  int32_t getCapacity() const;
  void setCapacity(int32_t const value);
  bool capacityIsSet() const;
  void unsetCapacity();
  /// <summary>
  ///
  /// </summary>
  int32_t getLoad() const;
  void setLoad(int32_t const value);
  bool loadIsSet() const;
  void unsetLoad();
  /// <summary>
  /// string with format \&quot;date-time\&quot; as defined in OpenAPI.
  /// </summary>
  std::string getLoadTimeStamp() const;
  void setLoadTimeStamp(std::string const &value);
  bool loadTimeStampIsSet() const;
  void unsetLoadTimeStamp();
  /// <summary>
  ///
  /// </summary>
  std::string getLocality() const;
  void setLocality(std::string const &value);
  bool localityIsSet() const;
  void unsetLocality();
  /// <summary>
  ///
  /// </summary>
  UdrInfo getUdrInfo() const;
  void setUdrInfo(UdrInfo const &value);
  bool udrInfoIsSet() const;
  void unsetUdrInfo();
  /// <summary>
  /// A map (list of key-value pairs) where a (unique) valid JSON string serves
  /// as key of UdrInfo
  /// </summary>
  std::map<std::string, UdrInfo> &getUdrInfoList();
  void setUdrInfoList(std::map<std::string, UdrInfo> const &value);
  bool udrInfoListIsSet() const;
  void unsetUdrInfoList();
  /// <summary>
  ///
  /// </summary>
  UdmInfo getUdmInfo() const;
  void setUdmInfo(UdmInfo const &value);
  bool udmInfoIsSet() const;
  void unsetUdmInfo();
  /// <summary>
  /// A map (list of key-value pairs) where a (unique) valid JSON string serves
  /// as key of UdmInfo
  /// </summary>
  std::map<std::string, UdmInfo> &getUdmInfoList();
  void setUdmInfoList(std::map<std::string, UdmInfo> const &value);
  bool udmInfoListIsSet() const;
  void unsetUdmInfoList();
  /// <summary>
  ///
  /// </summary>
  AusfInfo getAusfInfo() const;
  void setAusfInfo(AusfInfo const &value);
  bool ausfInfoIsSet() const;
  void unsetAusfInfo();
  /// <summary>
  /// A map (list of key-value pairs) where a (unique) valid JSON string serves
  /// as key of AusfInfo
  /// </summary>
  std::map<std::string, AusfInfo> &getAusfInfoList();
  void setAusfInfoList(std::map<std::string, AusfInfo> const &value);
  bool ausfInfoListIsSet() const;
  void unsetAusfInfoList();
  /// <summary>
  ///
  /// </summary>
  AmfInfo getAmfInfo() const;
  void setAmfInfo(AmfInfo const &value);
  bool amfInfoIsSet() const;
  void unsetAmfInfo();
  /// <summary>
  /// A map (list of key-value pairs) where a (unique) valid JSON string serves
  /// as key of AmfInfo
  /// </summary>
  std::map<std::string, AmfInfo> &getAmfInfoList();
  void setAmfInfoList(std::map<std::string, AmfInfo> const &value);
  bool amfInfoListIsSet() const;
  void unsetAmfInfoList();
  /// <summary>
  ///
  /// </summary>
  SmfInfo getSmfInfo() const;
  void setSmfInfo(SmfInfo const &value);
  bool smfInfoIsSet() const;
  void unsetSmfInfo();
  /// <summary>
  /// A map (list of key-value pairs) where a (unique) valid JSON string serves
  /// as key of SmfInfo
  /// </summary>
  std::map<std::string, SmfInfo> &getSmfInfoList();
  void setSmfInfoList(std::map<std::string, SmfInfo> const &value);
  bool smfInfoListIsSet() const;
  void unsetSmfInfoList();
  /// <summary>
  ///
  /// </summary>
  UpfInfo getUpfInfo() const;
  void setUpfInfo(UpfInfo const &value);
  bool upfInfoIsSet() const;
  void unsetUpfInfo();
  /// <summary>
  /// A map (list of key-value pairs) where a (unique) valid JSON string serves
  /// as key of UpfInfo
  /// </summary>
  std::map<std::string, UpfInfo> &getUpfInfoList();
  void setUpfInfoList(std::map<std::string, UpfInfo> const &value);
  bool upfInfoListIsSet() const;
  void unsetUpfInfoList();
  /// <summary>
  ///
  /// </summary>
  PcfInfo getPcfInfo() const;
  void setPcfInfo(PcfInfo const &value);
  bool pcfInfoIsSet() const;
  void unsetPcfInfo();
  /// <summary>
  /// A map (list of key-value pairs) where a (unique) valid JSON string serves
  /// as key of PcfInfo
  /// </summary>
  std::map<std::string, PcfInfo> &getPcfInfoList();
  void setPcfInfoList(std::map<std::string, PcfInfo> const &value);
  bool pcfInfoListIsSet() const;
  void unsetPcfInfoList();
  /// <summary>
  ///
  /// </summary>
  BsfInfo getBsfInfo() const;
  void setBsfInfo(BsfInfo const &value);
  bool bsfInfoIsSet() const;
  void unsetBsfInfo();
  /// <summary>
  /// A map (list of key-value pairs) where a (unique) valid JSON string serves
  /// as key of BsfInfo
  /// </summary>
  std::map<std::string, BsfInfo> &getBsfInfoList();
  void setBsfInfoList(std::map<std::string, BsfInfo> const &value);
  bool bsfInfoListIsSet() const;
  void unsetBsfInfoList();
  /// <summary>
  ///
  /// </summary>
  ChfInfo getChfInfo() const;
  void setChfInfo(ChfInfo const &value);
  bool chfInfoIsSet() const;
  void unsetChfInfo();
  /// <summary>
  /// A map (list of key-value pairs) where a (unique) valid JSON string serves
  /// as key of ChfInfo
  /// </summary>
  std::map<std::string, ChfInfo> &getChfInfoList();
  void setChfInfoList(std::map<std::string, ChfInfo> const &value);
  bool chfInfoListIsSet() const;
  void unsetChfInfoList();
  /// <summary>
  ///
  /// </summary>
  NefInfo getNefInfo() const;
  void setNefInfo(NefInfo const &value);
  bool nefInfoIsSet() const;
  void unsetNefInfo();
  /// <summary>
  ///
  /// </summary>
  NrfInfo getNrfInfo() const;
  void setNrfInfo(NrfInfo const &value);
  bool nrfInfoIsSet() const;
  void unsetNrfInfo();
  /// <summary>
  ///
  /// </summary>
  UdsfInfo getUdsfInfo() const;
  void setUdsfInfo(UdsfInfo const &value);
  bool udsfInfoIsSet() const;
  void unsetUdsfInfo();
  /// <summary>
  /// A map (list of key-value pairs) where a (unique) valid JSON string serves
  /// as key of UdsfInfo
  /// </summary>
  std::map<std::string, UdsfInfo> &getUdsfInfoList();
  void setUdsfInfoList(std::map<std::string, UdsfInfo> const &value);
  bool udsfInfoListIsSet() const;
  void unsetUdsfInfoList();
  /// <summary>
  ///
  /// </summary>
  NwdafInfo getNwdafInfo() const;
  void setNwdafInfo(NwdafInfo const &value);
  bool nwdafInfoIsSet() const;
  void unsetNwdafInfo();
  /// <summary>
  /// A map (list of key-value pairs) where a valid JSON string serves as key
  /// </summary>
  std::map<std::string, NwdafInfo> &getNwdafInfoList();
  void setNwdafInfoList(std::map<std::string, NwdafInfo> const &value);
  bool nwdafInfoListIsSet() const;
  void unsetNwdafInfoList();
  /// <summary>
  /// A map (list of key-value pairs) where a (unique) valid JSON string serves
  /// as key of PcscfInfo
  /// </summary>
  std::map<std::string, PcscfInfo> &getPcscfInfoList();
  void setPcscfInfoList(std::map<std::string, PcscfInfo> const &value);
  bool pcscfInfoListIsSet() const;
  void unsetPcscfInfoList();
  /// <summary>
  /// A map (list of key-value pairs) where a (unique) valid JSON string serves
  /// as key of HssInfo
  /// </summary>
  std::map<std::string, HssInfo> &getHssInfoList();
  void setHssInfoList(std::map<std::string, HssInfo> const &value);
  bool hssInfoListIsSet() const;
  void unsetHssInfoList();
  /// <summary>
  ///
  /// </summary>
  Object getCustomInfo() const;
  void setCustomInfo(Object const &value);
  bool customInfoIsSet() const;
  void unsetCustomInfo();
  /// <summary>
  /// string with format \&quot;date-time\&quot; as defined in OpenAPI.
  /// </summary>
  std::string getRecoveryTime() const;
  void setRecoveryTime(std::string const &value);
  bool recoveryTimeIsSet() const;
  void unsetRecoveryTime();
  /// <summary>
  ///
  /// </summary>
  bool isNfServicePersistence() const;
  void setNfServicePersistence(bool const value);
  bool nfServicePersistenceIsSet() const;
  void unsetNfServicePersistence();
  /// <summary>
  ///
  /// </summary>
  std::vector<NFService> &getNfServices();
  void setNfServices(std::vector<NFService> const &value);
  bool nfServicesIsSet() const;
  void unsetNfServices();
  /// <summary>
  /// A map (list of key-value pairs) where serviceInstanceId serves as key of
  /// NFService
  /// </summary>
  std::map<std::string, NFService> &getNfServiceList();
  void setNfServiceList(std::map<std::string, NFService> const &value);
  bool nfServiceListIsSet() const;
  void unsetNfServiceList();
  /// <summary>
  ///
  /// </summary>
  bool isNfProfileChangesSupportInd() const;
  void setNfProfileChangesSupportInd(bool const value);
  bool nfProfileChangesSupportIndIsSet() const;
  void unsetNfProfileChangesSupportInd();
  /// <summary>
  ///
  /// </summary>
  bool isNfProfileChangesInd() const;
  void setNfProfileChangesInd(bool const value);
  bool nfProfileChangesIndIsSet() const;
  void unsetNfProfileChangesInd();
  /// <summary>
  ///
  /// </summary>
  std::vector<DefaultNotificationSubscription> &
  getDefaultNotificationSubscriptions();
  void setDefaultNotificationSubscriptions(
      std::vector<DefaultNotificationSubscription> const &value);
  bool defaultNotificationSubscriptionsIsSet() const;
  void unsetDefaultNotificationSubscriptions();
  /// <summary>
  ///
  /// </summary>
  LmfInfo getLmfInfo() const;
  void setLmfInfo(LmfInfo const &value);
  bool lmfInfoIsSet() const;
  void unsetLmfInfo();
  /// <summary>
  ///
  /// </summary>
  GmlcInfo getGmlcInfo() const;
  void setGmlcInfo(GmlcInfo const &value);
  bool gmlcInfoIsSet() const;
  void unsetGmlcInfo();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getNfSetIdList();
  void setNfSetIdList(std::vector<std::string> const &value);
  bool nfSetIdListIsSet() const;
  void unsetNfSetIdList();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getServingScope();
  void setServingScope(std::vector<std::string> const &value);
  bool servingScopeIsSet() const;
  void unsetServingScope();
  /// <summary>
  ///
  /// </summary>
  bool isLcHSupportInd() const;
  void setLcHSupportInd(bool const value);
  bool lcHSupportIndIsSet() const;
  void unsetLcHSupportInd();
  /// <summary>
  ///
  /// </summary>
  bool isOlcHSupportInd() const;
  void setOlcHSupportInd(bool const value);
  bool olcHSupportIndIsSet() const;
  void unsetOlcHSupportInd();
  /// <summary>
  /// A map (list of key-value pairs) where NfSetId serves as key of DateTime
  /// </summary>
  std::map<std::string, std::string> &getNfSetRecoveryTimeList();
  void
  setNfSetRecoveryTimeList(std::map<std::string, std::string> const &value);
  bool nfSetRecoveryTimeListIsSet() const;
  void unsetNfSetRecoveryTimeList();
  /// <summary>
  /// A map (list of key-value pairs) where NfServiceSetId serves as key of
  /// DateTime
  /// </summary>
  std::map<std::string, std::string> &getServiceSetRecoveryTimeList();
  void setServiceSetRecoveryTimeList(
      std::map<std::string, std::string> const &value);
  bool serviceSetRecoveryTimeListIsSet() const;
  void unsetServiceSetRecoveryTimeList();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getScpDomains();
  void setScpDomains(std::vector<std::string> const &value);
  bool scpDomainsIsSet() const;
  void unsetScpDomains();
  /// <summary>
  ///
  /// </summary>
  ScpInfo getScpInfo() const;
  void setScpInfo(ScpInfo const &value);
  bool scpInfoIsSet() const;
  void unsetScpInfo();
  /// <summary>
  ///
  /// </summary>
  SeppInfo getSeppInfo() const;
  void setSeppInfo(SeppInfo const &value);
  bool seppInfoIsSet() const;
  void unsetSeppInfo();
  /// <summary>
  /// Vendor ID of the NF Service instance (Private Enterprise Number assigned
  /// by IANA)
  /// </summary>
  std::string getVendorId() const;
  void setVendorId(std::string const &value);
  bool vendorIdIsSet() const;
  void unsetVendorId();
  /// <summary>
  /// the key of the map is the IANA-assigned SMI Network Management Private
  /// Enterprise Codes
  /// </summary>
  std::map<std::string, std::vector<VendorSpecificFeature>> &
  getSupportedVendorSpecificFeatures();
  void setSupportedVendorSpecificFeatures(
      std::map<std::string, std::vector<VendorSpecificFeature>> const &value);
  bool supportedVendorSpecificFeaturesIsSet() const;
  void unsetSupportedVendorSpecificFeatures();
  /// <summary>
  /// A map (list of key-value pairs) where a valid JSON string serves as key
  /// </summary>
  std::map<std::string, AanfInfo> &getAanfInfoList();
  void setAanfInfoList(std::map<std::string, AanfInfo> const &value);
  bool aanfInfoListIsSet() const;
  void unsetAanfInfoList();
  /// <summary>
  ///
  /// </summary>
  5GDdnmfInfo getR5gDdnmfInfo() const;
  void setR5gDdnmfInfo(5GDdnmfInfo const &value);
  bool r5gDdnmfInfoIsSet() const;
  void unsetr_5gDdnmfInfo();
  /// <summary>
  ///
  /// </summary>
  MfafInfo getMfafInfo() const;
  void setMfafInfo(MfafInfo const &value);
  bool mfafInfoIsSet() const;
  void unsetMfafInfo();
  /// <summary>
  /// A map (list of key-value pairs) where a valid JSON string serves as key
  /// </summary>
  std::map<std::string, EasdfInfo> &getEasdfInfoList();
  void setEasdfInfoList(std::map<std::string, EasdfInfo> const &value);
  bool easdfInfoListIsSet() const;
  void unsetEasdfInfoList();
  /// <summary>
  ///
  /// </summary>
  DccfInfo getDccfInfo() const;
  void setDccfInfo(DccfInfo const &value);
  bool dccfInfoIsSet() const;
  void unsetDccfInfo();

  friend void to_json(nlohmann::json &j, const NFProfile &o);
  friend void from_json(const nlohmann::json &j, NFProfile &o);

protected:
  std::string m_NfInstanceId;

  std::string m_NfInstanceName;
  bool m_NfInstanceNameIsSet;
  NFType m_NfType;

  NFStatus m_NfStatus;

  int32_t m_HeartBeatTimer;
  bool m_HeartBeatTimerIsSet;
  std::vector<PlmnId> m_PlmnList;
  bool m_PlmnListIsSet;
  std::vector<PlmnIdNid> m_SnpnList;
  bool m_SnpnListIsSet;
  std::vector<ExtSnssai> m_SNssais;
  bool m_SNssaisIsSet;
  std::vector<PlmnSnssai> m_PerPlmnSnssaiList;
  bool m_PerPlmnSnssaiListIsSet;
  std::vector<std::string> m_NsiList;
  bool m_NsiListIsSet;
  std::string m_Fqdn;
  bool m_FqdnIsSet;
  std::string m_InterPlmnFqdn;
  bool m_InterPlmnFqdnIsSet;
  std::vector<std::string> m_Ipv4Addresses;
  bool m_Ipv4AddressesIsSet;
  std::vector<Ipv6Addr> m_Ipv6Addresses;
  bool m_Ipv6AddressesIsSet;
  std::vector<PlmnId> m_AllowedPlmns;
  bool m_AllowedPlmnsIsSet;
  std::vector<PlmnIdNid> m_AllowedSnpns;
  bool m_AllowedSnpnsIsSet;
  std::vector<NFType> m_AllowedNfTypes;
  bool m_AllowedNfTypesIsSet;
  std::vector<std::string> m_AllowedNfDomains;
  bool m_AllowedNfDomainsIsSet;
  std::vector<ExtSnssai> m_AllowedNssais;
  bool m_AllowedNssaisIsSet;
  int32_t m_Priority;
  bool m_PriorityIsSet;
  int32_t m_Capacity;
  bool m_CapacityIsSet;
  int32_t m_Load;
  bool m_LoadIsSet;
  std::string m_LoadTimeStamp;
  bool m_LoadTimeStampIsSet;
  std::string m_Locality;
  bool m_LocalityIsSet;
  UdrInfo m_UdrInfo;
  bool m_UdrInfoIsSet;
  std::map<std::string, UdrInfo> m_UdrInfoList;
  bool m_UdrInfoListIsSet;
  UdmInfo m_UdmInfo;
  bool m_UdmInfoIsSet;
  std::map<std::string, UdmInfo> m_UdmInfoList;
  bool m_UdmInfoListIsSet;
  AusfInfo m_AusfInfo;
  bool m_AusfInfoIsSet;
  std::map<std::string, AusfInfo> m_AusfInfoList;
  bool m_AusfInfoListIsSet;
  AmfInfo m_AmfInfo;
  bool m_AmfInfoIsSet;
  std::map<std::string, AmfInfo> m_AmfInfoList;
  bool m_AmfInfoListIsSet;
  SmfInfo m_SmfInfo;
  bool m_SmfInfoIsSet;
  std::map<std::string, SmfInfo> m_SmfInfoList;
  bool m_SmfInfoListIsSet;
  UpfInfo m_UpfInfo;
  bool m_UpfInfoIsSet;
  std::map<std::string, UpfInfo> m_UpfInfoList;
  bool m_UpfInfoListIsSet;
  PcfInfo m_PcfInfo;
  bool m_PcfInfoIsSet;
  std::map<std::string, PcfInfo> m_PcfInfoList;
  bool m_PcfInfoListIsSet;
  BsfInfo m_BsfInfo;
  bool m_BsfInfoIsSet;
  std::map<std::string, BsfInfo> m_BsfInfoList;
  bool m_BsfInfoListIsSet;
  ChfInfo m_ChfInfo;
  bool m_ChfInfoIsSet;
  std::map<std::string, ChfInfo> m_ChfInfoList;
  bool m_ChfInfoListIsSet;
  NefInfo m_NefInfo;
  bool m_NefInfoIsSet;
  NrfInfo m_NrfInfo;
  bool m_NrfInfoIsSet;
  UdsfInfo m_UdsfInfo;
  bool m_UdsfInfoIsSet;
  std::map<std::string, UdsfInfo> m_UdsfInfoList;
  bool m_UdsfInfoListIsSet;
  NwdafInfo m_NwdafInfo;
  bool m_NwdafInfoIsSet;
  std::map<std::string, NwdafInfo> m_NwdafInfoList;
  bool m_NwdafInfoListIsSet;
  std::map<std::string, PcscfInfo> m_PcscfInfoList;
  bool m_PcscfInfoListIsSet;
  std::map<std::string, HssInfo> m_HssInfoList;
  bool m_HssInfoListIsSet;
  Object m_CustomInfo;
  bool m_CustomInfoIsSet;
  std::string m_RecoveryTime;
  bool m_RecoveryTimeIsSet;
  bool m_NfServicePersistence;
  bool m_NfServicePersistenceIsSet;
  std::vector<NFService> m_NfServices;
  bool m_NfServicesIsSet;
  std::map<std::string, NFService> m_NfServiceList;
  bool m_NfServiceListIsSet;
  bool m_NfProfileChangesSupportInd;
  bool m_NfProfileChangesSupportIndIsSet;
  bool m_NfProfileChangesInd;
  bool m_NfProfileChangesIndIsSet;
  std::vector<DefaultNotificationSubscription>
      m_DefaultNotificationSubscriptions;
  bool m_DefaultNotificationSubscriptionsIsSet;
  LmfInfo m_LmfInfo;
  bool m_LmfInfoIsSet;
  GmlcInfo m_GmlcInfo;
  bool m_GmlcInfoIsSet;
  std::vector<std::string> m_NfSetIdList;
  bool m_NfSetIdListIsSet;
  std::vector<std::string> m_ServingScope;
  bool m_ServingScopeIsSet;
  bool m_LcHSupportInd;
  bool m_LcHSupportIndIsSet;
  bool m_OlcHSupportInd;
  bool m_OlcHSupportIndIsSet;
  std::map<std::string, std::string> m_NfSetRecoveryTimeList;
  bool m_NfSetRecoveryTimeListIsSet;
  std::map<std::string, std::string> m_ServiceSetRecoveryTimeList;
  bool m_ServiceSetRecoveryTimeListIsSet;
  std::vector<std::string> m_ScpDomains;
  bool m_ScpDomainsIsSet;
  ScpInfo m_ScpInfo;
  bool m_ScpInfoIsSet;
  SeppInfo m_SeppInfo;
  bool m_SeppInfoIsSet;
  std::string m_VendorId;
  bool m_VendorIdIsSet;
  std::map<std::string, std::vector<VendorSpecificFeature>>
      m_SupportedVendorSpecificFeatures;
  bool m_SupportedVendorSpecificFeaturesIsSet;
  std::map<std::string, AanfInfo> m_AanfInfoList;
  bool m_AanfInfoListIsSet;
  5GDdnmfInfo m_r_5gDdnmfInfo;
  bool m_r_5gDdnmfInfoIsSet;
  MfafInfo m_MfafInfo;
  bool m_MfafInfoIsSet;
  std::map<std::string, EasdfInfo> m_EasdfInfoList;
  bool m_EasdfInfoListIsSet;
  DccfInfo m_DccfInfo;
  bool m_DccfInfoIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* NFProfile_H_ */