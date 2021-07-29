/**
 * Npcf_PolicyAuthorization Service API
 * PCF Policy Authorization Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * UpPathChgEvent.h
 *
 * Contains the UP path change event subscription from the AF.
 */

#ifndef UpPathChgEvent_H_
#define UpPathChgEvent_H_

#include "DnaiChangeType.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Contains the UP path change event subscription from the AF.
/// </summary>
class UpPathChgEvent {
public:
  UpPathChgEvent();
  virtual ~UpPathChgEvent();

  void validate();

  /////////////////////////////////////////////
  /// UpPathChgEvent members

  /// <summary>
  /// String providing an URI formatted according to RFC 3986
  /// </summary>
  std::string getNotificationUri() const;
  void setNotificationUri(std::string const &value);
  /// <summary>
  /// It is used to set the value of Notification Correlation ID in the
  /// notification sent by the SMF.
  /// </summary>
  std::string getNotifCorreId() const;
  void setNotifCorreId(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  DnaiChangeType getDnaiChgType() const;
  void setDnaiChgType(DnaiChangeType const &value);
  /// <summary>
  ///
  /// </summary>
  bool isAfAckInd() const;
  void setAfAckInd(bool const value);
  bool afAckIndIsSet() const;
  void unsetAfAckInd();

  friend void to_json(nlohmann::json &j, const UpPathChgEvent &o);
  friend void from_json(const nlohmann::json &j, UpPathChgEvent &o);

protected:
  std::string m_NotificationUri;

  std::string m_NotifCorreId;

  DnaiChangeType m_DnaiChgType;

  bool m_AfAckInd;
  bool m_AfAckIndIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* UpPathChgEvent_H_ */
