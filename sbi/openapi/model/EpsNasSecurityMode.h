/**
 * Namf_Communication
 * AMF Communication Service © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * EpsNasSecurityMode.h
 *
 * Indicates the EPS NAS Security Mode
 */

#ifndef EpsNasSecurityMode_H_
#define EpsNasSecurityMode_H_

#include "EpsNasCipheringAlgorithm.h"
#include "EpsNasIntegrityAlgorithm.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Indicates the EPS NAS Security Mode
/// </summary>
class EpsNasSecurityMode {
public:
  EpsNasSecurityMode();
  virtual ~EpsNasSecurityMode();

  void validate();

  /////////////////////////////////////////////
  /// EpsNasSecurityMode members

  /// <summary>
  ///
  /// </summary>
  EpsNasIntegrityAlgorithm getIntegrityAlgorithm() const;
  void setIntegrityAlgorithm(EpsNasIntegrityAlgorithm const &value);
  /// <summary>
  ///
  /// </summary>
  EpsNasCipheringAlgorithm getCipheringAlgorithm() const;
  void setCipheringAlgorithm(EpsNasCipheringAlgorithm const &value);

  friend void to_json(nlohmann::json &j, const EpsNasSecurityMode &o);
  friend void from_json(const nlohmann::json &j, EpsNasSecurityMode &o);

protected:
  EpsNasIntegrityAlgorithm m_IntegrityAlgorithm;

  EpsNasCipheringAlgorithm m_CipheringAlgorithm;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* EpsNasSecurityMode_H_ */