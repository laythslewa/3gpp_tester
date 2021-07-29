/**
 * Nucmf_UECapabilityManagement
 * Nucmf_UECapabilityManagement Service. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "RefToBinaryData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

RefToBinaryData::RefToBinaryData() { m_ContentId = ""; }

RefToBinaryData::~RefToBinaryData() {}

void RefToBinaryData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const RefToBinaryData &o) {
  j = nlohmann::json();
  j["contentId"] = o.m_ContentId;
}

void from_json(const nlohmann::json &j, RefToBinaryData &o) {
  j.at("contentId").get_to(o.m_ContentId);
}

std::string RefToBinaryData::getContentId() const { return m_ContentId; }
void RefToBinaryData::setContentId(std::string const &value) {
  m_ContentId = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
