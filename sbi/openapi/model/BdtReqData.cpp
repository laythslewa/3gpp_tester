/**
 * Npcf_BDTPolicyControl Service API
 * PCF BDT Policy Control Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "BdtReqData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

BdtReqData::BdtReqData() {
  m_AspId = "";
  m_Dnn = "";
  m_DnnIsSet = false;
  m_InterGroupId = "";
  m_InterGroupIdIsSet = false;
  m_NotifUri = "";
  m_NotifUriIsSet = false;
  m_NwAreaInfoIsSet = false;
  m_NumOfUes = 0;
  m_SnssaiIsSet = false;
  m_SuppFeat = "";
  m_SuppFeatIsSet = false;
  m_TrafficDes = "";
  m_TrafficDesIsSet = false;
  m_WarnNotifReq = false;
  m_WarnNotifReqIsSet = false;
}

BdtReqData::~BdtReqData() {}

void BdtReqData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const BdtReqData &o) {
  j = nlohmann::json();
  j["aspId"] = o.m_AspId;
  j["desTimeInt"] = o.m_DesTimeInt;
  if (o.dnnIsSet())
    j["dnn"] = o.m_Dnn;
  if (o.interGroupIdIsSet())
    j["interGroupId"] = o.m_InterGroupId;
  if (o.notifUriIsSet())
    j["notifUri"] = o.m_NotifUri;
  if (o.nwAreaInfoIsSet())
    j["nwAreaInfo"] = o.m_NwAreaInfo;
  j["numOfUes"] = o.m_NumOfUes;
  j["volPerUe"] = o.m_VolPerUe;
  if (o.snssaiIsSet())
    j["snssai"] = o.m_Snssai;
  if (o.suppFeatIsSet())
    j["suppFeat"] = o.m_SuppFeat;
  if (o.trafficDesIsSet())
    j["trafficDes"] = o.m_TrafficDes;
  if (o.warnNotifReqIsSet())
    j["warnNotifReq"] = o.m_WarnNotifReq;
}

void from_json(const nlohmann::json &j, BdtReqData &o) {
  j.at("aspId").get_to(o.m_AspId);
  j.at("desTimeInt").get_to(o.m_DesTimeInt);
  if (j.find("dnn") != j.end()) {
    j.at("dnn").get_to(o.m_Dnn);
    o.m_DnnIsSet = true;
  }
  if (j.find("interGroupId") != j.end()) {
    j.at("interGroupId").get_to(o.m_InterGroupId);
    o.m_InterGroupIdIsSet = true;
  }
  if (j.find("notifUri") != j.end()) {
    j.at("notifUri").get_to(o.m_NotifUri);
    o.m_NotifUriIsSet = true;
  }
  if (j.find("nwAreaInfo") != j.end()) {
    j.at("nwAreaInfo").get_to(o.m_NwAreaInfo);
    o.m_NwAreaInfoIsSet = true;
  }
  j.at("numOfUes").get_to(o.m_NumOfUes);
  j.at("volPerUe").get_to(o.m_VolPerUe);
  if (j.find("snssai") != j.end()) {
    j.at("snssai").get_to(o.m_Snssai);
    o.m_SnssaiIsSet = true;
  }
  if (j.find("suppFeat") != j.end()) {
    j.at("suppFeat").get_to(o.m_SuppFeat);
    o.m_SuppFeatIsSet = true;
  }
  if (j.find("trafficDes") != j.end()) {
    j.at("trafficDes").get_to(o.m_TrafficDes);
    o.m_TrafficDesIsSet = true;
  }
  if (j.find("warnNotifReq") != j.end()) {
    j.at("warnNotifReq").get_to(o.m_WarnNotifReq);
    o.m_WarnNotifReqIsSet = true;
  }
}

std::string BdtReqData::getAspId() const { return m_AspId; }
void BdtReqData::setAspId(std::string const &value) { m_AspId = value; }
TimeWindow BdtReqData::getDesTimeInt() const { return m_DesTimeInt; }
void BdtReqData::setDesTimeInt(TimeWindow const &value) {
  m_DesTimeInt = value;
}
std::string BdtReqData::getDnn() const { return m_Dnn; }
void BdtReqData::setDnn(std::string const &value) {
  m_Dnn = value;
  m_DnnIsSet = true;
}
bool BdtReqData::dnnIsSet() const { return m_DnnIsSet; }
void BdtReqData::unsetDnn() { m_DnnIsSet = false; }
std::string BdtReqData::getInterGroupId() const { return m_InterGroupId; }
void BdtReqData::setInterGroupId(std::string const &value) {
  m_InterGroupId = value;
  m_InterGroupIdIsSet = true;
}
bool BdtReqData::interGroupIdIsSet() const { return m_InterGroupIdIsSet; }
void BdtReqData::unsetInterGroupId() { m_InterGroupIdIsSet = false; }
std::string BdtReqData::getNotifUri() const { return m_NotifUri; }
void BdtReqData::setNotifUri(std::string const &value) {
  m_NotifUri = value;
  m_NotifUriIsSet = true;
}
bool BdtReqData::notifUriIsSet() const { return m_NotifUriIsSet; }
void BdtReqData::unsetNotifUri() { m_NotifUriIsSet = false; }
NetworkAreaInfo BdtReqData::getNwAreaInfo() const { return m_NwAreaInfo; }
void BdtReqData::setNwAreaInfo(NetworkAreaInfo const &value) {
  m_NwAreaInfo = value;
  m_NwAreaInfoIsSet = true;
}
bool BdtReqData::nwAreaInfoIsSet() const { return m_NwAreaInfoIsSet; }
void BdtReqData::unsetNwAreaInfo() { m_NwAreaInfoIsSet = false; }
int32_t BdtReqData::getNumOfUes() const { return m_NumOfUes; }
void BdtReqData::setNumOfUes(int32_t const value) { m_NumOfUes = value; }
UsageThreshold BdtReqData::getVolPerUe() const { return m_VolPerUe; }
void BdtReqData::setVolPerUe(UsageThreshold const &value) {
  m_VolPerUe = value;
}
Snssai BdtReqData::getSnssai() const { return m_Snssai; }
void BdtReqData::setSnssai(Snssai const &value) {
  m_Snssai = value;
  m_SnssaiIsSet = true;
}
bool BdtReqData::snssaiIsSet() const { return m_SnssaiIsSet; }
void BdtReqData::unsetSnssai() { m_SnssaiIsSet = false; }
std::string BdtReqData::getSuppFeat() const { return m_SuppFeat; }
void BdtReqData::setSuppFeat(std::string const &value) {
  m_SuppFeat = value;
  m_SuppFeatIsSet = true;
}
bool BdtReqData::suppFeatIsSet() const { return m_SuppFeatIsSet; }
void BdtReqData::unsetSuppFeat() { m_SuppFeatIsSet = false; }
std::string BdtReqData::getTrafficDes() const { return m_TrafficDes; }
void BdtReqData::setTrafficDes(std::string const &value) {
  m_TrafficDes = value;
  m_TrafficDesIsSet = true;
}
bool BdtReqData::trafficDesIsSet() const { return m_TrafficDesIsSet; }
void BdtReqData::unsetTrafficDes() { m_TrafficDesIsSet = false; }
bool BdtReqData::isWarnNotifReq() const { return m_WarnNotifReq; }
void BdtReqData::setWarnNotifReq(bool const value) {
  m_WarnNotifReq = value;
  m_WarnNotifReqIsSet = true;
}
bool BdtReqData::warnNotifReqIsSet() const { return m_WarnNotifReqIsSet; }
void BdtReqData::unsetWarnNotifReq() { m_WarnNotifReqIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org