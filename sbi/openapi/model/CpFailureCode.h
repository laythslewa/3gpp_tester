/**
 * 3gpp-cp-parameter-provisioning
 * API for provisioning communication pattern parameters. © 2021, 3GPP
 * Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights
 * reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * CpFailureCode.h
 *
 * Possible values are - MALFUNCTION: This value indicates that something
 * functions wrongly in CP parameter provisioning or the CP parameter
 * provisioning does not function at all. - SET_ID_DUPLICATED: The received CP
 * set identifier(s) are already provisioned. - OTHER_REASON: Other reason
 * unspecified.
 */

#ifndef CpFailureCode_H_
#define CpFailureCode_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Possible values are - MALFUNCTION: This value indicates that something
/// functions wrongly in CP parameter provisioning or the CP parameter
/// provisioning does not function at all. - SET_ID_DUPLICATED: The received CP
/// set identifier(s) are already provisioned. - OTHER_REASON: Other reason
/// unspecified.
/// </summary>
class CpFailureCode {
public:
  CpFailureCode();
  virtual ~CpFailureCode();

  void validate();

  /////////////////////////////////////////////
  /// CpFailureCode members

  friend void to_json(nlohmann::json &j, const CpFailureCode &o);
  friend void from_json(const nlohmann::json &j, CpFailureCode &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* CpFailureCode_H_ */
