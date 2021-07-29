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

#include "TriggerPoint.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

TriggerPoint::TriggerPoint() {}

TriggerPoint::~TriggerPoint() {}

void TriggerPoint::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const TriggerPoint &o) {
  j = nlohmann::json();
  j["conditionType"] = o.m_ConditionType;
  j["sptList"] = o.m_SptList;
}

void from_json(const nlohmann::json &j, TriggerPoint &o) {
  j.at("conditionType").get_to(o.m_ConditionType);
  j.at("sptList").get_to(o.m_SptList);
}

TypeOfCondition TriggerPoint::getConditionType() const {
  return m_ConditionType;
}
void TriggerPoint::setConditionType(TypeOfCondition const &value) {
  m_ConditionType = value;
}
std::vector<Spt> &TriggerPoint::getSptList() { return m_SptList; }
void TriggerPoint::setSptList(std::vector<Spt> const &value) {
  m_SptList = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
