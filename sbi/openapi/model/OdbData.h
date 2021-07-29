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
 * OdbData.h
 *
 *
 */

#ifndef OdbData_H_
#define OdbData_H_

#include "RoamingOdb.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class OdbData {
public:
  OdbData();
  virtual ~OdbData();

  void validate();

  /////////////////////////////////////////////
  /// OdbData members

  /// <summary>
  ///
  /// </summary>
  RoamingOdb getRoamingOdb() const;
  void setRoamingOdb(RoamingOdb const &value);
  bool roamingOdbIsSet() const;
  void unsetRoamingOdb();

  friend void to_json(nlohmann::json &j, const OdbData &o);
  friend void from_json(const nlohmann::json &j, OdbData &o);

protected:
  RoamingOdb m_RoamingOdb;
  bool m_RoamingOdbIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* OdbData_H_ */