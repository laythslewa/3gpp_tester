/**
 * Nnwdaf_EventsSubscription
 * Nnwdaf_EventsSubscription Service API. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * NnwdafEventsSubscription.h
 *
 * Represents an Individual NWDAF Event Subscription resource.
 */

#ifndef NnwdafEventsSubscription_H_
#define NnwdafEventsSubscription_H_

#include "EventNotification.h"
#include "EventSubscription.h"
#include "FailureEventInfo.h"
#include "ReportingInformation.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents an Individual NWDAF Event Subscription resource.
/// </summary>
class NnwdafEventsSubscription {
public:
  NnwdafEventsSubscription();
  virtual ~NnwdafEventsSubscription();

  void validate();

  /////////////////////////////////////////////
  /// NnwdafEventsSubscription members

  /// <summary>
  /// Subscribed events
  /// </summary>
  std::vector<EventSubscription> &getEventSubscriptions();
  void setEventSubscriptions(std::vector<EventSubscription> const &value);
  /// <summary>
  ///
  /// </summary>
  ReportingInformation getEvtReq() const;
  void setEvtReq(ReportingInformation const &value);
  bool evtReqIsSet() const;
  void unsetEvtReq();
  /// <summary>
  /// String providing an URI formatted according to RFC 3986
  /// </summary>
  std::string getNotificationURI() const;
  void setNotificationURI(std::string const &value);
  bool notificationURIIsSet() const;
  void unsetNotificationURI();
  /// <summary>
  /// A string used to indicate the features supported by an API that is used as
  /// defined in clause 6.6 in 3GPP TS 29.500. The string shall contain a
  /// bitmask indicating supported features in hexadecimal representation Each
  /// character in the string shall take a value of \&quot;0\&quot; to
  /// \&quot;9\&quot;, \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to
  /// \&quot;F\&quot; and shall represent the support of 4 features as described
  /// in table 5.2.2-3. The most significant character representing the
  /// highest-numbered features shall appear first in the string, and the
  /// character representing features 1 to 4 shall appear last in the string.
  /// The list of features and their numbering (starting with 1) are defined
  /// separately for each API. If the string contains a lower number of
  /// characters than there are defined features for an API, all features that
  /// would be represented by characters that are not present in the string are
  /// not supported
  /// </summary>
  std::string getSupportedFeatures() const;
  void setSupportedFeatures(std::string const &value);
  bool supportedFeaturesIsSet() const;
  void unsetSupportedFeatures();
  /// <summary>
  ///
  /// </summary>
  std::vector<EventNotification> &getEventNotifications();
  void setEventNotifications(std::vector<EventNotification> const &value);
  bool eventNotificationsIsSet() const;
  void unsetEventNotifications();
  /// <summary>
  ///
  /// </summary>
  std::vector<FailureEventInfo> &getFailEventReports();
  void setFailEventReports(std::vector<FailureEventInfo> const &value);
  bool failEventReportsIsSet() const;
  void unsetFailEventReports();

  friend void to_json(nlohmann::json &j, const NnwdafEventsSubscription &o);
  friend void from_json(const nlohmann::json &j, NnwdafEventsSubscription &o);

protected:
  std::vector<EventSubscription> m_EventSubscriptions;

  ReportingInformation m_EvtReq;
  bool m_EvtReqIsSet;
  std::string m_NotificationURI;
  bool m_NotificationURIIsSet;
  std::string m_SupportedFeatures;
  bool m_SupportedFeaturesIsSet;
  std::vector<EventNotification> m_EventNotifications;
  bool m_EventNotificationsIsSet;
  std::vector<FailureEventInfo> m_FailEventReports;
  bool m_FailEventReportsIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* NnwdafEventsSubscription_H_ */