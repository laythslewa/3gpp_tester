/**
 * Nucmf_UECapabilityManagement
 * Nucmf_UECapabilityManagement Service. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "UcmfNotification.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

UcmfNotification::UcmfNotification() {
  m_DicEntryId = 0;
  m_ManAssOpRequestlistIsSet = false;
  m_VersionId = 0;
  m_VersionIdIsSet = false;
}

UcmfNotification::~UcmfNotification() {}

void UcmfNotification::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const UcmfNotification &o) {
  j = nlohmann::json();
  j["dicEntryId"] = o.m_DicEntryId;
  j["eventType"] = o.m_EventType;
  if (o.manAssOpRequestlistIsSet())
    j["manAssOpRequestlist"] = o.m_ManAssOpRequestlist;
  if (o.versionIdIsSet())
    j["versionId"] = o.m_VersionId;
}

void from_json(const nlohmann::json &j, UcmfNotification &o) {
  j.at("dicEntryId").get_to(o.m_DicEntryId);
  j.at("eventType").get_to(o.m_EventType);
  if (j.find("manAssOpRequestlist") != j.end()) {
    j.at("manAssOpRequestlist").get_to(o.m_ManAssOpRequestlist);
    o.m_ManAssOpRequestlistIsSet = true;
  }
  if (j.find("versionId") != j.end()) {
    j.at("versionId").get_to(o.m_VersionId);
    o.m_VersionIdIsSet = true;
  }
}

int32_t UcmfNotification::getDicEntryId() const { return m_DicEntryId; }
void UcmfNotification::setDicEntryId(int32_t const value) {
  m_DicEntryId = value;
}
EventType UcmfNotification::getEventType() const { return m_EventType; }
void UcmfNotification::setEventType(EventType const &value) {
  m_EventType = value;
}
ManAssOpRequestlist UcmfNotification::getManAssOpRequestlist() const {
  return m_ManAssOpRequestlist;
}
void UcmfNotification::setManAssOpRequestlist(
    ManAssOpRequestlist const &value) {
  m_ManAssOpRequestlist = value;
  m_ManAssOpRequestlistIsSet = true;
}
bool UcmfNotification::manAssOpRequestlistIsSet() const {
  return m_ManAssOpRequestlistIsSet;
}
void UcmfNotification::unsetManAssOpRequestlist() {
  m_ManAssOpRequestlistIsSet = false;
}
int32_t UcmfNotification::getVersionId() const { return m_VersionId; }
void UcmfNotification::setVersionId(int32_t const value) {
  m_VersionId = value;
  m_VersionIdIsSet = true;
}
bool UcmfNotification::versionIdIsSet() const { return m_VersionIdIsSet; }
void UcmfNotification::unsetVersionId() { m_VersionIdIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
