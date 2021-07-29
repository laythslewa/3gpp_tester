/**
 * Namf_Location
 * AMF Location Service © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA,
 * ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * UePrivacyRequirements.h
 *
 * UE privacy requirements from (H)GMLC to the serving AMF or VGMLC(in the
 * roaming case) for the target UE
 */

#ifndef UePrivacyRequirements_H_
#define UePrivacyRequirements_H_

#include "LcsServiceAuth.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// UE privacy requirements from (H)GMLC to the serving AMF or VGMLC(in the
/// roaming case) for the target UE
/// </summary>
class UePrivacyRequirements {
public:
  UePrivacyRequirements();
  virtual ~UePrivacyRequirements();

  void validate();

  /////////////////////////////////////////////
  /// UePrivacyRequirements members

  /// <summary>
  ///
  /// </summary>
  LcsServiceAuth getLcsServiceAuthInfo() const;
  void setLcsServiceAuthInfo(LcsServiceAuth const &value);
  bool lcsServiceAuthInfoIsSet() const;
  void unsetLcsServiceAuthInfo();
  /// <summary>
  ///
  /// </summary>
  bool isCodeWordCheck() const;
  void setCodeWordCheck(bool const value);
  bool codeWordCheckIsSet() const;
  void unsetCodeWordCheck();

  friend void to_json(nlohmann::json &j, const UePrivacyRequirements &o);
  friend void from_json(const nlohmann::json &j, UePrivacyRequirements &o);

protected:
  LcsServiceAuth m_LcsServiceAuthInfo;
  bool m_LcsServiceAuthInfoIsSet;
  bool m_CodeWordCheck;
  bool m_CodeWordCheckIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* UePrivacyRequirements_H_ */