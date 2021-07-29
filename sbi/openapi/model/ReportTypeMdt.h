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
 * ReportTypeMdt.h
 *
 * The enumeration ReportTypeMdt defines Report Type for logged MDT in the
 * trace. See 3GPP TS 32.422 for further description of the values. It shall
 * comply with the provisions defined in table 5.6.3.4-1.
 */

#ifndef ReportTypeMdt_H_
#define ReportTypeMdt_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// The enumeration ReportTypeMdt defines Report Type for logged MDT in the
/// trace. See 3GPP TS 32.422 for further description of the values. It shall
/// comply with the provisions defined in table 5.6.3.4-1.
/// </summary>
class ReportTypeMdt {
public:
  ReportTypeMdt();
  virtual ~ReportTypeMdt();

  void validate();

  /////////////////////////////////////////////
  /// ReportTypeMdt members

  friend void to_json(nlohmann::json &j, const ReportTypeMdt &o);
  friend void from_json(const nlohmann::json &j, ReportTypeMdt &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ReportTypeMdt_H_ */
