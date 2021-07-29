/**
 * 3gpp-nidd
 * API for non IP data delivery. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "RdsDownlinkDataDeliveryFailure.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

RdsDownlinkDataDeliveryFailure::RdsDownlinkDataDeliveryFailure() {
  m_Type = "";
  m_TypeIsSet = false;
  m_Title = "";
  m_TitleIsSet = false;
  m_Status = 0;
  m_StatusIsSet = false;
  m_Detail = "";
  m_DetailIsSet = false;
  m_Instance = "";
  m_InstanceIsSet = false;
  m_Cause = "";
  m_CauseIsSet = false;
  m_InvalidParamsIsSet = false;
  m_SupportedFeatures = "";
  m_SupportedFeaturesIsSet = false;
  m_RequestedRetransmissionTime = "";
  m_RequestedRetransmissionTimeIsSet = false;
  m_SupportedUeFormatsIsSet = false;
}

RdsDownlinkDataDeliveryFailure::~RdsDownlinkDataDeliveryFailure() {}

void RdsDownlinkDataDeliveryFailure::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const RdsDownlinkDataDeliveryFailure &o) {
  j = nlohmann::json();
  if (o.typeIsSet())
    j["type"] = o.m_Type;
  if (o.titleIsSet())
    j["title"] = o.m_Title;
  if (o.statusIsSet())
    j["status"] = o.m_Status;
  if (o.detailIsSet())
    j["detail"] = o.m_Detail;
  if (o.instanceIsSet())
    j["instance"] = o.m_Instance;
  if (o.causeIsSet())
    j["cause"] = o.m_Cause;
  if (o.invalidParamsIsSet() || !o.m_InvalidParams.empty())
    j["invalidParams"] = o.m_InvalidParams;
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
  if (o.requestedRetransmissionTimeIsSet())
    j["requestedRetransmissionTime"] = o.m_RequestedRetransmissionTime;
  if (o.supportedUeFormatsIsSet() || !o.m_SupportedUeFormats.empty())
    j["supportedUeFormats"] = o.m_SupportedUeFormats;
}

void from_json(const nlohmann::json &j, RdsDownlinkDataDeliveryFailure &o) {
  if (j.find("type") != j.end()) {
    j.at("type").get_to(o.m_Type);
    o.m_TypeIsSet = true;
  }
  if (j.find("title") != j.end()) {
    j.at("title").get_to(o.m_Title);
    o.m_TitleIsSet = true;
  }
  if (j.find("status") != j.end()) {
    j.at("status").get_to(o.m_Status);
    o.m_StatusIsSet = true;
  }
  if (j.find("detail") != j.end()) {
    j.at("detail").get_to(o.m_Detail);
    o.m_DetailIsSet = true;
  }
  if (j.find("instance") != j.end()) {
    j.at("instance").get_to(o.m_Instance);
    o.m_InstanceIsSet = true;
  }
  if (j.find("cause") != j.end()) {
    j.at("cause").get_to(o.m_Cause);
    o.m_CauseIsSet = true;
  }
  if (j.find("invalidParams") != j.end()) {
    j.at("invalidParams").get_to(o.m_InvalidParams);
    o.m_InvalidParamsIsSet = true;
  }
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
  if (j.find("requestedRetransmissionTime") != j.end()) {
    j.at("requestedRetransmissionTime").get_to(o.m_RequestedRetransmissionTime);
    o.m_RequestedRetransmissionTimeIsSet = true;
  }
  if (j.find("supportedUeFormats") != j.end()) {
    j.at("supportedUeFormats").get_to(o.m_SupportedUeFormats);
    o.m_SupportedUeFormatsIsSet = true;
  }
}

std::string RdsDownlinkDataDeliveryFailure::getType() const { return m_Type; }
void RdsDownlinkDataDeliveryFailure::setType(std::string const &value) {
  m_Type = value;
  m_TypeIsSet = true;
}
bool RdsDownlinkDataDeliveryFailure::typeIsSet() const { return m_TypeIsSet; }
void RdsDownlinkDataDeliveryFailure::unsetType() { m_TypeIsSet = false; }
std::string RdsDownlinkDataDeliveryFailure::getTitle() const { return m_Title; }
void RdsDownlinkDataDeliveryFailure::setTitle(std::string const &value) {
  m_Title = value;
  m_TitleIsSet = true;
}
bool RdsDownlinkDataDeliveryFailure::titleIsSet() const { return m_TitleIsSet; }
void RdsDownlinkDataDeliveryFailure::unsetTitle() { m_TitleIsSet = false; }
int32_t RdsDownlinkDataDeliveryFailure::getStatus() const { return m_Status; }
void RdsDownlinkDataDeliveryFailure::setStatus(int32_t const value) {
  m_Status = value;
  m_StatusIsSet = true;
}
bool RdsDownlinkDataDeliveryFailure::statusIsSet() const {
  return m_StatusIsSet;
}
void RdsDownlinkDataDeliveryFailure::unsetStatus() { m_StatusIsSet = false; }
std::string RdsDownlinkDataDeliveryFailure::getDetail() const {
  return m_Detail;
}
void RdsDownlinkDataDeliveryFailure::setDetail(std::string const &value) {
  m_Detail = value;
  m_DetailIsSet = true;
}
bool RdsDownlinkDataDeliveryFailure::detailIsSet() const {
  return m_DetailIsSet;
}
void RdsDownlinkDataDeliveryFailure::unsetDetail() { m_DetailIsSet = false; }
std::string RdsDownlinkDataDeliveryFailure::getInstance() const {
  return m_Instance;
}
void RdsDownlinkDataDeliveryFailure::setInstance(std::string const &value) {
  m_Instance = value;
  m_InstanceIsSet = true;
}
bool RdsDownlinkDataDeliveryFailure::instanceIsSet() const {
  return m_InstanceIsSet;
}
void RdsDownlinkDataDeliveryFailure::unsetInstance() {
  m_InstanceIsSet = false;
}
std::string RdsDownlinkDataDeliveryFailure::getCause() const { return m_Cause; }
void RdsDownlinkDataDeliveryFailure::setCause(std::string const &value) {
  m_Cause = value;
  m_CauseIsSet = true;
}
bool RdsDownlinkDataDeliveryFailure::causeIsSet() const { return m_CauseIsSet; }
void RdsDownlinkDataDeliveryFailure::unsetCause() { m_CauseIsSet = false; }
std::vector<InvalidParam> &RdsDownlinkDataDeliveryFailure::getInvalidParams() {
  return m_InvalidParams;
}
void RdsDownlinkDataDeliveryFailure::setInvalidParams(
    std::vector<InvalidParam> const &value) {
  m_InvalidParams = value;
  m_InvalidParamsIsSet = true;
}
bool RdsDownlinkDataDeliveryFailure::invalidParamsIsSet() const {
  return m_InvalidParamsIsSet;
}
void RdsDownlinkDataDeliveryFailure::unsetInvalidParams() {
  m_InvalidParamsIsSet = false;
}
std::string RdsDownlinkDataDeliveryFailure::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void RdsDownlinkDataDeliveryFailure::setSupportedFeatures(
    std::string const &value) {
  m_SupportedFeatures = value;
  m_SupportedFeaturesIsSet = true;
}
bool RdsDownlinkDataDeliveryFailure::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void RdsDownlinkDataDeliveryFailure::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}
std::string
RdsDownlinkDataDeliveryFailure::getRequestedRetransmissionTime() const {
  return m_RequestedRetransmissionTime;
}
void RdsDownlinkDataDeliveryFailure::setRequestedRetransmissionTime(
    std::string const &value) {
  m_RequestedRetransmissionTime = value;
  m_RequestedRetransmissionTimeIsSet = true;
}
bool RdsDownlinkDataDeliveryFailure::requestedRetransmissionTimeIsSet() const {
  return m_RequestedRetransmissionTimeIsSet;
}
void RdsDownlinkDataDeliveryFailure::unsetRequestedRetransmissionTime() {
  m_RequestedRetransmissionTimeIsSet = false;
}
std::vector<SerializationFormat> &
RdsDownlinkDataDeliveryFailure::getSupportedUeFormats() {
  return m_SupportedUeFormats;
}
void RdsDownlinkDataDeliveryFailure::setSupportedUeFormats(
    std::vector<SerializationFormat> const &value) {
  m_SupportedUeFormats = value;
  m_SupportedUeFormatsIsSet = true;
}
bool RdsDownlinkDataDeliveryFailure::supportedUeFormatsIsSet() const {
  return m_SupportedUeFormatsIsSet;
}
void RdsDownlinkDataDeliveryFailure::unsetSupportedUeFormats() {
  m_SupportedUeFormatsIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org