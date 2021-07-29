/**
 * Nhss_imsUECM
 * Nhss UE Context Management Service for IMS. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ScscfRestorationInfo.h
 *
 * S-CSCF restoration information
 */

#ifndef ScscfRestorationInfo_H_
#define ScscfRestorationInfo_H_

#include "RestorationInfo.h"
#include "SipAuthenticationScheme.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// S-CSCF restoration information
/// </summary>
class ScscfRestorationInfo {
public:
  ScscfRestorationInfo();
  virtual ~ScscfRestorationInfo();

  void validate();

  /////////////////////////////////////////////
  /// ScscfRestorationInfo members

  /// <summary>
  ///
  /// </summary>
  std::string getUserName() const;
  void setUserName(std::string const &value);
  bool userNameIsSet() const;
  void unsetUserName();
  /// <summary>
  ///
  /// </summary>
  std::vector<RestorationInfo> &getRestorationInfo();
  void setRestorationInfo(std::vector<RestorationInfo> const &value);
  bool restorationInfoIsSet() const;
  void unsetRestorationInfo();
  /// <summary>
  /// string with format \&quot;date-time\&quot; as defined in OpenAPI.
  /// </summary>
  std::string getRegistrationTimeOut() const;
  void setRegistrationTimeOut(std::string const &value);
  bool registrationTimeOutIsSet() const;
  void unsetRegistrationTimeOut();
  /// <summary>
  ///
  /// </summary>
  SipAuthenticationScheme getSipAuthenticationScheme() const;
  void setSipAuthenticationScheme(SipAuthenticationScheme const &value);
  bool sipAuthenticationSchemeIsSet() const;
  void unsetSipAuthenticationScheme();

  friend void to_json(nlohmann::json &j, const ScscfRestorationInfo &o);
  friend void from_json(const nlohmann::json &j, ScscfRestorationInfo &o);

protected:
  std::string m_UserName;
  bool m_UserNameIsSet;
  std::vector<RestorationInfo> m_RestorationInfo;
  bool m_RestorationInfoIsSet;
  std::string m_RegistrationTimeOut;
  bool m_RegistrationTimeOutIsSet;
  SipAuthenticationScheme m_SipAuthenticationScheme;
  bool m_SipAuthenticationSchemeIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ScscfRestorationInfo_H_ */
