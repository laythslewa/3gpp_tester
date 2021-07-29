/**
 * Npcf_SMPolicyControl API
 * Session Management Policy Control Service © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "DownlinkDataNotificationControlRm.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

DownlinkDataNotificationControlRm::DownlinkDataNotificationControlRm() {
  m_NotifCtrlIndsIsSet = false;
  m_TypesOfNotifIsSet = false;
}

DownlinkDataNotificationControlRm::~DownlinkDataNotificationControlRm() {}

void DownlinkDataNotificationControlRm::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const DownlinkDataNotificationControlRm &o) {
  j = nlohmann::json();
  if (o.notifCtrlIndsIsSet() || !o.m_NotifCtrlInds.empty())
    j["notifCtrlInds"] = o.m_NotifCtrlInds;
  if (o.typesOfNotifIsSet() || !o.m_TypesOfNotif.empty())
    j["typesOfNotif"] = o.m_TypesOfNotif;
}

void from_json(const nlohmann::json &j, DownlinkDataNotificationControlRm &o) {
  if (j.find("notifCtrlInds") != j.end()) {
    j.at("notifCtrlInds").get_to(o.m_NotifCtrlInds);
    o.m_NotifCtrlIndsIsSet = true;
  }
  if (j.find("typesOfNotif") != j.end()) {
    j.at("typesOfNotif").get_to(o.m_TypesOfNotif);
    o.m_TypesOfNotifIsSet = true;
  }
}

std::vector<NotificationControlIndication> &
DownlinkDataNotificationControlRm::getNotifCtrlInds() {
  return m_NotifCtrlInds;
}
void DownlinkDataNotificationControlRm::setNotifCtrlInds(
    std::vector<NotificationControlIndication> const &value) {
  m_NotifCtrlInds = value;
  m_NotifCtrlIndsIsSet = true;
}
bool DownlinkDataNotificationControlRm::notifCtrlIndsIsSet() const {
  return m_NotifCtrlIndsIsSet;
}
void DownlinkDataNotificationControlRm::unsetNotifCtrlInds() {
  m_NotifCtrlIndsIsSet = false;
}
std::vector<DlDataDeliveryStatus> &
DownlinkDataNotificationControlRm::getTypesOfNotif() {
  return m_TypesOfNotif;
}
void DownlinkDataNotificationControlRm::setTypesOfNotif(
    std::vector<DlDataDeliveryStatus> const &value) {
  m_TypesOfNotif = value;
  m_TypesOfNotifIsSet = true;
}
bool DownlinkDataNotificationControlRm::typesOfNotifIsSet() const {
  return m_TypesOfNotifIsSet;
}
void DownlinkDataNotificationControlRm::unsetTypesOfNotif() {
  m_TypesOfNotifIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
