/**
 * 3gpp-traffic-influence
 * API for AF traffic influence © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * TrafficInfluSubPatch.h
 *
 * Represents parameters to request the modification of a traffic influence
 * subscription resource.
 */

#ifndef TrafficInfluSubPatch_H_
#define TrafficInfluSubPatch_H_

#include "EthFlowDescription.h"
#include "FlowInfo.h"
#include "RouteToLocation.h"
#include "TemporalValidity.h"
#include "UserPlaneLatencyRequirements.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents parameters to request the modification of a traffic influence
/// subscription resource.
/// </summary>
class TrafficInfluSubPatch {
public:
  TrafficInfluSubPatch();
  virtual ~TrafficInfluSubPatch();

  void validate();

  /////////////////////////////////////////////
  /// TrafficInfluSubPatch members

  /// <summary>
  /// Identifies whether an application can be relocated once a location of the
  /// application has been selected.
  /// </summary>
  bool isAppReloInd() const;
  void setAppReloInd(bool const value);
  bool appReloIndIsSet() const;
  void unsetAppReloInd();
  /// <summary>
  /// Identifies IP packet filters.
  /// </summary>
  std::vector<FlowInfo> &getTrafficFilters();
  void setTrafficFilters(std::vector<FlowInfo> const &value);
  bool trafficFiltersIsSet() const;
  void unsetTrafficFilters();
  /// <summary>
  /// Identifies Ethernet packet filters.
  /// </summary>
  std::vector<EthFlowDescription> &getEthTrafficFilters();
  void setEthTrafficFilters(std::vector<EthFlowDescription> const &value);
  bool ethTrafficFiltersIsSet() const;
  void unsetEthTrafficFilters();
  /// <summary>
  /// Identifies the N6 traffic routing requirement.
  /// </summary>
  std::vector<RouteToLocation> &getTrafficRoutes();
  void setTrafficRoutes(std::vector<RouteToLocation> const &value);
  bool trafficRoutesIsSet() const;
  void unsetTrafficRoutes();
  /// <summary>
  ///
  /// </summary>
  bool isTfcCorrInd() const;
  void setTfcCorrInd(bool const value);
  bool tfcCorrIndIsSet() const;
  void unsetTfcCorrInd();
  /// <summary>
  ///
  /// </summary>
  std::vector<TemporalValidity> &getTempValidities();
  void setTempValidities(std::vector<TemporalValidity> const &value);
  bool tempValiditiesIsSet() const;
  void unsetTempValidities();
  /// <summary>
  /// Identifies a geographic zone that the AF request applies only to the
  /// traffic of UE(s) located in this specific zone.
  /// </summary>
  std::vector<std::string> &getValidGeoZoneIds();
  void setValidGeoZoneIds(std::vector<std::string> const &value);
  bool validGeoZoneIdsIsSet() const;
  void unsetValidGeoZoneIds();
  /// <summary>
  ///
  /// </summary>
  bool isAfAckInd() const;
  void setAfAckInd(bool const value);
  bool afAckIndIsSet() const;
  void unsetAfAckInd();
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
  UserPlaneLatencyRequirements getUpLatReq() const;
  void setUpLatReq(UserPlaneLatencyRequirements const &value);
  bool upLatReqIsSet() const;
  void unsetUpLatReq();
  /// <summary>
  /// string formatted according to IETF RFC 3986 identifying a referenced
  /// resource.
  /// </summary>
  std::string getNotificationDestination() const;
  void setNotificationDestination(std::string const &value);
  bool notificationDestinationIsSet() const;
  void unsetNotificationDestination();

  friend void to_json(nlohmann::json &j, const TrafficInfluSubPatch &o);
  friend void from_json(const nlohmann::json &j, TrafficInfluSubPatch &o);

protected:
  bool m_AppReloInd;
  bool m_AppReloIndIsSet;
  std::vector<FlowInfo> m_TrafficFilters;
  bool m_TrafficFiltersIsSet;
  std::vector<EthFlowDescription> m_EthTrafficFilters;
  bool m_EthTrafficFiltersIsSet;
  std::vector<RouteToLocation> m_TrafficRoutes;
  bool m_TrafficRoutesIsSet;
  bool m_TfcCorrInd;
  bool m_TfcCorrIndIsSet;
  std::vector<TemporalValidity> m_TempValidities;
  bool m_TempValiditiesIsSet;
  std::vector<std::string> m_ValidGeoZoneIds;
  bool m_ValidGeoZoneIdsIsSet;
  bool m_AfAckInd;
  bool m_AfAckIndIsSet;
  bool m_AddrPreserInd;
  bool m_AddrPreserIndIsSet;
  UserPlaneLatencyRequirements m_UpLatReq;
  bool m_UpLatReqIsSet;
  std::string m_NotificationDestination;
  bool m_NotificationDestinationIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* TrafficInfluSubPatch_H_ */