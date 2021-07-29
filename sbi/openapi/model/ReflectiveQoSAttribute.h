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
 * ReflectiveQoSAttribute.h
 *
 * The enumeration ReflectiveQosAttribute indicates whether certain traffic of
 * the QoS flow may be subject to Reflective QoS (see clause 5.7.2.3 of 3GPP
 * TS 23.501). It shall comply with the provisions defined in table 5.5.3.3-1.
 */

#ifndef ReflectiveQoSAttribute_H_
#define ReflectiveQoSAttribute_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// The enumeration ReflectiveQosAttribute indicates whether certain traffic of
/// the QoS flow may be subject to Reflective QoS (see clause 5.7.2.3 of 3GPP
/// TS 23.501). It shall comply with the provisions defined in table 5.5.3.3-1.
/// </summary>
class ReflectiveQoSAttribute {
public:
  ReflectiveQoSAttribute();
  virtual ~ReflectiveQoSAttribute();

  void validate();

  /////////////////////////////////////////////
  /// ReflectiveQoSAttribute members

  friend void to_json(nlohmann::json &j, const ReflectiveQoSAttribute &o);
  friend void from_json(const nlohmann::json &j, ReflectiveQoSAttribute &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ReflectiveQoSAttribute_H_ */
