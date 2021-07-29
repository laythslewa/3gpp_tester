/**
 * Npcf_PolicyAuthorization Service API
 * PCF Policy Authorization Service. © 2021, 3GPP Organizational Partners (ARIB,
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
 * AfRoutingRequirementRm.h
 *
 * this data type is defined in the same way as the AfRoutingRequirement data
 * type, but with the OpenAPI nullable property set to true and the spVal and
 * tempVals attributes defined as removable.
 */

#ifndef AfRoutingRequirementRm_H_
#define AfRoutingRequirementRm_H_

#include "RouteToLocation.h"
#include "SpatialValidityRm.h"
#include "TemporalValidity.h"
#include "UpPathChgEvent.h"
#include <nlohmann/json.hpp>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// this data type is defined in the same way as the AfRoutingRequirement data
/// type, but with the OpenAPI nullable property set to true and the spVal and
/// tempVals attributes defined as removable.
/// </summary>
class AfRoutingRequirementRm {
public:
  AfRoutingRequirementRm();
  virtual ~AfRoutingRequirementRm();

  void validate();

  /////////////////////////////////////////////
  /// AfRoutingRequirementRm members

  /// <summary>
  ///
  /// </summary>
  bool isAppReloc() const;
  void setAppReloc(bool const value);
  bool appRelocIsSet() const;
  void unsetAppReloc();
  /// <summary>
  ///
  /// </summary>
  std::vector<RouteToLocation> &getRouteToLocs();
  void setRouteToLocs(std::vector<RouteToLocation> const &value);
  bool routeToLocsIsSet() const;
  void unsetRouteToLocs();
  /// <summary>
  ///
  /// </summary>
  SpatialValidityRm getSpVal() const;
  void setSpVal(SpatialValidityRm const &value);
  bool spValIsSet() const;
  void unsetSpVal();
  /// <summary>
  ///
  /// </summary>
  std::vector<TemporalValidity> &getTempVals();
  void setTempVals(std::vector<TemporalValidity> const &value);
  bool tempValsIsSet() const;
  void unsetTempVals();
  /// <summary>
  ///
  /// </summary>
  UpPathChgEvent getUpPathChgSub() const;
  void setUpPathChgSub(UpPathChgEvent const &value);
  bool upPathChgSubIsSet() const;
  void unsetUpPathChgSub();
  /// <summary>
  ///
  /// </summary>
  bool isAddrPreserInd() const;
  void setAddrPreserInd(bool const value);
  bool addrPreserIndIsSet() const;
  void unsetAddrPreserInd();

  friend void to_json(nlohmann::json &j, const AfRoutingRequirementRm &o);
  friend void from_json(const nlohmann::json &j, AfRoutingRequirementRm &o);

protected:
  bool m_AppReloc;
  bool m_AppRelocIsSet;
  std::vector<RouteToLocation> m_RouteToLocs;
  bool m_RouteToLocsIsSet;
  SpatialValidityRm m_SpVal;
  bool m_SpValIsSet;
  std::vector<TemporalValidity> m_TempVals;
  bool m_TempValsIsSet;
  UpPathChgEvent m_UpPathChgSub;
  bool m_UpPathChgSubIsSet;
  bool m_AddrPreserInd;
  bool m_AddrPreserIndIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AfRoutingRequirementRm_H_ */
