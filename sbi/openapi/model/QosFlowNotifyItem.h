/**
 * Nsmf_PDUSession
 * SMF PDU Session Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
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
 * QosFlowNotifyItem.h
 *
 * Notification related to a QoS flow
 */

#ifndef QosFlowNotifyItem_H_
#define QosFlowNotifyItem_H_

#include "NotificationCause.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Notification related to a QoS flow
/// </summary>
class QosFlowNotifyItem {
public:
  QosFlowNotifyItem();
  virtual ~QosFlowNotifyItem();

  void validate();

  /////////////////////////////////////////////
  /// QosFlowNotifyItem members

  /// <summary>
  /// Unsigned integer identifying a QoS flow, within the range 0 to 63.
  /// </summary>
  int32_t getQfi() const;
  void setQfi(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  NotificationCause getNotificationCause() const;
  void setNotificationCause(NotificationCause const &value);
  /// <summary>
  ///
  /// </summary>
  int32_t getCurrentQosProfileIndex() const;
  void setCurrentQosProfileIndex(int32_t const value);
  bool currentQosProfileIndexIsSet() const;
  void unsetCurrentQosProfileIndex();
  /// <summary>
  ///
  /// </summary>
  bool isNullQoSProfileIndex() const;
  void setNullQoSProfileIndex(bool const value);
  bool nullQoSProfileIndexIsSet() const;
  void unsetNullQoSProfileIndex();

  friend void to_json(nlohmann::json &j, const QosFlowNotifyItem &o);
  friend void from_json(const nlohmann::json &j, QosFlowNotifyItem &o);

protected:
  int32_t m_Qfi;

  NotificationCause m_NotificationCause;

  int32_t m_CurrentQosProfileIndex;
  bool m_CurrentQosProfileIndexIsSet;
  bool m_NullQoSProfileIndex;
  bool m_NullQoSProfileIndexIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* QosFlowNotifyItem_H_ */