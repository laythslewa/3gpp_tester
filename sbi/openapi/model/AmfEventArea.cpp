/**
 * Namf_EventExposure
 * AMF Event Exposure Service © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "AmfEventArea.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

AmfEventArea::AmfEventArea() {
  m_PresenceInfoIsSet = false;
  m_LadnInfoIsSet = false;
  m_SNssaiIsSet = false;
  m_NsiId = "";
  m_NsiIdIsSet = false;
}

AmfEventArea::~AmfEventArea() {}

void AmfEventArea::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const AmfEventArea &o) {
  j = nlohmann::json();
  if (o.presenceInfoIsSet())
    j["presenceInfo"] = o.m_PresenceInfo;
  if (o.ladnInfoIsSet())
    j["ladnInfo"] = o.m_LadnInfo;
  if (o.sNssaiIsSet())
    j["sNssai"] = o.m_SNssai;
  if (o.nsiIdIsSet())
    j["nsiId"] = o.m_NsiId;
}

void from_json(const nlohmann::json &j, AmfEventArea &o) {
  if (j.find("presenceInfo") != j.end()) {
    j.at("presenceInfo").get_to(o.m_PresenceInfo);
    o.m_PresenceInfoIsSet = true;
  }
  if (j.find("ladnInfo") != j.end()) {
    j.at("ladnInfo").get_to(o.m_LadnInfo);
    o.m_LadnInfoIsSet = true;
  }
  if (j.find("sNssai") != j.end()) {
    j.at("sNssai").get_to(o.m_SNssai);
    o.m_SNssaiIsSet = true;
  }
  if (j.find("nsiId") != j.end()) {
    j.at("nsiId").get_to(o.m_NsiId);
    o.m_NsiIdIsSet = true;
  }
}

PresenceInfo AmfEventArea::getPresenceInfo() const { return m_PresenceInfo; }
void AmfEventArea::setPresenceInfo(PresenceInfo const &value) {
  m_PresenceInfo = value;
  m_PresenceInfoIsSet = true;
}
bool AmfEventArea::presenceInfoIsSet() const { return m_PresenceInfoIsSet; }
void AmfEventArea::unsetPresenceInfo() { m_PresenceInfoIsSet = false; }
LadnInfo AmfEventArea::getLadnInfo() const { return m_LadnInfo; }
void AmfEventArea::setLadnInfo(LadnInfo const &value) {
  m_LadnInfo = value;
  m_LadnInfoIsSet = true;
}
bool AmfEventArea::ladnInfoIsSet() const { return m_LadnInfoIsSet; }
void AmfEventArea::unsetLadnInfo() { m_LadnInfoIsSet = false; }
Snssai AmfEventArea::getSNssai() const { return m_SNssai; }
void AmfEventArea::setSNssai(Snssai const &value) {
  m_SNssai = value;
  m_SNssaiIsSet = true;
}
bool AmfEventArea::sNssaiIsSet() const { return m_SNssaiIsSet; }
void AmfEventArea::unsetSNssai() { m_SNssaiIsSet = false; }
std::string AmfEventArea::getNsiId() const { return m_NsiId; }
void AmfEventArea::setNsiId(std::string const &value) {
  m_NsiId = value;
  m_NsiIdIsSet = true;
}
bool AmfEventArea::nsiIdIsSet() const { return m_NsiIdIsSet; }
void AmfEventArea::unsetNsiId() { m_NsiIdIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
