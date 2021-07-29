/**
 * Npcf_PolicyAuthorization Service API
 * PCF Policy Authorization Service. © 2021, 3GPP Organizational Partners (ARIB,
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
 * AppDetectionReport.h
 *
 * Indicates the start or stop of the detected application traffic and the
 * application identifier of the detected application traffic.
 */

#ifndef AppDetectionReport_H_
#define AppDetectionReport_H_

#include "AppDetectionNotifType.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Indicates the start or stop of the detected application traffic and the
/// application identifier of the detected application traffic.
/// </summary>
class AppDetectionReport {
public:
  AppDetectionReport();
  virtual ~AppDetectionReport();

  void validate();

  /////////////////////////////////////////////
  /// AppDetectionReport members

  /// <summary>
  ///
  /// </summary>
  AppDetectionNotifType getAdNotifType() const;
  void setAdNotifType(AppDetectionNotifType const &value);
  /// <summary>
  /// Contains an AF application identifier.
  /// </summary>
  std::string getAfAppId() const;
  void setAfAppId(std::string const &value);

  friend void to_json(nlohmann::json &j, const AppDetectionReport &o);
  friend void from_json(const nlohmann::json &j, AppDetectionReport &o);

protected:
  AppDetectionNotifType m_AdNotifType;

  std::string m_AfAppId;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AppDetectionReport_H_ */
