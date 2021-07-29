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
 * EventForMdt.h
 *
 * The enumeration EventForMdt defines events triggered measurement for logged
 * MDT in the trace. See 3GPP TS 32.422 for further description of the values.
 * It shall comply with the provisions defined in table 5.6.3.11-1
 */

#ifndef EventForMdt_H_
#define EventForMdt_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// The enumeration EventForMdt defines events triggered measurement for logged
/// MDT in the trace. See 3GPP TS 32.422 for further description of the values.
/// It shall comply with the provisions defined in table 5.6.3.11-1
/// </summary>
class EventForMdt {
public:
  EventForMdt();
  virtual ~EventForMdt();

  void validate();

  /////////////////////////////////////////////
  /// EventForMdt members

  friend void to_json(nlohmann::json &j, const EventForMdt &o);
  friend void from_json(const nlohmann::json &j, EventForMdt &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* EventForMdt_H_ */