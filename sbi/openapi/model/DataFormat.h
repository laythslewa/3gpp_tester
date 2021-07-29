/**
 * CAPIF_Routing_Info_API
 * API for Routing information. © 2021, 3GPP Organizational Partners (ARIB,
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
 * DataFormat.h
 *
 * Possible values are - JSON: JavaScript Object Notation
 */

#ifndef DataFormat_H_
#define DataFormat_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Possible values are - JSON: JavaScript Object Notation
/// </summary>
class DataFormat {
public:
  DataFormat();
  virtual ~DataFormat();

  void validate();

  /////////////////////////////////////////////
  /// DataFormat members

  friend void to_json(nlohmann::json &j, const DataFormat &o);
  friend void from_json(const nlohmann::json &j, DataFormat &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* DataFormat_H_ */