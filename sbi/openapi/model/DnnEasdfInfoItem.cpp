/**
 * NRF NFManagement Service
 * NRF NFManagement Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "DnnEasdfInfoItem.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

DnnEasdfInfoItem::DnnEasdfInfoItem() { m_DnaiListIsSet = false; }

DnnEasdfInfoItem::~DnnEasdfInfoItem() {}

void DnnEasdfInfoItem::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const DnnEasdfInfoItem &o) {
  j = nlohmann::json();
  j["dnn"] = o.m_Dnn;
  if (o.dnaiListIsSet() || !o.m_DnaiList.empty())
    j["dnaiList"] = o.m_DnaiList;
}

void from_json(const nlohmann::json &j, DnnEasdfInfoItem &o) {
  j.at("dnn").get_to(o.m_Dnn);
  if (j.find("dnaiList") != j.end()) {
    j.at("dnaiList").get_to(o.m_DnaiList);
    o.m_DnaiListIsSet = true;
  }
}

AnyOfstringstring DnnEasdfInfoItem::getDnn() const { return m_Dnn; }
void DnnEasdfInfoItem::setDnn(AnyOfstringstring const &value) { m_Dnn = value; }
std::vector<std::string> &DnnEasdfInfoItem::getDnaiList() { return m_DnaiList; }
void DnnEasdfInfoItem::setDnaiList(std::vector<std::string> const &value) {
  m_DnaiList = value;
  m_DnaiListIsSet = true;
}
bool DnnEasdfInfoItem::dnaiListIsSet() const { return m_DnaiListIsSet; }
void DnnEasdfInfoItem::unsetDnaiList() { m_DnaiListIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org