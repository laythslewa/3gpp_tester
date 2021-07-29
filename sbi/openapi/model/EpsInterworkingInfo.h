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
 * EpsInterworkingInfo.h
 *
 *
 */

#ifndef EpsInterworkingInfo_H_
#define EpsInterworkingInfo_H_

#include "EpsIwkPgw.h"
#include <map>
#include <nlohmann/json.hpp>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class EpsInterworkingInfo {
public:
  EpsInterworkingInfo();
  virtual ~EpsInterworkingInfo();

  void validate();

  /////////////////////////////////////////////
  /// EpsInterworkingInfo members

  /// <summary>
  /// A map (list of key-value pairs where Dnn serves as key) of EpsIwkPgws
  /// </summary>
  std::map<std::string, EpsIwkPgw> &getEpsIwkPgws();
  void setEpsIwkPgws(std::map<std::string, EpsIwkPgw> const &value);
  bool epsIwkPgwsIsSet() const;
  void unsetEpsIwkPgws();

  friend void to_json(nlohmann::json &j, const EpsInterworkingInfo &o);
  friend void from_json(const nlohmann::json &j, EpsInterworkingInfo &o);

protected:
  std::map<std::string, EpsIwkPgw> m_EpsIwkPgws;
  bool m_EpsIwkPgwsIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* EpsInterworkingInfo_H_ */
