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

#include "PduSessionContext.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

PduSessionContext::PduSessionContext() {
  m_PduSessionId = 0;
  m_SmContextRef = "";
  m_Dnn = "";
  m_SelectedDnn = "";
  m_SelectedDnnIsSet = false;
  m_AdditionalAccessTypeIsSet = false;
  m_AllocatedEbiListIsSet = false;
  m_HsmfId = "";
  m_HsmfIdIsSet = false;
  m_HsmfSetId = "";
  m_HsmfSetIdIsSet = false;
  m_HsmfServiceSetId = "";
  m_HsmfServiceSetIdIsSet = false;
  m_SmfBindingIsSet = false;
  m_VsmfId = "";
  m_VsmfIdIsSet = false;
  m_VsmfSetId = "";
  m_VsmfSetIdIsSet = false;
  m_VsmfServiceSetId = "";
  m_VsmfServiceSetIdIsSet = false;
  m_VsmfBindingIsSet = false;
  m_IsmfId = "";
  m_IsmfIdIsSet = false;
  m_IsmfSetId = "";
  m_IsmfSetIdIsSet = false;
  m_IsmfServiceSetId = "";
  m_IsmfServiceSetIdIsSet = false;
  m_IsmfBindingIsSet = false;
  m_NsInstance = "";
  m_NsInstanceIsSet = false;
  m_SmfServiceInstanceId = "";
  m_SmfServiceInstanceIdIsSet = false;
  m_MaPduSession = false;
  m_MaPduSessionIsSet = false;
  m_CnAssistedRanParaIsSet = false;
  m_NrfManagementUri = "";
  m_NrfManagementUriIsSet = false;
  m_NrfDiscoveryUri = "";
  m_NrfDiscoveryUriIsSet = false;
  m_NrfAccessTokenUri = "";
  m_NrfAccessTokenUriIsSet = false;
}

PduSessionContext::~PduSessionContext() {}

void PduSessionContext::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const PduSessionContext &o) {
  j = nlohmann::json();
  j["pduSessionId"] = o.m_PduSessionId;
  j["smContextRef"] = o.m_SmContextRef;
  j["sNssai"] = o.m_SNssai;
  j["dnn"] = o.m_Dnn;
  if (o.selectedDnnIsSet())
    j["selectedDnn"] = o.m_SelectedDnn;
  j["accessType"] = o.m_AccessType;
  if (o.additionalAccessTypeIsSet())
    j["additionalAccessType"] = o.m_AdditionalAccessType;
  if (o.allocatedEbiListIsSet() || !o.m_AllocatedEbiList.empty())
    j["allocatedEbiList"] = o.m_AllocatedEbiList;
  if (o.hsmfIdIsSet())
    j["hsmfId"] = o.m_HsmfId;
  if (o.hsmfSetIdIsSet())
    j["hsmfSetId"] = o.m_HsmfSetId;
  if (o.hsmfServiceSetIdIsSet())
    j["hsmfServiceSetId"] = o.m_HsmfServiceSetId;
  if (o.smfBindingIsSet())
    j["smfBinding"] = o.m_SmfBinding;
  if (o.vsmfIdIsSet())
    j["vsmfId"] = o.m_VsmfId;
  if (o.vsmfSetIdIsSet())
    j["vsmfSetId"] = o.m_VsmfSetId;
  if (o.vsmfServiceSetIdIsSet())
    j["vsmfServiceSetId"] = o.m_VsmfServiceSetId;
  if (o.vsmfBindingIsSet())
    j["vsmfBinding"] = o.m_VsmfBinding;
  if (o.ismfIdIsSet())
    j["ismfId"] = o.m_IsmfId;
  if (o.ismfSetIdIsSet())
    j["ismfSetId"] = o.m_IsmfSetId;
  if (o.ismfServiceSetIdIsSet())
    j["ismfServiceSetId"] = o.m_IsmfServiceSetId;
  if (o.ismfBindingIsSet())
    j["ismfBinding"] = o.m_IsmfBinding;
  if (o.nsInstanceIsSet())
    j["nsInstance"] = o.m_NsInstance;
  if (o.smfServiceInstanceIdIsSet())
    j["smfServiceInstanceId"] = o.m_SmfServiceInstanceId;
  if (o.maPduSessionIsSet())
    j["maPduSession"] = o.m_MaPduSession;
  if (o.cnAssistedRanParaIsSet())
    j["cnAssistedRanPara"] = o.m_CnAssistedRanPara;
  if (o.nrfManagementUriIsSet())
    j["nrfManagementUri"] = o.m_NrfManagementUri;
  if (o.nrfDiscoveryUriIsSet())
    j["nrfDiscoveryUri"] = o.m_NrfDiscoveryUri;
  if (o.nrfAccessTokenUriIsSet())
    j["nrfAccessTokenUri"] = o.m_NrfAccessTokenUri;
}

void from_json(const nlohmann::json &j, PduSessionContext &o) {
  j.at("pduSessionId").get_to(o.m_PduSessionId);
  j.at("smContextRef").get_to(o.m_SmContextRef);
  j.at("sNssai").get_to(o.m_SNssai);
  j.at("dnn").get_to(o.m_Dnn);
  if (j.find("selectedDnn") != j.end()) {
    j.at("selectedDnn").get_to(o.m_SelectedDnn);
    o.m_SelectedDnnIsSet = true;
  }
  j.at("accessType").get_to(o.m_AccessType);
  if (j.find("additionalAccessType") != j.end()) {
    j.at("additionalAccessType").get_to(o.m_AdditionalAccessType);
    o.m_AdditionalAccessTypeIsSet = true;
  }
  if (j.find("allocatedEbiList") != j.end()) {
    j.at("allocatedEbiList").get_to(o.m_AllocatedEbiList);
    o.m_AllocatedEbiListIsSet = true;
  }
  if (j.find("hsmfId") != j.end()) {
    j.at("hsmfId").get_to(o.m_HsmfId);
    o.m_HsmfIdIsSet = true;
  }
  if (j.find("hsmfSetId") != j.end()) {
    j.at("hsmfSetId").get_to(o.m_HsmfSetId);
    o.m_HsmfSetIdIsSet = true;
  }
  if (j.find("hsmfServiceSetId") != j.end()) {
    j.at("hsmfServiceSetId").get_to(o.m_HsmfServiceSetId);
    o.m_HsmfServiceSetIdIsSet = true;
  }
  if (j.find("smfBinding") != j.end()) {
    j.at("smfBinding").get_to(o.m_SmfBinding);
    o.m_SmfBindingIsSet = true;
  }
  if (j.find("vsmfId") != j.end()) {
    j.at("vsmfId").get_to(o.m_VsmfId);
    o.m_VsmfIdIsSet = true;
  }
  if (j.find("vsmfSetId") != j.end()) {
    j.at("vsmfSetId").get_to(o.m_VsmfSetId);
    o.m_VsmfSetIdIsSet = true;
  }
  if (j.find("vsmfServiceSetId") != j.end()) {
    j.at("vsmfServiceSetId").get_to(o.m_VsmfServiceSetId);
    o.m_VsmfServiceSetIdIsSet = true;
  }
  if (j.find("vsmfBinding") != j.end()) {
    j.at("vsmfBinding").get_to(o.m_VsmfBinding);
    o.m_VsmfBindingIsSet = true;
  }
  if (j.find("ismfId") != j.end()) {
    j.at("ismfId").get_to(o.m_IsmfId);
    o.m_IsmfIdIsSet = true;
  }
  if (j.find("ismfSetId") != j.end()) {
    j.at("ismfSetId").get_to(o.m_IsmfSetId);
    o.m_IsmfSetIdIsSet = true;
  }
  if (j.find("ismfServiceSetId") != j.end()) {
    j.at("ismfServiceSetId").get_to(o.m_IsmfServiceSetId);
    o.m_IsmfServiceSetIdIsSet = true;
  }
  if (j.find("ismfBinding") != j.end()) {
    j.at("ismfBinding").get_to(o.m_IsmfBinding);
    o.m_IsmfBindingIsSet = true;
  }
  if (j.find("nsInstance") != j.end()) {
    j.at("nsInstance").get_to(o.m_NsInstance);
    o.m_NsInstanceIsSet = true;
  }
  if (j.find("smfServiceInstanceId") != j.end()) {
    j.at("smfServiceInstanceId").get_to(o.m_SmfServiceInstanceId);
    o.m_SmfServiceInstanceIdIsSet = true;
  }
  if (j.find("maPduSession") != j.end()) {
    j.at("maPduSession").get_to(o.m_MaPduSession);
    o.m_MaPduSessionIsSet = true;
  }
  if (j.find("cnAssistedRanPara") != j.end()) {
    j.at("cnAssistedRanPara").get_to(o.m_CnAssistedRanPara);
    o.m_CnAssistedRanParaIsSet = true;
  }
  if (j.find("nrfManagementUri") != j.end()) {
    j.at("nrfManagementUri").get_to(o.m_NrfManagementUri);
    o.m_NrfManagementUriIsSet = true;
  }
  if (j.find("nrfDiscoveryUri") != j.end()) {
    j.at("nrfDiscoveryUri").get_to(o.m_NrfDiscoveryUri);
    o.m_NrfDiscoveryUriIsSet = true;
  }
  if (j.find("nrfAccessTokenUri") != j.end()) {
    j.at("nrfAccessTokenUri").get_to(o.m_NrfAccessTokenUri);
    o.m_NrfAccessTokenUriIsSet = true;
  }
}

int32_t PduSessionContext::getPduSessionId() const { return m_PduSessionId; }
void PduSessionContext::setPduSessionId(int32_t const value) {
  m_PduSessionId = value;
}
std::string PduSessionContext::getSmContextRef() const {
  return m_SmContextRef;
}
void PduSessionContext::setSmContextRef(std::string const &value) {
  m_SmContextRef = value;
}
Snssai PduSessionContext::getSNssai() const { return m_SNssai; }
void PduSessionContext::setSNssai(Snssai const &value) { m_SNssai = value; }
std::string PduSessionContext::getDnn() const { return m_Dnn; }
void PduSessionContext::setDnn(std::string const &value) { m_Dnn = value; }
std::string PduSessionContext::getSelectedDnn() const { return m_SelectedDnn; }
void PduSessionContext::setSelectedDnn(std::string const &value) {
  m_SelectedDnn = value;
  m_SelectedDnnIsSet = true;
}
bool PduSessionContext::selectedDnnIsSet() const { return m_SelectedDnnIsSet; }
void PduSessionContext::unsetSelectedDnn() { m_SelectedDnnIsSet = false; }
AccessType PduSessionContext::getAccessType() const { return m_AccessType; }
void PduSessionContext::setAccessType(AccessType const &value) {
  m_AccessType = value;
}
AccessType PduSessionContext::getAdditionalAccessType() const {
  return m_AdditionalAccessType;
}
void PduSessionContext::setAdditionalAccessType(AccessType const &value) {
  m_AdditionalAccessType = value;
  m_AdditionalAccessTypeIsSet = true;
}
bool PduSessionContext::additionalAccessTypeIsSet() const {
  return m_AdditionalAccessTypeIsSet;
}
void PduSessionContext::unsetAdditionalAccessType() {
  m_AdditionalAccessTypeIsSet = false;
}
std::vector<EbiArpMapping> &PduSessionContext::getAllocatedEbiList() {
  return m_AllocatedEbiList;
}
void PduSessionContext::setAllocatedEbiList(
    std::vector<EbiArpMapping> const &value) {
  m_AllocatedEbiList = value;
  m_AllocatedEbiListIsSet = true;
}
bool PduSessionContext::allocatedEbiListIsSet() const {
  return m_AllocatedEbiListIsSet;
}
void PduSessionContext::unsetAllocatedEbiList() {
  m_AllocatedEbiListIsSet = false;
}
std::string PduSessionContext::getHsmfId() const { return m_HsmfId; }
void PduSessionContext::setHsmfId(std::string const &value) {
  m_HsmfId = value;
  m_HsmfIdIsSet = true;
}
bool PduSessionContext::hsmfIdIsSet() const { return m_HsmfIdIsSet; }
void PduSessionContext::unsetHsmfId() { m_HsmfIdIsSet = false; }
std::string PduSessionContext::getHsmfSetId() const { return m_HsmfSetId; }
void PduSessionContext::setHsmfSetId(std::string const &value) {
  m_HsmfSetId = value;
  m_HsmfSetIdIsSet = true;
}
bool PduSessionContext::hsmfSetIdIsSet() const { return m_HsmfSetIdIsSet; }
void PduSessionContext::unsetHsmfSetId() { m_HsmfSetIdIsSet = false; }
std::string PduSessionContext::getHsmfServiceSetId() const {
  return m_HsmfServiceSetId;
}
void PduSessionContext::setHsmfServiceSetId(std::string const &value) {
  m_HsmfServiceSetId = value;
  m_HsmfServiceSetIdIsSet = true;
}
bool PduSessionContext::hsmfServiceSetIdIsSet() const {
  return m_HsmfServiceSetIdIsSet;
}
void PduSessionContext::unsetHsmfServiceSetId() {
  m_HsmfServiceSetIdIsSet = false;
}
SbiBindingLevel PduSessionContext::getSmfBinding() const {
  return m_SmfBinding;
}
void PduSessionContext::setSmfBinding(SbiBindingLevel const &value) {
  m_SmfBinding = value;
  m_SmfBindingIsSet = true;
}
bool PduSessionContext::smfBindingIsSet() const { return m_SmfBindingIsSet; }
void PduSessionContext::unsetSmfBinding() { m_SmfBindingIsSet = false; }
std::string PduSessionContext::getVsmfId() const { return m_VsmfId; }
void PduSessionContext::setVsmfId(std::string const &value) {
  m_VsmfId = value;
  m_VsmfIdIsSet = true;
}
bool PduSessionContext::vsmfIdIsSet() const { return m_VsmfIdIsSet; }
void PduSessionContext::unsetVsmfId() { m_VsmfIdIsSet = false; }
std::string PduSessionContext::getVsmfSetId() const { return m_VsmfSetId; }
void PduSessionContext::setVsmfSetId(std::string const &value) {
  m_VsmfSetId = value;
  m_VsmfSetIdIsSet = true;
}
bool PduSessionContext::vsmfSetIdIsSet() const { return m_VsmfSetIdIsSet; }
void PduSessionContext::unsetVsmfSetId() { m_VsmfSetIdIsSet = false; }
std::string PduSessionContext::getVsmfServiceSetId() const {
  return m_VsmfServiceSetId;
}
void PduSessionContext::setVsmfServiceSetId(std::string const &value) {
  m_VsmfServiceSetId = value;
  m_VsmfServiceSetIdIsSet = true;
}
bool PduSessionContext::vsmfServiceSetIdIsSet() const {
  return m_VsmfServiceSetIdIsSet;
}
void PduSessionContext::unsetVsmfServiceSetId() {
  m_VsmfServiceSetIdIsSet = false;
}
SbiBindingLevel PduSessionContext::getVsmfBinding() const {
  return m_VsmfBinding;
}
void PduSessionContext::setVsmfBinding(SbiBindingLevel const &value) {
  m_VsmfBinding = value;
  m_VsmfBindingIsSet = true;
}
bool PduSessionContext::vsmfBindingIsSet() const { return m_VsmfBindingIsSet; }
void PduSessionContext::unsetVsmfBinding() { m_VsmfBindingIsSet = false; }
std::string PduSessionContext::getIsmfId() const { return m_IsmfId; }
void PduSessionContext::setIsmfId(std::string const &value) {
  m_IsmfId = value;
  m_IsmfIdIsSet = true;
}
bool PduSessionContext::ismfIdIsSet() const { return m_IsmfIdIsSet; }
void PduSessionContext::unsetIsmfId() { m_IsmfIdIsSet = false; }
std::string PduSessionContext::getIsmfSetId() const { return m_IsmfSetId; }
void PduSessionContext::setIsmfSetId(std::string const &value) {
  m_IsmfSetId = value;
  m_IsmfSetIdIsSet = true;
}
bool PduSessionContext::ismfSetIdIsSet() const { return m_IsmfSetIdIsSet; }
void PduSessionContext::unsetIsmfSetId() { m_IsmfSetIdIsSet = false; }
std::string PduSessionContext::getIsmfServiceSetId() const {
  return m_IsmfServiceSetId;
}
void PduSessionContext::setIsmfServiceSetId(std::string const &value) {
  m_IsmfServiceSetId = value;
  m_IsmfServiceSetIdIsSet = true;
}
bool PduSessionContext::ismfServiceSetIdIsSet() const {
  return m_IsmfServiceSetIdIsSet;
}
void PduSessionContext::unsetIsmfServiceSetId() {
  m_IsmfServiceSetIdIsSet = false;
}
SbiBindingLevel PduSessionContext::getIsmfBinding() const {
  return m_IsmfBinding;
}
void PduSessionContext::setIsmfBinding(SbiBindingLevel const &value) {
  m_IsmfBinding = value;
  m_IsmfBindingIsSet = true;
}
bool PduSessionContext::ismfBindingIsSet() const { return m_IsmfBindingIsSet; }
void PduSessionContext::unsetIsmfBinding() { m_IsmfBindingIsSet = false; }
std::string PduSessionContext::getNsInstance() const { return m_NsInstance; }
void PduSessionContext::setNsInstance(std::string const &value) {
  m_NsInstance = value;
  m_NsInstanceIsSet = true;
}
bool PduSessionContext::nsInstanceIsSet() const { return m_NsInstanceIsSet; }
void PduSessionContext::unsetNsInstance() { m_NsInstanceIsSet = false; }
std::string PduSessionContext::getSmfServiceInstanceId() const {
  return m_SmfServiceInstanceId;
}
void PduSessionContext::setSmfServiceInstanceId(std::string const &value) {
  m_SmfServiceInstanceId = value;
  m_SmfServiceInstanceIdIsSet = true;
}
bool PduSessionContext::smfServiceInstanceIdIsSet() const {
  return m_SmfServiceInstanceIdIsSet;
}
void PduSessionContext::unsetSmfServiceInstanceId() {
  m_SmfServiceInstanceIdIsSet = false;
}
bool PduSessionContext::isMaPduSession() const { return m_MaPduSession; }
void PduSessionContext::setMaPduSession(bool const value) {
  m_MaPduSession = value;
  m_MaPduSessionIsSet = true;
}
bool PduSessionContext::maPduSessionIsSet() const {
  return m_MaPduSessionIsSet;
}
void PduSessionContext::unsetMaPduSession() { m_MaPduSessionIsSet = false; }
CnAssistedRanPara PduSessionContext::getCnAssistedRanPara() const {
  return m_CnAssistedRanPara;
}
void PduSessionContext::setCnAssistedRanPara(CnAssistedRanPara const &value) {
  m_CnAssistedRanPara = value;
  m_CnAssistedRanParaIsSet = true;
}
bool PduSessionContext::cnAssistedRanParaIsSet() const {
  return m_CnAssistedRanParaIsSet;
}
void PduSessionContext::unsetCnAssistedRanPara() {
  m_CnAssistedRanParaIsSet = false;
}
std::string PduSessionContext::getNrfManagementUri() const {
  return m_NrfManagementUri;
}
void PduSessionContext::setNrfManagementUri(std::string const &value) {
  m_NrfManagementUri = value;
  m_NrfManagementUriIsSet = true;
}
bool PduSessionContext::nrfManagementUriIsSet() const {
  return m_NrfManagementUriIsSet;
}
void PduSessionContext::unsetNrfManagementUri() {
  m_NrfManagementUriIsSet = false;
}
std::string PduSessionContext::getNrfDiscoveryUri() const {
  return m_NrfDiscoveryUri;
}
void PduSessionContext::setNrfDiscoveryUri(std::string const &value) {
  m_NrfDiscoveryUri = value;
  m_NrfDiscoveryUriIsSet = true;
}
bool PduSessionContext::nrfDiscoveryUriIsSet() const {
  return m_NrfDiscoveryUriIsSet;
}
void PduSessionContext::unsetNrfDiscoveryUri() {
  m_NrfDiscoveryUriIsSet = false;
}
std::string PduSessionContext::getNrfAccessTokenUri() const {
  return m_NrfAccessTokenUri;
}
void PduSessionContext::setNrfAccessTokenUri(std::string const &value) {
  m_NrfAccessTokenUri = value;
  m_NrfAccessTokenUriIsSet = true;
}
bool PduSessionContext::nrfAccessTokenUriIsSet() const {
  return m_NrfAccessTokenUriIsSet;
}
void PduSessionContext::unsetNrfAccessTokenUri() {
  m_NrfAccessTokenUriIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
