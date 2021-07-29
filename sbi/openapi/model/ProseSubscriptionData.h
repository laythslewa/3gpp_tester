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
 * ProseSubscriptionData.h
 *
 *
 */

#ifndef ProseSubscriptionData_H_
#define ProseSubscriptionData_H_

#include "ProseServiceAuth.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class ProseSubscriptionData {
public:
  ProseSubscriptionData();
  virtual ~ProseSubscriptionData();

  void validate();

  /////////////////////////////////////////////
  /// ProseSubscriptionData members

  /// <summary>
  ///
  /// </summary>
  ProseServiceAuth getProseServiceAuth() const;
  void setProseServiceAuth(ProseServiceAuth const &value);
  bool proseServiceAuthIsSet() const;
  void unsetProseServiceAuth();
  /// <summary>
  /// String representing a bit rate that shall be formatted as follows.
  /// </summary>
  std::string getNrUePc5Ambr() const;
  void setNrUePc5Ambr(std::string const &value);
  bool nrUePc5AmbrIsSet() const;
  void unsetNrUePc5Ambr();

  friend void to_json(nlohmann::json &j, const ProseSubscriptionData &o);
  friend void from_json(const nlohmann::json &j, ProseSubscriptionData &o);

protected:
  ProseServiceAuth m_ProseServiceAuth;
  bool m_ProseServiceAuthIsSet;
  std::string m_NrUePc5Ambr;
  bool m_NrUePc5AmbrIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ProseSubscriptionData_H_ */
