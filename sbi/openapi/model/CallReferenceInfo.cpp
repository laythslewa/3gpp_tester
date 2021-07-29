/**
 * Nhss_imsSDM
 * Nhss Subscriber Data Management Service for IMS. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "CallReferenceInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

CallReferenceInfo::CallReferenceInfo() { m_AsNumber = ""; }

CallReferenceInfo::~CallReferenceInfo() {}

void CallReferenceInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const CallReferenceInfo &o) {
  j = nlohmann::json();
  j["callRefNumber"] = o.m_CallRefNumber;
  j["asNumber"] = o.m_AsNumber;
}

void from_json(const nlohmann::json &j, CallReferenceInfo &o) {
  j.at("callRefNumber").get_to(o.m_CallRefNumber);
  j.at("asNumber").get_to(o.m_AsNumber);
}

std::string CallReferenceInfo::getCallRefNumber() const {
  return m_CallRefNumber;
}
void CallReferenceInfo::setCallRefNumber(std::string const &value) {
  m_CallRefNumber = value;
}
std::string CallReferenceInfo::getAsNumber() const { return m_AsNumber; }
void CallReferenceInfo::setAsNumber(std::string const &value) {
  m_AsNumber = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org