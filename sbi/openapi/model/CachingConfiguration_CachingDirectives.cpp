/**
 * M1_ContentHostingProvisioning
 * 5GMS AF M1 Content Hosting Provisioning API © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "CachingConfiguration_CachingDirectives.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

CachingConfiguration_CachingDirectives::
    CachingConfiguration_CachingDirectives() {
  m_StatusCodeFiltersIsSet = false;
  m_NoCache = false;
  m_MaxAge = 0;
  m_MaxAgeIsSet = false;
}

CachingConfiguration_CachingDirectives::
    ~CachingConfiguration_CachingDirectives() {}

void CachingConfiguration_CachingDirectives::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j,
             const CachingConfiguration_CachingDirectives &o) {
  j = nlohmann::json();
  if (o.statusCodeFiltersIsSet() || !o.m_StatusCodeFilters.empty())
    j["statusCodeFilters"] = o.m_StatusCodeFilters;
  j["noCache"] = o.m_NoCache;
  if (o.maxAgeIsSet())
    j["maxAge"] = o.m_MaxAge;
}

void from_json(const nlohmann::json &j,
               CachingConfiguration_CachingDirectives &o) {
  if (j.find("statusCodeFilters") != j.end()) {
    j.at("statusCodeFilters").get_to(o.m_StatusCodeFilters);
    o.m_StatusCodeFiltersIsSet = true;
  }
  j.at("noCache").get_to(o.m_NoCache);
  if (j.find("maxAge") != j.end()) {
    j.at("maxAge").get_to(o.m_MaxAge);
    o.m_MaxAgeIsSet = true;
  }
}

std::vector<int32_t> &
CachingConfiguration_CachingDirectives::getStatusCodeFilters() {
  return m_StatusCodeFilters;
}
void CachingConfiguration_CachingDirectives::setStatusCodeFilters(
    std::vector<int32_t> const value) {
  m_StatusCodeFilters = value;
  m_StatusCodeFiltersIsSet = true;
}
bool CachingConfiguration_CachingDirectives::statusCodeFiltersIsSet() const {
  return m_StatusCodeFiltersIsSet;
}
void CachingConfiguration_CachingDirectives::unsetStatusCodeFilters() {
  m_StatusCodeFiltersIsSet = false;
}
bool CachingConfiguration_CachingDirectives::isNoCache() const {
  return m_NoCache;
}
void CachingConfiguration_CachingDirectives::setNoCache(bool const value) {
  m_NoCache = value;
}
int32_t CachingConfiguration_CachingDirectives::getMaxAge() const {
  return m_MaxAge;
}
void CachingConfiguration_CachingDirectives::setMaxAge(int32_t const value) {
  m_MaxAge = value;
  m_MaxAgeIsSet = true;
}
bool CachingConfiguration_CachingDirectives::maxAgeIsSet() const {
  return m_MaxAgeIsSet;
}
void CachingConfiguration_CachingDirectives::unsetMaxAge() {
  m_MaxAgeIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
