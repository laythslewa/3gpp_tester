/**
 * Unified Data Repository Service API file for subscription data
 * Unified Data Repository Service (subscription data). The API version is
 * defined in 3GPP TS 29.504. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * PduSessionTypes.h
 *
 *
 */

#ifndef PduSessionTypes_H_
#define PduSessionTypes_H_

#include "PduSessionType.h"
#include <nlohmann/json.hpp>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class PduSessionTypes {
public:
  PduSessionTypes();
  virtual ~PduSessionTypes();

  void validate();

  /////////////////////////////////////////////
  /// PduSessionTypes members

  /// <summary>
  ///
  /// </summary>
  PduSessionType getDefaultSessionType() const;
  void setDefaultSessionType(PduSessionType const &value);
  /// <summary>
  ///
  /// </summary>
  std::vector<PduSessionType> &getAllowedSessionTypes();
  void setAllowedSessionTypes(std::vector<PduSessionType> const &value);
  bool allowedSessionTypesIsSet() const;
  void unsetAllowedSessionTypes();

  friend void to_json(nlohmann::json &j, const PduSessionTypes &o);
  friend void from_json(const nlohmann::json &j, PduSessionTypes &o);

protected:
  PduSessionType m_DefaultSessionType;

  std::vector<PduSessionType> m_AllowedSessionTypes;
  bool m_AllowedSessionTypesIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* PduSessionTypes_H_ */