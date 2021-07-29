/**
 * Nudsf_DataRepository
 * Nudsf Data Repository Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ClientId.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ClientId::ClientId() {
  m_NfId = "";
  m_NfIdIsSet = false;
  m_NfSetId = "";
  m_NfSetIdIsSet = false;
}

ClientId::~ClientId() {}

void ClientId::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const ClientId &o) {
  j = nlohmann::json();
  if (o.nfIdIsSet())
    j["nfId"] = o.m_NfId;
  if (o.nfSetIdIsSet())
    j["nfSetId"] = o.m_NfSetId;
}

void from_json(const nlohmann::json &j, ClientId &o) {
  if (j.find("nfId") != j.end()) {
    j.at("nfId").get_to(o.m_NfId);
    o.m_NfIdIsSet = true;
  }
  if (j.find("nfSetId") != j.end()) {
    j.at("nfSetId").get_to(o.m_NfSetId);
    o.m_NfSetIdIsSet = true;
  }
}

std::string ClientId::getNfId() const { return m_NfId; }
void ClientId::setNfId(std::string const &value) {
  m_NfId = value;
  m_NfIdIsSet = true;
}
bool ClientId::nfIdIsSet() const { return m_NfIdIsSet; }
void ClientId::unsetNfId() { m_NfIdIsSet = false; }
std::string ClientId::getNfSetId() const { return m_NfSetId; }
void ClientId::setNfSetId(std::string const &value) {
  m_NfSetId = value;
  m_NfSetIdIsSet = true;
}
bool ClientId::nfSetIdIsSet() const { return m_NfSetIdIsSet; }
void ClientId::unsetNfSetId() { m_NfSetIdIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org