/**
 * NSSF NSSAI Availability
 * NSSF NSSAI Availability Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "NssfEventSubscriptionCreatedData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

NssfEventSubscriptionCreatedData::NssfEventSubscriptionCreatedData() {
  m_SubscriptionId = "";
  m_Expiry = "";
  m_ExpiryIsSet = false;
  m_AuthorizedNssaiAvailabilityDataIsSet = false;
  m_SupportedFeatures = "";
  m_SupportedFeaturesIsSet = false;
}

NssfEventSubscriptionCreatedData::~NssfEventSubscriptionCreatedData() {}

void NssfEventSubscriptionCreatedData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const NssfEventSubscriptionCreatedData &o) {
  j = nlohmann::json();
  j["subscriptionId"] = o.m_SubscriptionId;
  if (o.expiryIsSet())
    j["expiry"] = o.m_Expiry;
  if (o.authorizedNssaiAvailabilityDataIsSet() ||
      !o.m_AuthorizedNssaiAvailabilityData.empty())
    j["authorizedNssaiAvailabilityData"] = o.m_AuthorizedNssaiAvailabilityData;
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
}

void from_json(const nlohmann::json &j, NssfEventSubscriptionCreatedData &o) {
  j.at("subscriptionId").get_to(o.m_SubscriptionId);
  if (j.find("expiry") != j.end()) {
    j.at("expiry").get_to(o.m_Expiry);
    o.m_ExpiryIsSet = true;
  }
  if (j.find("authorizedNssaiAvailabilityData") != j.end()) {
    j.at("authorizedNssaiAvailabilityData")
        .get_to(o.m_AuthorizedNssaiAvailabilityData);
    o.m_AuthorizedNssaiAvailabilityDataIsSet = true;
  }
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
}

std::string NssfEventSubscriptionCreatedData::getSubscriptionId() const {
  return m_SubscriptionId;
}
void NssfEventSubscriptionCreatedData::setSubscriptionId(
    std::string const &value) {
  m_SubscriptionId = value;
}
std::string NssfEventSubscriptionCreatedData::getExpiry() const {
  return m_Expiry;
}
void NssfEventSubscriptionCreatedData::setExpiry(std::string const &value) {
  m_Expiry = value;
  m_ExpiryIsSet = true;
}
bool NssfEventSubscriptionCreatedData::expiryIsSet() const {
  return m_ExpiryIsSet;
}
void NssfEventSubscriptionCreatedData::unsetExpiry() { m_ExpiryIsSet = false; }
std::vector<AuthorizedNssaiAvailabilityData> &
NssfEventSubscriptionCreatedData::getAuthorizedNssaiAvailabilityData() {
  return m_AuthorizedNssaiAvailabilityData;
}
void NssfEventSubscriptionCreatedData::setAuthorizedNssaiAvailabilityData(
    std::vector<AuthorizedNssaiAvailabilityData> const &value) {
  m_AuthorizedNssaiAvailabilityData = value;
  m_AuthorizedNssaiAvailabilityDataIsSet = true;
}
bool NssfEventSubscriptionCreatedData::authorizedNssaiAvailabilityDataIsSet()
    const {
  return m_AuthorizedNssaiAvailabilityDataIsSet;
}
void NssfEventSubscriptionCreatedData::unsetAuthorizedNssaiAvailabilityData() {
  m_AuthorizedNssaiAvailabilityDataIsSet = false;
}
std::string NssfEventSubscriptionCreatedData::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void NssfEventSubscriptionCreatedData::setSupportedFeatures(
    std::string const &value) {
  m_SupportedFeatures = value;
  m_SupportedFeaturesIsSet = true;
}
bool NssfEventSubscriptionCreatedData::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void NssfEventSubscriptionCreatedData::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org