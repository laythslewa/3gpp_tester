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

#include "N2InformationNotification.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

N2InformationNotification::N2InformationNotification() {
  m_N2NotifySubscriptionId = "";
  m_N2InfoContainerIsSet = false;
  m_ToReleaseSessionListIsSet = false;
  m_LcsCorrelationId = "";
  m_LcsCorrelationIdIsSet = false;
  m_NotifyReasonIsSet = false;
  m_SmfChangeInfoListIsSet = false;
  m_RanNodeIdIsSet = false;
  m_InitialAmfName = "";
  m_InitialAmfNameIsSet = false;
  m_AnN2IPv4Addr = "";
  m_AnN2IPv4AddrIsSet = false;
  m_AnN2IPv6AddrIsSet = false;
  m_GuamiIsSet = false;
  m_NotifySourceNgRan = false;
  m_NotifySourceNgRanIsSet = false;
}

N2InformationNotification::~N2InformationNotification() {}

void N2InformationNotification::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const N2InformationNotification &o) {
  j = nlohmann::json();
  j["n2NotifySubscriptionId"] = o.m_N2NotifySubscriptionId;
  if (o.n2InfoContainerIsSet())
    j["n2InfoContainer"] = o.m_N2InfoContainer;
  if (o.toReleaseSessionListIsSet() || !o.m_ToReleaseSessionList.empty())
    j["toReleaseSessionList"] = o.m_ToReleaseSessionList;
  if (o.lcsCorrelationIdIsSet())
    j["lcsCorrelationId"] = o.m_LcsCorrelationId;
  if (o.notifyReasonIsSet())
    j["notifyReason"] = o.m_NotifyReason;
  if (o.smfChangeInfoListIsSet() || !o.m_SmfChangeInfoList.empty())
    j["smfChangeInfoList"] = o.m_SmfChangeInfoList;
  if (o.ranNodeIdIsSet())
    j["ranNodeId"] = o.m_RanNodeId;
  if (o.initialAmfNameIsSet())
    j["initialAmfName"] = o.m_InitialAmfName;
  if (o.anN2IPv4AddrIsSet())
    j["anN2IPv4Addr"] = o.m_AnN2IPv4Addr;
  if (o.anN2IPv6AddrIsSet())
    j["anN2IPv6Addr"] = o.m_AnN2IPv6Addr;
  if (o.guamiIsSet())
    j["guami"] = o.m_Guami;
  if (o.notifySourceNgRanIsSet())
    j["notifySourceNgRan"] = o.m_NotifySourceNgRan;
}

void from_json(const nlohmann::json &j, N2InformationNotification &o) {
  j.at("n2NotifySubscriptionId").get_to(o.m_N2NotifySubscriptionId);
  if (j.find("n2InfoContainer") != j.end()) {
    j.at("n2InfoContainer").get_to(o.m_N2InfoContainer);
    o.m_N2InfoContainerIsSet = true;
  }
  if (j.find("toReleaseSessionList") != j.end()) {
    j.at("toReleaseSessionList").get_to(o.m_ToReleaseSessionList);
    o.m_ToReleaseSessionListIsSet = true;
  }
  if (j.find("lcsCorrelationId") != j.end()) {
    j.at("lcsCorrelationId").get_to(o.m_LcsCorrelationId);
    o.m_LcsCorrelationIdIsSet = true;
  }
  if (j.find("notifyReason") != j.end()) {
    j.at("notifyReason").get_to(o.m_NotifyReason);
    o.m_NotifyReasonIsSet = true;
  }
  if (j.find("smfChangeInfoList") != j.end()) {
    j.at("smfChangeInfoList").get_to(o.m_SmfChangeInfoList);
    o.m_SmfChangeInfoListIsSet = true;
  }
  if (j.find("ranNodeId") != j.end()) {
    j.at("ranNodeId").get_to(o.m_RanNodeId);
    o.m_RanNodeIdIsSet = true;
  }
  if (j.find("initialAmfName") != j.end()) {
    j.at("initialAmfName").get_to(o.m_InitialAmfName);
    o.m_InitialAmfNameIsSet = true;
  }
  if (j.find("anN2IPv4Addr") != j.end()) {
    j.at("anN2IPv4Addr").get_to(o.m_AnN2IPv4Addr);
    o.m_AnN2IPv4AddrIsSet = true;
  }
  if (j.find("anN2IPv6Addr") != j.end()) {
    j.at("anN2IPv6Addr").get_to(o.m_AnN2IPv6Addr);
    o.m_AnN2IPv6AddrIsSet = true;
  }
  if (j.find("guami") != j.end()) {
    j.at("guami").get_to(o.m_Guami);
    o.m_GuamiIsSet = true;
  }
  if (j.find("notifySourceNgRan") != j.end()) {
    j.at("notifySourceNgRan").get_to(o.m_NotifySourceNgRan);
    o.m_NotifySourceNgRanIsSet = true;
  }
}

std::string N2InformationNotification::getN2NotifySubscriptionId() const {
  return m_N2NotifySubscriptionId;
}
void N2InformationNotification::setN2NotifySubscriptionId(
    std::string const &value) {
  m_N2NotifySubscriptionId = value;
}
N2InfoContainer N2InformationNotification::getN2InfoContainer() const {
  return m_N2InfoContainer;
}
void N2InformationNotification::setN2InfoContainer(
    N2InfoContainer const &value) {
  m_N2InfoContainer = value;
  m_N2InfoContainerIsSet = true;
}
bool N2InformationNotification::n2InfoContainerIsSet() const {
  return m_N2InfoContainerIsSet;
}
void N2InformationNotification::unsetN2InfoContainer() {
  m_N2InfoContainerIsSet = false;
}
std::vector<int32_t> &N2InformationNotification::getToReleaseSessionList() {
  return m_ToReleaseSessionList;
}
void N2InformationNotification::setToReleaseSessionList(
    std::vector<int32_t> const value) {
  m_ToReleaseSessionList = value;
  m_ToReleaseSessionListIsSet = true;
}
bool N2InformationNotification::toReleaseSessionListIsSet() const {
  return m_ToReleaseSessionListIsSet;
}
void N2InformationNotification::unsetToReleaseSessionList() {
  m_ToReleaseSessionListIsSet = false;
}
std::string N2InformationNotification::getLcsCorrelationId() const {
  return m_LcsCorrelationId;
}
void N2InformationNotification::setLcsCorrelationId(std::string const &value) {
  m_LcsCorrelationId = value;
  m_LcsCorrelationIdIsSet = true;
}
bool N2InformationNotification::lcsCorrelationIdIsSet() const {
  return m_LcsCorrelationIdIsSet;
}
void N2InformationNotification::unsetLcsCorrelationId() {
  m_LcsCorrelationIdIsSet = false;
}
N2InfoNotifyReason N2InformationNotification::getNotifyReason() const {
  return m_NotifyReason;
}
void N2InformationNotification::setNotifyReason(
    N2InfoNotifyReason const &value) {
  m_NotifyReason = value;
  m_NotifyReasonIsSet = true;
}
bool N2InformationNotification::notifyReasonIsSet() const {
  return m_NotifyReasonIsSet;
}
void N2InformationNotification::unsetNotifyReason() {
  m_NotifyReasonIsSet = false;
}
std::vector<SmfChangeInfo> &N2InformationNotification::getSmfChangeInfoList() {
  return m_SmfChangeInfoList;
}
void N2InformationNotification::setSmfChangeInfoList(
    std::vector<SmfChangeInfo> const &value) {
  m_SmfChangeInfoList = value;
  m_SmfChangeInfoListIsSet = true;
}
bool N2InformationNotification::smfChangeInfoListIsSet() const {
  return m_SmfChangeInfoListIsSet;
}
void N2InformationNotification::unsetSmfChangeInfoList() {
  m_SmfChangeInfoListIsSet = false;
}
GlobalRanNodeId N2InformationNotification::getRanNodeId() const {
  return m_RanNodeId;
}
void N2InformationNotification::setRanNodeId(GlobalRanNodeId const &value) {
  m_RanNodeId = value;
  m_RanNodeIdIsSet = true;
}
bool N2InformationNotification::ranNodeIdIsSet() const {
  return m_RanNodeIdIsSet;
}
void N2InformationNotification::unsetRanNodeId() { m_RanNodeIdIsSet = false; }
std::string N2InformationNotification::getInitialAmfName() const {
  return m_InitialAmfName;
}
void N2InformationNotification::setInitialAmfName(std::string const &value) {
  m_InitialAmfName = value;
  m_InitialAmfNameIsSet = true;
}
bool N2InformationNotification::initialAmfNameIsSet() const {
  return m_InitialAmfNameIsSet;
}
void N2InformationNotification::unsetInitialAmfName() {
  m_InitialAmfNameIsSet = false;
}
std::string N2InformationNotification::getAnN2IPv4Addr() const {
  return m_AnN2IPv4Addr;
}
void N2InformationNotification::setAnN2IPv4Addr(std::string const &value) {
  m_AnN2IPv4Addr = value;
  m_AnN2IPv4AddrIsSet = true;
}
bool N2InformationNotification::anN2IPv4AddrIsSet() const {
  return m_AnN2IPv4AddrIsSet;
}
void N2InformationNotification::unsetAnN2IPv4Addr() {
  m_AnN2IPv4AddrIsSet = false;
}
Ipv6Addr N2InformationNotification::getAnN2IPv6Addr() const {
  return m_AnN2IPv6Addr;
}
void N2InformationNotification::setAnN2IPv6Addr(Ipv6Addr const &value) {
  m_AnN2IPv6Addr = value;
  m_AnN2IPv6AddrIsSet = true;
}
bool N2InformationNotification::anN2IPv6AddrIsSet() const {
  return m_AnN2IPv6AddrIsSet;
}
void N2InformationNotification::unsetAnN2IPv6Addr() {
  m_AnN2IPv6AddrIsSet = false;
}
Guami N2InformationNotification::getGuami() const { return m_Guami; }
void N2InformationNotification::setGuami(Guami const &value) {
  m_Guami = value;
  m_GuamiIsSet = true;
}
bool N2InformationNotification::guamiIsSet() const { return m_GuamiIsSet; }
void N2InformationNotification::unsetGuami() { m_GuamiIsSet = false; }
bool N2InformationNotification::isNotifySourceNgRan() const {
  return m_NotifySourceNgRan;
}
void N2InformationNotification::setNotifySourceNgRan(bool const value) {
  m_NotifySourceNgRan = value;
  m_NotifySourceNgRanIsSet = true;
}
bool N2InformationNotification::notifySourceNgRanIsSet() const {
  return m_NotifySourceNgRanIsSet;
}
void N2InformationNotification::unsetNotifySourceNgRan() {
  m_NotifySourceNgRanIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org