/**
 * Nnef_SMContext
 * Nnef SMContext Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SmContextReleaseData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

SmContextReleaseData::SmContextReleaseData() {}

SmContextReleaseData::~SmContextReleaseData() {}

void SmContextReleaseData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const SmContextReleaseData &o) {
  j = nlohmann::json();
  j["cause"] = o.m_Cause;
}

void from_json(const nlohmann::json &j, SmContextReleaseData &o) {
  j.at("cause").get_to(o.m_Cause);
}

ReleaseCause SmContextReleaseData::getCause() const { return m_Cause; }
void SmContextReleaseData::setCause(ReleaseCause const &value) {
  m_Cause = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
