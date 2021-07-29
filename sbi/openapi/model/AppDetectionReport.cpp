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

#include "AppDetectionReport.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

AppDetectionReport::AppDetectionReport() { m_AfAppId = ""; }

AppDetectionReport::~AppDetectionReport() {}

void AppDetectionReport::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const AppDetectionReport &o) {
  j = nlohmann::json();
  j["adNotifType"] = o.m_AdNotifType;
  j["afAppId"] = o.m_AfAppId;
}

void from_json(const nlohmann::json &j, AppDetectionReport &o) {
  j.at("adNotifType").get_to(o.m_AdNotifType);
  j.at("afAppId").get_to(o.m_AfAppId);
}

AppDetectionNotifType AppDetectionReport::getAdNotifType() const {
  return m_AdNotifType;
}
void AppDetectionReport::setAdNotifType(AppDetectionNotifType const &value) {
  m_AdNotifType = value;
}
std::string AppDetectionReport::getAfAppId() const { return m_AfAppId; }
void AppDetectionReport::setAfAppId(std::string const &value) {
  m_AfAppId = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
