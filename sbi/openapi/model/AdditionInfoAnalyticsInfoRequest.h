/**
 * Nnwdaf_AnalyticsInfo
 * Nnwdaf_AnalyticsInfo Service API. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * AdditionInfoAnalyticsInfoRequest.h
 *
 * Indicates additional information why the analytics request is rejected.
 */

#ifndef AdditionInfoAnalyticsInfoRequest_H_
#define AdditionInfoAnalyticsInfoRequest_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Indicates additional information why the analytics request is rejected.
/// </summary>
class AdditionInfoAnalyticsInfoRequest {
public:
  AdditionInfoAnalyticsInfoRequest();
  virtual ~AdditionInfoAnalyticsInfoRequest();

  void validate();

  /////////////////////////////////////////////
  /// AdditionInfoAnalyticsInfoRequest members

  /// <summary>
  /// indicating a time in seconds.
  /// </summary>
  int32_t getRvWaitTime() const;
  void setRvWaitTime(int32_t const value);
  bool rvWaitTimeIsSet() const;
  void unsetRvWaitTime();

  friend void to_json(nlohmann::json &j,
                      const AdditionInfoAnalyticsInfoRequest &o);
  friend void from_json(const nlohmann::json &j,
                        AdditionInfoAnalyticsInfoRequest &o);

protected:
  int32_t m_RvWaitTime;
  bool m_RvWaitTimeIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AdditionInfoAnalyticsInfoRequest_H_ */