/**
 * Nnwdaf_EventsSubscription
 * Nnwdaf_EventsSubscription Service API. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * NfStatus.h
 *
 * Contains the percentage of time spent on various NF states.
 */

#ifndef NfStatus_H_
#define NfStatus_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Contains the percentage of time spent on various NF states.
/// </summary>
class NfStatus {
public:
  NfStatus();
  virtual ~NfStatus();

  void validate();

  /////////////////////////////////////////////
  /// NfStatus members

  /// <summary>
  /// Unsigned integer indicating Sampling Ratio (see clauses 4.15.1 of 3GPP
  /// TS 23.502), expressed in percent.
  /// </summary>
  int32_t getStatusRegistered() const;
  void setStatusRegistered(int32_t const value);
  bool statusRegisteredIsSet() const;
  void unsetStatusRegistered();
  /// <summary>
  /// Unsigned integer indicating Sampling Ratio (see clauses 4.15.1 of 3GPP
  /// TS 23.502), expressed in percent.
  /// </summary>
  int32_t getStatusUnregistered() const;
  void setStatusUnregistered(int32_t const value);
  bool statusUnregisteredIsSet() const;
  void unsetStatusUnregistered();
  /// <summary>
  /// Unsigned integer indicating Sampling Ratio (see clauses 4.15.1 of 3GPP
  /// TS 23.502), expressed in percent.
  /// </summary>
  int32_t getStatusUndiscoverable() const;
  void setStatusUndiscoverable(int32_t const value);
  bool statusUndiscoverableIsSet() const;
  void unsetStatusUndiscoverable();

  friend void to_json(nlohmann::json &j, const NfStatus &o);
  friend void from_json(const nlohmann::json &j, NfStatus &o);

protected:
  int32_t m_StatusRegistered;
  bool m_StatusRegisteredIsSet;
  int32_t m_StatusUnregistered;
  bool m_StatusUnregisteredIsSet;
  int32_t m_StatusUndiscoverable;
  bool m_StatusUndiscoverableIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* NfStatus_H_ */