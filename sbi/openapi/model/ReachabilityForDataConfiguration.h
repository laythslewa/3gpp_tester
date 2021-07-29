/**
 * Nhss_EE
 * HSS Event Exposure © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA,
 * ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ReachabilityForDataConfiguration.h
 *
 * Contains data needed for a Monitoring Configuration, specific to the
 * &#39;Reachability for Data&#39; event type
 */

#ifndef ReachabilityForDataConfiguration_H_
#define ReachabilityForDataConfiguration_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Contains data needed for a Monitoring Configuration, specific to the
/// &#39;Reachability for Data&#39; event type
/// </summary>
class ReachabilityForDataConfiguration {
public:
  ReachabilityForDataConfiguration();
  virtual ~ReachabilityForDataConfiguration();

  void validate();

  /////////////////////////////////////////////
  /// ReachabilityForDataConfiguration members

  /// <summary>
  /// indicating a time in seconds.
  /// </summary>
  int32_t getMaximumLatency() const;
  void setMaximumLatency(int32_t const value);
  bool maximumLatencyIsSet() const;
  void unsetMaximumLatency();
  /// <summary>
  /// indicating a time in seconds.
  /// </summary>
  int32_t getMaximumResponseTime() const;
  void setMaximumResponseTime(int32_t const value);
  bool maximumResponseTimeIsSet() const;
  void unsetMaximumResponseTime();
  /// <summary>
  ///
  /// </summary>
  int32_t getSuggestedPacketNumDl() const;
  void setSuggestedPacketNumDl(int32_t const value);
  bool suggestedPacketNumDlIsSet() const;
  void unsetSuggestedPacketNumDl();

  friend void to_json(nlohmann::json &j,
                      const ReachabilityForDataConfiguration &o);
  friend void from_json(const nlohmann::json &j,
                        ReachabilityForDataConfiguration &o);

protected:
  int32_t m_MaximumLatency;
  bool m_MaximumLatencyIsSet;
  int32_t m_MaximumResponseTime;
  bool m_MaximumResponseTimeIsSet;
  int32_t m_SuggestedPacketNumDl;
  bool m_SuggestedPacketNumDlIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ReachabilityForDataConfiguration_H_ */
