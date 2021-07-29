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

#include "NetworkSliceCond.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

NetworkSliceCond::NetworkSliceCond() { m_NsiListIsSet = false; }

NetworkSliceCond::~NetworkSliceCond() {}

void NetworkSliceCond::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const NetworkSliceCond &o) {
  j = nlohmann::json();
  j["snssaiList"] = o.m_SnssaiList;
  if (o.nsiListIsSet() || !o.m_NsiList.empty())
    j["nsiList"] = o.m_NsiList;
}

void from_json(const nlohmann::json &j, NetworkSliceCond &o) {
  j.at("snssaiList").get_to(o.m_SnssaiList);
  if (j.find("nsiList") != j.end()) {
    j.at("nsiList").get_to(o.m_NsiList);
    o.m_NsiListIsSet = true;
  }
}

std::vector<Snssai> &NetworkSliceCond::getSnssaiList() { return m_SnssaiList; }
void NetworkSliceCond::setSnssaiList(std::vector<Snssai> const &value) {
  m_SnssaiList = value;
}
std::vector<std::string> &NetworkSliceCond::getNsiList() { return m_NsiList; }
void NetworkSliceCond::setNsiList(std::vector<std::string> const &value) {
  m_NsiList = value;
  m_NsiListIsSet = true;
}
bool NetworkSliceCond::nsiListIsSet() const { return m_NsiListIsSet; }
void NetworkSliceCond::unsetNsiList() { m_NsiListIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
