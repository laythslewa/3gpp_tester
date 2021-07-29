/**
 * M5_ConsumptionReporting
 * 5GMS AF M5 Consumption Reporting API © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * CellIdentifierType.h
 *
 *
 */

#ifndef CellIdentifierType_H_
#define CellIdentifierType_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class CellIdentifierType {
public:
  CellIdentifierType();
  virtual ~CellIdentifierType();

  void validate();

  /////////////////////////////////////////////
  /// CellIdentifierType members

  friend void to_json(nlohmann::json &j, const CellIdentifierType &o);
  friend void from_json(const nlohmann::json &j, CellIdentifierType &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* CellIdentifierType_H_ */
