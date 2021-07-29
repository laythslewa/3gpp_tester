/**
 * LMF Location
 * LMF Location Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA,
 * ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ReportedEventType.h
 *
 * Specifies type of event reporting.
 */

#ifndef ReportedEventType_H_
#define ReportedEventType_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Specifies type of event reporting.
/// </summary>
class ReportedEventType {
public:
  ReportedEventType();
  virtual ~ReportedEventType();

  void validate();

  /////////////////////////////////////////////
  /// ReportedEventType members

  friend void to_json(nlohmann::json &j, const ReportedEventType &o);
  friend void from_json(const nlohmann::json &j, ReportedEventType &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ReportedEventType_H_ */