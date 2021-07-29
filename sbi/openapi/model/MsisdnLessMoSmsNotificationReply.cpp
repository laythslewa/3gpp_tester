/**
 * 3gpp-msisdn-less-mo-sms
 * API for MSISDN-less Mobile Originated SMS. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "MsisdnLessMoSmsNotificationReply.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

MsisdnLessMoSmsNotificationReply::MsisdnLessMoSmsNotificationReply() {
  m_SupportedFeatures = "";
}

MsisdnLessMoSmsNotificationReply::~MsisdnLessMoSmsNotificationReply() {}

void MsisdnLessMoSmsNotificationReply::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const MsisdnLessMoSmsNotificationReply &o) {
  j = nlohmann::json();
  j["supportedFeatures"] = o.m_SupportedFeatures;
}

void from_json(const nlohmann::json &j, MsisdnLessMoSmsNotificationReply &o) {
  j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
}

std::string MsisdnLessMoSmsNotificationReply::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void MsisdnLessMoSmsNotificationReply::setSupportedFeatures(
    std::string const &value) {
  m_SupportedFeatures = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
