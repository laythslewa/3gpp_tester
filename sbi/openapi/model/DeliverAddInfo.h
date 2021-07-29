/**
 * Nsmf_NIDD
 * SMF NIDD Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA,
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
 * DeliverAddInfo.h
 *
 * Additional information in an error response to a Deliver Request.
 */

#ifndef DeliverAddInfo_H_
#define DeliverAddInfo_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Additional information in an error response to a Deliver Request.
/// </summary>
class DeliverAddInfo {
public:
  DeliverAddInfo();
  virtual ~DeliverAddInfo();

  void validate();

  /////////////////////////////////////////////
  /// DeliverAddInfo members

  /// <summary>
  /// indicating a time in seconds.
  /// </summary>
  int32_t getMaxWaitingTime() const;
  void setMaxWaitingTime(int32_t const value);
  bool maxWaitingTimeIsSet() const;
  void unsetMaxWaitingTime();

  friend void to_json(nlohmann::json &j, const DeliverAddInfo &o);
  friend void from_json(const nlohmann::json &j, DeliverAddInfo &o);

protected:
  int32_t m_MaxWaitingTime;
  bool m_MaxWaitingTimeIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* DeliverAddInfo_H_ */
