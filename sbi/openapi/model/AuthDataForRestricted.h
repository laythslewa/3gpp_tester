/**
 * N5g-ddnmf_Discovery API
 * N5g-ddnmf_Discovery Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * AuthDataForRestricted.h
 *
 * Represents obtained authorization Data for restricted discovery for a
 * discoverer UE
 */

#ifndef AuthDataForRestricted_H_
#define AuthDataForRestricted_H_

#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents obtained authorization Data for restricted discovery for a
/// discoverer UE
/// </summary>
class AuthDataForRestricted {
public:
  AuthDataForRestricted();
  virtual ~AuthDataForRestricted();

  void validate();

  /////////////////////////////////////////////
  /// AuthDataForRestricted members

  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getProseQueryCodes();
  void setProseQueryCodes(std::vector<std::string> const &value);
  /// <summary>
  /// Contains the ProSe Response Code.
  /// </summary>
  std::string getProseRespCode() const;
  void setProseRespCode(std::string const &value);
  /// <summary>
  /// string with format \&quot;date-time\&quot; as defined in OpenAPI.
  /// </summary>
  std::string getValidityTime() const;
  void setValidityTime(std::string const &value);

  friend void to_json(nlohmann::json &j, const AuthDataForRestricted &o);
  friend void from_json(const nlohmann::json &j, AuthDataForRestricted &o);

protected:
  std::vector<std::string> m_ProseQueryCodes;

  std::string m_ProseRespCode;

  std::string m_ValidityTime;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AuthDataForRestricted_H_ */
