/**
 * Unified Data Repository Service API file for subscription data
 * Unified Data Repository Service (subscription data). The API version is
 * defined in 3GPP TS 29.504. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "MessageWaitingData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

MessageWaitingData::MessageWaitingData() { m_MwdListIsSet = false; }

MessageWaitingData::~MessageWaitingData() {}

void MessageWaitingData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const MessageWaitingData &o) {
  j = nlohmann::json();
  if (o.mwdListIsSet() || !o.m_MwdList.empty())
    j["mwdList"] = o.m_MwdList;
}

void from_json(const nlohmann::json &j, MessageWaitingData &o) {
  if (j.find("mwdList") != j.end()) {
    j.at("mwdList").get_to(o.m_MwdList);
    o.m_MwdListIsSet = true;
  }
}

std::vector<SmscData> &MessageWaitingData::getMwdList() { return m_MwdList; }
void MessageWaitingData::setMwdList(std::vector<SmscData> const &value) {
  m_MwdList = value;
  m_MwdListIsSet = true;
}
bool MessageWaitingData::mwdListIsSet() const { return m_MwdListIsSet; }
void MessageWaitingData::unsetMwdList() { m_MwdListIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
