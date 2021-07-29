/**
 * 3gpp-cp-parameter-provisioning
 * API for provisioning communication pattern parameters. © 2021, 3GPP
 * Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights
 * reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "UmtLocationArea5G_allOf.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

UmtLocationArea5G_allOf::UmtLocationArea5G_allOf() {
  m_UmtTime = "";
  m_UmtTimeIsSet = false;
  m_UmtDuration = 0;
  m_UmtDurationIsSet = false;
}

UmtLocationArea5G_allOf::~UmtLocationArea5G_allOf() {}

void UmtLocationArea5G_allOf::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const UmtLocationArea5G_allOf &o) {
  j = nlohmann::json();
  if (o.umtTimeIsSet())
    j["umtTime"] = o.m_UmtTime;
  if (o.umtDurationIsSet())
    j["umtDuration"] = o.m_UmtDuration;
}

void from_json(const nlohmann::json &j, UmtLocationArea5G_allOf &o) {
  if (j.find("umtTime") != j.end()) {
    j.at("umtTime").get_to(o.m_UmtTime);
    o.m_UmtTimeIsSet = true;
  }
  if (j.find("umtDuration") != j.end()) {
    j.at("umtDuration").get_to(o.m_UmtDuration);
    o.m_UmtDurationIsSet = true;
  }
}

std::string UmtLocationArea5G_allOf::getUmtTime() const { return m_UmtTime; }
void UmtLocationArea5G_allOf::setUmtTime(std::string const &value) {
  m_UmtTime = value;
  m_UmtTimeIsSet = true;
}
bool UmtLocationArea5G_allOf::umtTimeIsSet() const { return m_UmtTimeIsSet; }
void UmtLocationArea5G_allOf::unsetUmtTime() { m_UmtTimeIsSet = false; }
int32_t UmtLocationArea5G_allOf::getUmtDuration() const {
  return m_UmtDuration;
}
void UmtLocationArea5G_allOf::setUmtDuration(int32_t const value) {
  m_UmtDuration = value;
  m_UmtDurationIsSet = true;
}
bool UmtLocationArea5G_allOf::umtDurationIsSet() const {
  return m_UmtDurationIsSet;
}
void UmtLocationArea5G_allOf::unsetUmtDuration() { m_UmtDurationIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org