/**
 * Nsmf_PDUSession
 * SMF PDU Session Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SmContextRetrievedData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

SmContextRetrievedData::SmContextRetrievedData() {
  m_UeEpsPdnConnection = "";
  m_SmContextIsSet = false;
  m_SmallDataRateStatusIsSet = false;
  m_ApnRateStatusIsSet = false;
  m_DlDataWaitingInd = false;
  m_DlDataWaitingIndIsSet = false;
}

SmContextRetrievedData::~SmContextRetrievedData() {}

void SmContextRetrievedData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const SmContextRetrievedData &o) {
  j = nlohmann::json();
  j["ueEpsPdnConnection"] = o.m_UeEpsPdnConnection;
  if (o.smContextIsSet())
    j["smContext"] = o.m_SmContext;
  if (o.smallDataRateStatusIsSet())
    j["smallDataRateStatus"] = o.m_SmallDataRateStatus;
  if (o.apnRateStatusIsSet())
    j["apnRateStatus"] = o.m_ApnRateStatus;
  if (o.dlDataWaitingIndIsSet())
    j["dlDataWaitingInd"] = o.m_DlDataWaitingInd;
}

void from_json(const nlohmann::json &j, SmContextRetrievedData &o) {
  j.at("ueEpsPdnConnection").get_to(o.m_UeEpsPdnConnection);
  if (j.find("smContext") != j.end()) {
    j.at("smContext").get_to(o.m_SmContext);
    o.m_SmContextIsSet = true;
  }
  if (j.find("smallDataRateStatus") != j.end()) {
    j.at("smallDataRateStatus").get_to(o.m_SmallDataRateStatus);
    o.m_SmallDataRateStatusIsSet = true;
  }
  if (j.find("apnRateStatus") != j.end()) {
    j.at("apnRateStatus").get_to(o.m_ApnRateStatus);
    o.m_ApnRateStatusIsSet = true;
  }
  if (j.find("dlDataWaitingInd") != j.end()) {
    j.at("dlDataWaitingInd").get_to(o.m_DlDataWaitingInd);
    o.m_DlDataWaitingIndIsSet = true;
  }
}

std::string SmContextRetrievedData::getUeEpsPdnConnection() const {
  return m_UeEpsPdnConnection;
}
void SmContextRetrievedData::setUeEpsPdnConnection(std::string const &value) {
  m_UeEpsPdnConnection = value;
}
SmContext SmContextRetrievedData::getSmContext() const { return m_SmContext; }
void SmContextRetrievedData::setSmContext(SmContext const &value) {
  m_SmContext = value;
  m_SmContextIsSet = true;
}
bool SmContextRetrievedData::smContextIsSet() const { return m_SmContextIsSet; }
void SmContextRetrievedData::unsetSmContext() { m_SmContextIsSet = false; }
SmallDataRateStatus SmContextRetrievedData::getSmallDataRateStatus() const {
  return m_SmallDataRateStatus;
}
void SmContextRetrievedData::setSmallDataRateStatus(
    SmallDataRateStatus const &value) {
  m_SmallDataRateStatus = value;
  m_SmallDataRateStatusIsSet = true;
}
bool SmContextRetrievedData::smallDataRateStatusIsSet() const {
  return m_SmallDataRateStatusIsSet;
}
void SmContextRetrievedData::unsetSmallDataRateStatus() {
  m_SmallDataRateStatusIsSet = false;
}
ApnRateStatus SmContextRetrievedData::getApnRateStatus() const {
  return m_ApnRateStatus;
}
void SmContextRetrievedData::setApnRateStatus(ApnRateStatus const &value) {
  m_ApnRateStatus = value;
  m_ApnRateStatusIsSet = true;
}
bool SmContextRetrievedData::apnRateStatusIsSet() const {
  return m_ApnRateStatusIsSet;
}
void SmContextRetrievedData::unsetApnRateStatus() {
  m_ApnRateStatusIsSet = false;
}
bool SmContextRetrievedData::isDlDataWaitingInd() const {
  return m_DlDataWaitingInd;
}
void SmContextRetrievedData::setDlDataWaitingInd(bool const value) {
  m_DlDataWaitingInd = value;
  m_DlDataWaitingIndIsSet = true;
}
bool SmContextRetrievedData::dlDataWaitingIndIsSet() const {
  return m_DlDataWaitingIndIsSet;
}
void SmContextRetrievedData::unsetDlDataWaitingInd() {
  m_DlDataWaitingIndIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org