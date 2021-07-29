/**
 * 3gpp-network-status-reporting
 * API for reporting network status. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "NetworkStatusReportingNotification.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

NetworkStatusReportingNotification::NetworkStatusReportingNotification() {
  m_Subscription = "";
  m_NsiValue = 0;
  m_NsiValueIsSet = false;
  m_NsiTypeIsSet = false;
}

NetworkStatusReportingNotification::~NetworkStatusReportingNotification() {}

void NetworkStatusReportingNotification::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const NetworkStatusReportingNotification &o) {
  j = nlohmann::json();
  j["subscription"] = o.m_Subscription;
  if (o.nsiValueIsSet())
    j["nsiValue"] = o.m_NsiValue;
  if (o.nsiTypeIsSet())
    j["nsiType"] = o.m_NsiType;
}

void from_json(const nlohmann::json &j, NetworkStatusReportingNotification &o) {
  j.at("subscription").get_to(o.m_Subscription);
  if (j.find("nsiValue") != j.end()) {
    j.at("nsiValue").get_to(o.m_NsiValue);
    o.m_NsiValueIsSet = true;
  }
  if (j.find("nsiType") != j.end()) {
    j.at("nsiType").get_to(o.m_NsiType);
    o.m_NsiTypeIsSet = true;
  }
}

std::string NetworkStatusReportingNotification::getSubscription() const {
  return m_Subscription;
}
void NetworkStatusReportingNotification::setSubscription(
    std::string const &value) {
  m_Subscription = value;
}
int32_t NetworkStatusReportingNotification::getNsiValue() const {
  return m_NsiValue;
}
void NetworkStatusReportingNotification::setNsiValue(int32_t const value) {
  m_NsiValue = value;
  m_NsiValueIsSet = true;
}
bool NetworkStatusReportingNotification::nsiValueIsSet() const {
  return m_NsiValueIsSet;
}
void NetworkStatusReportingNotification::unsetNsiValue() {
  m_NsiValueIsSet = false;
}
CongestionType NetworkStatusReportingNotification::getNsiType() const {
  return m_NsiType;
}
void NetworkStatusReportingNotification::setNsiType(
    CongestionType const &value) {
  m_NsiType = value;
  m_NsiTypeIsSet = true;
}
bool NetworkStatusReportingNotification::nsiTypeIsSet() const {
  return m_NsiTypeIsSet;
}
void NetworkStatusReportingNotification::unsetNsiType() {
  m_NsiTypeIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org