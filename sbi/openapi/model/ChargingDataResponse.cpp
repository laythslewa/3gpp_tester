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

#include "ChargingDataResponse.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ChargingDataResponse::ChargingDataResponse() {
  m_InvocationTimeStamp = "";
  m_InvocationSequenceNumber = 0;
  m_InvocationResultIsSet = false;
  m_SessionFailoverIsSet = false;
  m_TriggersIsSet = false;
  m_PDUSessionChargingInformationIsSet = false;
  m_RoamingQBCInformationIsSet = false;
}

ChargingDataResponse::~ChargingDataResponse() {}

void ChargingDataResponse::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const ChargingDataResponse &o) {
  j = nlohmann::json();
  j["invocationTimeStamp"] = o.m_InvocationTimeStamp;
  j["invocationSequenceNumber"] = o.m_InvocationSequenceNumber;
  if (o.invocationResultIsSet())
    j["invocationResult"] = o.m_InvocationResult;
  if (o.sessionFailoverIsSet())
    j["sessionFailover"] = o.m_SessionFailover;
  if (o.triggersIsSet() || !o.m_Triggers.empty())
    j["triggers"] = o.m_Triggers;
  if (o.pDUSessionChargingInformationIsSet())
    j["pDUSessionChargingInformation"] = o.m_PDUSessionChargingInformation;
  if (o.roamingQBCInformationIsSet())
    j["roamingQBCInformation"] = o.m_RoamingQBCInformation;
}

void from_json(const nlohmann::json &j, ChargingDataResponse &o) {
  j.at("invocationTimeStamp").get_to(o.m_InvocationTimeStamp);
  j.at("invocationSequenceNumber").get_to(o.m_InvocationSequenceNumber);
  if (j.find("invocationResult") != j.end()) {
    j.at("invocationResult").get_to(o.m_InvocationResult);
    o.m_InvocationResultIsSet = true;
  }
  if (j.find("sessionFailover") != j.end()) {
    j.at("sessionFailover").get_to(o.m_SessionFailover);
    o.m_SessionFailoverIsSet = true;
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

std::string ChargingDataResponse::getInvocationTimeStamp() const {
  return m_InvocationTimeStamp;
}
void ChargingDataResponse::setInvocationTimeStamp(std::string const &value) {
  m_InvocationTimeStamp = value;
}
int32_t ChargingDataResponse::getInvocationSequenceNumber() const {
  return m_InvocationSequenceNumber;
}
void ChargingDataResponse::setInvocationSequenceNumber(int32_t const value) {
  m_InvocationSequenceNumber = value;
}
InvocationResult ChargingDataResponse::getInvocationResult() const {
  return m_InvocationResult;
}
void ChargingDataResponse::setInvocationResult(InvocationResult const &value) {
  m_InvocationResult = value;
  m_InvocationResultIsSet = true;
}
bool ChargingDataResponse::invocationResultIsSet() const {
  return m_InvocationResultIsSet;
}
void ChargingDataResponse::unsetInvocationResult() {
  m_InvocationResultIsSet = false;
}
SessionFailover ChargingDataResponse::getSessionFailover() const {
  return m_SessionFailover;
}
void ChargingDataResponse::setSessionFailover(SessionFailover const &value) {
  m_SessionFailover = value;
  m_SessionFailoverIsSet = true;
}
bool ChargingDataResponse::sessionFailoverIsSet() const {
  return m_SessionFailoverIsSet;
}
void ChargingDataResponse::unsetSessionFailover() {
  m_SessionFailoverIsSet = false;
}
std::vector<Trigger> &ChargingDataResponse::getTriggers() { return m_Triggers; }
void ChargingDataResponse::setTriggers(std::vector<Trigger> const &value) {
  m_Triggers = value;
  m_TriggersIsSet = true;
}
bool ChargingDataResponse::triggersIsSet() const { return m_TriggersIsSet; }
void ChargingDataResponse::unsetTriggers() { m_TriggersIsSet = false; }
PDUSessionChargingInformation
ChargingDataResponse::getPDUSessionChargingInformation() const {
  return m_PDUSessionChargingInformation;
}
void ChargingDataResponse::setPDUSessionChargingInformation(
    PDUSessionChargingInformation const &value) {
  m_PDUSessionChargingInformation = value;
  m_PDUSessionChargingInformationIsSet = true;
}
bool ChargingDataResponse::pDUSessionChargingInformationIsSet() const {
  return m_PDUSessionChargingInformationIsSet;
}
void ChargingDataResponse::unsetPDUSessionChargingInformation() {
  m_PDUSessionChargingInformationIsSet = false;
}
RoamingQBCInformation ChargingDataResponse::getRoamingQBCInformation() const {
  return m_RoamingQBCInformation;
}
void ChargingDataResponse::setRoamingQBCInformation(
    RoamingQBCInformation const &value) {
  m_RoamingQBCInformation = value;
  m_RoamingQBCInformationIsSet = true;
}
bool ChargingDataResponse::roamingQBCInformationIsSet() const {
  return m_RoamingQBCInformationIsSet;
}
void ChargingDataResponse::unsetRoamingQBCInformation() {
  m_RoamingQBCInformationIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org