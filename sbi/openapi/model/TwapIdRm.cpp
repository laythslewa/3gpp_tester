/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.3.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "TwapIdRm.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

TwapIdRm::TwapIdRm() {
  m_SsId = "";
  m_BssId = "";
  m_BssIdIsSet = false;
  m_CivicAddressIsSet = false;
}

TwapIdRm::~TwapIdRm() {}

void TwapIdRm::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const TwapIdRm &o) {
  j = nlohmann::json();
  j["ssId"] = o.m_SsId;
  if (o.bssIdIsSet())
    j["bssId"] = o.m_BssId;
  if (o.civicAddressIsSet())
    j["civicAddress"] = o.m_CivicAddress;
}

void from_json(const nlohmann::json &j, TwapIdRm &o) {
  j.at("ssId").get_to(o.m_SsId);
  if (j.find("bssId") != j.end()) {
    j.at("bssId").get_to(o.m_BssId);
    o.m_BssIdIsSet = true;
  }
  if (j.find("civicAddress") != j.end()) {
    j.at("civicAddress").get_to(o.m_CivicAddress);
    o.m_CivicAddressIsSet = true;
  }
}

std::string TwapIdRm::getSsId() const { return m_SsId; }
void TwapIdRm::setSsId(std::string const &value) { m_SsId = value; }
std::string TwapIdRm::getBssId() const { return m_BssId; }
void TwapIdRm::setBssId(std::string const &value) {
  m_BssId = value;
  m_BssIdIsSet = true;
}
bool TwapIdRm::bssIdIsSet() const { return m_BssIdIsSet; }
void TwapIdRm::unsetBssId() { m_BssIdIsSet = false; }
std::string TwapIdRm::getCivicAddress() const { return m_CivicAddress; }
void TwapIdRm::setCivicAddress(std::string const &value) {
  m_CivicAddress = value;
  m_CivicAddressIsSet = true;
}
bool TwapIdRm::civicAddressIsSet() const { return m_CivicAddressIsSet; }
void TwapIdRm::unsetCivicAddress() { m_CivicAddressIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org