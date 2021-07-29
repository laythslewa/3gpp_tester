/**
 * SS_NetworkResourceAdaptation
 * SS Network Resource Adaptation Service. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "MbmsLocArea.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

MbmsLocArea::MbmsLocArea() {
  m_CellIdIsSet = false;
  m_EnodeBIdIsSet = false;
  m_GeographicAreaIsSet = false;
  m_MbmsServiceAreaIdIsSet = false;
  m_CivicAddressIsSet = false;
}

MbmsLocArea::~MbmsLocArea() {}

void MbmsLocArea::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const MbmsLocArea &o) {
  j = nlohmann::json();
  if (o.cellIdIsSet() || !o.m_CellId.empty())
    j["cellId"] = o.m_CellId;
  if (o.enodeBIdIsSet() || !o.m_EnodeBId.empty())
    j["enodeBId"] = o.m_EnodeBId;
  if (o.geographicAreaIsSet() || !o.m_GeographicArea.empty())
    j["geographicArea"] = o.m_GeographicArea;
  if (o.mbmsServiceAreaIdIsSet() || !o.m_MbmsServiceAreaId.empty())
    j["mbmsServiceAreaId"] = o.m_MbmsServiceAreaId;
  if (o.civicAddressIsSet() || !o.m_CivicAddress.empty())
    j["civicAddress"] = o.m_CivicAddress;
}

void from_json(const nlohmann::json &j, MbmsLocArea &o) {
  if (j.find("cellId") != j.end()) {
    j.at("cellId").get_to(o.m_CellId);
    o.m_CellIdIsSet = true;
  }
  if (j.find("enodeBId") != j.end()) {
    j.at("enodeBId").get_to(o.m_EnodeBId);
    o.m_EnodeBIdIsSet = true;
  }
  if (j.find("geographicArea") != j.end()) {
    j.at("geographicArea").get_to(o.m_GeographicArea);
    o.m_GeographicAreaIsSet = true;
  }
  if (j.find("mbmsServiceAreaId") != j.end()) {
    j.at("mbmsServiceAreaId").get_to(o.m_MbmsServiceAreaId);
    o.m_MbmsServiceAreaIdIsSet = true;
  }
  if (j.find("civicAddress") != j.end()) {
    j.at("civicAddress").get_to(o.m_CivicAddress);
    o.m_CivicAddressIsSet = true;
  }
}

std::vector<std::string> &MbmsLocArea::getCellId() { return m_CellId; }
void MbmsLocArea::setCellId(std::vector<std::string> const &value) {
  m_CellId = value;
  m_CellIdIsSet = true;
}
bool MbmsLocArea::cellIdIsSet() const { return m_CellIdIsSet; }
void MbmsLocArea::unsetCellId() { m_CellIdIsSet = false; }
std::vector<std::string> &MbmsLocArea::getEnodeBId() { return m_EnodeBId; }
void MbmsLocArea::setEnodeBId(std::vector<std::string> const &value) {
  m_EnodeBId = value;
  m_EnodeBIdIsSet = true;
}
bool MbmsLocArea::enodeBIdIsSet() const { return m_EnodeBIdIsSet; }
void MbmsLocArea::unsetEnodeBId() { m_EnodeBIdIsSet = false; }
std::vector<GeographicArea> &MbmsLocArea::getGeographicArea() {
  return m_GeographicArea;
}
void MbmsLocArea::setGeographicArea(std::vector<GeographicArea> const &value) {
  m_GeographicArea = value;
  m_GeographicAreaIsSet = true;
}
bool MbmsLocArea::geographicAreaIsSet() const { return m_GeographicAreaIsSet; }
void MbmsLocArea::unsetGeographicArea() { m_GeographicAreaIsSet = false; }
std::vector<std::string> &MbmsLocArea::getMbmsServiceAreaId() {
  return m_MbmsServiceAreaId;
}
void MbmsLocArea::setMbmsServiceAreaId(std::vector<std::string> const &value) {
  m_MbmsServiceAreaId = value;
  m_MbmsServiceAreaIdIsSet = true;
}
bool MbmsLocArea::mbmsServiceAreaIdIsSet() const {
  return m_MbmsServiceAreaIdIsSet;
}
void MbmsLocArea::unsetMbmsServiceAreaId() { m_MbmsServiceAreaIdIsSet = false; }
std::vector<CivicAddress> &MbmsLocArea::getCivicAddress() {
  return m_CivicAddress;
}
void MbmsLocArea::setCivicAddress(std::vector<CivicAddress> const &value) {
  m_CivicAddress = value;
  m_CivicAddressIsSet = true;
}
bool MbmsLocArea::civicAddressIsSet() const { return m_CivicAddressIsSet; }
void MbmsLocArea::unsetCivicAddress() { m_CivicAddressIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
