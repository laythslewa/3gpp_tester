/**
 * Nudm_NIDDAU
 * Nudm NIDD Authorization Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "NiddAuthUpdateNotification.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

NiddAuthUpdateNotification::NiddAuthUpdateNotification() {}

NiddAuthUpdateNotification::~NiddAuthUpdateNotification() {}

void NiddAuthUpdateNotification::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const NiddAuthUpdateNotification &o) {
  j = nlohmann::json();
  j["niddAuthUpdateInfoList"] = o.m_NiddAuthUpdateInfoList;
}

void from_json(const nlohmann::json &j, NiddAuthUpdateNotification &o) {
  j.at("niddAuthUpdateInfoList").get_to(o.m_NiddAuthUpdateInfoList);
}

std::vector<NiddAuthUpdateInfo> &
NiddAuthUpdateNotification::getNiddAuthUpdateInfoList() {
  return m_NiddAuthUpdateInfoList;
}
void NiddAuthUpdateNotification::setNiddAuthUpdateInfoList(
    std::vector<NiddAuthUpdateInfo> const &value) {
  m_NiddAuthUpdateInfoList = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
