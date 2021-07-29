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

#include "AssignedEbiData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

AssignedEbiData::AssignedEbiData() {
  m_PduSessionId = 0;
  m_FailedArpListIsSet = false;
  m_ReleasedEbiListIsSet = false;
  m_ModifiedEbiListIsSet = false;
}

AssignedEbiData::~AssignedEbiData() {}

void AssignedEbiData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const AssignedEbiData &o) {
  j = nlohmann::json();
  j["pduSessionId"] = o.m_PduSessionId;
  j["assignedEbiList"] = o.m_AssignedEbiList;
  if (o.failedArpListIsSet() || !o.m_FailedArpList.empty())
    j["failedArpList"] = o.m_FailedArpList;
  if (o.releasedEbiListIsSet() || !o.m_ReleasedEbiList.empty())
    j["releasedEbiList"] = o.m_ReleasedEbiList;
  if (o.modifiedEbiListIsSet() || !o.m_ModifiedEbiList.empty())
    j["modifiedEbiList"] = o.m_ModifiedEbiList;
}

void from_json(const nlohmann::json &j, AssignedEbiData &o) {
  j.at("pduSessionId").get_to(o.m_PduSessionId);
  j.at("assignedEbiList").get_to(o.m_AssignedEbiList);
  if (j.find("failedArpList") != j.end()) {
    j.at("failedArpList").get_to(o.m_FailedArpList);
    o.m_FailedArpListIsSet = true;
  }
  if (j.find("releasedEbiList") != j.end()) {
    j.at("releasedEbiList").get_to(o.m_ReleasedEbiList);
    o.m_ReleasedEbiListIsSet = true;
  }
  if (j.find("modifiedEbiList") != j.end()) {
    j.at("modifiedEbiList").get_to(o.m_ModifiedEbiList);
    o.m_ModifiedEbiListIsSet = true;
  }
}

int32_t AssignedEbiData::getPduSessionId() const { return m_PduSessionId; }
void AssignedEbiData::setPduSessionId(int32_t const value) {
  m_PduSessionId = value;
}
std::vector<EbiArpMapping> &AssignedEbiData::getAssignedEbiList() {
  return m_AssignedEbiList;
}
void AssignedEbiData::setAssignedEbiList(
    std::vector<EbiArpMapping> const &value) {
  m_AssignedEbiList = value;
}
std::vector<Arp> &AssignedEbiData::getFailedArpList() {
  return m_FailedArpList;
}
void AssignedEbiData::setFailedArpList(std::vector<Arp> const &value) {
  m_FailedArpList = value;
  m_FailedArpListIsSet = true;
}
bool AssignedEbiData::failedArpListIsSet() const {
  return m_FailedArpListIsSet;
}
void AssignedEbiData::unsetFailedArpList() { m_FailedArpListIsSet = false; }
std::vector<int32_t> &AssignedEbiData::getReleasedEbiList() {
  return m_ReleasedEbiList;
}
void AssignedEbiData::setReleasedEbiList(std::vector<int32_t> const value) {
  m_ReleasedEbiList = value;
  m_ReleasedEbiListIsSet = true;
}
bool AssignedEbiData::releasedEbiListIsSet() const {
  return m_ReleasedEbiListIsSet;
}
void AssignedEbiData::unsetReleasedEbiList() { m_ReleasedEbiListIsSet = false; }
std::vector<int32_t> &AssignedEbiData::getModifiedEbiList() {
  return m_ModifiedEbiList;
}
void AssignedEbiData::setModifiedEbiList(std::vector<int32_t> const value) {
  m_ModifiedEbiList = value;
  m_ModifiedEbiListIsSet = true;
}
bool AssignedEbiData::modifiedEbiListIsSet() const {
  return m_ModifiedEbiListIsSet;
}
void AssignedEbiData::unsetModifiedEbiList() { m_ModifiedEbiListIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org