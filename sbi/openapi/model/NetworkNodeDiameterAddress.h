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
 * NetworkNodeDiameterAddress.h
 *
 *
 */

#ifndef NetworkNodeDiameterAddress_H_
#define NetworkNodeDiameterAddress_H_

#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class NetworkNodeDiameterAddress {
public:
  NetworkNodeDiameterAddress();
  virtual ~NetworkNodeDiameterAddress();

  void validate();

  /////////////////////////////////////////////
  /// NetworkNodeDiameterAddress members

  /// <summary>
  /// string containing an FQDN or realm as defined in RFC 6733.
  /// </summary>
  std::string getName() const;
  void setName(std::string const &value);
  /// <summary>
  /// string containing an FQDN or realm as defined in RFC 6733.
  /// </summary>
  std::string getRealm() const;
  void setRealm(std::string const &value);

  friend void to_json(nlohmann::json &j, const NetworkNodeDiameterAddress &o);
  friend void from_json(const nlohmann::json &j, NetworkNodeDiameterAddress &o);

protected:
  std::string m_Name;

  std::string m_Realm;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* NetworkNodeDiameterAddress_H_ */
