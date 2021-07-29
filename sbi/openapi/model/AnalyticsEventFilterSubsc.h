/**
 * 3gpp-analyticsexposure
 * API for Analytics Exposure. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
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
 * AnalyticsEventFilterSubsc.h
 *
 * Represents an analytics event filter.
 */

#ifndef AnalyticsEventFilterSubsc_H_
#define AnalyticsEventFilterSubsc_H_

#include "EventReportingRequirement.h"
#include "Exception.h"
#include "ExpectedAnalyticsType.h"
#include "ExpectedUeBehaviourData.h"
#include "LocationArea5G.h"
#include "NetworkPerfRequirement.h"
#include "QosRequirement.h"
#include "RetainabilityThreshold.h"
#include "Snssai.h"
#include "ThresholdLevel.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents an analytics event filter.
/// </summary>
class AnalyticsEventFilterSubsc {
public:
  AnalyticsEventFilterSubsc();
  virtual ~AnalyticsEventFilterSubsc();

  void validate();

  /////////////////////////////////////////////
  /// AnalyticsEventFilterSubsc members

  /// <summary>
  ///
  /// </summary>
  std::vector<NetworkPerfRequirement> &getNwPerfReqs();
  void setNwPerfReqs(std::vector<NetworkPerfRequirement> const &value);
  bool nwPerfReqsIsSet() const;
  void unsetNwPerfReqs();
  /// <summary>
  ///
  /// </summary>
  LocationArea5G getLocArea() const;
  void setLocArea(LocationArea5G const &value);
  bool locAreaIsSet() const;
  void unsetLocArea();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getAppIds();
  void setAppIds(std::vector<std::string> const &value);
  bool appIdsIsSet() const;
  void unsetAppIds();
  /// <summary>
  /// String representing a Data Network as defined in clause 9A of 3GPP
  /// TS 23.003; it shall contain either a DNN Network Identifier, or a full DNN
  /// with both the Network Identifier and Operator Identifier, as specified in
  /// 3GPP TS 23.003 clause 9.1.1 and 9.1.2. It shall be coded as string in
  /// which the labels are separated by dots (e.g.
  /// \&quot;Label1.Label2.Label3\&quot;).
  /// </summary>
  std::string getDnn() const;
  void setDnn(std::string const &value);
  bool dnnIsSet() const;
  void unsetDnn();
  /// <summary>
  ///
  /// </summary>
  std::vector<Exception> &getExcepRequs();
  void setExcepRequs(std::vector<Exception> const &value);
  bool excepRequsIsSet() const;
  void unsetExcepRequs();
  /// <summary>
  ///
  /// </summary>
  ExpectedAnalyticsType getExptAnaType() const;
  void setExptAnaType(ExpectedAnalyticsType const &value);
  bool exptAnaTypeIsSet() const;
  void unsetExptAnaType();
  /// <summary>
  ///
  /// </summary>
  ExpectedUeBehaviourData getExptUeBehav() const;
  void setExptUeBehav(ExpectedUeBehaviourData const &value);
  bool exptUeBehavIsSet() const;
  void unsetExptUeBehav();
  /// <summary>
  ///
  /// </summary>
  std::vector<ThresholdLevel> &getReptThlds();
  void setReptThlds(std::vector<ThresholdLevel> const &value);
  bool reptThldsIsSet() const;
  void unsetReptThlds();
  /// <summary>
  ///
  /// </summary>
  Snssai getSnssai() const;
  void setSnssai(Snssai const &value);
  bool snssaiIsSet() const;
  void unsetSnssai();
  /// <summary>
  ///
  /// </summary>
  QosRequirement getQosReq() const;
  void setQosReq(QosRequirement const &value);
  bool qosReqIsSet() const;
  void unsetQosReq();
  /// <summary>
  ///
  /// </summary>
  std::vector<RetainabilityThreshold> &getQosFlowRetThds();
  void setQosFlowRetThds(std::vector<RetainabilityThreshold> const &value);
  bool qosFlowRetThdsIsSet() const;
  void unsetQosFlowRetThds();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getRanUeThrouThds();
  void setRanUeThrouThds(std::vector<std::string> const &value);
  bool ranUeThrouThdsIsSet() const;
  void unsetRanUeThrouThds();
  /// <summary>
  ///
  /// </summary>
  EventReportingRequirement getExtraReportReq() const;
  void setExtraReportReq(EventReportingRequirement const &value);
  bool extraReportReqIsSet() const;
  void unsetExtraReportReq();

  friend void to_json(nlohmann::json &j, const AnalyticsEventFilterSubsc &o);
  friend void from_json(const nlohmann::json &j, AnalyticsEventFilterSubsc &o);

protected:
  std::vector<NetworkPerfRequirement> m_NwPerfReqs;
  bool m_NwPerfReqsIsSet;
  LocationArea5G m_LocArea;
  bool m_LocAreaIsSet;
  std::vector<std::string> m_AppIds;
  bool m_AppIdsIsSet;
  std::string m_Dnn;
  bool m_DnnIsSet;
  std::vector<Exception> m_ExcepRequs;
  bool m_ExcepRequsIsSet;
  ExpectedAnalyticsType m_ExptAnaType;
  bool m_ExptAnaTypeIsSet;
  ExpectedUeBehaviourData m_ExptUeBehav;
  bool m_ExptUeBehavIsSet;
  std::vector<ThresholdLevel> m_ReptThlds;
  bool m_ReptThldsIsSet;
  Snssai m_Snssai;
  bool m_SnssaiIsSet;
  QosRequirement m_QosReq;
  bool m_QosReqIsSet;
  std::vector<RetainabilityThreshold> m_QosFlowRetThds;
  bool m_QosFlowRetThdsIsSet;
  std::vector<std::string> m_RanUeThrouThds;
  bool m_RanUeThrouThdsIsSet;
  EventReportingRequirement m_ExtraReportReq;
  bool m_ExtraReportReqIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AnalyticsEventFilterSubsc_H_ */