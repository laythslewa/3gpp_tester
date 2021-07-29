/**
 * Nsoraf_SOR
 * Nsoraf Steering Of Roaming Service. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * SteeringInfo.h
 *
 * Contains a combination of one PLMN identity and zero or more access
 * technologies.
 */

#ifndef SteeringInfo_H_
#define SteeringInfo_H_

#include "AccessTech.h"
#include "PlmnId.h"
#include <nlohmann/json.hpp>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Contains a combination of one PLMN identity and zero or more access
/// technologies.
/// </summary>
class SteeringInfo {
public:
  SteeringInfo();
  virtual ~SteeringInfo();

  void validate();

  /////////////////////////////////////////////
  /// SteeringInfo members

  /// <summary>
  ///
  /// </summary>
  PlmnId getPlmnId() const;
  void setPlmnId(PlmnId const &value);
  /// <summary>
  ///
  /// </summary>
  std::vector<AccessTech> &getAccessTechList();
  void setAccessTechList(std::vector<AccessTech> const &value);
  bool accessTechListIsSet() const;
  void unsetAccessTechList();

  friend void to_json(nlohmann::json &j, const SteeringInfo &o);
  friend void from_json(const nlohmann::json &j, SteeringInfo &o);

protected:
  PlmnId m_PlmnId;

  std::vector<AccessTech> m_AccessTechList;
  bool m_AccessTechListIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* SteeringInfo_H_ */