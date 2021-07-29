/**
 * SS_Events
 * API for SEAL Events management. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SEALEventDetail.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

SEALEventDetail::SEALEventDetail() {
  m_LmInfosIsSet = false;
  m_ValGroupDocumentsIsSet = false;
  m_ProfileDocsIsSet = false;
}

SEALEventDetail::~SEALEventDetail() {}

void SEALEventDetail::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const SEALEventDetail &o) {
  j = nlohmann::json();
  j["eventId"] = o.m_EventId;
  if (o.lmInfosIsSet() || !o.m_LmInfos.empty())
    j["lmInfos"] = o.m_LmInfos;
  if (o.valGroupDocumentsIsSet() || !o.m_ValGroupDocuments.empty())
    j["valGroupDocuments"] = o.m_ValGroupDocuments;
  if (o.profileDocsIsSet() || !o.m_ProfileDocs.empty())
    j["profileDocs"] = o.m_ProfileDocs;
}

void from_json(const nlohmann::json &j, SEALEventDetail &o) {
  j.at("eventId").get_to(o.m_EventId);
  if (j.find("lmInfos") != j.end()) {
    j.at("lmInfos").get_to(o.m_LmInfos);
    o.m_LmInfosIsSet = true;
  }
  if (j.find("valGroupDocuments") != j.end()) {
    j.at("valGroupDocuments").get_to(o.m_ValGroupDocuments);
    o.m_ValGroupDocumentsIsSet = true;
  }
  if (j.find("profileDocs") != j.end()) {
    j.at("profileDocs").get_to(o.m_ProfileDocs);
    o.m_ProfileDocsIsSet = true;
  }
}

SEALEvent SEALEventDetail::getEventId() const { return m_EventId; }
void SEALEventDetail::setEventId(SEALEvent const &value) { m_EventId = value; }
std::vector<LMInformation> &SEALEventDetail::getLmInfos() { return m_LmInfos; }
void SEALEventDetail::setLmInfos(std::vector<LMInformation> const &value) {
  m_LmInfos = value;
  m_LmInfosIsSet = true;
}
bool SEALEventDetail::lmInfosIsSet() const { return m_LmInfosIsSet; }
void SEALEventDetail::unsetLmInfos() { m_LmInfosIsSet = false; }
std::vector<VALGroupDocument> &SEALEventDetail::getValGroupDocuments() {
  return m_ValGroupDocuments;
}
void SEALEventDetail::setValGroupDocuments(
    std::vector<VALGroupDocument> const &value) {
  m_ValGroupDocuments = value;
  m_ValGroupDocumentsIsSet = true;
}
bool SEALEventDetail::valGroupDocumentsIsSet() const {
  return m_ValGroupDocumentsIsSet;
}
void SEALEventDetail::unsetValGroupDocuments() {
  m_ValGroupDocumentsIsSet = false;
}
std::vector<ProfileDoc> &SEALEventDetail::getProfileDocs() {
  return m_ProfileDocs;
}
void SEALEventDetail::setProfileDocs(std::vector<ProfileDoc> const &value) {
  m_ProfileDocs = value;
  m_ProfileDocsIsSet = true;
}
bool SEALEventDetail::profileDocsIsSet() const { return m_ProfileDocsIsSet; }
void SEALEventDetail::unsetProfileDocs() { m_ProfileDocsIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org