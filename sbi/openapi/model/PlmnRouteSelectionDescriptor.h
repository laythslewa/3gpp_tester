/**
 * Unified Data Repository Service API file for policy data
 * The API version is defined in 3GPP TS 29.504 © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * PlmnRouteSelectionDescriptor.h
 *
 * Contains the route selection descriptors (combinations of SNSSAI, DNNs, PDU
 * session types, SSC modes and ATSSS information) allowed by subscription to
 * the UE for a serving PLMN
 */

#ifndef PlmnRouteSelectionDescriptor_H_
#define PlmnRouteSelectionDescriptor_H_

#include "PlmnId.h"
#include "SnssaiRouteSelectionDescriptor.h"
#include <nlohmann/json.hpp>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Contains the route selection descriptors (combinations of SNSSAI, DNNs, PDU
/// session types, SSC modes and ATSSS information) allowed by subscription to
/// the UE for a serving PLMN
/// </summary>
class PlmnRouteSelectionDescriptor {
public:
  PlmnRouteSelectionDescriptor();
  virtual ~PlmnRouteSelectionDescriptor();

  void validate();

  /////////////////////////////////////////////
  /// PlmnRouteSelectionDescriptor members

  /// <summary>
  ///
  /// </summary>
  PlmnId getServingPlmn() const;
  void setServingPlmn(PlmnId const &value);
  /// <summary>
  ///
  /// </summary>
  std::vector<SnssaiRouteSelectionDescriptor> &getSnssaiRouteSelDescs();
  void setSnssaiRouteSelDescs(
      std::vector<SnssaiRouteSelectionDescriptor> const &value);
  bool snssaiRouteSelDescsIsSet() const;
  void unsetSnssaiRouteSelDescs();

  friend void to_json(nlohmann::json &j, const PlmnRouteSelectionDescriptor &o);
  friend void from_json(const nlohmann::json &j,
                        PlmnRouteSelectionDescriptor &o);

protected:
  PlmnId m_ServingPlmn;

  std::vector<SnssaiRouteSelectionDescriptor> m_SnssaiRouteSelDescs;
  bool m_SnssaiRouteSelDescsIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* PlmnRouteSelectionDescriptor_H_ */