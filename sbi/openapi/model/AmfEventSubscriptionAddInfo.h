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
 * AmfEventSubscriptionAddInfo.h
 *
 * Additional information received for an AMF event subscription, e.g. binding
 * indications
 */

#ifndef AmfEventSubscriptionAddInfo_H_
#define AmfEventSubscriptionAddInfo_H_

#include "NFType.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Additional information received for an AMF event subscription, e.g. binding
/// indications
/// </summary>
class AmfEventSubscriptionAddInfo {
public:
  AmfEventSubscriptionAddInfo();
  virtual ~AmfEventSubscriptionAddInfo();

  void validate();

  /////////////////////////////////////////////
  /// AmfEventSubscriptionAddInfo members

  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getBindingInfo();
  void setBindingInfo(std::vector<std::string> const &value);
  bool bindingInfoIsSet() const;
  void unsetBindingInfo();
  /// <summary>
  ///
  /// </summary>
  NFType getSubscribingNfType() const;
  void setSubscribingNfType(NFType const &value);
  bool subscribingNfTypeIsSet() const;
  void unsetSubscribingNfType();

  friend void to_json(nlohmann::json &j, const AmfEventSubscriptionAddInfo &o);
  friend void from_json(const nlohmann::json &j,
                        AmfEventSubscriptionAddInfo &o);

protected:
  std::vector<std::string> m_BindingInfo;
  bool m_BindingInfoIsSet;
  NFType m_SubscribingNfType;
  bool m_SubscribingNfTypeIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AmfEventSubscriptionAddInfo_H_ */
