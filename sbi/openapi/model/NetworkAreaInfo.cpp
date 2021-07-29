/**
 * Nchf_ConvergedCharging
 * ConvergedCharging Service    © 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 3.0.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "NetworkAreaInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

NetworkAreaInfo::NetworkAreaInfo() {
  m_EcgisIsSet = false;
  m_NcgisIsSet = false;
  m_GRanNodeIdsIsSet = false;
  m_TaisIsSet = false;
}

NetworkAreaInfo::~NetworkAreaInfo() {}

void NetworkAreaInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const NetworkAreaInfo &o) {
  j = nlohmann::json();
  if (o.ecgisIsSet() || !o.m_Ecgis.empty())
    j["ecgis"] = o.m_Ecgis;
  if (o.ncgisIsSet() || !o.m_Ncgis.empty())
    j["ncgis"] = o.m_Ncgis;
  if (o.gRanNodeIdsIsSet() || !o.m_GRanNodeIds.empty())
    j["gRanNodeIds"] = o.m_GRanNodeIds;
  if (o.taisIsSet() || !o.m_Tais.empty())
    j["tais"] = o.m_Tais;
}

void from_json(const nlohmann::json &j, NetworkAreaInfo &o) {
  if (j.find("ecgis") != j.end()) {
    j.at("ecgis").get_to(o.m_Ecgis);
    o.m_EcgisIsSet = true;
  }
  if (j.find("ncgis") != j.end()) {
    j.at("ncgis").get_to(o.m_Ncgis);
    o.m_NcgisIsSet = true;
  }
  if (j.find("gRanNodeIds") != j.end()) {
    j.at("gRanNodeIds").get_to(o.m_GRanNodeIds);
    o.m_GRanNodeIdsIsSet = true;
  }
  if (j.find("tais") != j.end()) {
    j.at("tais").get_to(o.m_Tais);
    o.m_TaisIsSet = true;
  }
}

std::vector<Ecgi> &NetworkAreaInfo::getEcgis() { return m_Ecgis; }
void NetworkAreaInfo::setEcgis(std::vector<Ecgi> const &value) {
  m_Ecgis = value;
  m_EcgisIsSet = true;
}
bool NetworkAreaInfo::ecgisIsSet() const { return m_EcgisIsSet; }
void NetworkAreaInfo::unsetEcgis() { m_EcgisIsSet = false; }
std::vector<Ncgi> &NetworkAreaInfo::getNcgis() { return m_Ncgis; }
void NetworkAreaInfo::setNcgis(std::vector<Ncgi> const &value) {
  m_Ncgis = value;
  m_NcgisIsSet = true;
}
bool NetworkAreaInfo::ncgisIsSet() const { return m_NcgisIsSet; }
void NetworkAreaInfo::unsetNcgis() { m_NcgisIsSet = false; }
std::vector<GlobalRanNodeId> &NetworkAreaInfo::getGRanNodeIds() {
  return m_GRanNodeIds;
}
void NetworkAreaInfo::setGRanNodeIds(
    std::vector<GlobalRanNodeId> const &value) {
  m_GRanNodeIds = value;
  m_GRanNodeIdsIsSet = true;
}
bool NetworkAreaInfo::gRanNodeIdsIsSet() const { return m_GRanNodeIdsIsSet; }
void NetworkAreaInfo::unsetGRanNodeIds() { m_GRanNodeIdsIsSet = false; }
std::vector<Tai> &NetworkAreaInfo::getTais() { return m_Tais; }
void NetworkAreaInfo::setTais(std::vector<Tai> const &value) {
  m_Tais = value;
  m_TaisIsSet = true;
}
bool NetworkAreaInfo::taisIsSet() const { return m_TaisIsSet; }
void NetworkAreaInfo::unsetTais() { m_TaisIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
