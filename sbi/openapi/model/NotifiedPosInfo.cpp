/**
 * Namf_Location
 * AMF Location Service © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA,
 * ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "NotifiedPosInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

NotifiedPosInfo::NotifiedPosInfo() {
  m_Supi = "";
  m_SupiIsSet = false;
  m_Gpsi = "";
  m_GpsiIsSet = false;
  m_Pei = "";
  m_PeiIsSet = false;
  m_LocationEstimateIsSet = false;
  m_LocalLocationEstimateIsSet = false;
  m_AgeOfLocationEstimate = 0;
  m_AgeOfLocationEstimateIsSet = false;
  m_VelocityEstimateIsSet = false;
  m_PositioningDataListIsSet = false;
  m_GnssPositioningDataListIsSet = false;
  m_EcgiIsSet = false;
  m_NcgiIsSet = false;
  m_ServingNode = "";
  m_ServingNodeIsSet = false;
  m_TargetMmeName = "";
  m_TargetMmeNameIsSet = false;
  m_TargetMmeRealm = "";
  m_TargetMmeRealmIsSet = false;
  m_UtranSrvccInd = false;
  m_UtranSrvccIndIsSet = false;
  m_CivicAddressIsSet = false;
  m_BarometricPressure = 0;
  m_BarometricPressureIsSet = false;
  m_Altitude = 0.0;
  m_AltitudeIsSet = false;
  m_HgmlcCallBackURI = "";
  m_HgmlcCallBackURIIsSet = false;
  m_LdrReference = "";
  m_LdrReferenceIsSet = false;
  m_ServingLMFIdentification = "";
  m_ServingLMFIdentificationIsSet = false;
  m_TerminationCauseIsSet = false;
}

NotifiedPosInfo::~NotifiedPosInfo() {}

void NotifiedPosInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const NotifiedPosInfo &o) {
  j = nlohmann::json();
  j["locationEvent"] = o.m_LocationEvent;
  if (o.supiIsSet())
    j["supi"] = o.m_Supi;
  if (o.gpsiIsSet())
    j["gpsi"] = o.m_Gpsi;
  if (o.peiIsSet())
    j["pei"] = o.m_Pei;
  if (o.locationEstimateIsSet())
    j["locationEstimate"] = o.m_LocationEstimate;
  if (o.localLocationEstimateIsSet())
    j["localLocationEstimate"] = o.m_LocalLocationEstimate;
  if (o.ageOfLocationEstimateIsSet())
    j["ageOfLocationEstimate"] = o.m_AgeOfLocationEstimate;
  if (o.velocityEstimateIsSet())
    j["velocityEstimate"] = o.m_VelocityEstimate;
  if (o.positioningDataListIsSet() || !o.m_PositioningDataList.empty())
    j["positioningDataList"] = o.m_PositioningDataList;
  if (o.gnssPositioningDataListIsSet() || !o.m_GnssPositioningDataList.empty())
    j["gnssPositioningDataList"] = o.m_GnssPositioningDataList;
  if (o.ecgiIsSet())
    j["ecgi"] = o.m_Ecgi;
  if (o.ncgiIsSet())
    j["ncgi"] = o.m_Ncgi;
  if (o.servingNodeIsSet())
    j["servingNode"] = o.m_ServingNode;
  if (o.targetMmeNameIsSet())
    j["targetMmeName"] = o.m_TargetMmeName;
  if (o.targetMmeRealmIsSet())
    j["targetMmeRealm"] = o.m_TargetMmeRealm;
  if (o.utranSrvccIndIsSet())
    j["utranSrvccInd"] = o.m_UtranSrvccInd;
  if (o.civicAddressIsSet())
    j["civicAddress"] = o.m_CivicAddress;
  if (o.barometricPressureIsSet())
    j["barometricPressure"] = o.m_BarometricPressure;
  if (o.altitudeIsSet())
    j["altitude"] = o.m_Altitude;
  if (o.hgmlcCallBackURIIsSet())
    j["hgmlcCallBackURI"] = o.m_HgmlcCallBackURI;
  if (o.ldrReferenceIsSet())
    j["ldrReference"] = o.m_LdrReference;
  if (o.servingLMFIdentificationIsSet())
    j["servingLMFIdentification"] = o.m_ServingLMFIdentification;
  if (o.terminationCauseIsSet())
    j["terminationCause"] = o.m_TerminationCause;
}

void from_json(const nlohmann::json &j, NotifiedPosInfo &o) {
  j.at("locationEvent").get_to(o.m_LocationEvent);
  if (j.find("supi") != j.end()) {
    j.at("supi").get_to(o.m_Supi);
    o.m_SupiIsSet = true;
  }
  if (j.find("gpsi") != j.end()) {
    j.at("gpsi").get_to(o.m_Gpsi);
    o.m_GpsiIsSet = true;
  }
  if (j.find("pei") != j.end()) {
    j.at("pei").get_to(o.m_Pei);
    o.m_PeiIsSet = true;
  }
  if (j.find("locationEstimate") != j.end()) {
    j.at("locationEstimate").get_to(o.m_LocationEstimate);
    o.m_LocationEstimateIsSet = true;
  }
  if (j.find("localLocationEstimate") != j.end()) {
    j.at("localLocationEstimate").get_to(o.m_LocalLocationEstimate);
    o.m_LocalLocationEstimateIsSet = true;
  }
  if (j.find("ageOfLocationEstimate") != j.end()) {
    j.at("ageOfLocationEstimate").get_to(o.m_AgeOfLocationEstimate);
    o.m_AgeOfLocationEstimateIsSet = true;
  }
  if (j.find("velocityEstimate") != j.end()) {
    j.at("velocityEstimate").get_to(o.m_VelocityEstimate);
    o.m_VelocityEstimateIsSet = true;
  }
  if (j.find("positioningDataList") != j.end()) {
    j.at("positioningDataList").get_to(o.m_PositioningDataList);
    o.m_PositioningDataListIsSet = true;
  }
  if (j.find("gnssPositioningDataList") != j.end()) {
    j.at("gnssPositioningDataList").get_to(o.m_GnssPositioningDataList);
    o.m_GnssPositioningDataListIsSet = true;
  }
  if (j.find("ecgi") != j.end()) {
    j.at("ecgi").get_to(o.m_Ecgi);
    o.m_EcgiIsSet = true;
  }
  if (j.find("ncgi") != j.end()) {
    j.at("ncgi").get_to(o.m_Ncgi);
    o.m_NcgiIsSet = true;
  }
  if (j.find("servingNode") != j.end()) {
    j.at("servingNode").get_to(o.m_ServingNode);
    o.m_ServingNodeIsSet = true;
  }
  if (j.find("targetMmeName") != j.end()) {
    j.at("targetMmeName").get_to(o.m_TargetMmeName);
    o.m_TargetMmeNameIsSet = true;
  }
  if (j.find("targetMmeRealm") != j.end()) {
    j.at("targetMmeRealm").get_to(o.m_TargetMmeRealm);
    o.m_TargetMmeRealmIsSet = true;
  }
  if (j.find("utranSrvccInd") != j.end()) {
    j.at("utranSrvccInd").get_to(o.m_UtranSrvccInd);
    o.m_UtranSrvccIndIsSet = true;
  }
  if (j.find("civicAddress") != j.end()) {
    j.at("civicAddress").get_to(o.m_CivicAddress);
    o.m_CivicAddressIsSet = true;
  }
  if (j.find("barometricPressure") != j.end()) {
    j.at("barometricPressure").get_to(o.m_BarometricPressure);
    o.m_BarometricPressureIsSet = true;
  }
  if (j.find("altitude") != j.end()) {
    j.at("altitude").get_to(o.m_Altitude);
    o.m_AltitudeIsSet = true;
  }
  if (j.find("hgmlcCallBackURI") != j.end()) {
    j.at("hgmlcCallBackURI").get_to(o.m_HgmlcCallBackURI);
    o.m_HgmlcCallBackURIIsSet = true;
  }
  if (j.find("ldrReference") != j.end()) {
    j.at("ldrReference").get_to(o.m_LdrReference);
    o.m_LdrReferenceIsSet = true;
  }
  if (j.find("servingLMFIdentification") != j.end()) {
    j.at("servingLMFIdentification").get_to(o.m_ServingLMFIdentification);
    o.m_ServingLMFIdentificationIsSet = true;
  }
  if (j.find("terminationCause") != j.end()) {
    j.at("terminationCause").get_to(o.m_TerminationCause);
    o.m_TerminationCauseIsSet = true;
  }
}

LocationEvent NotifiedPosInfo::getLocationEvent() const {
  return m_LocationEvent;
}
void NotifiedPosInfo::setLocationEvent(LocationEvent const &value) {
  m_LocationEvent = value;
}
std::string NotifiedPosInfo::getSupi() const { return m_Supi; }
void NotifiedPosInfo::setSupi(std::string const &value) {
  m_Supi = value;
  m_SupiIsSet = true;
}
bool NotifiedPosInfo::supiIsSet() const { return m_SupiIsSet; }
void NotifiedPosInfo::unsetSupi() { m_SupiIsSet = false; }
std::string NotifiedPosInfo::getGpsi() const { return m_Gpsi; }
void NotifiedPosInfo::setGpsi(std::string const &value) {
  m_Gpsi = value;
  m_GpsiIsSet = true;
}
bool NotifiedPosInfo::gpsiIsSet() const { return m_GpsiIsSet; }
void NotifiedPosInfo::unsetGpsi() { m_GpsiIsSet = false; }
std::string NotifiedPosInfo::getPei() const { return m_Pei; }
void NotifiedPosInfo::setPei(std::string const &value) {
  m_Pei = value;
  m_PeiIsSet = true;
}
bool NotifiedPosInfo::peiIsSet() const { return m_PeiIsSet; }
void NotifiedPosInfo::unsetPei() { m_PeiIsSet = false; }
GeographicArea NotifiedPosInfo::getLocationEstimate() const {
  return m_LocationEstimate;
}
void NotifiedPosInfo::setLocationEstimate(GeographicArea const &value) {
  m_LocationEstimate = value;
  m_LocationEstimateIsSet = true;
}
bool NotifiedPosInfo::locationEstimateIsSet() const {
  return m_LocationEstimateIsSet;
}
void NotifiedPosInfo::unsetLocationEstimate() {
  m_LocationEstimateIsSet = false;
}
LocalArea NotifiedPosInfo::getLocalLocationEstimate() const {
  return m_LocalLocationEstimate;
}
void NotifiedPosInfo::setLocalLocationEstimate(LocalArea const &value) {
  m_LocalLocationEstimate = value;
  m_LocalLocationEstimateIsSet = true;
}
bool NotifiedPosInfo::localLocationEstimateIsSet() const {
  return m_LocalLocationEstimateIsSet;
}
void NotifiedPosInfo::unsetLocalLocationEstimate() {
  m_LocalLocationEstimateIsSet = false;
}
int32_t NotifiedPosInfo::getAgeOfLocationEstimate() const {
  return m_AgeOfLocationEstimate;
}
void NotifiedPosInfo::setAgeOfLocationEstimate(int32_t const value) {
  m_AgeOfLocationEstimate = value;
  m_AgeOfLocationEstimateIsSet = true;
}
bool NotifiedPosInfo::ageOfLocationEstimateIsSet() const {
  return m_AgeOfLocationEstimateIsSet;
}
void NotifiedPosInfo::unsetAgeOfLocationEstimate() {
  m_AgeOfLocationEstimateIsSet = false;
}
VelocityEstimate NotifiedPosInfo::getVelocityEstimate() const {
  return m_VelocityEstimate;
}
void NotifiedPosInfo::setVelocityEstimate(VelocityEstimate const &value) {
  m_VelocityEstimate = value;
  m_VelocityEstimateIsSet = true;
}
bool NotifiedPosInfo::velocityEstimateIsSet() const {
  return m_VelocityEstimateIsSet;
}
void NotifiedPosInfo::unsetVelocityEstimate() {
  m_VelocityEstimateIsSet = false;
}
std::vector<PositioningMethodAndUsage> &
NotifiedPosInfo::getPositioningDataList() {
  return m_PositioningDataList;
}
void NotifiedPosInfo::setPositioningDataList(
    std::vector<PositioningMethodAndUsage> const &value) {
  m_PositioningDataList = value;
  m_PositioningDataListIsSet = true;
}
bool NotifiedPosInfo::positioningDataListIsSet() const {
  return m_PositioningDataListIsSet;
}
void NotifiedPosInfo::unsetPositioningDataList() {
  m_PositioningDataListIsSet = false;
}
std::vector<GnssPositioningMethodAndUsage> &
NotifiedPosInfo::getGnssPositioningDataList() {
  return m_GnssPositioningDataList;
}
void NotifiedPosInfo::setGnssPositioningDataList(
    std::vector<GnssPositioningMethodAndUsage> const &value) {
  m_GnssPositioningDataList = value;
  m_GnssPositioningDataListIsSet = true;
}
bool NotifiedPosInfo::gnssPositioningDataListIsSet() const {
  return m_GnssPositioningDataListIsSet;
}
void NotifiedPosInfo::unsetGnssPositioningDataList() {
  m_GnssPositioningDataListIsSet = false;
}
Ecgi NotifiedPosInfo::getEcgi() const { return m_Ecgi; }
void NotifiedPosInfo::setEcgi(Ecgi const &value) {
  m_Ecgi = value;
  m_EcgiIsSet = true;
}
bool NotifiedPosInfo::ecgiIsSet() const { return m_EcgiIsSet; }
void NotifiedPosInfo::unsetEcgi() { m_EcgiIsSet = false; }
Ncgi NotifiedPosInfo::getNcgi() const { return m_Ncgi; }
void NotifiedPosInfo::setNcgi(Ncgi const &value) {
  m_Ncgi = value;
  m_NcgiIsSet = true;
}
bool NotifiedPosInfo::ncgiIsSet() const { return m_NcgiIsSet; }
void NotifiedPosInfo::unsetNcgi() { m_NcgiIsSet = false; }
std::string NotifiedPosInfo::getServingNode() const { return m_ServingNode; }
void NotifiedPosInfo::setServingNode(std::string const &value) {
  m_ServingNode = value;
  m_ServingNodeIsSet = true;
}
bool NotifiedPosInfo::servingNodeIsSet() const { return m_ServingNodeIsSet; }
void NotifiedPosInfo::unsetServingNode() { m_ServingNodeIsSet = false; }
std::string NotifiedPosInfo::getTargetMmeName() const {
  return m_TargetMmeName;
}
void NotifiedPosInfo::setTargetMmeName(std::string const &value) {
  m_TargetMmeName = value;
  m_TargetMmeNameIsSet = true;
}
bool NotifiedPosInfo::targetMmeNameIsSet() const {
  return m_TargetMmeNameIsSet;
}
void NotifiedPosInfo::unsetTargetMmeName() { m_TargetMmeNameIsSet = false; }
std::string NotifiedPosInfo::getTargetMmeRealm() const {
  return m_TargetMmeRealm;
}
void NotifiedPosInfo::setTargetMmeRealm(std::string const &value) {
  m_TargetMmeRealm = value;
  m_TargetMmeRealmIsSet = true;
}
bool NotifiedPosInfo::targetMmeRealmIsSet() const {
  return m_TargetMmeRealmIsSet;
}
void NotifiedPosInfo::unsetTargetMmeRealm() { m_TargetMmeRealmIsSet = false; }
bool NotifiedPosInfo::isUtranSrvccInd() const { return m_UtranSrvccInd; }
void NotifiedPosInfo::setUtranSrvccInd(bool const value) {
  m_UtranSrvccInd = value;
  m_UtranSrvccIndIsSet = true;
}
bool NotifiedPosInfo::utranSrvccIndIsSet() const {
  return m_UtranSrvccIndIsSet;
}
void NotifiedPosInfo::unsetUtranSrvccInd() { m_UtranSrvccIndIsSet = false; }
CivicAddress NotifiedPosInfo::getCivicAddress() const { return m_CivicAddress; }
void NotifiedPosInfo::setCivicAddress(CivicAddress const &value) {
  m_CivicAddress = value;
  m_CivicAddressIsSet = true;
}
bool NotifiedPosInfo::civicAddressIsSet() const { return m_CivicAddressIsSet; }
void NotifiedPosInfo::unsetCivicAddress() { m_CivicAddressIsSet = false; }
int32_t NotifiedPosInfo::getBarometricPressure() const {
  return m_BarometricPressure;
}
void NotifiedPosInfo::setBarometricPressure(int32_t const value) {
  m_BarometricPressure = value;
  m_BarometricPressureIsSet = true;
}
bool NotifiedPosInfo::barometricPressureIsSet() const {
  return m_BarometricPressureIsSet;
}
void NotifiedPosInfo::unsetBarometricPressure() {
  m_BarometricPressureIsSet = false;
}
double NotifiedPosInfo::getAltitude() const { return m_Altitude; }
void NotifiedPosInfo::setAltitude(double const value) {
  m_Altitude = value;
  m_AltitudeIsSet = true;
}
bool NotifiedPosInfo::altitudeIsSet() const { return m_AltitudeIsSet; }
void NotifiedPosInfo::unsetAltitude() { m_AltitudeIsSet = false; }
std::string NotifiedPosInfo::getHgmlcCallBackURI() const {
  return m_HgmlcCallBackURI;
}
void NotifiedPosInfo::setHgmlcCallBackURI(std::string const &value) {
  m_HgmlcCallBackURI = value;
  m_HgmlcCallBackURIIsSet = true;
}
bool NotifiedPosInfo::hgmlcCallBackURIIsSet() const {
  return m_HgmlcCallBackURIIsSet;
}
void NotifiedPosInfo::unsetHgmlcCallBackURI() {
  m_HgmlcCallBackURIIsSet = false;
}
std::string NotifiedPosInfo::getLdrReference() const { return m_LdrReference; }
void NotifiedPosInfo::setLdrReference(std::string const &value) {
  m_LdrReference = value;
  m_LdrReferenceIsSet = true;
}
bool NotifiedPosInfo::ldrReferenceIsSet() const { return m_LdrReferenceIsSet; }
void NotifiedPosInfo::unsetLdrReference() { m_LdrReferenceIsSet = false; }
std::string NotifiedPosInfo::getServingLMFIdentification() const {
  return m_ServingLMFIdentification;
}
void NotifiedPosInfo::setServingLMFIdentification(std::string const &value) {
  m_ServingLMFIdentification = value;
  m_ServingLMFIdentificationIsSet = true;
}
bool NotifiedPosInfo::servingLMFIdentificationIsSet() const {
  return m_ServingLMFIdentificationIsSet;
}
void NotifiedPosInfo::unsetServingLMFIdentification() {
  m_ServingLMFIdentificationIsSet = false;
}
TerminationCause NotifiedPosInfo::getTerminationCause() const {
  return m_TerminationCause;
}
void NotifiedPosInfo::setTerminationCause(TerminationCause const &value) {
  m_TerminationCause = value;
  m_TerminationCauseIsSet = true;
}
bool NotifiedPosInfo::terminationCauseIsSet() const {
  return m_TerminationCauseIsSet;
}
void NotifiedPosInfo::unsetTerminationCause() {
  m_TerminationCauseIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
