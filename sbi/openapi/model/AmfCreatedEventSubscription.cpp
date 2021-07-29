/**
 * Namf_EventExposure
 * AMF Event Exposure Service © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "AmfCreatedEventSubscription.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

AmfCreatedEventSubscription::AmfCreatedEventSubscription() {
  m_SubscriptionId = "";
  m_ReportListIsSet = false;
  m_SupportedFeatures = "";
  m_SupportedFeaturesIsSet = false;
}

AmfCreatedEventSubscription::~AmfCreatedEventSubscription() {}

void AmfCreatedEventSubscription::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const AmfCreatedEventSubscription &o) {
  j = nlohmann::json();
  j["subscription"] = o.m_Subscription;
  j["subscriptionId"] = o.m_SubscriptionId;
  if (o.reportListIsSet() || !o.m_ReportList.empty())
    j["reportList"] = o.m_ReportList;
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
}

void from_json(const nlohmann::json &j, AmfCreatedEventSubscription &o) {
  j.at("subscription").get_to(o.m_Subscription);
  j.at("subscriptionId").get_to(o.m_SubscriptionId);
  if (j.find("reportList") != j.end()) {
    j.at("reportList").get_to(o.m_ReportList);
    o.m_ReportListIsSet = true;
  }
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
}

AmfEventSubscription AmfCreatedEventSubscription::getSubscription() const {
  return m_Subscription;
}
void AmfCreatedEventSubscription::setSubscription(
    AmfEventSubscription const &value) {
  m_Subscription = value;
}
std::string AmfCreatedEventSubscription::getSubscriptionId() const {
  return m_SubscriptionId;
}
void AmfCreatedEventSubscription::setSubscriptionId(std::string const &value) {
  m_SubscriptionId = value;
}
std::vector<AmfEventReport> &AmfCreatedEventSubscription::getReportList() {
  return m_ReportList;
}
void AmfCreatedEventSubscription::setReportList(
    std::vector<AmfEventReport> const &value) {
  m_ReportList = value;
  m_ReportListIsSet = true;
}
bool AmfCreatedEventSubscription::reportListIsSet() const {
  return m_ReportListIsSet;
}
void AmfCreatedEventSubscription::unsetReportList() {
  m_ReportListIsSet = false;
}
std::string AmfCreatedEventSubscription::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void AmfCreatedEventSubscription::setSupportedFeatures(
    std::string const &value) {
  m_SupportedFeatures = value;
  m_SupportedFeaturesIsSet = true;
}
bool AmfCreatedEventSubscription::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void AmfCreatedEventSubscription::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
