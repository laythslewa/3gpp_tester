/**
 * Namf_EventExposure
 * AMF Event Exposure Service © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * 5GsUserStateInfo.h
 *
 * Represents the 5GS User state of the UE for an access type
 */

#ifndef 5GsUserStateInfo_H_
#define 5GsUserStateInfo_H_

#include "5GsUserState.h"
#include "AccessType.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents the 5GS User state of the UE for an access type
/// </summary>
class 5GsUserStateInfo {
public:
  5GsUserStateInfo();
  virtual ~5GsUserStateInfo();

  void validate();

  /////////////////////////////////////////////
  /// 5GsUserStateInfo members

  /// <summary>
  ///
  /// </summary>
  5GsUserState getR5gsUserState() const;
  void setR5gsUserState(5GsUserState const &value);
  /// <summary>
  ///
  /// </summary>
  AccessType getAccessType() const;
  void setAccessType(AccessType const &value);

  friend void to_json(nlohmann::json & j, const 5GsUserStateInfo & o);
  friend void from_json(const nlohmann::json &j, 5GsUserStateInfo & o);

protected:
  5GsUserState m_r_5gsUserState;

  AccessType m_AccessType;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* 5GsUserStateInfo_H_ */
