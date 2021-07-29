/**
 * Nchf_OfflineOnlyCharging
 * OfflineOnlyCharging Service © 2020, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "MultipleUnitUsage.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

MultipleUnitUsage::MultipleUnitUsage() {
  m_RatingGroup = 0;
  m_UsedUnitContainerIsSet = false;
  m_UPFID = "";
  m_UPFIDIsSet = false;
  m_MultihomedPDUAddressIsSet = false;
}

MultipleUnitUsage::~MultipleUnitUsage() {}

void MultipleUnitUsage::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const MultipleUnitUsage &o) {
  j = nlohmann::json();
  j["ratingGroup"] = o.m_RatingGroup;
  if (o.usedUnitContainerIsSet() || !o.m_UsedUnitContainer.empty())
    j["usedUnitContainer"] = o.m_UsedUnitContainer;
  if (o.uPFIDIsSet())
    j["uPFID"] = o.m_UPFID;
  if (o.multihomedPDUAddressIsSet())
    j["multihomedPDUAddress"] = o.m_MultihomedPDUAddress;
}

void from_json(const nlohmann::json &j, MultipleUnitUsage &o) {
  j.at("ratingGroup").get_to(o.m_RatingGroup);
  if (j.find("usedUnitContainer") != j.end()) {
    j.at("usedUnitContainer").get_to(o.m_UsedUnitContainer);
    o.m_UsedUnitContainerIsSet = true;
  }
  if (j.find("uPFID") != j.end()) {
    j.at("uPFID").get_to(o.m_UPFID);
    o.m_UPFIDIsSet = true;
  }
  if (j.find("multihomedPDUAddress") != j.end()) {
    j.at("multihomedPDUAddress").get_to(o.m_MultihomedPDUAddress);
    o.m_MultihomedPDUAddressIsSet = true;
  }
}

int32_t MultipleUnitUsage::getRatingGroup() const { return m_RatingGroup; }
void MultipleUnitUsage::setRatingGroup(int32_t const value) {
  m_RatingGroup = value;
}
std::vector<UsedUnitContainer> &MultipleUnitUsage::getUsedUnitContainer() {
  return m_UsedUnitContainer;
}
void MultipleUnitUsage::setUsedUnitContainer(
    std::vector<UsedUnitContainer> const &value) {
  m_UsedUnitContainer = value;
  m_UsedUnitContainerIsSet = true;
}
bool MultipleUnitUsage::usedUnitContainerIsSet() const {
  return m_UsedUnitContainerIsSet;
}
void MultipleUnitUsage::unsetUsedUnitContainer() {
  m_UsedUnitContainerIsSet = false;
}
std::string MultipleUnitUsage::getUPFID() const { return m_UPFID; }
void MultipleUnitUsage::setUPFID(std::string const &value) {
  m_UPFID = value;
  m_UPFIDIsSet = true;
}
bool MultipleUnitUsage::uPFIDIsSet() const { return m_UPFIDIsSet; }
void MultipleUnitUsage::unsetUPFID() { m_UPFIDIsSet = false; }
PDUAddress MultipleUnitUsage::getMultihomedPDUAddress() const {
  return m_MultihomedPDUAddress;
}
void MultipleUnitUsage::setMultihomedPDUAddress(PDUAddress const &value) {
  m_MultihomedPDUAddress = value;
  m_MultihomedPDUAddressIsSet = true;
}
bool MultipleUnitUsage::multihomedPDUAddressIsSet() const {
  return m_MultihomedPDUAddressIsSet;
}
void MultipleUnitUsage::unsetMultihomedPDUAddress() {
  m_MultihomedPDUAddressIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
