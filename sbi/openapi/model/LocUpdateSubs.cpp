/**
 * Ngmlc_Location
 * Ngmlc_Location Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "LocUpdateSubs.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

LocUpdateSubs::LocUpdateSubs() {
  m_NfInstanceId = "";
  m_NotifURI = "";
  m_Gpsi = "";
  m_GpsiIsSet = false;
  m_Supi = "";
  m_SupiIsSet = false;
}

LocUpdateSubs::~LocUpdateSubs() {}

void LocUpdateSubs::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const LocUpdateSubs &o) {
  j = nlohmann::json();
  j["nfInstanceId"] = o.m_NfInstanceId;
  j["notifURI"] = o.m_NotifURI;
  if (o.gpsiIsSet())
    j["gpsi"] = o.m_Gpsi;
  if (o.supiIsSet())
    j["supi"] = o.m_Supi;
}

void from_json(const nlohmann::json &j, LocUpdateSubs &o) {
  j.at("nfInstanceId").get_to(o.m_NfInstanceId);
  j.at("notifURI").get_to(o.m_NotifURI);
  if (j.find("gpsi") != j.end()) {
    j.at("gpsi").get_to(o.m_Gpsi);
    o.m_GpsiIsSet = true;
  }
  if (j.find("supi") != j.end()) {
    j.at("supi").get_to(o.m_Supi);
    o.m_SupiIsSet = true;
  }
}

std::string LocUpdateSubs::getNfInstanceId() const { return m_NfInstanceId; }
void LocUpdateSubs::setNfInstanceId(std::string const &value) {
  m_NfInstanceId = value;
}
std::string LocUpdateSubs::getNotifURI() const { return m_NotifURI; }
void LocUpdateSubs::setNotifURI(std::string const &value) {
  m_NotifURI = value;
}
std::string LocUpdateSubs::getGpsi() const { return m_Gpsi; }
void LocUpdateSubs::setGpsi(std::string const &value) {
  m_Gpsi = value;
  m_GpsiIsSet = true;
}
bool LocUpdateSubs::gpsiIsSet() const { return m_GpsiIsSet; }
void LocUpdateSubs::unsetGpsi() { m_GpsiIsSet = false; }
std::string LocUpdateSubs::getSupi() const { return m_Supi; }
void LocUpdateSubs::setSupi(std::string const &value) {
  m_Supi = value;
  m_SupiIsSet = true;
}
bool LocUpdateSubs::supiIsSet() const { return m_SupiIsSet; }
void LocUpdateSubs::unsetSupi() { m_SupiIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
