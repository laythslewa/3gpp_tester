/**
 * Nchf_OfflineOnlyCharging
 * OfflineOnlyCharging Service © 2020, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ChargingDataRequest.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ChargingDataRequest::ChargingDataRequest() {
  m_SubscriberIdentifier = "";
  m_SubscriberIdentifierIsSet = false;
  m_InvocationTimeStamp = "";
  m_InvocationSequenceNumber = 0;
  m_RetransmissionIndicator = false;
  m_RetransmissionIndicatorIsSet = false;
  m_ServiceSpecificationInfo = "";
  m_ServiceSpecificationInfoIsSet = false;
  m_MultipleUnitUsageIsSet = false;
  m_TriggersIsSet = false;
  m_PDUSessionChargingInformationIsSet = false;
  m_RoamingQBCInformationIsSet = false;
}

ChargingDataRequest::~ChargingDataRequest() {}

void ChargingDataRequest::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const ChargingDataRequest &o) {
  j = nlohmann::json();
  if (o.subscriberIdentifierIsSet())
    j["subscriberIdentifier"] = o.m_SubscriberIdentifier;
  j["nfConsumerIdentification"] = o.m_NfConsumerIdentification;
  j["invocationTimeStamp"] = o.m_InvocationTimeStamp;
  j["invocationSequenceNumber"] = o.m_InvocationSequenceNumber;
  if (o.retransmissionIndicatorIsSet())
    j["retransmissionIndicator"] = o.m_RetransmissionIndicator;
  if (o.serviceSpecificationInfoIsSet())
    j["serviceSpecificationInfo"] = o.m_ServiceSpecificationInfo;
  if (o.multipleUnitUsageIsSet() || !o.m_MultipleUnitUsage.empty())
    j["multipleUnitUsage"] = o.m_MultipleUnitUsage;
  if (o.triggersIsSet() || !o.m_Triggers.empty())
    j["triggers"] = o.m_Triggers;
  if (o.pDUSessionChargingInformationIsSet())
    j["pDUSessionChargingInformation"] = o.m_PDUSessionChargingInformation;
  if (o.roamingQBCInformationIsSet())
    j["roamingQBCInformation"] = o.m_RoamingQBCInformation;
}

void from_json(const nlohmann::json &j, ChargingDataRequest &o) {
  if (j.find("subscriberIdentifier") != j.end()) {
    j.at("subscriberIdentifier").get_to(o.m_SubscriberIdentifier);
    o.m_SubscriberIdentifierIsSet = true;
  }
  j.at("nfConsumerIdentification").get_to(o.m_NfConsumerIdentification);
  j.at("invocationTimeStamp").get_to(o.m_InvocationTimeStamp);
  j.at("invocationSequenceNumber").get_to(o.m_InvocationSequenceNumber);
  if (j.find("retransmissionIndicator") != j.end()) {
    j.at("retransmissionIndicator").get_to(o.m_RetransmissionIndicator);
    o.m_RetransmissionIndicatorIsSet = true;
  }
  if (j.find("serviceSpecificationInfo") != j.end()) {
    j.at("serviceSpecificationInfo").get_to(o.m_ServiceSpecificationInfo);
    o.m_ServiceSpecificationInfoIsSet = true;
  }
  if (j.find("multipleUnitUsage") != j.end()) {
    j.at("multipleUnitUsage").get_to(o.m_MultipleUnitUsage);
    o.m_MultipleUnitUsageIsSet = true;
  }
  if (j.find("triggers") != j.end()) {
    j.at("triggers").get_to(o.m_Triggers);
    o.m_TriggersIsSet = true;
  }
  if (j.find("pDUSessionChargingInformation") != j.end()) {
    j.at("pDUSessionChargingInformation")
        .get_to(o.m_PDUSessionChargingInformation);
    o.m_PDUSessionChargingInformationIsSet = true;
  }
  if (j.find("roamingQBCInformation") != j.end()) {
    j.at("roamingQBCInformation").get_to(o.m_RoamingQBCInformation);
    o.m_RoamingQBCInformationIsSet = true;
  }
}

std::string ChargingDataRequest::getSubscriberIdentifier() const {
  return m_SubscriberIdentifier;
}
void ChargingDataRequest::setSubscriberIdentifier(std::string const &value) {
  m_SubscriberIdentifier = value;
  m_SubscriberIdentifierIsSet = true;
}
bool ChargingDataRequest::subscriberIdentifierIsSet() const {
  return m_SubscriberIdentifierIsSet;
}
void ChargingDataRequest::unsetSubscriberIdentifier() {
  m_SubscriberIdentifierIsSet = false;
}
NFIdentification ChargingDataRequest::getNfConsumerIdentification() const {
  return m_NfConsumerIdentification;
}
void ChargingDataRequest::setNfConsumerIdentification(
    NFIdentification const &value) {
  m_NfConsumerIdentification = value;
}
std::string ChargingDataRequest::getInvocationTimeStamp() const {
  return m_InvocationTimeStamp;
}
void ChargingDataRequest::setInvocationTimeStamp(std::string const &value) {
  m_InvocationTimeStamp = value;
}
int32_t ChargingDataRequest::getInvocationSequenceNumber() const {
  return m_InvocationSequenceNumber;
}
void ChargingDataRequest::setInvocationSequenceNumber(int32_t const value) {
  m_InvocationSequenceNumber = value;
}
bool ChargingDataRequest::isRetransmissionIndicator() const {
  return m_RetransmissionIndicator;
}
void ChargingDataRequest::setRetransmissionIndicator(bool const value) {
  m_RetransmissionIndicator = value;
  m_RetransmissionIndicatorIsSet = true;
}
bool ChargingDataRequest::retransmissionIndicatorIsSet() const {
  return m_RetransmissionIndicatorIsSet;
}
void ChargingDataRequest::unsetRetransmissionIndicator() {
  m_RetransmissionIndicatorIsSet = false;
}
std::string ChargingDataRequest::getServiceSpecificationInfo() const {
  return m_ServiceSpecificationInfo;
}
void ChargingDataRequest::setServiceSpecificationInfo(
    std::string const &value) {
  m_ServiceSpecificationInfo = value;
  m_ServiceSpecificationInfoIsSet = true;
}
bool ChargingDataRequest::serviceSpecificationInfoIsSet() const {
  return m_ServiceSpecificationInfoIsSet;
}
void ChargingDataRequest::unsetServiceSpecificationInfo() {
  m_ServiceSpecificationInfoIsSet = false;
}
std::vector<MultipleUnitUsage> &ChargingDataRequest::getMultipleUnitUsage() {
  return m_MultipleUnitUsage;
}
void ChargingDataRequest::setMultipleUnitUsage(
    std::vector<MultipleUnitUsage> const &value) {
  m_MultipleUnitUsage = value;
  m_MultipleUnitUsageIsSet = true;
}
bool ChargingDataRequest::multipleUnitUsageIsSet() const {
  return m_MultipleUnitUsageIsSet;
}
void ChargingDataRequest::unsetMultipleUnitUsage() {
  m_MultipleUnitUsageIsSet = false;
}
std::vector<Trigger> &ChargingDataRequest::getTriggers() { return m_Triggers; }
void ChargingDataRequest::setTriggers(std::vector<Trigger> const &value) {
  m_Triggers = value;
  m_TriggersIsSet = true;
}
bool ChargingDataRequest::triggersIsSet() const { return m_TriggersIsSet; }
void ChargingDataRequest::unsetTriggers() { m_TriggersIsSet = false; }
PDUSessionChargingInformation
ChargingDataRequest::getPDUSessionChargingInformation() const {
  return m_PDUSessionChargingInformation;
}
void ChargingDataRequest::setPDUSessionChargingInformation(
    PDUSessionChargingInformation const &value) {
  m_PDUSessionChargingInformation = value;
  m_PDUSessionChargingInformationIsSet = true;
}
bool ChargingDataRequest::pDUSessionChargingInformationIsSet() const {
  return m_PDUSessionChargingInformationIsSet;
}
void ChargingDataRequest::unsetPDUSessionChargingInformation() {
  m_PDUSessionChargingInformationIsSet = false;
}
RoamingQBCInformation ChargingDataRequest::getRoamingQBCInformation() const {
  return m_RoamingQBCInformation;
}
void ChargingDataRequest::setRoamingQBCInformation(
    RoamingQBCInformation const &value) {
  m_RoamingQBCInformation = value;
  m_RoamingQBCInformationIsSet = true;
}
bool ChargingDataRequest::roamingQBCInformationIsSet() const {
  return m_RoamingQBCInformationIsSet;
}
void ChargingDataRequest::unsetRoamingQBCInformation() {
  m_RoamingQBCInformationIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org