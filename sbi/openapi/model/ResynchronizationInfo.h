/**
 * NhssUEAU
 * HSS UE Authentication Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ResynchronizationInfo.h
 *
 *
 */

#ifndef ResynchronizationInfo_H_
#define ResynchronizationInfo_H_

#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class ResynchronizationInfo {
public:
  ResynchronizationInfo();
  virtual ~ResynchronizationInfo();

  void validate();

  /////////////////////////////////////////////
  /// ResynchronizationInfo members

  /// <summary>
  ///
  /// </summary>
  std::string getRand() const;
  void setRand(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  std::string getAuts() const;
  void setAuts(std::string const &value);

  friend void to_json(nlohmann::json &j, const ResynchronizationInfo &o);
  friend void from_json(const nlohmann::json &j, ResynchronizationInfo &o);

protected:
  std::string m_Rand;

  std::string m_Auts;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ResynchronizationInfo_H_ */