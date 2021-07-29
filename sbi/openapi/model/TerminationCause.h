/**
 * Nchf_SpendingLimitControl
 * Nchf Spending Limit Control Service. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * TerminationCause.h
 *
 * Represents the cause for requesting the termination of the subscription to
 * policy counter status changes.
 */

#ifndef TerminationCause_H_
#define TerminationCause_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents the cause for requesting the termination of the subscription to
/// policy counter status changes.
/// </summary>
class TerminationCause {
public:
  TerminationCause();
  virtual ~TerminationCause();

  void validate();

  /////////////////////////////////////////////
  /// TerminationCause members

  friend void to_json(nlohmann::json &j, const TerminationCause &o);
  friend void from_json(const nlohmann::json &j, TerminationCause &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* TerminationCause_H_ */
