/**
 * Nhss_imsUECM
 * Nhss UE Context Management Service for IMS. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ImsSdmSubscription.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ImsSdmSubscription::ImsSdmSubscription() {
  m_NfInstanceId = "";
  m_CallbackReference = "";
  m_Expires = "";
  m_ExpiresIsSet = false;
}

ImsSdmSubscription::~ImsSdmSubscription() {}

void ImsSdmSubscription::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const ImsSdmSubscription &o) {
  j = nlohmann::json();
  j["nfInstanceId"] = o.m_NfInstanceId;
  j["callbackReference"] = o.m_CallbackReference;
  j["monitoredResourceUris"] = o.m_MonitoredResourceUris;
  if (o.expiresIsSet())
    j["expires"] = o.m_Expires;
}

void from_json(const nlohmann::json &j, ImsSdmSubscription &o) {
  j.at("nfInstanceId").get_to(o.m_NfInstanceId);
  j.at("callbackReference").get_to(o.m_CallbackReference);
  j.at("monitoredResourceUris").get_to(o.m_MonitoredResourceUris);
  if (j.find("expires") != j.end()) {
    j.at("expires").get_to(o.m_Expires);
    o.m_ExpiresIsSet = true;
  }
}

std::string ImsSdmSubscription::getNfInstanceId() const {
  return m_NfInstanceId;
}
void ImsSdmSubscription::setNfInstanceId(std::string const &value) {
  m_NfInstanceId = value;
}
std::string ImsSdmSubscription::getCallbackReference() const {
  return m_CallbackReference;
}
void ImsSdmSubscription::setCallbackReference(std::string const &value) {
  m_CallbackReference = value;
}
std::vector<std::string> &ImsSdmSubscription::getMonitoredResourceUris() {
  return m_MonitoredResourceUris;
}
void ImsSdmSubscription::setMonitoredResourceUris(
    std::vector<std::string> const &value) {
  m_MonitoredResourceUris = value;
}
std::string ImsSdmSubscription::getExpires() const { return m_Expires; }
void ImsSdmSubscription::setExpires(std::string const &value) {
  m_Expires = value;
  m_ExpiresIsSet = true;
}
bool ImsSdmSubscription::expiresIsSet() const { return m_ExpiresIsSet; }
void ImsSdmSubscription::unsetExpires() { m_ExpiresIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org