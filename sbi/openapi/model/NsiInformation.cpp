/**
 * NSSF NS Selection
 * NSSF Network Slice Selection Service. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "NsiInformation.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

NsiInformation::NsiInformation() {
  m_NrfId = "";
  m_NsiId = "";
  m_NsiIdIsSet = false;
  m_NrfNfMgtUri = "";
  m_NrfNfMgtUriIsSet = false;
  m_NrfAccessTokenUri = "";
  m_NrfAccessTokenUriIsSet = false;
}

NsiInformation::~NsiInformation() {}

void NsiInformation::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const NsiInformation &o) {
  j = nlohmann::json();
  j["nrfId"] = o.m_NrfId;
  if (o.nsiIdIsSet())
    j["nsiId"] = o.m_NsiId;
  if (o.nrfNfMgtUriIsSet())
    j["nrfNfMgtUri"] = o.m_NrfNfMgtUri;
  if (o.nrfAccessTokenUriIsSet())
    j["nrfAccessTokenUri"] = o.m_NrfAccessTokenUri;
}

void from_json(const nlohmann::json &j, NsiInformation &o) {
  j.at("nrfId").get_to(o.m_NrfId);
  if (j.find("nsiId") != j.end()) {
    j.at("nsiId").get_to(o.m_NsiId);
    o.m_NsiIdIsSet = true;
  }
  if (j.find("nrfNfMgtUri") != j.end()) {
    j.at("nrfNfMgtUri").get_to(o.m_NrfNfMgtUri);
    o.m_NrfNfMgtUriIsSet = true;
  }
  if (j.find("nrfAccessTokenUri") != j.end()) {
    j.at("nrfAccessTokenUri").get_to(o.m_NrfAccessTokenUri);
    o.m_NrfAccessTokenUriIsSet = true;
  }
}

std::string NsiInformation::getNrfId() const { return m_NrfId; }
void NsiInformation::setNrfId(std::string const &value) { m_NrfId = value; }
std::string NsiInformation::getNsiId() const { return m_NsiId; }
void NsiInformation::setNsiId(std::string const &value) {
  m_NsiId = value;
  m_NsiIdIsSet = true;
}
bool NsiInformation::nsiIdIsSet() const { return m_NsiIdIsSet; }
void NsiInformation::unsetNsiId() { m_NsiIdIsSet = false; }
std::string NsiInformation::getNrfNfMgtUri() const { return m_NrfNfMgtUri; }
void NsiInformation::setNrfNfMgtUri(std::string const &value) {
  m_NrfNfMgtUri = value;
  m_NrfNfMgtUriIsSet = true;
}
bool NsiInformation::nrfNfMgtUriIsSet() const { return m_NrfNfMgtUriIsSet; }
void NsiInformation::unsetNrfNfMgtUri() { m_NrfNfMgtUriIsSet = false; }
std::string NsiInformation::getNrfAccessTokenUri() const {
  return m_NrfAccessTokenUri;
}
void NsiInformation::setNrfAccessTokenUri(std::string const &value) {
  m_NrfAccessTokenUri = value;
  m_NrfAccessTokenUriIsSet = true;
}
bool NsiInformation::nrfAccessTokenUriIsSet() const {
  return m_NrfAccessTokenUriIsSet;
}
void NsiInformation::unsetNrfAccessTokenUri() {
  m_NrfAccessTokenUriIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
