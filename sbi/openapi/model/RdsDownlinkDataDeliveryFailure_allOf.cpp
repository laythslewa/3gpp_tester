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

#include "RdsDownlinkDataDeliveryFailure_allOf.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

RdsDownlinkDataDeliveryFailure_allOf::RdsDownlinkDataDeliveryFailure_allOf() {
  m_RequestedRetransmissionTime = "";
  m_RequestedRetransmissionTimeIsSet = false;
  m_SupportedUeFormatsIsSet = false;
}

RdsDownlinkDataDeliveryFailure_allOf::~RdsDownlinkDataDeliveryFailure_allOf() {}

void RdsDownlinkDataDeliveryFailure_allOf::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const RdsDownlinkDataDeliveryFailure_allOf &o) {
  j = nlohmann::json();
  if (o.requestedRetransmissionTimeIsSet())
    j["requestedRetransmissionTime"] = o.m_RequestedRetransmissionTime;
  if (o.supportedUeFormatsIsSet() || !o.m_SupportedUeFormats.empty())
    j["supportedUeFormats"] = o.m_SupportedUeFormats;
}

void from_json(const nlohmann::json &j,
               RdsDownlinkDataDeliveryFailure_allOf &o) {
  if (j.find("requestedRetransmissionTime") != j.end()) {
    j.at("requestedRetransmissionTime").get_to(o.m_RequestedRetransmissionTime);
    o.m_RequestedRetransmissionTimeIsSet = true;
  }
  if (j.find("supportedUeFormats") != j.end()) {
    j.at("supportedUeFormats").get_to(o.m_SupportedUeFormats);
    o.m_SupportedUeFormatsIsSet = true;
  }
}

std::string
RdsDownlinkDataDeliveryFailure_allOf::getRequestedRetransmissionTime() const {
  return m_RequestedRetransmissionTime;
}
void RdsDownlinkDataDeliveryFailure_allOf::setRequestedRetransmissionTime(
    std::string const &value) {
  m_RequestedRetransmissionTime = value;
  m_RequestedRetransmissionTimeIsSet = true;
}
bool RdsDownlinkDataDeliveryFailure_allOf::requestedRetransmissionTimeIsSet()
    const {
  return m_RequestedRetransmissionTimeIsSet;
}
void RdsDownlinkDataDeliveryFailure_allOf::unsetRequestedRetransmissionTime() {
  m_RequestedRetransmissionTimeIsSet = false;
}
std::vector<SerializationFormat> &
RdsDownlinkDataDeliveryFailure_allOf::getSupportedUeFormats() {
  return m_SupportedUeFormats;
}
void RdsDownlinkDataDeliveryFailure_allOf::setSupportedUeFormats(
    std::vector<SerializationFormat> const &value) {
  m_SupportedUeFormats = value;
  m_SupportedUeFormatsIsSet = true;
}
bool RdsDownlinkDataDeliveryFailure_allOf::supportedUeFormatsIsSet() const {
  return m_SupportedUeFormatsIsSet;
}
void RdsDownlinkDataDeliveryFailure_allOf::unsetSupportedUeFormats() {
  m_SupportedUeFormatsIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
