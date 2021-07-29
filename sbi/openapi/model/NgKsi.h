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
 * NgKsi.h
 *
 * Represents the ngKSI
 */

#ifndef NgKsi_H_
#define NgKsi_H_

#include "ScType.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents the ngKSI
/// </summary>
class NgKsi {
public:
  NgKsi();
  virtual ~NgKsi();

  void validate();

  /////////////////////////////////////////////
  /// NgKsi members

  /// <summary>
  ///
  /// </summary>
  ScType getTsc() const;
  void setTsc(ScType const &value);
  /// <summary>
  ///
  /// </summary>
  int32_t getKsi() const;
  void setKsi(int32_t const value);

  friend void to_json(nlohmann::json &j, const NgKsi &o);
  friend void from_json(const nlohmann::json &j, NgKsi &o);

protected:
  ScType m_Tsc;

  int32_t m_Ksi;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* NgKsi_H_ */
