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
 * NetworkPerfExposure.h
 *
 * Represents network performance information.
 */

#ifndef NetworkPerfExposure_H_
#define NetworkPerfExposure_H_

#include "LocationArea5G.h"
#include "NetworkPerfType.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents network performance information.
/// </summary>
class NetworkPerfExposure {
public:
  NetworkPerfExposure();
  virtual ~NetworkPerfExposure();

  void validate();

  /////////////////////////////////////////////
  /// NetworkPerfExposure members

  /// <summary>
  ///
  /// </summary>
  LocationArea5G getLocArea() const;
  void setLocArea(LocationArea5G const &value);
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
  /// <summary>
  /// Unsigned Integer, i.e. only value 0 and integers above 0 are permissible.
  /// </summary>
  int32_t getConfidence() const;
  void setConfidence(int32_t const value);
  bool confidenceIsSet() const;
  void unsetConfidence();

  friend void to_json(nlohmann::json &j, const NetworkPerfExposure &o);
  friend void from_json(const nlohmann::json &j, NetworkPerfExposure &o);

protected:
  LocationArea5G m_LocArea;

  NetworkPerfType m_NwPerfType;

  int32_t m_RelativeRatio;
  bool m_RelativeRatioIsSet;
  int32_t m_AbsoluteNum;
  bool m_AbsoluteNumIsSet;
  int32_t m_Confidence;
  bool m_ConfidenceIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* NetworkPerfExposure_H_ */