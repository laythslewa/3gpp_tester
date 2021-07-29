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
 * PlmnOperatorClass.h
 *
 *
 */

#ifndef PlmnOperatorClass_H_
#define PlmnOperatorClass_H_

#include "LcsClientClass.h"
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
class PlmnOperatorClass {
public:
  PlmnOperatorClass();
  virtual ~PlmnOperatorClass();

  void validate();

  /////////////////////////////////////////////
  /// PlmnOperatorClass members

  /// <summary>
  ///
  /// </summary>
  LcsClientClass getLcsClientClass() const;
  void setLcsClientClass(LcsClientClass const &value);
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getLcsClientIds();
  void setLcsClientIds(std::vector<std::string> const &value);

  friend void to_json(nlohmann::json &j, const PlmnOperatorClass &o);
  friend void from_json(const nlohmann::json &j, PlmnOperatorClass &o);

protected:
  LcsClientClass m_LcsClientClass;

  std::vector<std::string> m_LcsClientIds;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* PlmnOperatorClass_H_ */