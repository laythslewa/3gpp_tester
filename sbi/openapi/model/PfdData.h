/**
 * NRF NFManagement Service
 * NRF NFManagement Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * PfdData.h
 *
 * List of Application IDs and/or AF IDs managed by a given NEF Instance
 */

#ifndef PfdData_H_
#define PfdData_H_

#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// List of Application IDs and/or AF IDs managed by a given NEF Instance
/// </summary>
class PfdData {
public:
  PfdData();
  virtual ~PfdData();

  void validate();

  /////////////////////////////////////////////
  /// PfdData members

  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getAppIds();
  void setAppIds(std::vector<std::string> const &value);
  bool appIdsIsSet() const;
  void unsetAppIds();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getAfIds();
  void setAfIds(std::vector<std::string> const &value);
  bool afIdsIsSet() const;
  void unsetAfIds();

  friend void to_json(nlohmann::json &j, const PfdData &o);
  friend void from_json(const nlohmann::json &j, PfdData &o);

protected:
  std::vector<std::string> m_AppIds;
  bool m_AppIdsIsSet;
  std::vector<std::string> m_AfIds;
  bool m_AfIdsIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* PfdData_H_ */