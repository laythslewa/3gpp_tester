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

#include "PDUContainerInformation.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

PDUContainerInformation::PDUContainerInformation() {
  m_TimeofFirstUsage = "";
  m_TimeofFirstUsageIsSet = false;
  m_TimeofLastUsage = "";
  m_TimeofLastUsageIsSet = false;
  m_QoSInformationIsSet = false;
  m_QoSCharacteristicsIsSet = false;
  m_AFCorrelationInformation = "";
  m_AFCorrelationInformationIsSet = false;
  m_UserLocationInformationIsSet = false;
  m_UetimeZone = "";
  m_UetimeZoneIsSet = false;
  m_RATTypeIsSet = false;
  m_ServingNodeIDIsSet = false;
  m_PresenceReportingAreaInformationIsSet = false;
  m_r_3gppPSDataOffStatusIsSet = false;
  m_SponsorIdentity = "";
  m_SponsorIdentityIsSet = false;
  m_ApplicationserviceProviderIdentity = "";
  m_ApplicationserviceProviderIdentityIsSet = false;
  m_ChargingRuleBaseName = "";
  m_ChargingRuleBaseNameIsSet = false;
  m_MAPDUSteeringFunctionalityIsSet = false;
  m_MAPDUSteeringModeIsSet = false;
}

PDUContainerInformation::~PDUContainerInformation() {}

void PDUContainerInformation::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const PDUContainerInformation &o) {
  j = nlohmann::json();
  if (o.timeofFirstUsageIsSet())
    j["timeofFirstUsage"] = o.m_TimeofFirstUsage;
  if (o.timeofLastUsageIsSet())
    j["timeofLastUsage"] = o.m_TimeofLastUsage;
  if (o.qoSInformationIsSet())
    j["qoSInformation"] = o.m_QoSInformation;
  if (o.qoSCharacteristicsIsSet())
    j["qoSCharacteristics"] = o.m_QoSCharacteristics;
  if (o.aFCorrelationInformationIsSet())
    j["aFCorrelationInformation"] = o.m_AFCorrelationInformation;
  if (o.userLocationInformationIsSet())
    j["userLocationInformation"] = o.m_UserLocationInformation;
  if (o.uetimeZoneIsSet())
    j["uetimeZone"] = o.m_UetimeZone;
  if (o.rATTypeIsSet())
    j["rATType"] = o.m_RATType;
  if (o.servingNodeIDIsSet() || !o.m_ServingNodeID.empty())
    j["servingNodeID"] = o.m_ServingNodeID;
  if (o.presenceReportingAreaInformationIsSet() ||
      !o.m_PresenceReportingAreaInformation.empty())
    j["presenceReportingAreaInformation"] =
        o.m_PresenceReportingAreaInformation;
  if (o.r3gppPSDataOffStatusIsSet())
    j["3gppPSDataOffStatus"] = o.m_r_3gppPSDataOffStatus;
  if (o.sponsorIdentityIsSet())
    j["sponsorIdentity"] = o.m_SponsorIdentity;
  if (o.applicationserviceProviderIdentityIsSet())
    j["applicationserviceProviderIdentity"] =
        o.m_ApplicationserviceProviderIdentity;
  if (o.chargingRuleBaseNameIsSet())
    j["chargingRuleBaseName"] = o.m_ChargingRuleBaseName;
  if (o.mAPDUSteeringFunctionalityIsSet())
    j["mAPDUSteeringFunctionality"] = o.m_MAPDUSteeringFunctionality;
  if (o.mAPDUSteeringModeIsSet())
    j["mAPDUSteeringMode"] = o.m_MAPDUSteeringMode;
}

void from_json(const nlohmann::json &j, PDUContainerInformation &o) {
  if (j.find("timeofFirstUsage") != j.end()) {
    j.at("timeofFirstUsage").get_to(o.m_TimeofFirstUsage);
    o.m_TimeofFirstUsageIsSet = true;
  }
  if (j.find("timeofLastUsage") != j.end()) {
    j.at("timeofLastUsage").get_to(o.m_TimeofLastUsage);
    o.m_TimeofLastUsageIsSet = true;
  }
  if (j.find("qoSInformation") != j.end()) {
    j.at("qoSInformation").get_to(o.m_QoSInformation);
    o.m_QoSInformationIsSet = true;
  }
  if (j.find("qoSCharacteristics") != j.end()) {
    j.at("qoSCharacteristics").get_to(o.m_QoSCharacteristics);
    o.m_QoSCharacteristicsIsSet = true;
  }
  if (j.find("aFCorrelationInformation") != j.end()) {
    j.at("aFCorrelationInformation").get_to(o.m_AFCorrelationInformation);
    o.m_AFCorrelationInformationIsSet = true;
  }
  if (j.find("userLocationInformation") != j.end()) {
    j.at("userLocationInformation").get_to(o.m_UserLocationInformation);
    o.m_UserLocationInformationIsSet = true;
  }
  if (j.find("uetimeZone") != j.end()) {
    j.at("uetimeZone").get_to(o.m_UetimeZone);
    o.m_UetimeZoneIsSet = true;
  }
  if (j.find("rATType") != j.end()) {
    j.at("rATType").get_to(o.m_RATType);
    o.m_RATTypeIsSet = true;
  }
  if (j.find("servingNodeID") != j.end()) {
    j.at("servingNodeID").get_to(o.m_ServingNodeID);
    o.m_ServingNodeIDIsSet = true;
  }
  if (j.find("presenceReportingAreaInformation") != j.end()) {
    j.at("presenceReportingAreaInformation")
        .get_to(o.m_PresenceReportingAreaInformation);
    o.m_PresenceReportingAreaInformationIsSet = true;
  }
  if (j.find("3gppPSDataOffStatus") != j.end()) {
    j.at("3gppPSDataOffStatus").get_to(o.m_r_3gppPSDataOffStatus);
    o.m_r_3gppPSDataOffStatusIsSet = true;
  }
  if (j.find("sponsorIdentity") != j.end()) {
    j.at("sponsorIdentity").get_to(o.m_SponsorIdentity);
    o.m_SponsorIdentityIsSet = true;
  }
  if (j.find("applicationserviceProviderIdentity") != j.end()) {
    j.at("applicationserviceProviderIdentity")
        .get_to(o.m_ApplicationserviceProviderIdentity);
    o.m_ApplicationserviceProviderIdentityIsSet = true;
  }
  if (j.find("chargingRuleBaseName") != j.end()) {
    j.at("chargingRuleBaseName").get_to(o.m_ChargingRuleBaseName);
    o.m_ChargingRuleBaseNameIsSet = true;
  }
  if (j.find("mAPDUSteeringFunctionality") != j.end()) {
    j.at("mAPDUSteeringFunctionality").get_to(o.m_MAPDUSteeringFunctionality);
    o.m_MAPDUSteeringFunctionalityIsSet = true;
  }
  if (j.find("mAPDUSteeringMode") != j.end()) {
    j.at("mAPDUSteeringMode").get_to(o.m_MAPDUSteeringMode);
    o.m_MAPDUSteeringModeIsSet = true;
  }
}

std::string PDUContainerInformation::getTimeofFirstUsage() const {
  return m_TimeofFirstUsage;
}
void PDUContainerInformation::setTimeofFirstUsage(std::string const &value) {
  m_TimeofFirstUsage = value;
  m_TimeofFirstUsageIsSet = true;
}
bool PDUContainerInformation::timeofFirstUsageIsSet() const {
  return m_TimeofFirstUsageIsSet;
}
void PDUContainerInformation::unsetTimeofFirstUsage() {
  m_TimeofFirstUsageIsSet = false;
}
std::string PDUContainerInformation::getTimeofLastUsage() const {
  return m_TimeofLastUsage;
}
void PDUContainerInformation::setTimeofLastUsage(std::string const &value) {
  m_TimeofLastUsage = value;
  m_TimeofLastUsageIsSet = true;
}
bool PDUContainerInformation::timeofLastUsageIsSet() const {
  return m_TimeofLastUsageIsSet;
}
void PDUContainerInformation::unsetTimeofLastUsage() {
  m_TimeofLastUsageIsSet = false;
}
QosData PDUContainerInformation::getQoSInformation() const {
  return m_QoSInformation;
}
void PDUContainerInformation::setQoSInformation(QosData const &value) {
  m_QoSInformation = value;
  m_QoSInformationIsSet = true;
}
bool PDUContainerInformation::qoSInformationIsSet() const {
  return m_QoSInformationIsSet;
}
void PDUContainerInformation::unsetQoSInformation() {
  m_QoSInformationIsSet = false;
}
QosCharacteristics PDUContainerInformation::getQoSCharacteristics() const {
  return m_QoSCharacteristics;
}
void PDUContainerInformation::setQoSCharacteristics(
    QosCharacteristics const &value) {
  m_QoSCharacteristics = value;
  m_QoSCharacteristicsIsSet = true;
}
bool PDUContainerInformation::qoSCharacteristicsIsSet() const {
  return m_QoSCharacteristicsIsSet;
}
void PDUContainerInformation::unsetQoSCharacteristics() {
  m_QoSCharacteristicsIsSet = false;
}
std::string PDUContainerInformation::getAFCorrelationInformation() const {
  return m_AFCorrelationInformation;
}
void PDUContainerInformation::setAFCorrelationInformation(
    std::string const &value) {
  m_AFCorrelationInformation = value;
  m_AFCorrelationInformationIsSet = true;
}
bool PDUContainerInformation::aFCorrelationInformationIsSet() const {
  return m_AFCorrelationInformationIsSet;
}
void PDUContainerInformation::unsetAFCorrelationInformation() {
  m_AFCorrelationInformationIsSet = false;
}
UserLocation PDUContainerInformation::getUserLocationInformation() const {
  return m_UserLocationInformation;
}
void PDUContainerInformation::setUserLocationInformation(
    UserLocation const &value) {
  m_UserLocationInformation = value;
  m_UserLocationInformationIsSet = true;
}
bool PDUContainerInformation::userLocationInformationIsSet() const {
  return m_UserLocationInformationIsSet;
}
void PDUContainerInformation::unsetUserLocationInformation() {
  m_UserLocationInformationIsSet = false;
}
std::string PDUContainerInformation::getUetimeZone() const {
  return m_UetimeZone;
}
void PDUContainerInformation::setUetimeZone(std::string const &value) {
  m_UetimeZone = value;
  m_UetimeZoneIsSet = true;
}
bool PDUContainerInformation::uetimeZoneIsSet() const {
  return m_UetimeZoneIsSet;
}
void PDUContainerInformation::unsetUetimeZone() { m_UetimeZoneIsSet = false; }
RatType PDUContainerInformation::getRATType() const { return m_RATType; }
void PDUContainerInformation::setRATType(RatType const &value) {
  m_RATType = value;
  m_RATTypeIsSet = true;
}
bool PDUContainerInformation::rATTypeIsSet() const { return m_RATTypeIsSet; }
void PDUContainerInformation::unsetRATType() { m_RATTypeIsSet = false; }
std::vector<ServingNetworkFunctionID> &
PDUContainerInformation::getServingNodeID() {
  return m_ServingNodeID;
}
void PDUContainerInformation::setServingNodeID(
    std::vector<ServingNetworkFunctionID> const &value) {
  m_ServingNodeID = value;
  m_ServingNodeIDIsSet = true;
}
bool PDUContainerInformation::servingNodeIDIsSet() const {
  return m_ServingNodeIDIsSet;
}
void PDUContainerInformation::unsetServingNodeID() {
  m_ServingNodeIDIsSet = false;
}
std::map<std::string, PresenceInfo> &
PDUContainerInformation::getPresenceReportingAreaInformation() {
  return m_PresenceReportingAreaInformation;
}
void PDUContainerInformation::setPresenceReportingAreaInformation(
    std::map<std::string, PresenceInfo> const &value) {
  m_PresenceReportingAreaInformation = value;
  m_PresenceReportingAreaInformationIsSet = true;
}
bool PDUContainerInformation::presenceReportingAreaInformationIsSet() const {
  return m_PresenceReportingAreaInformationIsSet;
}
void PDUContainerInformation::unsetPresenceReportingAreaInformation() {
  m_PresenceReportingAreaInformationIsSet = false;
}
3GPPPSDataOffStatus PDUContainerInformation::getR3gppPSDataOffStatus() const {
  return m_r_3gppPSDataOffStatus;
}
void PDUContainerInformation::setR3gppPSDataOffStatus(
    3GPPPSDataOffStatus const &value) {
  m_r_3gppPSDataOffStatus = value;
  m_r_3gppPSDataOffStatusIsSet = true;
}
bool PDUContainerInformation::r3gppPSDataOffStatusIsSet() const {
  return m_r_3gppPSDataOffStatusIsSet;
}
void PDUContainerInformation::unsetr_3gppPSDataOffStatus() {
  m_r_3gppPSDataOffStatusIsSet = false;
}
std::string PDUContainerInformation::getSponsorIdentity() const {
  return m_SponsorIdentity;
}
void PDUContainerInformation::setSponsorIdentity(std::string const &value) {
  m_SponsorIdentity = value;
  m_SponsorIdentityIsSet = true;
}
bool PDUContainerInformation::sponsorIdentityIsSet() const {
  return m_SponsorIdentityIsSet;
}
void PDUContainerInformation::unsetSponsorIdentity() {
  m_SponsorIdentityIsSet = false;
}
std::string
PDUContainerInformation::getApplicationserviceProviderIdentity() const {
  return m_ApplicationserviceProviderIdentity;
}
void PDUContainerInformation::setApplicationserviceProviderIdentity(
    std::string const &value) {
  m_ApplicationserviceProviderIdentity = value;
  m_ApplicationserviceProviderIdentityIsSet = true;
}
bool PDUContainerInformation::applicationserviceProviderIdentityIsSet() const {
  return m_ApplicationserviceProviderIdentityIsSet;
}
void PDUContainerInformation::unsetApplicationserviceProviderIdentity() {
  m_ApplicationserviceProviderIdentityIsSet = false;
}
std::string PDUContainerInformation::getChargingRuleBaseName() const {
  return m_ChargingRuleBaseName;
}
void PDUContainerInformation::setChargingRuleBaseName(
    std::string const &value) {
  m_ChargingRuleBaseName = value;
  m_ChargingRuleBaseNameIsSet = true;
}
bool PDUContainerInformation::chargingRuleBaseNameIsSet() const {
  return m_ChargingRuleBaseNameIsSet;
}
void PDUContainerInformation::unsetChargingRuleBaseName() {
  m_ChargingRuleBaseNameIsSet = false;
}
SteeringFunctionality
PDUContainerInformation::getMAPDUSteeringFunctionality() const {
  return m_MAPDUSteeringFunctionality;
}
void PDUContainerInformation::setMAPDUSteeringFunctionality(
    SteeringFunctionality const &value) {
  m_MAPDUSteeringFunctionality = value;
  m_MAPDUSteeringFunctionalityIsSet = true;
}
bool PDUContainerInformation::mAPDUSteeringFunctionalityIsSet() const {
  return m_MAPDUSteeringFunctionalityIsSet;
}
void PDUContainerInformation::unsetMAPDUSteeringFunctionality() {
  m_MAPDUSteeringFunctionalityIsSet = false;
}
SteeringMode PDUContainerInformation::getMAPDUSteeringMode() const {
  return m_MAPDUSteeringMode;
}
void PDUContainerInformation::setMAPDUSteeringMode(SteeringMode const &value) {
  m_MAPDUSteeringMode = value;
  m_MAPDUSteeringModeIsSet = true;
}
bool PDUContainerInformation::mAPDUSteeringModeIsSet() const {
  return m_MAPDUSteeringModeIsSet;
}
void PDUContainerInformation::unsetMAPDUSteeringMode() {
  m_MAPDUSteeringModeIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
