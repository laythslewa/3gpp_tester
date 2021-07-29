/**
 * Unified Data Repository Service API file for subscription data
 * Unified Data Repository Service (subscription data). The API version is
 * defined in 3GPP TS 29.504. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * EnhancedCoverageRestrictionData.h
 *
 *
 */

#ifndef EnhancedCoverageRestrictionData_H_
#define EnhancedCoverageRestrictionData_H_

#include "PlmnEcInfo.h"
#include <nlohmann/json.hpp>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class EnhancedCoverageRestrictionData {
public:
  EnhancedCoverageRestrictionData();
  virtual ~EnhancedCoverageRestrictionData();

  void validate();

  /////////////////////////////////////////////
  /// EnhancedCoverageRestrictionData members

  /// <summary>
  ///
  /// </summary>
  std::vector<PlmnEcInfo> &getPlmnEcInfoList();
  void setPlmnEcInfoList(std::vector<PlmnEcInfo> const &value);
  bool plmnEcInfoListIsSet() const;
  void unsetPlmnEcInfoList();

  friend void to_json(nlohmann::json &j,
                      const EnhancedCoverageRestrictionData &o);
  friend void from_json(const nlohmann::json &j,
                        EnhancedCoverageRestrictionData &o);

protected:
  std::vector<PlmnEcInfo> m_PlmnEcInfoList;
  bool m_PlmnEcInfoListIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* EnhancedCoverageRestrictionData_H_ */
