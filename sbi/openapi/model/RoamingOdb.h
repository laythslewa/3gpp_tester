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
 * RoamingOdb.h
 *
 * The enumeration RoamingOdb defines the Barring of Roaming as. See 3GPP
 * TS 23.015 for further description. It shall comply with the provisions
 * defined in table 5.7.3.1-1.
 */

#ifndef RoamingOdb_H_
#define RoamingOdb_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// The enumeration RoamingOdb defines the Barring of Roaming as. See 3GPP
/// TS 23.015 for further description. It shall comply with the provisions
/// defined in table 5.7.3.1-1.
/// </summary>
class RoamingOdb {
public:
  RoamingOdb();
  virtual ~RoamingOdb();

  void validate();

  /////////////////////////////////////////////
  /// RoamingOdb members

  friend void to_json(nlohmann::json &j, const RoamingOdb &o);
  friend void from_json(const nlohmann::json &j, RoamingOdb &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* RoamingOdb_H_ */