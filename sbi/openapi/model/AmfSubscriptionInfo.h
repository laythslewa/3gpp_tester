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
 * AmfSubscriptionInfo.h
 *
 * Information the UDR stores and retrieves related to active subscriptions at
 * the AMF(s).
 */

#ifndef AmfSubscriptionInfo_H_
#define AmfSubscriptionInfo_H_

#include "ContextInfo.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Information the UDR stores and retrieves related to active subscriptions at
/// the AMF(s).
/// </summary>
class AmfSubscriptionInfo {
public:
  AmfSubscriptionInfo();
  virtual ~AmfSubscriptionInfo();

  void validate();

  /////////////////////////////////////////////
  /// AmfSubscriptionInfo members

  /// <summary>
  /// String uniquely identifying a NF instance. The format of the NF Instance
  /// ID shall be a Universally Unique Identifier (UUID) version 4, as described
  /// in IETF RFC 4122.
  /// </summary>
  std::string getAmfInstanceId() const;
  void setAmfInstanceId(std::string const &value);
  /// <summary>
  /// String providing an URI formatted according to RFC 3986
  /// </summary>
  std::string getSubscriptionId() const;
  void setSubscriptionId(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  std::string getSubsChangeNotifyCorrelationId() const;
  void setSubsChangeNotifyCorrelationId(std::string const &value);
  bool subsChangeNotifyCorrelationIdIsSet() const;
  void unsetSubsChangeNotifyCorrelationId();
  /// <summary>
  ///
  /// </summary>
  ContextInfo getContextInfo() const;
  void setContextInfo(ContextInfo const &value);
  bool contextInfoIsSet() const;
  void unsetContextInfo();

  friend void to_json(nlohmann::json &j, const AmfSubscriptionInfo &o);
  friend void from_json(const nlohmann::json &j, AmfSubscriptionInfo &o);

protected:
  std::string m_AmfInstanceId;

  std::string m_SubscriptionId;

  std::string m_SubsChangeNotifyCorrelationId;
  bool m_SubsChangeNotifyCorrelationIdIsSet;
  ContextInfo m_ContextInfo;
  bool m_ContextInfoIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AmfSubscriptionInfo_H_ */