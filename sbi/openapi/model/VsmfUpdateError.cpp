/**
 * Nsmf_PDUSession
 * SMF PDU Session Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "VsmfUpdateError.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

VsmfUpdateError::VsmfUpdateError() {
  m_Pti = 0;
  m_PtiIsSet = false;
  m_N1smCause = "";
  m_N1smCauseIsSet = false;
  m_N1SmInfoFromUeIsSet = false;
  m_UnknownN1SmInfoIsSet = false;
  m_FailedToAssignEbiListIsSet = false;
  m_NgApCauseIsSet = false;
  m_r_5gMmCauseValue = 0;
  m_r_5gMmCauseValueIsSet = false;
  m_RecoveryTime = "";
  m_RecoveryTimeIsSet = false;
  m_N4InfoIsSet = false;
  m_N4InfoExt1IsSet = false;
  m_N4InfoExt2IsSet = false;
  m_N4InfoExt3IsSet = false;
}

VsmfUpdateError::~VsmfUpdateError() {}

void VsmfUpdateError::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const VsmfUpdateError &o) {
  j = nlohmann::json();
  j["error"] = o.m_Error;
  if (o.ptiIsSet())
    j["pti"] = o.m_Pti;
  if (o.n1smCauseIsSet())
    j["n1smCause"] = o.m_N1smCause;
  if (o.n1SmInfoFromUeIsSet())
    j["n1SmInfoFromUe"] = o.m_N1SmInfoFromUe;
  if (o.unknownN1SmInfoIsSet())
    j["unknownN1SmInfo"] = o.m_UnknownN1SmInfo;
  if (o.failedToAssignEbiListIsSet() || !o.m_FailedToAssignEbiList.empty())
    j["failedToAssignEbiList"] = o.m_FailedToAssignEbiList;
  if (o.ngApCauseIsSet())
    j["ngApCause"] = o.m_NgApCause;
  if (o.r5gMmCauseValueIsSet())
    j["5gMmCauseValue"] = o.m_r_5gMmCauseValue;
  if (o.recoveryTimeIsSet())
    j["recoveryTime"] = o.m_RecoveryTime;
  if (o.n4InfoIsSet())
    j["n4Info"] = o.m_N4Info;
  if (o.n4InfoExt1IsSet())
    j["n4InfoExt1"] = o.m_N4InfoExt1;
  if (o.n4InfoExt2IsSet())
    j["n4InfoExt2"] = o.m_N4InfoExt2;
  if (o.n4InfoExt3IsSet())
    j["n4InfoExt3"] = o.m_N4InfoExt3;
}

void from_json(const nlohmann::json &j, VsmfUpdateError &o) {
  j.at("error").get_to(o.m_Error);
  if (j.find("pti") != j.end()) {
    j.at("pti").get_to(o.m_Pti);
    o.m_PtiIsSet = true;
  }
  if (j.find("n1smCause") != j.end()) {
    j.at("n1smCause").get_to(o.m_N1smCause);
    o.m_N1smCauseIsSet = true;
  }
  if (j.find("n1SmInfoFromUe") != j.end()) {
    j.at("n1SmInfoFromUe").get_to(o.m_N1SmInfoFromUe);
    o.m_N1SmInfoFromUeIsSet = true;
  }
  if (j.find("unknownN1SmInfo") != j.end()) {
    j.at("unknownN1SmInfo").get_to(o.m_UnknownN1SmInfo);
    o.m_UnknownN1SmInfoIsSet = true;
  }
  if (j.find("failedToAssignEbiList") != j.end()) {
    j.at("failedToAssignEbiList").get_to(o.m_FailedToAssignEbiList);
    o.m_FailedToAssignEbiListIsSet = true;
  }
  if (j.find("ngApCause") != j.end()) {
    j.at("ngApCause").get_to(o.m_NgApCause);
    o.m_NgApCauseIsSet = true;
  }
  if (j.find("5gMmCauseValue") != j.end()) {
    j.at("5gMmCauseValue").get_to(o.m_r_5gMmCauseValue);
    o.m_r_5gMmCauseValueIsSet = true;
  }
  if (j.find("recoveryTime") != j.end()) {
    j.at("recoveryTime").get_to(o.m_RecoveryTime);
    o.m_RecoveryTimeIsSet = true;
  }
  if (j.find("n4Info") != j.end()) {
    j.at("n4Info").get_to(o.m_N4Info);
    o.m_N4InfoIsSet = true;
  }
  if (j.find("n4InfoExt1") != j.end()) {
    j.at("n4InfoExt1").get_to(o.m_N4InfoExt1);
    o.m_N4InfoExt1IsSet = true;
  }
  if (j.find("n4InfoExt2") != j.end()) {
    j.at("n4InfoExt2").get_to(o.m_N4InfoExt2);
    o.m_N4InfoExt2IsSet = true;
  }
  if (j.find("n4InfoExt3") != j.end()) {
    j.at("n4InfoExt3").get_to(o.m_N4InfoExt3);
    o.m_N4InfoExt3IsSet = true;
  }
}

ProblemDetails VsmfUpdateError::getError() const { return m_Error; }
void VsmfUpdateError::setError(ProblemDetails const &value) { m_Error = value; }
int32_t VsmfUpdateError::getPti() const { return m_Pti; }
void VsmfUpdateError::setPti(int32_t const value) {
  m_Pti = value;
  m_PtiIsSet = true;
}
bool VsmfUpdateError::ptiIsSet() const { return m_PtiIsSet; }
void VsmfUpdateError::unsetPti() { m_PtiIsSet = false; }
std::string VsmfUpdateError::getN1smCause() const { return m_N1smCause; }
void VsmfUpdateError::setN1smCause(std::string const &value) {
  m_N1smCause = value;
  m_N1smCauseIsSet = true;
}
bool VsmfUpdateError::n1smCauseIsSet() const { return m_N1smCauseIsSet; }
void VsmfUpdateError::unsetN1smCause() { m_N1smCauseIsSet = false; }
RefToBinaryData VsmfUpdateError::getN1SmInfoFromUe() const {
  return m_N1SmInfoFromUe;
}
void VsmfUpdateError::setN1SmInfoFromUe(RefToBinaryData const &value) {
  m_N1SmInfoFromUe = value;
  m_N1SmInfoFromUeIsSet = true;
}
bool VsmfUpdateError::n1SmInfoFromUeIsSet() const {
  return m_N1SmInfoFromUeIsSet;
}
void VsmfUpdateError::unsetN1SmInfoFromUe() { m_N1SmInfoFromUeIsSet = false; }
RefToBinaryData VsmfUpdateError::getUnknownN1SmInfo() const {
  return m_UnknownN1SmInfo;
}
void VsmfUpdateError::setUnknownN1SmInfo(RefToBinaryData const &value) {
  m_UnknownN1SmInfo = value;
  m_UnknownN1SmInfoIsSet = true;
}
bool VsmfUpdateError::unknownN1SmInfoIsSet() const {
  return m_UnknownN1SmInfoIsSet;
}
void VsmfUpdateError::unsetUnknownN1SmInfo() { m_UnknownN1SmInfoIsSet = false; }
std::vector<Arp> &VsmfUpdateError::getFailedToAssignEbiList() {
  return m_FailedToAssignEbiList;
}
void VsmfUpdateError::setFailedToAssignEbiList(std::vector<Arp> const &value) {
  m_FailedToAssignEbiList = value;
  m_FailedToAssignEbiListIsSet = true;
}
bool VsmfUpdateError::failedToAssignEbiListIsSet() const {
  return m_FailedToAssignEbiListIsSet;
}
void VsmfUpdateError::unsetFailedToAssignEbiList() {
  m_FailedToAssignEbiListIsSet = false;
}
NgApCause VsmfUpdateError::getNgApCause() const { return m_NgApCause; }
void VsmfUpdateError::setNgApCause(NgApCause const &value) {
  m_NgApCause = value;
  m_NgApCauseIsSet = true;
}
bool VsmfUpdateError::ngApCauseIsSet() const { return m_NgApCauseIsSet; }
void VsmfUpdateError::unsetNgApCause() { m_NgApCauseIsSet = false; }
int32_t VsmfUpdateError::getR5gMmCauseValue() const {
  return m_r_5gMmCauseValue;
}
void VsmfUpdateError::setR5gMmCauseValue(int32_t const value) {
  m_r_5gMmCauseValue = value;
  m_r_5gMmCauseValueIsSet = true;
}
bool VsmfUpdateError::r5gMmCauseValueIsSet() const {
  return m_r_5gMmCauseValueIsSet;
}
void VsmfUpdateError::unsetr_5gMmCauseValue() {
  m_r_5gMmCauseValueIsSet = false;
}
std::string VsmfUpdateError::getRecoveryTime() const { return m_RecoveryTime; }
void VsmfUpdateError::setRecoveryTime(std::string const &value) {
  m_RecoveryTime = value;
  m_RecoveryTimeIsSet = true;
}
bool VsmfUpdateError::recoveryTimeIsSet() const { return m_RecoveryTimeIsSet; }
void VsmfUpdateError::unsetRecoveryTime() { m_RecoveryTimeIsSet = false; }
N4Information VsmfUpdateError::getN4Info() const { return m_N4Info; }
void VsmfUpdateError::setN4Info(N4Information const &value) {
  m_N4Info = value;
  m_N4InfoIsSet = true;
}
bool VsmfUpdateError::n4InfoIsSet() const { return m_N4InfoIsSet; }
void VsmfUpdateError::unsetN4Info() { m_N4InfoIsSet = false; }
N4Information VsmfUpdateError::getN4InfoExt1() const { return m_N4InfoExt1; }
void VsmfUpdateError::setN4InfoExt1(N4Information const &value) {
  m_N4InfoExt1 = value;
  m_N4InfoExt1IsSet = true;
}
bool VsmfUpdateError::n4InfoExt1IsSet() const { return m_N4InfoExt1IsSet; }
void VsmfUpdateError::unsetN4InfoExt1() { m_N4InfoExt1IsSet = false; }
N4Information VsmfUpdateError::getN4InfoExt2() const { return m_N4InfoExt2; }
void VsmfUpdateError::setN4InfoExt2(N4Information const &value) {
  m_N4InfoExt2 = value;
  m_N4InfoExt2IsSet = true;
}
bool VsmfUpdateError::n4InfoExt2IsSet() const { return m_N4InfoExt2IsSet; }
void VsmfUpdateError::unsetN4InfoExt2() { m_N4InfoExt2IsSet = false; }
N4Information VsmfUpdateError::getN4InfoExt3() const { return m_N4InfoExt3; }
void VsmfUpdateError::setN4InfoExt3(N4Information const &value) {
  m_N4InfoExt3 = value;
  m_N4InfoExt3IsSet = true;
}
bool VsmfUpdateError::n4InfoExt3IsSet() const { return m_N4InfoExt3IsSet; }
void VsmfUpdateError::unsetN4InfoExt3() { m_N4InfoExt3IsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
