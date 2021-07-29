/**
 * Namf_EventExposure
 * AMF Event Exposure Service © 2021, 3GPP Organizational Partners (ARIB, ATIS,
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
 * AmfEventSubscription.h
 *
 * Represents an individual event subscription resource on AMF
 */

#ifndef AmfEventSubscription_H_
#define AmfEventSubscription_H_

#include "AmfEvent.h"
#include "AmfEventMode.h"
#include "NFType.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents an individual event subscription resource on AMF
/// </summary>
class AmfEventSubscription {
public:
  AmfEventSubscription();
  virtual ~AmfEventSubscription();

  void validate();

  /////////////////////////////////////////////
  /// AmfEventSubscription members

  /// <summary>
  ///
  /// </summary>
  std::vector<AmfEvent> &getEventList();
  void setEventList(std::vector<AmfEvent> const &value);
  /// <summary>
  /// String providing an URI formatted according to RFC 3986
  /// </summary>
  std::string getEventNotifyUri() const;
  void setEventNotifyUri(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  std::string getNotifyCorrelationId() const;
  void setNotifyCorrelationId(std::string const &value);
  /// <summary>
  /// String uniquely identifying a NF instance. The format of the NF Instance
  /// ID shall be a Universally Unique Identifier (UUID) version 4, as described
  /// in IETF RFC 4122.
  /// </summary>
  std::string getNfId() const;
  void setNfId(std::string const &value);
  /// <summary>
  /// String providing an URI formatted according to RFC 3986
  /// </summary>
  std::string getSubsChangeNotifyUri() const;
  void setSubsChangeNotifyUri(std::string const &value);
  bool subsChangeNotifyUriIsSet() const;
  void unsetSubsChangeNotifyUri();
  /// <summary>
  ///
  /// </summary>
  std::string getSubsChangeNotifyCorrelationId() const;
  void setSubsChangeNotifyCorrelationId(std::string const &value);
  bool subsChangeNotifyCorrelationIdIsSet() const;
  void unsetSubsChangeNotifyCorrelationId();
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
  /// String identifying a group of devices network internal globally unique ID
  /// which identifies a set of IMSIs, as specified in clause 19.9 of 3GPP
  /// TS 23.003.
  /// </summary>
  std::string getGroupId() const;
  void setGroupId(std::string const &value);
  bool groupIdIsSet() const;
  void unsetGroupId();
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
  /// String representing a Permanent Equipment Identifier that may contain - an
  /// IMEI or IMEISV, as specified in clause 6.2 of 3GPP TS 23.003; a MAC
  /// address for a 5G-RG or FN-RG via wireline access, with an indication that
  /// this address cannot be trusted for regulatory purpose if this address
  /// cannot be used as an Equipment Identifier of the FN-RG, as specified in
  /// clause 4.7.7 of 3GPP TS23.316. Examples are imei-012345678901234 or
  /// imeisv-0123456789012345.
  /// </summary>
  std::string getPei() const;
  void setPei(std::string const &value);
  bool peiIsSet() const;
  void unsetPei();
  /// <summary>
  ///
  /// </summary>
  bool isAnyUE() const;
  void setAnyUE(bool const value);
  bool anyUEIsSet() const;
  void unsetAnyUE();
  /// <summary>
  ///
  /// </summary>
  AmfEventMode getOptions() const;
  void setOptions(AmfEventMode const &value);
  bool optionsIsSet() const;
  void unsetOptions();
  /// <summary>
  ///
  /// </summary>
  NFType getSourceNfType() const;
  void setSourceNfType(NFType const &value);
  bool sourceNfTypeIsSet() const;
  void unsetSourceNfType();

  friend void to_json(nlohmann::json &j, const AmfEventSubscription &o);
  friend void from_json(const nlohmann::json &j, AmfEventSubscription &o);

protected:
  std::vector<AmfEvent> m_EventList;

  std::string m_EventNotifyUri;

  std::string m_NotifyCorrelationId;

  std::string m_NfId;

  std::string m_SubsChangeNotifyUri;
  bool m_SubsChangeNotifyUriIsSet;
  std::string m_SubsChangeNotifyCorrelationId;
  bool m_SubsChangeNotifyCorrelationIdIsSet;
  std::string m_Supi;
  bool m_SupiIsSet;
  std::string m_GroupId;
  bool m_GroupIdIsSet;
  std::string m_Gpsi;
  bool m_GpsiIsSet;
  std::string m_Pei;
  bool m_PeiIsSet;
  bool m_AnyUE;
  bool m_AnyUEIsSet;
  AmfEventMode m_Options;
  bool m_OptionsIsSet;
  NFType m_SourceNfType;
  bool m_SourceNfTypeIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AmfEventSubscription_H_ */