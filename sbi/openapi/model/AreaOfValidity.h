/**
 * Namf_Communication
 * AMF Communication Service © 2021, 3GPP Organizational Partners (ARIB, ATIS,
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
 * AreaOfValidity.h
 *
 * Area of validity information for N2 information transfer
 */

#ifndef AreaOfValidity_H_
#define AreaOfValidity_H_

#include "Tai.h"
#include <nlohmann/json.hpp>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Area of validity information for N2 information transfer
/// </summary>
class AreaOfValidity {
public:
  AreaOfValidity();
  virtual ~AreaOfValidity();

  void validate();

  /////////////////////////////////////////////
  /// AreaOfValidity members

  /// <summary>
  ///
  /// </summary>
  std::vector<Tai> &getTaiList();
  void setTaiList(std::vector<Tai> const &value);

  friend void to_json(nlohmann::json &j, const AreaOfValidity &o);
  friend void from_json(const nlohmann::json &j, AreaOfValidity &o);

protected:
  std::vector<Tai> m_TaiList;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AreaOfValidity_H_ */