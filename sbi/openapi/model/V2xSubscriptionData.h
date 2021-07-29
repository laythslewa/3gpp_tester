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
 * V2xSubscriptionData.h
 *
 *
 */

#ifndef V2xSubscriptionData_H_
#define V2xSubscriptionData_H_

#include "LteV2xAuth.h"
#include "NrV2xAuth.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class V2xSubscriptionData {
public:
  V2xSubscriptionData();
  virtual ~V2xSubscriptionData();

  void validate();

  /////////////////////////////////////////////
  /// V2xSubscriptionData members

  /// <summary>
  ///
  /// </summary>
  NrV2xAuth getNrV2xServicesAuth() const;
  void setNrV2xServicesAuth(NrV2xAuth const &value);
  bool nrV2xServicesAuthIsSet() const;
  void unsetNrV2xServicesAuth();
  /// <summary>
  ///
  /// </summary>
  LteV2xAuth getLteV2xServicesAuth() const;
  void setLteV2xServicesAuth(LteV2xAuth const &value);
  bool lteV2xServicesAuthIsSet() const;
  void unsetLteV2xServicesAuth();
  /// <summary>
  /// String representing a bit rate that shall be formatted as follows.
  /// </summary>
  std::string getNrUePc5Ambr() const;
  void setNrUePc5Ambr(std::string const &value);
  bool nrUePc5AmbrIsSet() const;
  void unsetNrUePc5Ambr();
  /// <summary>
  /// String representing a bit rate that shall be formatted as follows.
  /// </summary>
  std::string getLtePc5Ambr() const;
  void setLtePc5Ambr(std::string const &value);
  bool ltePc5AmbrIsSet() const;
  void unsetLtePc5Ambr();

  friend void to_json(nlohmann::json &j, const V2xSubscriptionData &o);
  friend void from_json(const nlohmann::json &j, V2xSubscriptionData &o);

protected:
  NrV2xAuth m_NrV2xServicesAuth;
  bool m_NrV2xServicesAuthIsSet;
  LteV2xAuth m_LteV2xServicesAuth;
  bool m_LteV2xServicesAuthIsSet;
  std::string m_NrUePc5Ambr;
  bool m_NrUePc5AmbrIsSet;
  std::string m_LtePc5Ambr;
  bool m_LtePc5AmbrIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* V2xSubscriptionData_H_ */
