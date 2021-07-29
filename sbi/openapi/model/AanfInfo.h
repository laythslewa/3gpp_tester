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
 * AanfInfo.h
 *
 * Represents the information relative to an AAnF NF Instance.
 */

#ifndef AanfInfo_H_
#define AanfInfo_H_

#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents the information relative to an AAnF NF Instance.
/// </summary>
class AanfInfo {
public:
  AanfInfo();
  virtual ~AanfInfo();

  void validate();

  /////////////////////////////////////////////
  /// AanfInfo members

  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getRoutingIndicators();
  void setRoutingIndicators(std::vector<std::string> const &value);
  bool routingIndicatorsIsSet() const;
  void unsetRoutingIndicators();

  friend void to_json(nlohmann::json &j, const AanfInfo &o);
  friend void from_json(const nlohmann::json &j, AanfInfo &o);

protected:
  std::vector<std::string> m_RoutingIndicators;
  bool m_RoutingIndicatorsIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AanfInfo_H_ */
