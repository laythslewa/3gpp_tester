/**
 * Nhss_imsSDM
 * Nhss Subscriber Data Management Service for IMS. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * PriorityLevels.h
 *
 *
 */

#ifndef PriorityLevels_H_
#define PriorityLevels_H_

#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class PriorityLevels {
public:
  PriorityLevels();
  virtual ~PriorityLevels();

  void validate();

  /////////////////////////////////////////////
  /// PriorityLevels members

  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getServicePriorityLevelList();
  void setServicePriorityLevelList(std::vector<std::string> const &value);

  friend void to_json(nlohmann::json &j, const PriorityLevels &o);
  friend void from_json(const nlohmann::json &j, PriorityLevels &o);

protected:
  std::vector<std::string> m_ServicePriorityLevelList;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* PriorityLevels_H_ */
