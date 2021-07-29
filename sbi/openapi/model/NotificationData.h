/**
 * NRF NFManagement Service
 * NRF NFManagement Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
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
 * NotificationData.h
 *
 * Data sent in notifications from NRF to subscribed NF Instances
 */

#ifndef NotificationData_H_
#define NotificationData_H_

#include "ChangeItem.h"
#include "ConditionEventType.h"
#include "NFProfile.h"
#include "NotificationEventType.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Data sent in notifications from NRF to subscribed NF Instances
/// </summary>
class NotificationData {
public:
  NotificationData();
  virtual ~NotificationData();

  void validate();

  /////////////////////////////////////////////
  /// NotificationData members

  /// <summary>
  ///
  /// </summary>
  NotificationEventType getEvent() const;
  void setEvent(NotificationEventType const &value);
  /// <summary>
  /// String providing an URI formatted according to RFC 3986
  /// </summary>
  std::string getNfInstanceUri() const;
  void setNfInstanceUri(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  NFProfile getNfProfile() const;
  void setNfProfile(NFProfile const &value);
  bool nfProfileIsSet() const;
  void unsetNfProfile();
  /// <summary>
  ///
  /// </summary>
  std::vector<ChangeItem> &getProfileChanges();
  void setProfileChanges(std::vector<ChangeItem> const &value);
  bool profileChangesIsSet() const;
  void unsetProfileChanges();
  /// <summary>
  ///
  /// </summary>
  ConditionEventType getConditionEvent() const;
  void setConditionEvent(ConditionEventType const &value);
  bool conditionEventIsSet() const;
  void unsetConditionEvent();

  friend void to_json(nlohmann::json &j, const NotificationData &o);
  friend void from_json(const nlohmann::json &j, NotificationData &o);

protected:
  NotificationEventType m_Event;

  std::string m_NfInstanceUri;

  NFProfile m_NfProfile;
  bool m_NfProfileIsSet;
  std::vector<ChangeItem> m_ProfileChanges;
  bool m_ProfileChangesIsSet;
  ConditionEventType m_ConditionEvent;
  bool m_ConditionEventIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* NotificationData_H_ */
