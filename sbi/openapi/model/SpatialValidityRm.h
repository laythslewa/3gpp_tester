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
 * SpatialValidityRm.h
 *
 * this data type is defined in the same way as the SpatialValidity data type,
 * but with the OpenAPI nullable property set to true
 */

#ifndef SpatialValidityRm_H_
#define SpatialValidityRm_H_

#include "PresenceInfo.h"
#include <map>
#include <nlohmann/json.hpp>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// this data type is defined in the same way as the SpatialValidity data type,
/// but with the OpenAPI nullable property set to true
/// </summary>
class SpatialValidityRm {
public:
  SpatialValidityRm();
  virtual ~SpatialValidityRm();

  void validate();

  /////////////////////////////////////////////
  /// SpatialValidityRm members

  /// <summary>
  /// Defines the presence information provisioned by the AF. The praId
  /// attribute within the PresenceInfo data type is the key of the map.
  /// </summary>
  std::map<std::string, PresenceInfo> &getPresenceInfoList();
  void setPresenceInfoList(std::map<std::string, PresenceInfo> const &value);

  friend void to_json(nlohmann::json &j, const SpatialValidityRm &o);
  friend void from_json(const nlohmann::json &j, SpatialValidityRm &o);

protected:
  std::map<std::string, PresenceInfo> m_PresenceInfoList;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* SpatialValidityRm_H_ */
