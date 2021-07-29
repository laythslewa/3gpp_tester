/**
 * LMF Location
 * LMF Location Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA,
 * ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "LocationData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

LocationData::LocationData() {
  m_AccuracyFulfilmentIndicatorIsSet = false;
  m_AgeOfLocationEstimate = 0;
  m_AgeOfLocationEstimateIsSet = false;
  m_VelocityEstimateIsSet = false;
  m_CivicAddressIsSet = false;
  m_LocalLocationEstimateIsSet = false;
  m_PositioningDataListIsSet = false;
  m_GnssPositioningDataListIsSet = false;
  m_EcgiIsSet = false;
  m_NcgiIsSet = false;
  m_Altitude = 0.0;
  m_AltitudeIsSet = false;
  m_BarometricPressure = 0;
  m_BarometricPressureIsSet = false;
  m_ServingLMFIdentification = "";
  m_ServingLMFIdentificationIsSet = false;
}

LocationData::~LocationData() {}

void LocationData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const LocationData &o) {
  j = nlohmann::json();
  j["locationEstimate"] = o.m_LocationEstimate;
  if (o.accuracyFulfilmentIndicatorIsSet())
    j["accuracyFulfilmentIndicator"] = o.m_AccuracyFulfilmentIndicator;
  if (o.ageOfLocationEstimateIsSet())
    j["ageOfLocationEstimate"] = o.m_AgeOfLocationEstimate;
  if (o.velocityEstimateIsSet())
    j["velocityEstimate"] = o.m_VelocityEstimate;
  if (o.civicAddressIsSet())
    j["civicAddress"] = o.m_CivicAddress;
  if (o.localLocationEstimateIsSet())
    j["localLocationEstimate"] = o.m_LocalLocationEstimate;
  if (o.positioningDataListIsSet() || !o.m_PositioningDataList.empty())
    j["positioningDataList"] = o.m_PositioningDataList;
  if (o.gnssPositioningDataListIsSet() || !o.m_GnssPositioningDataList.empty())
    j["gnssPositioningDataList"] = o.m_GnssPositioningDataList;
  if (o.ecgiIsSet())
    j["ecgi"] = o.m_Ecgi;
  if (o.ncgiIsSet())
    j["ncgi"] = o.m_Ncgi;
  if (o.altitudeIsSet())
    j["altitude"] = o.m_Altitude;
  if (o.barometricPressureIsSet())
    j["barometricPressure"] = o.m_BarometricPressure;
  if (o.servingLMFIdentificationIsSet())
    j["servingLMFIdentification"] = o.m_ServingLMFIdentification;
}

void from_json(const nlohmann::json &j, LocationData &o) {
  j.at("locationEstimate").get_to(o.m_LocationEstimate);
  if (j.find("accuracyFulfilmentIndicator") != j.end()) {
    j.at("accuracyFulfilmentIndicator").get_to(o.m_AccuracyFulfilmentIndicator);
    o.m_AccuracyFulfilmentIndicatorIsSet = true;
  }
  if (j.find("ageOfLocationEstimate") != j.end()) {
    j.at("ageOfLocationEstimate").get_to(o.m_AgeOfLocationEstimate);
    o.m_AgeOfLocationEstimateIsSet = true;
  }
  if (j.find("velocityEstimate") != j.end()) {
    j.at("velocityEstimate").get_to(o.m_VelocityEstimate);
    o.m_VelocityEstimateIsSet = true;
  }
  if (j.find("civicAddress") != j.end()) {
    j.at("civicAddress").get_to(o.m_CivicAddress);
    o.m_CivicAddressIsSet = true;
  }
  if (j.find("localLocationEstimate") != j.end()) {
    j.at("localLocationEstimate").get_to(o.m_LocalLocationEstimate);
    o.m_LocalLocationEstimateIsSet = true;
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
  if (j.find("altitude") != j.end()) {
    j.at("altitude").get_to(o.m_Altitude);
    o.m_AltitudeIsSet = true;
  }
  if (j.find("barometricPressure") != j.end()) {
    j.at("barometricPressure").get_to(o.m_BarometricPressure);
    o.m_BarometricPressureIsSet = true;
  }
  if (j.find("servingLMFIdentification") != j.end()) {
    j.at("servingLMFIdentification").get_to(o.m_ServingLMFIdentification);
    o.m_ServingLMFIdentificationIsSet = true;
  }
}

GeographicArea LocationData::getLocationEstimate() const {
  return m_LocationEstimate;
}
void LocationData::setLocationEstimate(GeographicArea const &value) {
  m_LocationEstimate = value;
}
AccuracyFulfilmentIndicator
LocationData::getAccuracyFulfilmentIndicator() const {
  return m_AccuracyFulfilmentIndicator;
}
void LocationData::setAccuracyFulfilmentIndicator(
    AccuracyFulfilmentIndicator const &value) {
  m_AccuracyFulfilmentIndicator = value;
  m_AccuracyFulfilmentIndicatorIsSet = true;
}
bool LocationData::accuracyFulfilmentIndicatorIsSet() const {
  return m_AccuracyFulfilmentIndicatorIsSet;
}
void LocationData::unsetAccuracyFulfilmentIndicator() {
  m_AccuracyFulfilmentIndicatorIsSet = false;
}
int32_t LocationData::getAgeOfLocationEstimate() const {
  return m_AgeOfLocationEstimate;
}
void LocationData::setAgeOfLocationEstimate(int32_t const value) {
  m_AgeOfLocationEstimate = value;
  m_AgeOfLocationEstimateIsSet = true;
}
bool LocationData::ageOfLocationEstimateIsSet() const {
  return m_AgeOfLocationEstimateIsSet;
}
void LocationData::unsetAgeOfLocationEstimate() {
  m_AgeOfLocationEstimateIsSet = false;
}
VelocityEstimate LocationData::getVelocityEstimate() const {
  return m_VelocityEstimate;
}
void LocationData::setVelocityEstimate(VelocityEstimate const &value) {
  m_VelocityEstimate = value;
  m_VelocityEstimateIsSet = true;
}
bool LocationData::velocityEstimateIsSet() const {
  return m_VelocityEstimateIsSet;
}
void LocationData::unsetVelocityEstimate() { m_VelocityEstimateIsSet = false; }
CivicAddress LocationData::getCivicAddress() const { return m_CivicAddress; }
void LocationData::setCivicAddress(CivicAddress const &value) {
  m_CivicAddress = value;
  m_CivicAddressIsSet = true;
}
bool LocationData::civicAddressIsSet() const { return m_CivicAddressIsSet; }
void LocationData::unsetCivicAddress() { m_CivicAddressIsSet = false; }
LocalArea LocationData::getLocalLocationEstimate() const {
  return m_LocalLocationEstimate;
}
void LocationData::setLocalLocationEstimate(LocalArea const &value) {
  m_LocalLocationEstimate = value;
  m_LocalLocationEstimateIsSet = true;
}
bool LocationData::localLocationEstimateIsSet() const {
  return m_LocalLocationEstimateIsSet;
}
void LocationData::unsetLocalLocationEstimate() {
  m_LocalLocationEstimateIsSet = false;
}
std::vector<PositioningMethodAndUsage> &LocationData::getPositioningDataList() {
  return m_PositioningDataList;
}
void LocationData::setPositioningDataList(
    std::vector<PositioningMethodAndUsage> const &value) {
  m_PositioningDataList = value;
  m_PositioningDataListIsSet = true;
}
bool LocationData::positioningDataListIsSet() const {
  return m_PositioningDataListIsSet;
}
void LocationData::unsetPositioningDataList() {
  m_PositioningDataListIsSet = false;
}
std::vector<GnssPositioningMethodAndUsage> &
LocationData::getGnssPositioningDataList() {
  return m_GnssPositioningDataList;
}
void LocationData::setGnssPositioningDataList(
    std::vector<GnssPositioningMethodAndUsage> const &value) {
  m_GnssPositioningDataList = value;
  m_GnssPositioningDataListIsSet = true;
}
bool LocationData::gnssPositioningDataListIsSet() const {
  return m_GnssPositioningDataListIsSet;
}
void LocationData::unsetGnssPositioningDataList() {
  m_GnssPositioningDataListIsSet = false;
}
Ecgi LocationData::getEcgi() const { return m_Ecgi; }
void LocationData::setEcgi(Ecgi const &value) {
  m_Ecgi = value;
  m_EcgiIsSet = true;
}
bool LocationData::ecgiIsSet() const { return m_EcgiIsSet; }
void LocationData::unsetEcgi() { m_EcgiIsSet = false; }
Ncgi LocationData::getNcgi() const { return m_Ncgi; }
void LocationData::setNcgi(Ncgi const &value) {
  m_Ncgi = value;
  m_NcgiIsSet = true;
}
bool LocationData::ncgiIsSet() const { return m_NcgiIsSet; }
void LocationData::unsetNcgi() { m_NcgiIsSet = false; }
double LocationData::getAltitude() const { return m_Altitude; }
void LocationData::setAltitude(double const value) {
  m_Altitude = value;
  m_AltitudeIsSet = true;
}
bool LocationData::altitudeIsSet() const { return m_AltitudeIsSet; }
void LocationData::unsetAltitude() { m_AltitudeIsSet = false; }
int32_t LocationData::getBarometricPressure() const {
  return m_BarometricPressure;
}
void LocationData::setBarometricPressure(int32_t const value) {
  m_BarometricPressure = value;
  m_BarometricPressureIsSet = true;
}
bool LocationData::barometricPressureIsSet() const {
  return m_BarometricPressureIsSet;
}
void LocationData::unsetBarometricPressure() {
  m_BarometricPressureIsSet = false;
}
std::string LocationData::getServingLMFIdentification() const {
  return m_ServingLMFIdentification;
}
void LocationData::setServingLMFIdentification(std::string const &value) {
  m_ServingLMFIdentification = value;
  m_ServingLMFIdentificationIsSet = true;
}
bool LocationData::servingLMFIdentificationIsSet() const {
  return m_ServingLMFIdentificationIsSet;
}
void LocationData::unsetServingLMFIdentification() {
  m_ServingLMFIdentificationIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org