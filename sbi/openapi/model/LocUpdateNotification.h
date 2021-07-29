/**
 * Ngmlc_Location
 * Ngmlc_Location Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
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
 * LocUpdateNotification.h
 *
 * Location Update Notification
 */

#ifndef LocUpdateNotification_H_
#define LocUpdateNotification_H_

#include "AccuracyFulfilmentIndicator.h"
#include "CivicAddress.h"
#include "GeographicArea.h"
#include "LcsQosClass.h"
#include "LocationRequestType.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Location Update Notification
/// </summary>
class LocUpdateNotification {
public:
  LocUpdateNotification();
  virtual ~LocUpdateNotification();

  void validate();

  /////////////////////////////////////////////
  /// LocUpdateNotification members

  /// <summary>
  /// String identifying a Gpsi shall contain either an External Id or an
  /// MSISDN. It shall be formatted as follows -External Identifier&#x3D;
  /// \&quot;extid-&lt;extid&gt;, where &lt;extid&gt; shall be formatted
  /// according to clause 19.7.2 of 3GPP TS 23.003 that describes an External
  /// Identifier.
  /// </summary>
  std::string getGpsi() const;
  void setGpsi(std::string const &value);
  bool gpsiIsSet() const;
  void unsetGpsi();
  /// <summary>
  /// String identifying a Supi that shall contain either an IMSI, a network
  /// specific identifier, a Global Cable Identifier (GCI) or a Global Line
  /// Identifier (GLI) as specified in clause 2.2A of 3GPP TS 23.003. It shall
  /// be formatted as follows  - for an IMSI \&quot;imsi-&lt;imsi&gt;\&quot;,
  /// where &lt;imsi&gt; shall be formatted according to clause 2.2 of 3GPP
  /// TS 23.003 that describes an IMSI.  - for a network specific identifier
  /// \&quot;nai-&lt;nai&gt;, where &lt;nai&gt; shall be formatted according to
  /// clause 28.7.2 of 3GPP TS 23.003 that describes an NAI.  - for a GCI
  /// \&quot;gci-&lt;gci&gt;\&quot;, where &lt;gci&gt; shall be formatted
  /// according to clause 28.15.2 of 3GPP TS 23.003.  - for a GLI
  /// \&quot;gli-&lt;gli&gt;\&quot;, where &lt;gli&gt; shall be formatted
  /// according to clause 28.16.2 of 3GPP TS 23.003.To enable that the value is
  /// used as part of an URI, the string shall only contain characters allowed
  /// according to the \&quot;lower-with-hyphen\&quot; naming convention defined
  /// in 3GPP TS 29.501.
  /// </summary>
  std::string getSupi() const;
  void setSupi(std::string const &value);
  bool supiIsSet() const;
  void unsetSupi();
  /// <summary>
  ///
  /// </summary>
  LocationRequestType getLocationRequestType() const;
  void setLocationRequestType(LocationRequestType const &value);
  /// <summary>
  ///
  /// </summary>
  GeographicArea getLocationEstimate() const;
  void setLocationEstimate(GeographicArea const &value);
  /// <summary>
  /// Indicates value of the age of the location estimate.
  /// </summary>
  int32_t getAgeOfLocationEstimate() const;
  void setAgeOfLocationEstimate(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  AccuracyFulfilmentIndicator getAccuracyFulfilmentIndicator() const;
  void setAccuracyFulfilmentIndicator(AccuracyFulfilmentIndicator const &value);
  /// <summary>
  ///
  /// </summary>
  CivicAddress getCivicAddress() const;
  void setCivicAddress(CivicAddress const &value);
  bool civicAddressIsSet() const;
  void unsetCivicAddress();
  /// <summary>
  ///
  /// </summary>
  LcsQosClass getLcsQosClass() const;
  void setLcsQosClass(LcsQosClass const &value);
  /// <summary>
  ///
  /// </summary>
  std::string getAfId() const;
  void setAfId(std::string const &value);
  bool afIdIsSet() const;
  void unsetAfId();
  /// <summary>
  /// Contains the service identity
  /// </summary>
  std::string getServiceIdentity() const;
  void setServiceIdentity(std::string const &value);
  bool serviceIdentityIsSet() const;
  void unsetServiceIdentity();

  friend void to_json(nlohmann::json &j, const LocUpdateNotification &o);
  friend void from_json(const nlohmann::json &j, LocUpdateNotification &o);

protected:
  std::string m_Gpsi;
  bool m_GpsiIsSet;
  std::string m_Supi;
  bool m_SupiIsSet;
  LocationRequestType m_LocationRequestType;

  GeographicArea m_LocationEstimate;

  int32_t m_AgeOfLocationEstimate;

  AccuracyFulfilmentIndicator m_AccuracyFulfilmentIndicator;

  CivicAddress m_CivicAddress;
  bool m_CivicAddressIsSet;
  LcsQosClass m_LcsQosClass;

  std::string m_AfId;
  bool m_AfIdIsSet;
  std::string m_ServiceIdentity;
  bool m_ServiceIdentityIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* LocUpdateNotification_H_ */