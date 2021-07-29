/**
 * NRF NFDiscovery Service
 * NRF NFDiscovery Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SearchResult.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

SearchResult::SearchResult() {
  m_ValidityPeriod = 0;
  m_ValidityPeriodIsSet = false;
  m_SearchId = "";
  m_SearchIdIsSet = false;
  m_NumNfInstComplete = 0;
  m_NumNfInstCompleteIsSet = false;
  m_PreferredSearchIsSet = false;
  m_NrfSupportedFeatures = "";
  m_NrfSupportedFeaturesIsSet = false;
  m_NfInstanceListIsSet = false;
}

SearchResult::~SearchResult() {}

void SearchResult::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const SearchResult &o) {
  j = nlohmann::json();
  if (o.validityPeriodIsSet())
    j["validityPeriod"] = o.m_ValidityPeriod;
  j["nfInstances"] = o.m_NfInstances;
  if (o.searchIdIsSet())
    j["searchId"] = o.m_SearchId;
  if (o.numNfInstCompleteIsSet())
    j["numNfInstComplete"] = o.m_NumNfInstComplete;
  if (o.preferredSearchIsSet())
    j["preferredSearch"] = o.m_PreferredSearch;
  if (o.nrfSupportedFeaturesIsSet())
    j["nrfSupportedFeatures"] = o.m_NrfSupportedFeatures;
  if (o.nfInstanceListIsSet() || !o.m_NfInstanceList.empty())
    j["nfInstanceList"] = o.m_NfInstanceList;
}

void from_json(const nlohmann::json &j, SearchResult &o) {
  if (j.find("validityPeriod") != j.end()) {
    j.at("validityPeriod").get_to(o.m_ValidityPeriod);
    o.m_ValidityPeriodIsSet = true;
  }
  j.at("nfInstances").get_to(o.m_NfInstances);
  if (j.find("searchId") != j.end()) {
    j.at("searchId").get_to(o.m_SearchId);
    o.m_SearchIdIsSet = true;
  }
  if (j.find("numNfInstComplete") != j.end()) {
    j.at("numNfInstComplete").get_to(o.m_NumNfInstComplete);
    o.m_NumNfInstCompleteIsSet = true;
  }
  if (j.find("preferredSearch") != j.end()) {
    j.at("preferredSearch").get_to(o.m_PreferredSearch);
    o.m_PreferredSearchIsSet = true;
  }
  if (j.find("nrfSupportedFeatures") != j.end()) {
    j.at("nrfSupportedFeatures").get_to(o.m_NrfSupportedFeatures);
    o.m_NrfSupportedFeaturesIsSet = true;
  }
  if (j.find("nfInstanceList") != j.end()) {
    j.at("nfInstanceList").get_to(o.m_NfInstanceList);
    o.m_NfInstanceListIsSet = true;
  }
}

int32_t SearchResult::getValidityPeriod() const { return m_ValidityPeriod; }
void SearchResult::setValidityPeriod(int32_t const value) {
  m_ValidityPeriod = value;
  m_ValidityPeriodIsSet = true;
}
bool SearchResult::validityPeriodIsSet() const { return m_ValidityPeriodIsSet; }
void SearchResult::unsetValidityPeriod() { m_ValidityPeriodIsSet = false; }
std::vector<NFProfile> &SearchResult::getNfInstances() { return m_NfInstances; }
void SearchResult::setNfInstances(std::vector<NFProfile> const &value) {
  m_NfInstances = value;
}
std::string SearchResult::getSearchId() const { return m_SearchId; }
void SearchResult::setSearchId(std::string const &value) {
  m_SearchId = value;
  m_SearchIdIsSet = true;
}
bool SearchResult::searchIdIsSet() const { return m_SearchIdIsSet; }
void SearchResult::unsetSearchId() { m_SearchIdIsSet = false; }
int32_t SearchResult::getNumNfInstComplete() const {
  return m_NumNfInstComplete;
}
void SearchResult::setNumNfInstComplete(int32_t const value) {
  m_NumNfInstComplete = value;
  m_NumNfInstCompleteIsSet = true;
}
bool SearchResult::numNfInstCompleteIsSet() const {
  return m_NumNfInstCompleteIsSet;
}
void SearchResult::unsetNumNfInstComplete() {
  m_NumNfInstCompleteIsSet = false;
}
PreferredSearch SearchResult::getPreferredSearch() const {
  return m_PreferredSearch;
}
void SearchResult::setPreferredSearch(PreferredSearch const &value) {
  m_PreferredSearch = value;
  m_PreferredSearchIsSet = true;
}
bool SearchResult::preferredSearchIsSet() const {
  return m_PreferredSearchIsSet;
}
void SearchResult::unsetPreferredSearch() { m_PreferredSearchIsSet = false; }
std::string SearchResult::getNrfSupportedFeatures() const {
  return m_NrfSupportedFeatures;
}
void SearchResult::setNrfSupportedFeatures(std::string const &value) {
  m_NrfSupportedFeatures = value;
  m_NrfSupportedFeaturesIsSet = true;
}
bool SearchResult::nrfSupportedFeaturesIsSet() const {
  return m_NrfSupportedFeaturesIsSet;
}
void SearchResult::unsetNrfSupportedFeatures() {
  m_NrfSupportedFeaturesIsSet = false;
}
std::map<std::string, NfInstanceInfo> &SearchResult::getNfInstanceList() {
  return m_NfInstanceList;
}
void SearchResult::setNfInstanceList(
    std::map<std::string, NfInstanceInfo> const &value) {
  m_NfInstanceList = value;
  m_NfInstanceListIsSet = true;
}
bool SearchResult::nfInstanceListIsSet() const { return m_NfInstanceListIsSet; }
void SearchResult::unsetNfInstanceList() { m_NfInstanceListIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
