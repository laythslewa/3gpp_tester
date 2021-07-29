/**
 * Unified Data Repository Service API file for policy data
 * The API version is defined in 3GPP TS 29.504 © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "BdtData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

BdtData::BdtData() {
  m_AspId = "";
  m_BdtRefId = "";
  m_BdtRefIdIsSet = false;
  m_NwAreaInfoIsSet = false;
  m_NumOfUes = 0;
  m_NumOfUesIsSet = false;
  m_VolPerUeIsSet = false;
  m_Dnn = "";
  m_DnnIsSet = false;
  m_SnssaiIsSet = false;
  m_TrafficDes = "";
  m_TrafficDesIsSet = false;
  m_BdtpStatusIsSet = false;
  m_SuppFeat = "";
  m_SuppFeatIsSet = false;
}

BdtData::~BdtData() {}

void BdtData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const BdtData &o) {
  j = nlohmann::json();
  j["aspId"] = o.m_AspId;
  j["transPolicy"] = o.m_TransPolicy;
  if (o.bdtRefIdIsSet())
    j["bdtRefId"] = o.m_BdtRefId;
  if (o.nwAreaInfoIsSet())
    j["nwAreaInfo"] = o.m_NwAreaInfo;
  if (o.numOfUesIsSet())
    j["numOfUes"] = o.m_NumOfUes;
  if (o.volPerUeIsSet())
    j["volPerUe"] = o.m_VolPerUe;
  if (o.dnnIsSet())
    j["dnn"] = o.m_Dnn;
  if (o.snssaiIsSet())
    j["snssai"] = o.m_Snssai;
  if (o.trafficDesIsSet())
    j["trafficDes"] = o.m_TrafficDes;
  if (o.bdtpStatusIsSet())
    j["bdtpStatus"] = o.m_BdtpStatus;
  if (o.suppFeatIsSet())
    j["suppFeat"] = o.m_SuppFeat;
}

void from_json(const nlohmann::json &j, BdtData &o) {
  j.at("aspId").get_to(o.m_AspId);
  j.at("transPolicy").get_to(o.m_TransPolicy);
  if (j.find("bdtRefId") != j.end()) {
    j.at("bdtRefId").get_to(o.m_BdtRefId);
    o.m_BdtRefIdIsSet = true;
  }
  if (j.find("nwAreaInfo") != j.end()) {
    j.at("nwAreaInfo").get_to(o.m_NwAreaInfo);
    o.m_NwAreaInfoIsSet = true;
  }
  if (j.find("numOfUes") != j.end()) {
    j.at("numOfUes").get_to(o.m_NumOfUes);
    o.m_NumOfUesIsSet = true;
  }
  if (j.find("volPerUe") != j.end()) {
    j.at("volPerUe").get_to(o.m_VolPerUe);
    o.m_VolPerUeIsSet = true;
  }
  if (j.find("dnn") != j.end()) {
    j.at("dnn").get_to(o.m_Dnn);
    o.m_DnnIsSet = true;
  }
  if (j.find("snssai") != j.end()) {
    j.at("snssai").get_to(o.m_Snssai);
    o.m_SnssaiIsSet = true;
  }
  if (j.find("trafficDes") != j.end()) {
    j.at("trafficDes").get_to(o.m_TrafficDes);
    o.m_TrafficDesIsSet = true;
  }
  if (j.find("bdtpStatus") != j.end()) {
    j.at("bdtpStatus").get_to(o.m_BdtpStatus);
    o.m_BdtpStatusIsSet = true;
  }
  if (j.find("suppFeat") != j.end()) {
    j.at("suppFeat").get_to(o.m_SuppFeat);
    o.m_SuppFeatIsSet = true;
  }
}

std::string BdtData::getAspId() const { return m_AspId; }
void BdtData::setAspId(std::string const &value) { m_AspId = value; }
TransferPolicy BdtData::getTransPolicy() const { return m_TransPolicy; }
void BdtData::setTransPolicy(TransferPolicy const &value) {
  m_TransPolicy = value;
}
std::string BdtData::getBdtRefId() const { return m_BdtRefId; }
void BdtData::setBdtRefId(std::string const &value) {
  m_BdtRefId = value;
  m_BdtRefIdIsSet = true;
}
bool BdtData::bdtRefIdIsSet() const { return m_BdtRefIdIsSet; }
void BdtData::unsetBdtRefId() { m_BdtRefIdIsSet = false; }
NetworkAreaInfo BdtData::getNwAreaInfo() const { return m_NwAreaInfo; }
void BdtData::setNwAreaInfo(NetworkAreaInfo const &value) {
  m_NwAreaInfo = value;
  m_NwAreaInfoIsSet = true;
}
bool BdtData::nwAreaInfoIsSet() const { return m_NwAreaInfoIsSet; }
void BdtData::unsetNwAreaInfo() { m_NwAreaInfoIsSet = false; }
int32_t BdtData::getNumOfUes() const { return m_NumOfUes; }
void BdtData::setNumOfUes(int32_t const value) {
  m_NumOfUes = value;
  m_NumOfUesIsSet = true;
}
bool BdtData::numOfUesIsSet() const { return m_NumOfUesIsSet; }
void BdtData::unsetNumOfUes() { m_NumOfUesIsSet = false; }
UsageThreshold BdtData::getVolPerUe() const { return m_VolPerUe; }
void BdtData::setVolPerUe(UsageThreshold const &value) {
  m_VolPerUe = value;
  m_VolPerUeIsSet = true;
}
bool BdtData::volPerUeIsSet() const { return m_VolPerUeIsSet; }
void BdtData::unsetVolPerUe() { m_VolPerUeIsSet = false; }
std::string BdtData::getDnn() const { return m_Dnn; }
void BdtData::setDnn(std::string const &value) {
  m_Dnn = value;
  m_DnnIsSet = true;
}
bool BdtData::dnnIsSet() const { return m_DnnIsSet; }
void BdtData::unsetDnn() { m_DnnIsSet = false; }
Snssai BdtData::getSnssai() const { return m_Snssai; }
void BdtData::setSnssai(Snssai const &value) {
  m_Snssai = value;
  m_SnssaiIsSet = true;
}
bool BdtData::snssaiIsSet() const { return m_SnssaiIsSet; }
void BdtData::unsetSnssai() { m_SnssaiIsSet = false; }
std::string BdtData::getTrafficDes() const { return m_TrafficDes; }
void BdtData::setTrafficDes(std::string const &value) {
  m_TrafficDes = value;
  m_TrafficDesIsSet = true;
}
bool BdtData::trafficDesIsSet() const { return m_TrafficDesIsSet; }
void BdtData::unsetTrafficDes() { m_TrafficDesIsSet = false; }
BdtPolicyStatus BdtData::getBdtpStatus() const { return m_BdtpStatus; }
void BdtData::setBdtpStatus(BdtPolicyStatus const &value) {
  m_BdtpStatus = value;
  m_BdtpStatusIsSet = true;
}
bool BdtData::bdtpStatusIsSet() const { return m_BdtpStatusIsSet; }
void BdtData::unsetBdtpStatus() { m_BdtpStatusIsSet = false; }
std::string BdtData::getSuppFeat() const { return m_SuppFeat; }
void BdtData::setSuppFeat(std::string const &value) {
  m_SuppFeat = value;
  m_SuppFeatIsSet = true;
}
bool BdtData::suppFeatIsSet() const { return m_SuppFeatIsSet; }
void BdtData::unsetSuppFeat() { m_SuppFeatIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
