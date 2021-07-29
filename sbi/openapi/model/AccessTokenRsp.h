/**
 * NRF OAuth2
 * NRF OAuth2 Authorization. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
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
 * AccessTokenRsp.h
 *
 * Contains information related to the access token response
 */

#ifndef AccessTokenRsp_H_
#define AccessTokenRsp_H_

#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Contains information related to the access token response
/// </summary>
class AccessTokenRsp {
public:
  AccessTokenRsp();
  virtual ~AccessTokenRsp();

  void validate();

  /////////////////////////////////////////////
  /// AccessTokenRsp members

  /// <summary>
  /// JWS Compact Serialized representation of JWS signed JSON object
  /// (AccessTokenClaims)
  /// </summary>
  std::string getAccessToken() const;
  void setAccessToken(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  std::string getTokenType() const;
  void setTokenType(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  int32_t getExpiresIn() const;
  void setExpiresIn(int32_t const value);
  bool expiresInIsSet() const;
  void unsetExpires_in();
  /// <summary>
  ///
  /// </summary>
  std::string getScope() const;
  void setScope(std::string const &value);
  bool scopeIsSet() const;
  void unsetScope();

  friend void to_json(nlohmann::json &j, const AccessTokenRsp &o);
  friend void from_json(const nlohmann::json &j, AccessTokenRsp &o);

protected:
  std::string m_Access_token;

  std::string m_Token_type;

  int32_t m_Expires_in;
  bool m_Expires_inIsSet;
  std::string m_Scope;
  bool m_ScopeIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AccessTokenRsp_H_ */