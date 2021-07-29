/**
 * Namf_Communication
 * AMF Communication Service © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "AssignEbiData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

AssignEbiData::AssignEbiData() {
  m_PduSessionId = 0;
  m_ArpListIsSet = false;
  m_ReleasedEbiListIsSet = false;
  m_OldGuamiIsSet = false;
  m_ModifiedEbiListIsSet = false;
}

AssignEbiData::~AssignEbiData() {}

void AssignEbiData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const AssignEbiData &o) {
  j = nlohmann::json();
  j["pduSessionId"] = o.m_PduSessionId;
  if (o.arpListIsSet() || !o.m_ArpList.empty())
    j["arpList"] = o.m_ArpList;
  if (o.releasedEbiListIsSet() || !o.m_ReleasedEbiList.empty())
    j["releasedEbiList"] = o.m_ReleasedEbiList;
  if (o.oldGuamiIsSet())
    j["oldGuami"] = o.m_OldGuami;
  if (o.modifiedEbiListIsSet() || !o.m_ModifiedEbiList.empty())
    j["modifiedEbiList"] = o.m_ModifiedEbiList;
}

void from_json(const nlohmann::json &j, AssignEbiData &o) {
  j.at("pduSessionId").get_to(o.m_PduSessionId);
  if (j.find("arpList") != j.end()) {
    j.at("arpList").get_to(o.m_ArpList);
    o.m_ArpListIsSet = true;
  }
  if (j.find("releasedEbiList") != j.end()) {
    j.at("releasedEbiList").get_to(o.m_ReleasedEbiList);
    o.m_ReleasedEbiListIsSet = true;
  }
  if (j.find("oldGuami") != j.end()) {
    j.at("oldGuami").get_to(o.m_OldGuami);
    o.m_OldGuamiIsSet = true;
  }
  if (j.find("modifiedEbiList") != j.end()) {
    j.at("modifiedEbiList").get_to(o.m_ModifiedEbiList);
    o.m_ModifiedEbiListIsSet = true;
  }
}

int32_t AssignEbiData::getPduSessionId() const { return m_PduSessionId; }
void AssignEbiData::setPduSessionId(int32_t const value) {
  m_PduSessionId = value;
}
std::vector<Arp> &AssignEbiData::getArpList() { return m_ArpList; }
void AssignEbiData::setArpList(std::vector<Arp> const &value) {
  m_ArpList = value;
  m_ArpListIsSet = true;
}
bool AssignEbiData::arpListIsSet() const { return m_ArpListIsSet; }
void AssignEbiData::unsetArpList() { m_ArpListIsSet = false; }
std::vector<int32_t> &AssignEbiData::getReleasedEbiList() {
  return m_ReleasedEbiList;
}
void AssignEbiData::setReleasedEbiList(std::vector<int32_t> const value) {
  m_ReleasedEbiList = value;
  m_ReleasedEbiListIsSet = true;
}
bool AssignEbiData::releasedEbiListIsSet() const {
  return m_ReleasedEbiListIsSet;
}
void AssignEbiData::unsetReleasedEbiList() { m_ReleasedEbiListIsSet = false; }
Guami AssignEbiData::getOldGuami() const { return m_OldGuami; }
void AssignEbiData::setOldGuami(Guami const &value) {
  m_OldGuami = value;
  m_OldGuamiIsSet = true;
}
bool AssignEbiData::oldGuamiIsSet() const { return m_OldGuamiIsSet; }
void AssignEbiData::unsetOldGuami() { m_OldGuamiIsSet = false; }
std::vector<EbiArpMapping> &AssignEbiData::getModifiedEbiList() {
  return m_ModifiedEbiList;
}
void AssignEbiData::setModifiedEbiList(
    std::vector<EbiArpMapping> const &value) {
  m_ModifiedEbiList = value;
  m_ModifiedEbiListIsSet = true;
}
bool AssignEbiData::modifiedEbiListIsSet() const {
  return m_ModifiedEbiListIsSet;
}
void AssignEbiData::unsetModifiedEbiList() { m_ModifiedEbiListIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
