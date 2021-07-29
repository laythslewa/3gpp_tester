/**
 * Npcf_PolicyAuthorization Service API
 * PCF Policy Authorization Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "MediaSubComponentRm.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

MediaSubComponentRm::MediaSubComponentRm() {
  m_AfSigProtocolIsSet = false;
  m_EthfDescsIsSet = false;
  m_FNum = 0;
  m_FDescsIsSet = false;
  m_FStatusIsSet = false;
  m_MarBwDl = "";
  m_MarBwDlIsSet = false;
  m_MarBwUl = "";
  m_MarBwUlIsSet = false;
  m_TosTrCl = "";
  m_TosTrClIsSet = false;
  m_FlowUsageIsSet = false;
}

MediaSubComponentRm::~MediaSubComponentRm() {}

void MediaSubComponentRm::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const MediaSubComponentRm &o) {
  j = nlohmann::json();
  if (o.afSigProtocolIsSet())
    j["afSigProtocol"] = o.m_AfSigProtocol;
  if (o.ethfDescsIsSet() || !o.m_EthfDescs.empty())
    j["ethfDescs"] = o.m_EthfDescs;
  j["fNum"] = o.m_FNum;
  if (o.fDescsIsSet() || !o.m_FDescs.empty())
    j["fDescs"] = o.m_FDescs;
  if (o.fStatusIsSet())
    j["fStatus"] = o.m_FStatus;
  if (o.marBwDlIsSet())
    j["marBwDl"] = o.m_MarBwDl;
  if (o.marBwUlIsSet())
    j["marBwUl"] = o.m_MarBwUl;
  if (o.tosTrClIsSet())
    j["tosTrCl"] = o.m_TosTrCl;
  if (o.flowUsageIsSet())
    j["flowUsage"] = o.m_FlowUsage;
}

void from_json(const nlohmann::json &j, MediaSubComponentRm &o) {
  if (j.find("afSigProtocol") != j.end()) {
    j.at("afSigProtocol").get_to(o.m_AfSigProtocol);
    o.m_AfSigProtocolIsSet = true;
  }
  if (j.find("ethfDescs") != j.end()) {
    j.at("ethfDescs").get_to(o.m_EthfDescs);
    o.m_EthfDescsIsSet = true;
  }
  j.at("fNum").get_to(o.m_FNum);
  if (j.find("fDescs") != j.end()) {
    j.at("fDescs").get_to(o.m_FDescs);
    o.m_FDescsIsSet = true;
  }
  if (j.find("fStatus") != j.end()) {
    j.at("fStatus").get_to(o.m_FStatus);
    o.m_FStatusIsSet = true;
  }
  if (j.find("marBwDl") != j.end()) {
    j.at("marBwDl").get_to(o.m_MarBwDl);
    o.m_MarBwDlIsSet = true;
  }
  if (j.find("marBwUl") != j.end()) {
    j.at("marBwUl").get_to(o.m_MarBwUl);
    o.m_MarBwUlIsSet = true;
  }
  if (j.find("tosTrCl") != j.end()) {
    j.at("tosTrCl").get_to(o.m_TosTrCl);
    o.m_TosTrClIsSet = true;
  }
  if (j.find("flowUsage") != j.end()) {
    j.at("flowUsage").get_to(o.m_FlowUsage);
    o.m_FlowUsageIsSet = true;
  }
}

AfSigProtocol MediaSubComponentRm::getAfSigProtocol() const {
  return m_AfSigProtocol;
}
void MediaSubComponentRm::setAfSigProtocol(AfSigProtocol const &value) {
  m_AfSigProtocol = value;
  m_AfSigProtocolIsSet = true;
}
bool MediaSubComponentRm::afSigProtocolIsSet() const {
  return m_AfSigProtocolIsSet;
}
void MediaSubComponentRm::unsetAfSigProtocol() { m_AfSigProtocolIsSet = false; }
std::vector<EthFlowDescription> &MediaSubComponentRm::getEthfDescs() {
  return m_EthfDescs;
}
void MediaSubComponentRm::setEthfDescs(
    std::vector<EthFlowDescription> const &value) {
  m_EthfDescs = value;
  m_EthfDescsIsSet = true;
}
bool MediaSubComponentRm::ethfDescsIsSet() const { return m_EthfDescsIsSet; }
void MediaSubComponentRm::unsetEthfDescs() { m_EthfDescsIsSet = false; }
int32_t MediaSubComponentRm::getFNum() const { return m_FNum; }
void MediaSubComponentRm::setFNum(int32_t const value) { m_FNum = value; }
std::vector<std::string> &MediaSubComponentRm::getFDescs() { return m_FDescs; }
void MediaSubComponentRm::setFDescs(std::vector<std::string> const &value) {
  m_FDescs = value;
  m_FDescsIsSet = true;
}
bool MediaSubComponentRm::fDescsIsSet() const { return m_FDescsIsSet; }
void MediaSubComponentRm::unsetFDescs() { m_FDescsIsSet = false; }
FlowStatus MediaSubComponentRm::getFStatus() const { return m_FStatus; }
void MediaSubComponentRm::setFStatus(FlowStatus const &value) {
  m_FStatus = value;
  m_FStatusIsSet = true;
}
bool MediaSubComponentRm::fStatusIsSet() const { return m_FStatusIsSet; }
void MediaSubComponentRm::unsetFStatus() { m_FStatusIsSet = false; }
std::string MediaSubComponentRm::getMarBwDl() const { return m_MarBwDl; }
void MediaSubComponentRm::setMarBwDl(std::string const &value) {
  m_MarBwDl = value;
  m_MarBwDlIsSet = true;
}
bool MediaSubComponentRm::marBwDlIsSet() const { return m_MarBwDlIsSet; }
void MediaSubComponentRm::unsetMarBwDl() { m_MarBwDlIsSet = false; }
std::string MediaSubComponentRm::getMarBwUl() const { return m_MarBwUl; }
void MediaSubComponentRm::setMarBwUl(std::string const &value) {
  m_MarBwUl = value;
  m_MarBwUlIsSet = true;
}
bool MediaSubComponentRm::marBwUlIsSet() const { return m_MarBwUlIsSet; }
void MediaSubComponentRm::unsetMarBwUl() { m_MarBwUlIsSet = false; }
std::string MediaSubComponentRm::getTosTrCl() const { return m_TosTrCl; }
void MediaSubComponentRm::setTosTrCl(std::string const &value) {
  m_TosTrCl = value;
  m_TosTrClIsSet = true;
}
bool MediaSubComponentRm::tosTrClIsSet() const { return m_TosTrClIsSet; }
void MediaSubComponentRm::unsetTosTrCl() { m_TosTrClIsSet = false; }
FlowUsage MediaSubComponentRm::getFlowUsage() const { return m_FlowUsage; }
void MediaSubComponentRm::setFlowUsage(FlowUsage const &value) {
  m_FlowUsage = value;
  m_FlowUsageIsSet = true;
}
bool MediaSubComponentRm::flowUsageIsSet() const { return m_FlowUsageIsSet; }
void MediaSubComponentRm::unsetFlowUsage() { m_FlowUsageIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
