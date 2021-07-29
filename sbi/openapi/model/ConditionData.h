/**
 * Npcf_SMPolicyControl API
 * Session Management Policy Control Service © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ConditionData.h
 *
 * Contains conditions of applicability for a rule.
 */

#ifndef ConditionData_H_
#define ConditionData_H_

#include "AccessType.h"
#include "RatType.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Contains conditions of applicability for a rule.
/// </summary>
class ConditionData {
public:
  ConditionData();
  virtual ~ConditionData();

  void validate();

  /////////////////////////////////////////////
  /// ConditionData members

  /// <summary>
  /// Uniquely identifies the condition data within a PDU session.
  /// </summary>
  std::string getCondId() const;
  void setCondId(std::string const &value);
  /// <summary>
  /// string with format \&quot;date-time\&quot; as defined in OpenAPI with
  /// \&quot;nullable&#x3D;true\&quot; property.
  /// </summary>
  std::string getActivationTime() const;
  void setActivationTime(std::string const &value);
  bool activationTimeIsSet() const;
  void unsetActivationTime();
  /// <summary>
  /// string with format \&quot;date-time\&quot; as defined in OpenAPI with
  /// \&quot;nullable&#x3D;true\&quot; property.
  /// </summary>
  std::string getDeactivationTime() const;
  void setDeactivationTime(std::string const &value);
  bool deactivationTimeIsSet() const;
  void unsetDeactivationTime();
  /// <summary>
  ///
  /// </summary>
  AccessType getAccessType() const;
  void setAccessType(AccessType const &value);
  bool accessTypeIsSet() const;
  void unsetAccessType();
  /// <summary>
  ///
  /// </summary>
  RatType getRatType() const;
  void setRatType(RatType const &value);
  bool ratTypeIsSet() const;
  void unsetRatType();

  friend void to_json(nlohmann::json &j, const ConditionData &o);
  friend void from_json(const nlohmann::json &j, ConditionData &o);

protected:
  std::string m_CondId;

  std::string m_ActivationTime;
  bool m_ActivationTimeIsSet;
  std::string m_DeactivationTime;
  bool m_DeactivationTimeIsSet;
  AccessType m_AccessType;
  bool m_AccessTypeIsSet;
  RatType m_RatType;
  bool m_RatTypeIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ConditionData_H_ */
