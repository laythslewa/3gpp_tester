/**
 * Nhss_imsUECM
 * Nhss UE Context Management Service for IMS. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ScscfRegistration.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ScscfRegistration::ScscfRegistration() {
  m_Impi = "";
  m_ImpiIsSet = false;
  m_CscfServerName = "";
  m_ScscfInstanceId = "";
  m_ScscfInstanceIdIsSet = false;
  m_DeregCallbackUri = "";
  m_DeregCallbackUriIsSet = false;
  m_AssociatedImpisIsSet = false;
  m_AssociatedRegisteredImpisIsSet = false;
  m_IrsImpusIsSet = false;
  m_WildcardedPui = "";
  m_WildcardedPuiIsSet = false;
  m_LooseRouteIndicatorIsSet = false;
  m_WildcardedPsi = "";
  m_WildcardedPsiIsSet = false;
  m_SupportedFeatures = "";
  m_SupportedFeaturesIsSet = false;
  m_MultipleRegistrationIndicator = false;
  m_MultipleRegistrationIndicatorIsSet = false;
  m_PcscfRestorationIndicator = false;
  m_PcscfRestorationIndicatorIsSet = false;
  m_ScscfReselectionIndicator = false;
  m_ScscfReselectionIndicatorIsSet = false;
}

ScscfRegistration::~ScscfRegistration() {}

void ScscfRegistration::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const ScscfRegistration &o) {
  j = nlohmann::json();
  if (o.impiIsSet())
    j["impi"] = o.m_Impi;
  j["imsRegistrationType"] = o.m_ImsRegistrationType;
  j["cscfServerName"] = o.m_CscfServerName;
  if (o.scscfInstanceIdIsSet())
    j["scscfInstanceId"] = o.m_ScscfInstanceId;
  if (o.deregCallbackUriIsSet())
    j["deregCallbackUri"] = o.m_DeregCallbackUri;
  if (o.associatedImpisIsSet() || !o.m_AssociatedImpis.empty())
    j["associatedImpis"] = o.m_AssociatedImpis;
  if (o.associatedRegisteredImpisIsSet() ||
      !o.m_AssociatedRegisteredImpis.empty())
    j["associatedRegisteredImpis"] = o.m_AssociatedRegisteredImpis;
  if (o.irsImpusIsSet() || !o.m_IrsImpus.empty())
    j["irsImpus"] = o.m_IrsImpus;
  if (o.wildcardedPuiIsSet())
    j["wildcardedPui"] = o.m_WildcardedPui;
  if (o.looseRouteIndicatorIsSet())
    j["looseRouteIndicator"] = o.m_LooseRouteIndicator;
  if (o.wildcardedPsiIsSet())
    j["wildcardedPsi"] = o.m_WildcardedPsi;
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
  if (o.multipleRegistrationIndicatorIsSet())
    j["multipleRegistrationIndicator"] = o.m_MultipleRegistrationIndicator;
  if (o.pcscfRestorationIndicatorIsSet())
    j["pcscfRestorationIndicator"] = o.m_PcscfRestorationIndicator;
  if (o.scscfReselectionIndicatorIsSet())
    j["scscfReselectionIndicator"] = o.m_ScscfReselectionIndicator;
}

void from_json(const nlohmann::json &j, ScscfRegistration &o) {
  if (j.find("impi") != j.end()) {
    j.at("impi").get_to(o.m_Impi);
    o.m_ImpiIsSet = true;
  }
  j.at("imsRegistrationType").get_to(o.m_ImsRegistrationType);
  j.at("cscfServerName").get_to(o.m_CscfServerName);
  if (j.find("scscfInstanceId") != j.end()) {
    j.at("scscfInstanceId").get_to(o.m_ScscfInstanceId);
    o.m_ScscfInstanceIdIsSet = true;
  }
  if (j.find("deregCallbackUri") != j.end()) {
    j.at("deregCallbackUri").get_to(o.m_DeregCallbackUri);
    o.m_DeregCallbackUriIsSet = true;
  }
  if (j.find("associatedImpis") != j.end()) {
    j.at("associatedImpis").get_to(o.m_AssociatedImpis);
    o.m_AssociatedImpisIsSet = true;
  }
  if (j.find("associatedRegisteredImpis") != j.end()) {
    j.at("associatedRegisteredImpis").get_to(o.m_AssociatedRegisteredImpis);
    o.m_AssociatedRegisteredImpisIsSet = true;
  }
  if (j.find("irsImpus") != j.end()) {
    j.at("irsImpus").get_to(o.m_IrsImpus);
    o.m_IrsImpusIsSet = true;
  }
  if (j.find("wildcardedPui") != j.end()) {
    j.at("wildcardedPui").get_to(o.m_WildcardedPui);
    o.m_WildcardedPuiIsSet = true;
  }
  if (j.find("looseRouteIndicator") != j.end()) {
    j.at("looseRouteIndicator").get_to(o.m_LooseRouteIndicator);
    o.m_LooseRouteIndicatorIsSet = true;
  }
  if (j.find("wildcardedPsi") != j.end()) {
    j.at("wildcardedPsi").get_to(o.m_WildcardedPsi);
    o.m_WildcardedPsiIsSet = true;
  }
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
  if (j.find("multipleRegistrationIndicator") != j.end()) {
    j.at("multipleRegistrationIndicator")
        .get_to(o.m_MultipleRegistrationIndicator);
    o.m_MultipleRegistrationIndicatorIsSet = true;
  }
  if (j.find("pcscfRestorationIndicator") != j.end()) {
    j.at("pcscfRestorationIndicator").get_to(o.m_PcscfRestorationIndicator);
    o.m_PcscfRestorationIndicatorIsSet = true;
  }
  if (j.find("scscfReselectionIndicator") != j.end()) {
    j.at("scscfReselectionIndicator").get_to(o.m_ScscfReselectionIndicator);
    o.m_ScscfReselectionIndicatorIsSet = true;
  }
}

std::string ScscfRegistration::getImpi() const { return m_Impi; }
void ScscfRegistration::setImpi(std::string const &value) {
  m_Impi = value;
  m_ImpiIsSet = true;
}
bool ScscfRegistration::impiIsSet() const { return m_ImpiIsSet; }
void ScscfRegistration::unsetImpi() { m_ImpiIsSet = false; }
ImsRegistrationType ScscfRegistration::getImsRegistrationType() const {
  return m_ImsRegistrationType;
}
void ScscfRegistration::setImsRegistrationType(
    ImsRegistrationType const &value) {
  m_ImsRegistrationType = value;
}
std::string ScscfRegistration::getCscfServerName() const {
  return m_CscfServerName;
}
void ScscfRegistration::setCscfServerName(std::string const &value) {
  m_CscfServerName = value;
}
std::string ScscfRegistration::getScscfInstanceId() const {
  return m_ScscfInstanceId;
}
void ScscfRegistration::setScscfInstanceId(std::string const &value) {
  m_ScscfInstanceId = value;
  m_ScscfInstanceIdIsSet = true;
}
bool ScscfRegistration::scscfInstanceIdIsSet() const {
  return m_ScscfInstanceIdIsSet;
}
void ScscfRegistration::unsetScscfInstanceId() {
  m_ScscfInstanceIdIsSet = false;
}
std::string ScscfRegistration::getDeregCallbackUri() const {
  return m_DeregCallbackUri;
}
void ScscfRegistration::setDeregCallbackUri(std::string const &value) {
  m_DeregCallbackUri = value;
  m_DeregCallbackUriIsSet = true;
}
bool ScscfRegistration::deregCallbackUriIsSet() const {
  return m_DeregCallbackUriIsSet;
}
void ScscfRegistration::unsetDeregCallbackUri() {
  m_DeregCallbackUriIsSet = false;
}
std::vector<std::string> &ScscfRegistration::getAssociatedImpis() {
  return m_AssociatedImpis;
}
void ScscfRegistration::setAssociatedImpis(
    std::vector<std::string> const &value) {
  m_AssociatedImpis = value;
  m_AssociatedImpisIsSet = true;
}
bool ScscfRegistration::associatedImpisIsSet() const {
  return m_AssociatedImpisIsSet;
}
void ScscfRegistration::unsetAssociatedImpis() {
  m_AssociatedImpisIsSet = false;
}
std::vector<std::string> &ScscfRegistration::getAssociatedRegisteredImpis() {
  return m_AssociatedRegisteredImpis;
}
void ScscfRegistration::setAssociatedRegisteredImpis(
    std::vector<std::string> const &value) {
  m_AssociatedRegisteredImpis = value;
  m_AssociatedRegisteredImpisIsSet = true;
}
bool ScscfRegistration::associatedRegisteredImpisIsSet() const {
  return m_AssociatedRegisteredImpisIsSet;
}
void ScscfRegistration::unsetAssociatedRegisteredImpis() {
  m_AssociatedRegisteredImpisIsSet = false;
}
std::vector<std::string> &ScscfRegistration::getIrsImpus() {
  return m_IrsImpus;
}
void ScscfRegistration::setIrsImpus(std::vector<std::string> const &value) {
  m_IrsImpus = value;
  m_IrsImpusIsSet = true;
}
bool ScscfRegistration::irsImpusIsSet() const { return m_IrsImpusIsSet; }
void ScscfRegistration::unsetIrsImpus() { m_IrsImpusIsSet = false; }
std::string ScscfRegistration::getWildcardedPui() const {
  return m_WildcardedPui;
}
void ScscfRegistration::setWildcardedPui(std::string const &value) {
  m_WildcardedPui = value;
  m_WildcardedPuiIsSet = true;
}
bool ScscfRegistration::wildcardedPuiIsSet() const {
  return m_WildcardedPuiIsSet;
}
void ScscfRegistration::unsetWildcardedPui() { m_WildcardedPuiIsSet = false; }
LooseRouteIndication ScscfRegistration::getLooseRouteIndicator() const {
  return m_LooseRouteIndicator;
}
void ScscfRegistration::setLooseRouteIndicator(
    LooseRouteIndication const &value) {
  m_LooseRouteIndicator = value;
  m_LooseRouteIndicatorIsSet = true;
}
bool ScscfRegistration::looseRouteIndicatorIsSet() const {
  return m_LooseRouteIndicatorIsSet;
}
void ScscfRegistration::unsetLooseRouteIndicator() {
  m_LooseRouteIndicatorIsSet = false;
}
std::string ScscfRegistration::getWildcardedPsi() const {
  return m_WildcardedPsi;
}
void ScscfRegistration::setWildcardedPsi(std::string const &value) {
  m_WildcardedPsi = value;
  m_WildcardedPsiIsSet = true;
}
bool ScscfRegistration::wildcardedPsiIsSet() const {
  return m_WildcardedPsiIsSet;
}
void ScscfRegistration::unsetWildcardedPsi() { m_WildcardedPsiIsSet = false; }
std::string ScscfRegistration::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void ScscfRegistration::setSupportedFeatures(std::string const &value) {
  m_SupportedFeatures = value;
  m_SupportedFeaturesIsSet = true;
}
bool ScscfRegistration::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void ScscfRegistration::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}
bool ScscfRegistration::isMultipleRegistrationIndicator() const {
  return m_MultipleRegistrationIndicator;
}
void ScscfRegistration::setMultipleRegistrationIndicator(bool const value) {
  m_MultipleRegistrationIndicator = value;
  m_MultipleRegistrationIndicatorIsSet = true;
}
bool ScscfRegistration::multipleRegistrationIndicatorIsSet() const {
  return m_MultipleRegistrationIndicatorIsSet;
}
void ScscfRegistration::unsetMultipleRegistrationIndicator() {
  m_MultipleRegistrationIndicatorIsSet = false;
}
bool ScscfRegistration::isPcscfRestorationIndicator() const {
  return m_PcscfRestorationIndicator;
}
void ScscfRegistration::setPcscfRestorationIndicator(bool const value) {
  m_PcscfRestorationIndicator = value;
  m_PcscfRestorationIndicatorIsSet = true;
}
bool ScscfRegistration::pcscfRestorationIndicatorIsSet() const {
  return m_PcscfRestorationIndicatorIsSet;
}
void ScscfRegistration::unsetPcscfRestorationIndicator() {
  m_PcscfRestorationIndicatorIsSet = false;
}
bool ScscfRegistration::isScscfReselectionIndicator() const {
  return m_ScscfReselectionIndicator;
}
void ScscfRegistration::setScscfReselectionIndicator(bool const value) {
  m_ScscfReselectionIndicator = value;
  m_ScscfReselectionIndicatorIsSet = true;
}
bool ScscfRegistration::scscfReselectionIndicatorIsSet() const {
  return m_ScscfReselectionIndicatorIsSet;
}
void ScscfRegistration::unsetScscfReselectionIndicator() {
  m_ScscfReselectionIndicatorIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org