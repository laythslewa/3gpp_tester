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
 * ContextInfo.h
 *
 *
 */

#ifndef ContextInfo_H_
#define ContextInfo_H_

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
class ContextInfo {
public:
  ContextInfo();
  virtual ~ContextInfo();

  void validate();

  /////////////////////////////////////////////
  /// ContextInfo members

  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getOrigHeaders();
  void setOrigHeaders(std::vector<std::string> const &value);
  bool origHeadersIsSet() const;
  void unsetOrigHeaders();

  friend void to_json(nlohmann::json &j, const ContextInfo &o);
  friend void from_json(const nlohmann::json &j, ContextInfo &o);

protected:
  std::vector<std::string> m_OrigHeaders;
  bool m_OrigHeadersIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ContextInfo_H_ */
