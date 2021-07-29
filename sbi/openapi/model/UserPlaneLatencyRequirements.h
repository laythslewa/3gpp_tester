/**
 * 3gpp-traffic-influence
 * API for AF traffic influence © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * UserPlaneLatencyRequirements.h
 *
 * Contains the user plane latency requirements.
 */

#ifndef UserPlaneLatencyRequirements_H_
#define UserPlaneLatencyRequirements_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Contains the user plane latency requirements.
/// </summary>
class UserPlaneLatencyRequirements {
public:
  UserPlaneLatencyRequirements();
  virtual ~UserPlaneLatencyRequirements();

  void validate();

  /////////////////////////////////////////////
  /// UserPlaneLatencyRequirements members

  /// <summary>
  /// indicating a time in seconds with OpenAPI defined
  /// \&quot;nullable&#x3D;true\&quot; property.
  /// </summary>
  int32_t getMaxAllowedUpLat() const;
  void setMaxAllowedUpLat(int32_t const value);
  bool maxAllowedUpLatIsSet() const;
  void unsetMaxAllowedUpLat();
  /// <summary>
  ///
  /// </summary>
  int32_t getUpLatPrefer() const;
  void setUpLatPrefer(int32_t const value);
  bool upLatPreferIsSet() const;
  void unsetUpLatPrefer();

  friend void to_json(nlohmann::json &j, const UserPlaneLatencyRequirements &o);
  friend void from_json(const nlohmann::json &j,
                        UserPlaneLatencyRequirements &o);

protected:
  int32_t m_MaxAllowedUpLat;
  bool m_MaxAllowedUpLatIsSet;
  int32_t m_UpLatPrefer;
  bool m_UpLatPreferIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* UserPlaneLatencyRequirements_H_ */
