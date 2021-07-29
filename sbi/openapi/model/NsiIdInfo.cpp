/**
 * Nnwdaf_EventsSubscription
 * Nnwdaf_EventsSubscription Service API. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "NsiIdInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

NsiIdInfo::NsiIdInfo() { m_NsiIdsIsSet = false; }

NsiIdInfo::~NsiIdInfo() {}

void NsiIdInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const NsiIdInfo &o) {
  j = nlohmann::json();
  j["snssai"] = o.m_Snssai;
  if (o.nsiIdsIsSet() || !o.m_NsiIds.empty())
    j["nsiIds"] = o.m_NsiIds;
}

void from_json(const nlohmann::json &j, NsiIdInfo &o) {
  j.at("snssai").get_to(o.m_Snssai);
  if (j.find("nsiIds") != j.end()) {
    j.at("nsiIds").get_to(o.m_NsiIds);
    o.m_NsiIdsIsSet = true;
  }
}

Snssai NsiIdInfo::getSnssai() const { return m_Snssai; }
void NsiIdInfo::setSnssai(Snssai const &value) { m_Snssai = value; }
std::vector<std::string> &NsiIdInfo::getNsiIds() { return m_NsiIds; }
void NsiIdInfo::setNsiIds(std::vector<std::string> const &value) {
  m_NsiIds = value;
  m_NsiIdsIsSet = true;
}
bool NsiIdInfo::nsiIdsIsSet() const { return m_NsiIdsIsSet; }
void NsiIdInfo::unsetNsiIds() { m_NsiIdsIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org