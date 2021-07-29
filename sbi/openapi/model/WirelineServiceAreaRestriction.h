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
 * WirelineServiceAreaRestriction.h
 *
 * The \&quot;restrictionType\&quot; attribute and the \&quot;areas\&quot;
 * attribute shall be either both present or absent. The empty array of areas is
 * used when service is allowed/restricted nowhere.
 */

#ifndef WirelineServiceAreaRestriction_H_
#define WirelineServiceAreaRestriction_H_

#include "RestrictionType.h"
#include "WirelineArea.h"
#include <nlohmann/json.hpp>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// The \&quot;restrictionType\&quot; attribute and the \&quot;areas\&quot;
/// attribute shall be either both present or absent. The empty array of areas
/// is used when service is allowed/restricted nowhere.
/// </summary>
class WirelineServiceAreaRestriction {
public:
  WirelineServiceAreaRestriction();
  virtual ~WirelineServiceAreaRestriction();

  void validate();

  /////////////////////////////////////////////
  /// WirelineServiceAreaRestriction members

  /// <summary>
  ///
  /// </summary>
  RestrictionType getRestrictionType() const;
  void setRestrictionType(RestrictionType const &value);
  bool restrictionTypeIsSet() const;
  void unsetRestrictionType();
  /// <summary>
  ///
  /// </summary>
  std::vector<WirelineArea> &getAreas();
  void setAreas(std::vector<WirelineArea> const &value);
  bool areasIsSet() const;
  void unsetAreas();

  friend void to_json(nlohmann::json &j,
                      const WirelineServiceAreaRestriction &o);
  friend void from_json(const nlohmann::json &j,
                        WirelineServiceAreaRestriction &o);

protected:
  RestrictionType m_RestrictionType;
  bool m_RestrictionTypeIsSet;
  std::vector<WirelineArea> m_Areas;
  bool m_AreasIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* WirelineServiceAreaRestriction_H_ */