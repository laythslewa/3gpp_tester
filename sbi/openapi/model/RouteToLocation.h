/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.3.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * RouteToLocation.h
 *
 * Either the \&quot;routeInfo\&quot; attribute or the \&quot;routeProfId\&quot;
 * attribute shall be included in the \&quot;RouteToLocation\&quot; data type.
 */

#ifndef RouteToLocation_H_
#define RouteToLocation_H_

#include "RouteInformation.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Either the \&quot;routeInfo\&quot; attribute or the
/// \&quot;routeProfId\&quot; attribute shall be included in the
/// \&quot;RouteToLocation\&quot; data type.
/// </summary>
class RouteToLocation {
public:
  RouteToLocation();
  virtual ~RouteToLocation();

  void validate();

  /////////////////////////////////////////////
  /// RouteToLocation members

  /// <summary>
  /// DNAI (Data network access identifier), see clause 5.6.7 of 3GPP TS 23.501.
  /// </summary>
  std::string getDnai() const;
  void setDnai(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  RouteInformation getRouteInfo() const;
  void setRouteInfo(RouteInformation const &value);
  bool routeInfoIsSet() const;
  void unsetRouteInfo();
  /// <summary>
  /// Identifies the routing profile Id.
  /// </summary>
  std::string getRouteProfId() const;
  void setRouteProfId(std::string const &value);
  bool routeProfIdIsSet() const;
  void unsetRouteProfId();

  friend void to_json(nlohmann::json &j, const RouteToLocation &o);
  friend void from_json(const nlohmann::json &j, RouteToLocation &o);

protected:
  std::string m_Dnai;

  RouteInformation m_RouteInfo;
  bool m_RouteInfoIsSet;
  std::string m_RouteProfId;
  bool m_RouteProfIdIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* RouteToLocation_H_ */