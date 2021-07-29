/**
 * 3gpp-analyticsexposure
 * API for Analytics Exposure. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * NetworkPerfRequirement.h
 *
 * Represents a network performance requirement.
 */

#ifndef NetworkPerfRequirement_H_
#define NetworkPerfRequirement_H_

#include "NetworkPerfType.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents a network performance requirement.
/// </summary>
class NetworkPerfRequirement {
public:
  NetworkPerfRequirement();
  virtual ~NetworkPerfRequirement();

  void validate();

  /////////////////////////////////////////////
  /// NetworkPerfRequirement members

  /// <summary>
  ///
  /// </summary>
  NetworkPerfType getNwPerfType() const;
  void setNwPerfType(NetworkPerfType const &value);
  /// <summary>
  /// Unsigned integer indicating Sampling Ratio (see clauses 4.15.1 of 3GPP
  /// TS 23.502), expressed in percent.
  /// </summary>
  int32_t getRelativeRatio() const;
  void setRelativeRatio(int32_t const value);
  bool relativeRatioIsSet() const;
  void unsetRelativeRatio();
  /// <summary>
  /// Unsigned Integer, i.e. only value 0 and integers above 0 are permissible.
  /// </summary>
  int32_t getAbsoluteNum() const;
  void setAbsoluteNum(int32_t const value);
  bool absoluteNumIsSet() const;
  void unsetAbsoluteNum();

  friend void to_json(nlohmann::json &j, const NetworkPerfRequirement &o);
  friend void from_json(const nlohmann::json &j, NetworkPerfRequirement &o);

protected:
  NetworkPerfType m_NwPerfType;

  int32_t m_RelativeRatio;
  bool m_RelativeRatioIsSet;
  int32_t m_AbsoluteNum;
  bool m_AbsoluteNumIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* NetworkPerfRequirement_H_ */