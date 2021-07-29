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
 * TacInfo.h
 *
 *
 */

#ifndef TacInfo_H_
#define TacInfo_H_

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
class TacInfo {
public:
  TacInfo();
  virtual ~TacInfo();

  void validate();

  /////////////////////////////////////////////
  /// TacInfo members

  /// <summary>
  /// This IE shall contain a list of the tracking area codes.
  /// </summary>
  std::vector<std::string> &getTacList();
  void setTacList(std::vector<std::string> const &value);

  friend void to_json(nlohmann::json &j, const TacInfo &o);
  friend void from_json(const nlohmann::json &j, TacInfo &o);

protected:
  std::vector<std::string> m_TacList;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* TacInfo_H_ */